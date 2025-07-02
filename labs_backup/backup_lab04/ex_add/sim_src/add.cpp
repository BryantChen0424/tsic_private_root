
#include "Vadd.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

int main(int argc, char **argv) {
    if (argc != 5) {
        std::cout << "usage: obj <inputs> <waveform> <log> <reult>." << std::endl;
    }
    if (argc != 2) {
        std::cout << "usage: obj <inputs>." << std::endl;
    }
    
    Verilated::commandArgs(argc, argv);
    Vadd* dut = new Vadd;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ifstream infile(argv[1]);
    std::ofstream log(argv[3]);
    log << "##SEC_STUDENT_CAN_SEE" << std::endl;
    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;

    log << " a  b  c | sum_ab sum_a5 sum_b5 sum_c5 | sum_ab* sum_a5* sum_b5* sum_c5* | PASS?" << std::endl;
    std::cout << " a  b  c | sum_ab sum_a5 sum_b5 sum_c5 | sum_ab* sum_a5* sum_b5* sum_c5* | PASS?" << std::endl;

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

        int sum_ab_golden  = a + b;
        int sum_a5_golden  = a + 5;
        int sum_b5_golden  = b + 5;
        int sum_c5_golden  = c + 5;

        bool pass = (dut->sum_ab == sum_ab_golden) &&
                    (dut->sum_a5 == sum_a5_golden) &&
                    (dut->sum_b5 == sum_b5_golden) &&
                    (dut->sum_c5 == sum_c5_golden);

        const char* pass_str = pass ? "-" : "fail";
        if (!pass) has_fail = true;

        std::ostringstream oss;
        oss << " "
            << std::setw(2) << a << " "
            << std::setw(2) << b << " "
            << std::setw(2) << c << " |   "
            << std::setw(5) << static_cast<unsigned int>(dut->sum_ab) << " "
            << std::setw(6) << static_cast<unsigned int>(dut->sum_a5) << " "
            << std::setw(6) << static_cast<unsigned int>(dut->sum_b5) << " "
            << std::setw(6) << static_cast<unsigned int>(dut->sum_c5) << "  |    "
            << std::setw(7) << sum_ab_golden << " "
            << std::setw(8) << sum_a5_golden << " "
            << std::setw(8) << sum_b5_golden << " "
            << std::setw(8) << sum_c5_golden << " | " << pass_str;

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
