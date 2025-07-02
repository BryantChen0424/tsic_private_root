
#include "Vops.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <bitset>
#include <iomanip>
#include <cstdint>

std::string format_bin_signed(int value, int bits) {
    std::bitset<8> b(value & ((1 << bits) - 1));
    std::ostringstream oss;
    oss << b.to_string()
        << "(s" << std::setw(4) << static_cast<int>(static_cast<int8_t>(value)) << ")";
    return oss.str();
}

std::string format_bit(unsigned int value) {
    return std::bitset<1>(value).to_string() + "(" + std::to_string(value) + ")";
}

int main(int argc, char **argv) {
    if (argc != 5) {
        std::cout << "usage: obj <inputs> <waveform> <log> <reult>." << std::endl;
    }
    Verilated::commandArgs(argc, argv);
    Vops* dut = new Vops;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ifstream infile(argv[1]);
    std::ofstream log(argv[3]);

    log << "##SEC_STUDENT_CAN_SEE" << std::endl;
    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;

    log << "         a              b           op |       o         |      o*         |   ovf  ovf* | PASS?" << std::endl;
    std::cout << "         a              b           op |       o         |      o*         |   ovf  ovf* | PASS?" << std::endl;

    int count = 0;
    bool has_fail = false;
    std::string line;
    while (std::getline(infile, line)) {
        if (line.empty()) continue;
        std::istringstream iss(line);
        int a, b, op;
        if (!(iss >> a >> b >> op)) continue;

        dut->a = a;
        dut->b = b;
        dut->op = op;
        dut->eval();
        tfp->dump(count++ * 10);

        int8_t sa = static_cast<int8_t>(a);
        int8_t sb = static_cast<int8_t>(b);
        int8_t result = 0;
        int ovf_g = 0;

        switch (op) {
            case 0:
                result = sa + sb;
                ovf_g = ((sa > 0 && sb > 0 && result < 0) || (sa < 0 && sb < 0 && result >= 0)) ? 1 : 0;
                break;
            case 1:
                result = sa - sb;
                ovf_g = ((sa > 0 && sb < 0 && result < 0) || (sa < 0 && sb > 0 && result >= 0)) ? 1 : 0;
                break;
            case 2:
                result = a & b;
                break;
            case 3:
                result = a | b;
                break;
        }

        bool pass = (dut->o == static_cast<uint8_t>(result)) && (dut->overflow == ovf_g);
        const char* pass_str = pass ? "-" : "fail";
        if (!pass) has_fail = true;

        std::ostringstream oss;
        oss << " " << std::setw(16) << format_bin_signed(a, 8)
            << " " << std::setw(12) << format_bin_signed(b, 8)
            << " " << format_bit(op) << " | "
            << std::setw(12) << format_bin_signed(dut->o, 8) << " | "
            << std::setw(12) << format_bin_signed(result, 8) << " | "
            << format_bit(dut->overflow) << "  " << format_bit(ovf_g) << "  | " << pass_str;

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
