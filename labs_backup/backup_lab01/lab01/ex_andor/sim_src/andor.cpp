#include "Vandor.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

int main(int argc, char **argv) {
    if (argc != 5) {
        std::cout << "usage: obj <inputs> <waveform> <log> <reult>." << std::endl;
    }
    Verilated::commandArgs(argc, argv);

    Vandor* dut = new Vandor;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ofstream logfile(argv[3]);
    std::ofstream resultfile(argv[4]);
    if (!logfile.is_open() || !resultfile.is_open()) {
        std::cerr << "Failed to open log.txt or result.txt" << std::endl;
        return 1;
    }

    bool any_fail = false;

    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;
    logfile   << "##SEC_STUDENT_CAN_SEE\n";

    std::cout  << "  A  B |  o_and  o_or |  o_and*  o_or* | pass?\n";
    logfile   << "  A  B |  o_and  o_or |  o_and*  o_or* | pass?\n";
    std::cout  << "-----------------------------------------------\n";
    logfile   << "-----------------------------------------------\n";

    size_t timestamp = 0;

    for (int a = 0; a <= 1; ++a) {
        for (int b = 0; b <= 1; ++b) {
            dut->a = a;
            dut->b = b;
            dut->eval();

            int o_and_dut = dut->o_and;
            int o_or_dut  = dut->o_or;

            int o_and_golden = a & b;
            int o_or_golden  = a | b;

            bool pass = (o_and_dut == o_and_golden) && (o_or_dut == o_or_golden);
            std::string result_str = pass ? "-" : "fail";
            if (!pass) any_fail = true;

            std::ostringstream line;
            line << std::setw(3) << a
                 << std::setw(3) << b << " |"
                 << std::setw(7) << o_and_dut
                 << std::setw(7) << o_or_dut << " |"
                 << std::setw(9) << o_and_golden
                 << std::setw(8) << o_or_golden << " |"
                 << std::setw(6) << result_str;

            std::cout  << line.str() << "\n";
            logfile   << line.str() << "\n";

            tfp->dump(timestamp++);
        }
    }

    for (int i = 0; i < 4; ++i)
        tfp->dump(timestamp + i);

    std::cout << "##END_STUDENT_CAN_SEE\n";
    logfile   << "##END_STUDENT_CAN_SEE\n";

    std::string final_result = any_fail ? "fail" : "congratulation";
    std::cout     << final_result << std::endl;
    logfile       << final_result << std::endl;
    resultfile    << (any_fail ? "fail" : "pass") << std::endl;

    tfp->close();
    logfile.close();
    resultfile.close();
    delete dut;
    delete tfp;
    return 0;
}
