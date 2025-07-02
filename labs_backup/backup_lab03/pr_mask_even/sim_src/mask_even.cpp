
#include "Vmask_even.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <bitset>
#include <iomanip>

int count_ones(uint8_t x) {
    int count = 0;
    for (int i = 0; i < 8; ++i)
        count += (x >> i) & 1;
    return count;
}

int main(int argc, char **argv) {
    if (argc != 5) {
        std::cout << "usage: obj <inputs> <waveform> <log> <reult>." << std::endl;
    }
    Verilated::commandArgs(argc, argv);
    Vmask_even* dut = new Vmask_even;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ifstream infile(argv[1]);
    std::ofstream log(argv[3]);
    log << "##SEC_STUDENT_CAN_SEE" << std::endl;
    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;

    log << " a        | mask     even1 | mask*    even1* | PASS?" << std::endl;
    std::cout << " a        | mask     even1 | mask*    even1* | PASS?" << std::endl;

    int count = 0;
    bool has_fail = false;
    std::string line;
    while (std::getline(infile, line)) {
        if (line.empty()) continue;
        std::istringstream iss(line);
        int a;
        if (!(iss >> a)) continue;

        dut->a = a;
        dut->eval();
        tfp->dump(count++ * 10);

        uint8_t mask_golden = a & 0x0F;
        uint8_t even1_golden = (count_ones(a) % 2 == 0) ? 1 : 0;

        bool pass = (dut->mask == mask_golden) && (dut->even1 == even1_golden);
        const char* pass_str = pass ? "-" : "fail";
        if (!pass) has_fail = true;

        std::ostringstream oss;
        oss << " "
            << std::bitset<8>(a) << " | "
            << std::bitset<8>(dut->mask) << "   "
            << std::bitset<1>(dut->even1) << "    | "
            << std::bitset<8>(mask_golden) << "   "
            << std::bitset<1>(even1_golden) << "     | "
            << pass_str;

        std::string output_line = oss.str();
        log << output_line << std::endl;
        std::cout << output_line << std::endl;
    }

    tfp->dump(count * 10 + 10);
    tfp->dump(count * 10 + 20);
    tfp->dump(count * 10 + 30);
    tfp->dump(count * 10 + 40);

    log << "##END_STUDENT_CAN_SEE" << std::endl;
    std::cout << "##END_STUDENT_CAN_SEE" << std::endl;

    log.close();
    tfp->close();

    std::ofstream result(argv[4]);
    result << (has_fail ? "fail" : "pass") << std::endl;

    delete dut;
    delete tfp;
    return 0;
}
