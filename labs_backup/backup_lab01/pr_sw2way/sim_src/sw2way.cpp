
#include "Vsw2way.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
    if (argc != 5) {
        std::cout << "usage: obj <inputs> <waveform> <log> <reult>." << std::endl;
    }
    Verilated::commandArgs(argc, argv);
    Vsw2way* dut = new Vsw2way;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ofstream log(argv[3]);
    log << "##SEC_STUDENT_CAN_SEE\n";
    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;

    log << " a b | na_and_nb  sw | na_and_nb*  sw* | PASS?\n";
    std::cout << " a b | na_and_nb  sw | na_and_nb*  sw* | PASS?\n";

    bool has_fail = false;

    for (int i = 0; i < 4; ++i) {
        dut->a = (i >> 1) & 1;
        dut->b = i & 1;

        dut->eval();
        tfp->dump(i * 10);

        int a = dut->a;
        int b = dut->b;
        int not_a = ~a & 1;
        int not_b = ~b & 1;

        int na_and_nb_golden = not_a & not_b;
        int sw_golden = (not_a & b) | (a & not_b);

        int na_and_nb_dut = dut->na_and_nb;
        int sw_dut = dut->sw;

        bool pass = (na_and_nb_dut == na_and_nb_golden) &&
                    (sw_dut == sw_golden);

        char pass_str[6];
        sprintf(pass_str, "%s", pass ? "-" : "fail");
        if (!pass) has_fail = true;

        char line[128];
        sprintf(line,
                " %d %d |     %d        %d |      %d        %d  | %s",
                a, b,
                na_and_nb_dut, sw_dut,
                na_and_nb_golden, sw_golden,
                pass_str);

        log << line << "\n";
        std::cout << line << std::endl;
    }

    tfp->dump(40);
    tfp->dump(50);
    tfp->dump(60);
    tfp->dump(70);

    log << "##END_STUDENT_CAN_SEE\n";
    std::cout << "##END_STUDENT_CAN_SEE\n";

    log.close();
    tfp->close();

    std::ofstream result(argv[4]);
    result << (has_fail ? "fail" : "pass") << std::endl;

    delete dut;
    delete tfp;
    return 0;
}
