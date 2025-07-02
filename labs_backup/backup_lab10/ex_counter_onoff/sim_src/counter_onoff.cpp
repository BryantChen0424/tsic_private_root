#include "Vcounter_onoff.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <bitset>
#include <iomanip>
#include <thread>
#include <chrono>

#define PERIOD 10

template<int W>
std::string bin(unsigned val) {
    return std::bitset<W>(val).to_string();
}

int main(int argc, char** argv) {
    if (argc != 5) {
        std::cout << "usage: obj <inputs> <waveform> <log> <reult>." << std::endl;
    }
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vcounter_onoff* dut = new Vcounter_onoff;
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
        std::vector<int> switch_times;
        int val;
        while (infile.peek() == ' ' || infile.peek() == '\n') infile.get();
        std::string line;
        std::getline(infile, line);
        std::istringstream iss(line);
        while (iss >> val) switch_times.push_back(val);

        // Reset
        dut->clk = 0; dut->rst_n = 0; dut->eval(); tfp->dump(t += PERIOD / 2);
        dut->clk = 0; dut->rst_n = 0; dut->eval(); tfp->dump(t += PERIOD / 2);
        dut->clk = 0; dut->rst_n = 0; dut->eval(); tfp->dump(t += PERIOD / 2);
        dut->clk = 1; dut->rst_n = 0; dut->eval(); tfp->dump(t += PERIOD / 2);
        dut->clk = 0; dut->rst_n = 0; dut->eval(); tfp->dump(t += PERIOD / 2);
        dut->clk = 1; dut->rst_n = 0; dut->eval(); tfp->dump(t += PERIOD / 2);
        dut->clk = 0; dut->rst_n = 1; dut->eval(); tfp->dump(t += PERIOD / 2);
        dut->clk = 1; dut->rst_n = 1; dut->eval(); tfp->dump(t += PERIOD / 2);

        // Simulate
        bool on = false;
        int golden_cnt = 0;
        int idx = 0;
        int local_t0 = t;
        int time_limit = t + (switch_times.empty() ? PERIOD * 60 : local_t0 + switch_times.back() * PERIOD + PERIOD);
        bool local_fail = false;
        std::ostringstream fail_reason;

        while (t < time_limit) {
            // Falling edge assign input
            dut->clk = 0;
            dut->sw = (idx < switch_times.size() && t == switch_times[idx] * PERIOD + local_t0) ? 1 : 0;
            dut->eval();
            tfp->dump(t += PERIOD / 2);
            
            // Verification
            uint8_t dut_cnt = dut->cnt;
            bool pass_the_cycle = (dut_cnt == golden_cnt);

            if (!pass_the_cycle) {
                local_fail = true;
                fail_reason << "[cycle " << (t / PERIOD) << "] cnt=" << (int)dut_cnt
                            << ", expected=" << golden_cnt;
            }

            // Rising edge assign input
            dut->clk = 1;
            dut->eval();
            tfp->dump(t += PERIOD / 2);
            
            // Generate golden
            if (on)
                golden_cnt = (golden_cnt + 1) % 64;
            if (dut->sw == 1) {
                on = !on;
                ++idx;
            }
        }

        dut->clk = 0; dut->rst_n = 0; dut->eval(); tfp->dump(t += PERIOD / 2);

        if (local_fail) {
            global_fail = true;
            std::cout << "Test case " << case_id + 1 << ": fail" << std::endl;
            std::cout << fail_reason.str() << std::endl;
            log << "Test case " << case_id + 1 << ": fail" << std::endl;
            log << fail_reason.str() << std::endl;
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