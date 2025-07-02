
#include "Vbetween.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <bitset>
#include <iomanip>

std::string format_bin_unsigned_signed(int value, int bits) {
    std::bitset<8> b(value & ((1 << bits) - 1));
    std::ostringstream oss;
    oss << b.to_string()
        << "(u" << std::setw(3) << static_cast<unsigned int>(value) << ","
        << "s" << std::setw(4) << static_cast<int>(value) << ")";
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
    Vbetween* dut = new Vbetween;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ifstream infile(argv[1]);
    std::ofstream log(argv[3]);

    log << "##SEC_STUDENT_CAN_SEE" << std::endl;
    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;

    log << "     a                   |   bt   ubt |  bt*  ubt* | PASS?" << std::endl;
    std::cout << "     a                   |   bt   ubt |  bt*  ubt* | PASS?" << std::endl;

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

        int signed_a = static_cast<int8_t>(a);
        unsigned int unsigned_a = static_cast<unsigned int>(a);
        int bt_g = (signed_a >= -25 && signed_a <= 25) ? 1 : 0;
        int ubt_g = (unsigned_a < 25 || unsigned_a > 125) ? 1 : 0;
        bool pass = (dut->bt == bt_g) && (dut->ubt == ubt_g);
        const char* pass_str = pass ? "-" : "fail";
        if (!pass) has_fail = true;

        std::ostringstream oss;
        oss << " " << std::setw(22) << format_bin_unsigned_signed(a, 8) << " | "
            << std::setw(5) << format_bit(dut->bt) << " "
            << std::setw(5) << format_bit(dut->ubt) << " | "
            << std::setw(5) << format_bit(bt_g) << " "
            << std::setw(6) << format_bit(ubt_g) << " | " << pass_str;

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
