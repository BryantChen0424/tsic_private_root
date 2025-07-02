
#include "Vmath.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <bitset>
#include <iomanip>

std::string format_bin_dec(unsigned int value, int bits) {
    std::ostringstream oss;
    oss << std::bitset<8>(value).to_string().substr(8 - bits)  // trim to bit width
        << "(" << std::setw(2) << static_cast<unsigned int>(value) << ")";
    return oss.str();
}

int main(int argc, char **argv) {
    if (argc != 5) {
        std::cout << "usage: obj <inputs> <waveform> <log> <reult>." << std::endl;
    }
    Verilated::commandArgs(argc, argv);
    Vmath* dut = new Vmath;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ifstream infile(argv[1]);
    std::ofstream log(argv[3]);

    log << "##SEC_STUDENT_CAN_SEE" << std::endl;
    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;

    log << "    a       | mul2       div2      mod2      | mul4       div4      mod4      | PASS?" << std::endl;
    std::cout << "    a       | mul2       div2      mod2      | mul4       div4      mod4      | PASS?" << std::endl;

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
        unsigned int div2_g = a_u / 2;
        unsigned int mod2_g = a_u % 2;
        unsigned int mul4_g = a_u * 4;
        unsigned int div4_g = a_u / 4;
        unsigned int mod4_g = a_u % 4;

        bool pass = (dut->mul2 == mul2_g) &&
                    (dut->div2 == div2_g) &&
                    (dut->mod2 == mod2_g) &&
                    (dut->mul4 == mul4_g) &&
                    (dut->div4 == div4_g) &&
                    (dut->mod4 == mod4_g);

        const char* pass_str = pass ? "-" : "fail";
        if (!pass) has_fail = true;

        std::ostringstream oss;
        oss << " "
            << std::setw(9) << format_bin_dec(a, 4) << " | "
            << std::setw(12) << format_bin_dec(dut->mul2, 8) << " "
            << std::setw(9) << format_bin_dec(dut->div2, 4) << " "
            << std::setw(9) << format_bin_dec(dut->mod2, 4) << " | "
            << std::setw(12) << format_bin_dec(dut->mul4, 8) << " "
            << std::setw(9) << format_bin_dec(dut->div4, 4) << " "
            << std::setw(9) << format_bin_dec(dut->mod4, 4) << " | " << pass_str;

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
