
#include "Vmul.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <bitset>
#include <iomanip>

std::string format_bin_dec(unsigned int value, int bits) {
    std::ostringstream oss;
    oss << std::bitset<8>(value).to_string().substr(8 - bits)
        << "(" << std::setw(2) << static_cast<unsigned int>(value) << ")";
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
    Vmul* dut = new Vmul;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ifstream infile(argv[1]);
    std::ofstream log(argv[3]);

    log << "##SEC_STUDENT_CAN_SEE" << std::endl;
    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;

    log << " a         | mul2         mul4         mul8         be4    | PASS?" << std::endl;
    std::cout << " a         | mul2         mul4         mul8         be4    | PASS?" << std::endl;

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

        unsigned int a_u = static_cast<unsigned int>(a);
        unsigned int mul2_g = a_u * 2;
        unsigned int mul4_g = a_u * 4;
        unsigned int mul8_g = a_u * 8;
        unsigned int be4_g = (a_u % 4 == 0) ? 1 : 0;

        bool pass = (dut->mul2 == mul2_g) &&
                    (dut->mul4 == mul4_g) &&
                    (dut->mul8 == mul8_g) &&
                    (dut->be4  == be4_g);

        const char* pass_str = pass ? "-" : "fail";
        if (!pass) has_fail = true;

        std::ostringstream oss;
        oss << " "
            << std::setw(9)  << format_bin_dec(a, 4) << " | "
            << std::setw(12) << format_bin_dec(dut->mul2, 8) << " "
            << std::setw(12) << format_bin_dec(dut->mul4, 8) << " "
            << std::setw(12) << format_bin_dec(dut->mul8, 8) << " "
            << std::setw(7)  << format_bit(dut->be4) << " | " << pass_str;

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
