#include "Vfifo.h"
#include "Vfifo__Syms.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <queue>
#include <bitset>
#include <iomanip>
#include <thread>
#include <chrono>

#define PERIOD 10

int main(int argc, char** argv) {
    if (argc != 5) {
        std::cout << "usage: obj <input> <waveform> <log> <result>" << std::endl;
        return -1;
    }

    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vfifo* dut = new Vfifo;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ifstream infile(argv[1]);
    std::ofstream log(argv[3]);
    std::ofstream result(argv[4]);

    log << "##SEC_STUDENT_CAN_SEE" << std::endl;
    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;

    int num_cases;
    infile >> num_cases;

    int t = 0;
    bool global_fail = false;

    for (int case_id = 0; case_id < num_cases; ++case_id) {
        int w_ops, r_ops;
        infile >> w_ops;
        std::vector<int> w_times(w_ops), w_datas(w_ops);
        for (int i = 0; i < w_ops; ++i) infile >> w_times[i];
        for (int i = 0; i < w_ops; ++i) infile >> w_datas[i];

        infile >> r_ops;
        std::vector<int> r_times(r_ops), r_datas(r_ops);
        for (int i = 0; i < r_ops; ++i) infile >> r_times[i];
        for (int i = 0; i < r_ops; ++i) infile >> r_datas[i];

        // Reset
        dut->clk = 0; dut->rst_n = 0; dut->eval(); tfp->dump(t += PERIOD / 2);
        dut->clk = 1; dut->eval(); tfp->dump(t += PERIOD / 2);
        dut->clk = 0; dut->rst_n = 1; dut->eval(); tfp->dump(t += PERIOD / 2);
        dut->clk = 1; dut->eval(); tfp->dump(t += PERIOD / 2);

        int write_idx = 0, read_idx = 0;
        bool w_valid = false, r_valid = false;
        int w_data = 0, expect_data = 0;
        bool local_fail = false;
        std::ostringstream fail_reason;
        std::queue<int> golden_fifo;
        std::queue<std::pair<int, int>> pending_read_check; // {check_time, expected_data}

        int time_limit = t + PERIOD * 40;
        int local_time_base = t;

        while (t < time_limit && (write_idx < w_ops || read_idx < r_ops || w_valid || r_valid || !pending_read_check.empty())) {
            // 啟動新的 write
            if (!w_valid && write_idx < w_ops && t >= w_times[write_idx] * PERIOD + local_time_base) {
                w_valid = true;
                w_data = w_datas[write_idx];
            }

            // 啟動新的 read
            if (!r_valid && read_idx < r_ops && t >= r_times[read_idx] * PERIOD + local_time_base) {
                r_valid = true;
                expect_data = r_datas[read_idx];
            }

            // Falling edge
            dut->clk = 0;
            dut->w_valid = w_valid;
            dut->w_data = w_data;
            dut->r_valid = r_valid;
            dut->eval();
            tfp->dump(t += PERIOD / 2);

            // Rising edge
            dut->clk = 1;
            dut->eval();
            tfp->dump(t += PERIOD / 2);

            // 檢查是否完成 write
            if (w_valid && dut->w_ready) {
                golden_fifo.push(w_data);
                w_valid = false;
                write_idx++;
            }

            if (w_valid && !dut->w_ready && golden_fifo.size() < 7) {
                local_fail = true;
                fail_reason << "[cycle " << (t / PERIOD)
                            << "] w_ready unexpectedly low: FIFO only has "
                            << golden_fifo.size() << " entries" << std::endl;
            }

            // 檢查是否完成 read，延遲比對 r_data
            if (r_valid && dut->r_ready) {
                if (golden_fifo.empty()) {
                    local_fail = true;
                    fail_reason << "[cycle " << (t / PERIOD) << "] read from empty FIFO" << std::endl;
                } else {
                    int expected = golden_fifo.front(); golden_fifo.pop();
                    pending_read_check.push({t + PERIOD * 1.5, expected});
                }
                r_valid = false;
                read_idx++;
            }

            // 延遲兩個半週期後比對 r_data（下一次 rising edge 結果才是 fire 對應的輸出）
            while (!pending_read_check.empty() && pending_read_check.front().first == t) {
                int expected = pending_read_check.front().second;
                int actual = dut->r_data;
                if (expected != actual) {
                    local_fail = true;
                    fail_reason << "[cycle " << (t / PERIOD) << "] r_data mismatch: expected=" << expected
                                << ", got=" << actual << std::endl;
                }
                pending_read_check.pop();
            }
        }

        if (local_fail) {
            global_fail = true;
            std::cout << "Test case " << case_id + 1 << ": fail" << std::endl;
            std::cout << fail_reason.str();
            log << "Test case " << case_id + 1 << ": fail" << std::endl;
            log << fail_reason.str();
        } else {
            std::cout << "Test case " << case_id + 1 << ": PASS" << std::endl;
            log << "Test case " << case_id + 1 << ": PASS" << std::endl;
        }

        tfp->dump(t += PERIOD);
        tfp->dump(t += PERIOD);
        tfp->dump(t += PERIOD);
        tfp->dump(t += PERIOD);
    }

    log << "##END_STUDENT_CAN_SEE" << std::endl;
    std::cout << "##END_STUDENT_CAN_SEE" << std::endl;
    result << (global_fail ? "fail" : "pass") << std::endl;
    if (!global_fail) std::cout << "congratulation" << std::endl;

    tfp->close();
    log.close();
    result.close();
    delete dut;
    delete tfp;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    return 0;
}
