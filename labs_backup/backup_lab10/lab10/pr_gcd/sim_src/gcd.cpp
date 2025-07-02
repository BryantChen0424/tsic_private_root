#include "Vgcd.h"
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
#include <utility>

#define PERIOD 10

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main(int argc, char** argv) {
    if (argc != 5) {
        std::cout << "usage: obj <inputs> <waveform> <log> <result>." << std::endl;
        return -1;
    }

    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Vgcd* dut = new Vgcd;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ifstream infile(argv[1]);
    std::ofstream log(argv[3]);
    std::ofstream result(argv[4]);

    log << "##SEC_STUDENT_CAN_SEE" << std::endl;
    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;

    int t = 0;
    bool global_fail = false;

    std::vector<std::pair<int, int>> cases;
    int total_cases;
    infile >> total_cases;
    for (int i = 0; i < total_cases; ++i) {
        int a, b;
        infile >> a >> b;
        cases.emplace_back(a, b);
    }

    // Reset
    dut->clk = 0; dut->rst_n = 0; dut->eval(); tfp->dump(t += PERIOD / 2);
    for (int i = 0; i < 4; ++i) {
        dut->clk = !dut->clk; dut->eval(); tfp->dump(t += PERIOD / 2);
    }
    dut->rst_n = 1;
    dut->clk = 0; dut->eval(); tfp->dump(t += PERIOD / 2);
    dut->clk = 1; dut->eval(); tfp->dump(t += PERIOD / 2);

    for (int i = 0; i < total_cases; ++i) {
        int a = cases[i].first;
        int b = cases[i].second;
        int golden = gcd(a, b);
        std::ostringstream fail_reason;

        int input_time_limit = t + PERIOD * 60;
        bool ready_for_input = false;
        while (t < input_time_limit && !ready_for_input) {
            if (dut->i_ready) ready_for_input = true;
            dut->clk = 0; dut->eval(); tfp->dump(t += PERIOD / 2);
            dut->clk = 1; dut->eval(); tfp->dump(t += PERIOD / 2);
        }

        if (!ready_for_input) {
            global_fail = true;
            log << "Test case " << i + 1 << ": input timeout for (" << a << ", " << b << ")" << std::endl;
            std::cout << "Test case " << i + 1 << ": input timeout" << std::endl;
            continue;
        }

        // Apply inputs
        dut->i_a = a;
        dut->i_b = b;
        dut->i_valid = 1;
        dut->o_ready = 1;

        // One cycle for valid
        dut->clk = 0; dut->eval(); tfp->dump(t += PERIOD / 2);
        dut->clk = 1; dut->eval(); tfp->dump(t += PERIOD / 2);
        dut->i_valid = 0;

        int time_limit = t + PERIOD * 260;
        bool has_output = false;
        int out = -1;

        while (t < time_limit && !has_output) {
            dut->clk = 0; dut->eval(); tfp->dump(t += PERIOD / 2);
            dut->clk = 1; dut->eval(); tfp->dump(t += PERIOD / 2);

            if (dut->o_valid) {
                out = dut->o_ans;
                has_output = true;
                if (out != golden) break;
            }
        }

        if (!has_output) {
            global_fail = true;
            log << "Test case " << i + 1 << ": timeout for input (" << a << ", " << b << ")" << std::endl;
            std::cout << "Test case " << i + 1 << ": timeout" << std::endl;
        } else if (out != golden) {
            global_fail = true;
            log << "Test case " << i + 1 << ": fail (" << a << ", " << b << ") => got " << out << ", expected " << golden << std::endl;
            std::cout << "Test case " << i + 1 << ": fail" << std::endl;
        } else {
            log << "Test case " << i + 1 << ": PASS" << std::endl;
            std::cout << "Test case " << i + 1 << ": PASS" << std::endl;
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
    delete tfp;
    delete dut;
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    return 0;
}
