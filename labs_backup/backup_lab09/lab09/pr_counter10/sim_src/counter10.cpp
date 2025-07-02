
#include "Vcounter10.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <bitset>
#include <sstream>
#include <thread>
#include <chrono>
#include <iomanip>

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

    Vcounter10* dut = new Vcounter10;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ofstream log(argv[3]);
    std::ofstream result(argv[4]);
    bool has_fail = false;

    log << "##SEC_STUDENT_CAN_SEE" << std::endl;
    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;

    log << " clk rst_n |      cnt  |      cnt* | PASS? | edge" << std::endl;
    log << "-----------+-----------+-----------+-------+------" << std::endl;
    std::cout << " clk rst_n |      cnt  |      cnt* | PASS? | edge" << std::endl;
    std::cout << "-----------+-----------+-----------+-------+------" << std::endl;

    int t = 0;

    // Phase 1: unknown (no assignment to dut->clk/rst_n)
    dut->clk = 0;
    dut->rst_n = 1;
    tfp->dump(t += 0);

    // Phase 2: clk = 0, rst_n = 1
    dut->clk = 0;
    dut->rst_n = 1;
    dut->eval();
    tfp->dump(t += 5);

    // Phase 3: clk starts toggling, rst_n = 0
    dut->rst_n = 0;
    dut->clk = 1; dut->eval(); tfp->dump(t += 5);
    dut->clk = 0; dut->eval(); tfp->dump(t += 5);
    dut->clk = 1; dut->eval(); tfp->dump(t += 5);
    dut->clk = 0; dut->rst_n = 1; dut->eval();  tfp->dump(t += 5);

    // Phase 4: rst_n back to 1 (between clk edges)

    // Phase 5: normal operation
    for (int i = 0; i < 32; ++i) {
        {
            uint8_t golden = (i) % 10;
            uint8_t actual = dut->cnt;
            bool pass = (actual == golden);
            if (!pass) has_fail = true;

            std::ostringstream oss;
            oss << "   "    << bin<1>(dut->clk) << "   " << bin<1>(dut->rst_n)
                << "   |  " << bin<4>(actual) << "(" << std::setw(2) << static_cast<unsigned>(actual) << ")"
                << " |  "   << bin<4>(golden) << "(" << std::setw(2) << static_cast<unsigned>(golden) << ")"
                << " | "    << (pass ? "   -" : "fail") << "  | ↓";
            std::string outline = oss.str();
            log << outline << std::endl;
            std::cout << outline << std::endl;
        }
        // Rising edge
        dut->clk = 1;
        dut->eval();
        tfp->dump(t += 5);
        {
            std::ostringstream oss;
            oss << "   " << bin<1>(dut->clk) << "   " << bin<1>(dut->rst_n)
                << "   |  " << bin<4>(dut->cnt) << "     |      ---- |       | ↑";
            std::string outline = oss.str();
            log << outline << std::endl;
            std::cout << outline << std::endl;
        }

        // Falling edge
        dut->clk = 0;
        dut->eval();
        tfp->dump(t += 5);
    }

    // dump trailing timestamp
    tfp->dump(t += 10);
    tfp->dump(t += 10);
    tfp->dump(t += 10);
    tfp->dump(t += 10);

    log << "##END_STUDENT_CAN_SEE" << std::endl;
    std::cout << "##END_STUDENT_CAN_SEE" << std::endl;

    if (has_fail) {
        result << "fail" << std::endl;
        std::cout << "fail" << std::endl;
    } else {
        result << "pass" << std::endl;
        std::cout << "congratulation" << std::endl;
    }

    tfp->close();
    log.close();
    result.close();
    delete tfp;
    delete dut;

    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    return 0;
}
