#include "Vmod.h"
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
    Vmod* dut = new Vmod;
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

    std::vector<std::pair<int, int> > cases;
    int a, b;
    while (infile >> a >> b) {
        cases.push_back(std::make_pair(a, b));
    }

    // Reset
    dut->clk = 0; dut->rst_n = 0; dut->eval(); tfp->dump(t += PERIOD / 2);
    dut->clk = 0; dut->rst_n = 0; dut->eval(); tfp->dump(t += PERIOD / 2);
    dut->clk = 0; dut->rst_n = 0; dut->eval(); tfp->dump(t += PERIOD / 2);
    dut->clk = 1; dut->rst_n = 0; dut->eval(); tfp->dump(t += PERIOD / 2);
    dut->clk = 0; dut->rst_n = 0; dut->eval(); tfp->dump(t += PERIOD / 2);
    dut->clk = 1; dut->rst_n = 0; dut->eval(); tfp->dump(t += PERIOD / 2);
    dut->clk = 0; dut->rst_n = 1; dut->eval(); tfp->dump(t += PERIOD / 2);
    dut->clk = 1; dut->rst_n = 1; dut->eval(); tfp->dump(t += PERIOD / 2);

    for (int case_id = 0; case_id < num_cases; ++case_id) {
        int a, b, golden_remainder;
        a = cases[case_id].first;
        b = cases[case_id].second;
        golden_remainder = a % b;
        int local_t0 = t;
        int time_limit = t + PERIOD * 270;
        std::ostringstream fail_reason;

        {
            dut->dividend = a;
            dut->divisor = b;
            dut->valid = 1;
            dut->clk = 0; dut->rst_n = 1; dut->eval(); tfp->dump(t += PERIOD / 2);
        }
        {
            dut->clk = 1; dut->rst_n = 1; dut->eval(); tfp->dump(t += PERIOD / 2);
        }

        int leave_case_count_down = 10;
        bool has_ready = false;

        while (t < time_limit && leave_case_count_down > 0) {
            // Falling edge assign input
            dut->dividend = 0;
            dut->divisor = 0;
            dut->valid = 0;
            dut->clk = 0;
            dut->eval();
            tfp->dump(t += PERIOD / 2);
            
            // Verification
            bool dut_ready = dut->ready;
            uint8_t dut_remainder = dut->remainder;
            
            bool pass_the_cycle = true;
            if (dut_ready && has_ready) {
                pass_the_cycle = false;
            }
            else if (dut_ready && !has_ready) {
                pass_the_cycle = (dut_remainder == golden_remainder);
            }
            else {
                pass_the_cycle = (dut_remainder == 0);
            }

            if (!pass_the_cycle) {
                if (dut_ready && has_ready)
                    fail_reason << "[cycle " << (t / PERIOD) << "], ready=1, remainder=" << (int)dut_remainder << ", expected: " << golden_remainder << std::endl;
                else if (dut_ready && !has_ready)
                    fail_reason << "[cycle " << (t / PERIOD) << "], assert too many ready" << golden_remainder << std::endl;
                else
                    fail_reason << "[cycle " << (t / PERIOD) << "], ready=0, remainder=" << (int)dut_remainder << ", expected: " << 0 << std::endl;
            }

            if (dut_ready) has_ready = 1;

            // Rising edge assign input
            dut->clk = 1;
            dut->eval();
            tfp->dump(t += PERIOD / 2);
            
            // Generate golden
            if (has_ready) {
                leave_case_count_down--;
            }

            if (!pass_the_cycle) {
                break;
            }
        }

        dut->clk = 0; dut->rst_n = 0; dut->eval(); tfp->dump(t += PERIOD / 2);

        if (!has_ready) {
            fail_reason << "[cycle " << (t / PERIOD) << "], time out" << std::endl;
        }

        if (fail_reason.str().length()) {
            global_fail = true;
            std::cout << "Test case " << case_id + 1 << "[ " << std::setw(3) << a << " % " << std::setw(3) << b << " ]: fail" << std::endl;
            std::cout << fail_reason.str() << std::endl;
            log << "Test case " << case_id + 1 << "[ " << std::setw(3) << a << " % " << std::setw(3) << b << " ]: fail" << std::endl;
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
