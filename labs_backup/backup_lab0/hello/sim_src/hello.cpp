#include "Vhello.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int main(int argc, char **argv) {
    if (argc != 5) {
        std::cout << "usage: obj <inputs> <waveform> <log> <reult>." << std::endl;
    }
    Verilated::commandArgs(argc, argv);

    Vhello* dut = new Vhello;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ofstream logfile(argv[3]);
    std::ofstream resultfile(argv[4]);

    if (!logfile.is_open() || !resultfile.is_open()) {
        std::cerr << "Failed to open output files." << std::endl;
        return 1;
    }

    std::string message = "hello world";
    bool any_fail = false;

    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;
    logfile   << "##SEC_STUDENT_CAN_SEE\n";

    std::cout << "char | in(hex) out(hex) | out*\n";
    logfile  << "char | in(hex) out(hex) | out*\n";
    std::cout << "-------------------------------\n";
    logfile  << "-------------------------------\n";

    size_t timestamp = 0;

    for (char ch : message) {
        uint8_t input = static_cast<uint8_t>(ch);

        dut->in = input;
        dut->eval();
        uint8_t out = dut->out;

        bool pass = (out == input);
        std::string result = pass ? "-" : "fail";
        if (!pass) any_fail = true;

        std::ostringstream line;
        line << "  " << ch << "   |   0x" << std::hex << std::setw(2) << std::setfill('0') << (int)input
             << "     0x" << std::setw(2) << (int)out
             << "   |  0x" << std::setw(2) << (int)input
             << "   | " << result;

        std::cout  << line.str() << "\n";
        logfile   << line.str() << "\n";

        tfp->dump(timestamp++);
    }

    for (int i = 0; i < 4; ++i)
        tfp->dump(timestamp + i);

    std::cout << "##END_STUDENT_CAN_SEE\n";
    logfile   << "##END_STUDENT_CAN_SEE\n";

    std::string summary = any_fail ? "fail" : "congratulation";
    std::cout    << summary << std::endl;
    logfile      << summary << std::endl;
    resultfile   << (any_fail ? "fail" : "pass") << std::endl;

    tfp->close();
    logfile.close();
    resultfile.close();
    delete dut;
    delete tfp;

    return 0;
}
