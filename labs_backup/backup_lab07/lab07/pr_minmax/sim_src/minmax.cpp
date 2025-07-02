
#include "Vminmax.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <bitset>
#include <iomanip>

std::string format_bin_dec(unsigned int value, int bits) {
    std::bitset<8> b(value & ((1 << bits) - 1));
    std::ostringstream oss;
    oss << b.to_string().substr(8 - bits)
        << "(" << std::setw(3) << static_cast<unsigned int>(value) << ")";
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
    Vminmax* dut = new Vminmax;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ifstream infile(argv[1]);
    std::ofstream log(argv[3]);

    log << "##SEC_STUDENT_CAN_SEE" << std::endl;
    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;

    log << "     a         b      s |     o      |    o*     | PASS?" << std::endl;
    std::cout << "     a         b      s |     o      |    o*     | PASS?" << std::endl;

    int count = 0;
    bool has_fail = false;
    std::string line;
    while (std::getline(infile, line)) {
        if (line.empty()) continue;
        std::istringstream iss(line);
        int a, b, s;
        if (!(iss >> a >> b >> s)) continue;

        dut->a = a;
        dut->b = b;
        dut->s = s;
        dut->eval();
        tfp->dump(count++ * 10);

        int golden = (s == 0) ? std::max(a, b) : std::min(a, b);
        bool pass = (dut->o == golden);
        const char* pass_str = pass ? "-" : "fail";
        if (!pass) has_fail = true;

        std::ostringstream oss;
        oss << " " << std::setw(10) << format_bin_dec(a, 8)
            << " " << std::setw(8) << format_bin_dec(b, 8)
            << " " << format_bit(s) << " | "
            << std::setw(10) << format_bin_dec(dut->o, 8) << " | "
            << std::setw(10) << format_bin_dec(golden, 8) << " | " << pass_str;

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
