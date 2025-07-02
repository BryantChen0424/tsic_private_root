
#include "Vbigger.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <bitset>
#include <iomanip>

std::string format_bin_dec_signed(int value, int bits) {
    std::bitset<4> b(value & ((1 << bits) - 1));
    std::ostringstream oss;
    oss << b.to_string() << "(" << std::setw(3) << value << ")";
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
    Vbigger* dut = new Vbigger;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ifstream infile(argv[1]);
    std::ofstream log(argv[3]);

    log << "##SEC_STUDENT_CAN_SEE" << std::endl;
    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;

    log << "        a        b        c       |     bgt   seq_bgt |  bgt*    seq_bgt* | PASS?" << std::endl;
    std::cout << "        a        b        c       |     bgt   seq_bgt |  bgt*    seq_bgt* | PASS?" << std::endl;

    int count = 0;
    bool has_fail = false;
    std::string line;

    while (std::getline(infile, line)) {
        if (line.empty()) continue;
        std::istringstream iss(line);
        int a, b, c;
        if (!(iss >> a >> b >> c)) continue;

        dut->a = a;
        dut->b = b;
        dut->c = c;
        dut->eval();
        tfp->dump(count++ * 10);

        int bgt_g = (a > b) ? 1 : 0;
        int seq_g = (a > b && b > c) ? 1 : 0;
        bool pass = (dut->bgt == bgt_g) && (dut->seq_bgt == seq_g);
        const char* pass_str = pass ? "-" : "fail";
        if (!pass) has_fail = true;

        std::ostringstream oss;
        oss << " "
            << std::setw(10) << format_bin_dec_signed(a, 4) << " "
            << std::setw(10) << format_bin_dec_signed(b, 4) << " "
            << std::setw(10) << format_bin_dec_signed(c, 4) << " | "
            << std::setw(7)  << format_bit(dut->bgt) << " "
            << std::setw(9)  << format_bit(dut->seq_bgt) << " | "
            << std::setw(6)  << format_bit(bgt_g) << " "
            << std::setw(10) << format_bit(seq_g) << " | " << pass_str;

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
