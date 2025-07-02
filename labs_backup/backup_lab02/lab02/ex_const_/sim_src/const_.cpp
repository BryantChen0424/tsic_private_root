
#include "Vconst_.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <bitset>
#include <iomanip>

int main(int argc, char **argv) {
    if (argc != 5) {
        std::cout << "usage: obj <inputs> <waveform> <log> <reult>." << std::endl;
    }
    Verilated::commandArgs(argc, argv);
    Vconst_* dut = new Vconst_;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ofstream log(argv[3]);
    log << "##SEC_STUDENT_CAN_SEE\n";
    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;

    log << " signal         |  bin       dec(u)   dec(s)   hex  |  PASS?\n";
    std::cout << " signal         |  bin       dec(u)   dec(s)   hex  |  PASS?\n";

    bool has_fail = false;

    auto check = [&](const std::string &name, int actual, int golden) {
        std::bitset<8> b(actual);
        std::ostringstream line;
        line << " " << std::left << std::setw(15) << name << "|  "
             << b.to_string() << "  "
             << std::setw(8) << (actual & 0xFF) << "  "
             << std::setw(8) << static_cast<int>((int8_t)(actual & 0xFF)) << "  "
             << std::hex << std::uppercase << std::setw(3) << (actual & 0xFF)
             << std::dec << "  |  "
             << ((actual == golden) ? "-" : "fail");

        log << line.str() << "\n";
        std::cout << line.str() << std::endl;

        if (actual != golden) has_fail = true;
    };

    dut->eval();
    tfp->dump(0);

    check("ot",             dut->ot,            1);
    check("of",             dut->of,            0);
    check("o1",             dut->o1,            0b00000101);
    check("o2",             dut->o2,            101);
    check("o16",            dut->o16,           0x5A);
    check("o_auto_expand",  dut->o_auto_expand, 5);
    check("o_auto_cut",     dut->o_auto_cut,    345 & 0xFF);
    check("o_neg",          dut->o_neg,         (uint8_t)-5);

    tfp->dump(10);
    tfp->dump(20);
    tfp->dump(30);
    tfp->dump(40);

    log << "##END_STUDENT_CAN_SEE\n";
    std::cout << "##END_STUDENT_CAN_SEE\n";

    log.close();
    tfp->close();

    std::ofstream result(argv[4]);
    result << (has_fail ? "fail" : "pass") << std::endl;

    delete dut;
    delete tfp;
    return 0;
}
