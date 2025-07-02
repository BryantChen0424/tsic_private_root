
#include "Vtry_const.h"
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
    Vtry_const* dut = new Vtry_const;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ofstream log(argv[3]);
    log << "##SEC_STUDENT_CAN_SEE\n";
    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;

    log << " signal         |  bin               dec(u)     dec(s)     hex   |\n";
    std::cout << " signal         |  bin               dec(u)     dec(s)     hex   |\n";

    dut->eval();
    tfp->dump(0);

    std::bitset<16> b(dut->o16);
    std::ostringstream line;
    line << " " << std::left << std::setw(15) << "o16" << "|  "
         << b.to_string() << "  "
         << std::setw(10) << (dut->o16 & 0xFFFF) << "  "
         << std::setw(10) << static_cast<int16_t>(dut->o16 & 0xFFFF) << "  "
         << std::hex << std::uppercase << std::setw(4) << (dut->o16 & 0xFFFF);

    log << line.str() << "\n";
    std::cout << line.str() << std::endl;

    tfp->dump(10);
    tfp->dump(20);
    tfp->dump(30);
    tfp->dump(40);

    log << "##END_STUDENT_CAN_SEE\n";
    std::cout << "##END_STUDENT_CAN_SEE\n";

    log.close();
    tfp->close();

    std::ofstream result(argv[4]);
    result << "pass" << std::endl;

    delete dut;
    delete tfp;
    return 0;
}
