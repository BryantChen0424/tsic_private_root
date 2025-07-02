
#include "Vvandor.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <bitset>
#include <iomanip>

int main(int argc, char **argv) {
    if (argc != 5) {
        std::cout << "usage: obj <inputs> <waveform> <log> <reult>." << std::endl;
    }
    Verilated::commandArgs(argc, argv);
    Vvandor* dut = new Vvandor;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ifstream infile(argv[1]);
    std::ofstream log(argv[3]);
    log << "##SEC_STUDENT_CAN_SEE\r\n";
    std::cout << "##SEC_STUDENT_CAN_SEE\r\n";

    log << " a     b     | and_ab or_ab and_a or_a | and_ab* or_ab* and_a* or_a* | PASS?\r\n";
    std::cout << " a     b     | and_ab or_ab and_a or_a | and_ab* or_ab* and_a* or_a* | PASS?\r\n";

    int count = 0;
    bool has_fail = false;
    std::string line;
    while (std::getline(infile, line)) {
        if (line.empty()) continue;
        std::istringstream iss(line);
        int a, b;
        if (!(iss >> a >> b)) continue;

        dut->a = a;
        dut->b = b;

        dut->eval();
        tfp->dump(count++ * 10);

        uint8_t and_ab_golden = a & b;
        uint8_t or_ab_golden  = a | b;
        uint8_t and_a_golden  = ((a & 1) & ((a >> 1) & 1) & ((a >> 2) & 1) & ((a >> 3) & 1));
        uint8_t or_a_golden   = ((a & 1) | ((a >> 1) & 1) | ((a >> 2) & 1) | ((a >> 3) & 1));

        bool pass = (dut->and_ab == and_ab_golden) &&
                    (dut->or_ab == or_ab_golden) &&
                    (dut->and_a == and_a_golden) &&
                    (dut->or_a == or_a_golden);

        char pass_str[6];
        sprintf(pass_str, "%s", pass ? "-" : "fail");
        if (!pass) has_fail = true;

        std::ostringstream oss;
        oss << " "
            << std::bitset<4>(a) << "  "
            << std::bitset<4>(b) << "  |   "
            << std::bitset<4>(dut->and_ab) << "   "
            << std::bitset<4>(dut->or_ab)  << "    "
            << std::bitset<1>(dut->and_a) << "     "
            << std::bitset<1>(dut->or_a)  << "   |    "
            << std::bitset<4>(and_ab_golden) << "     "
            << std::bitset<4>(or_ab_golden)  << "     "
            << std::bitset<1>(and_a_golden) << "      "
            << std::bitset<1>(or_a_golden)  << "   | " << pass_str;

        std::string output_line = oss.str();
        log << output_line << "\r\n";
        std::cout << output_line << "\r\n";
    }

    tfp->dump(count * 10 + 10);
    tfp->dump(count * 10 + 20);
    tfp->dump(count * 10 + 30);
    tfp->dump(count * 10 + 40);

    log << "##END_STUDENT_CAN_SEE\r\n";
    std::cout << "##END_STUDENT_CAN_SEE\r\n";

    log.close();
    tfp->close();

    std::ofstream result(argv[4]);
    result << (has_fail ? "fail" : "pass") << std::endl;

    delete dut;
    delete tfp;
    return 0;
}
