
#include "Vinner_signal.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <bitset>

int main(int argc, char **argv) {
    if (argc != 5) {
        std::cout << "usage: obj <inputs> <waveform> <log> <reult>." << std::endl;
    }
    Verilated::commandArgs(argc, argv);
    Vinner_signal* dut = new Vinner_signal;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ofstream log(argv[3]);
    log << "##SEC_STUDENT_CAN_SEE\n";
    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;

    log << " a b | o_and  o_or  o_nand o_nor | o_and* o_or* o_nand* o_nor* | PASS?\n";
    std::cout << " a b | o_and  o_or  o_nand o_nor | o_and* o_or* o_nand* o_nor* | PASS?\n";

    bool has_fail = false;

    for (int i = 0; i < 4; ++i) {
        dut->a = (i >> 1) & 1;
        dut->b = i & 1;

        dut->eval();
        tfp->dump(i * 10);

        // golden values
        int a = dut->a;
        int b = dut->b;
        int o_and_golden  = a & b;
        int o_or_golden   = a | b;
        int o_nand_golden = ~(a & b) & 1;
        int o_nor_golden  = ~(a | b) & 1;

        int o_and_dut  = dut->o_and;
        int o_or_dut   = dut->o_or;
        int o_nand_dut = dut->o_nand;
        int o_nor_dut  = dut->o_nor;

        bool pass = (o_and_dut == o_and_golden) &&
                    (o_or_dut == o_or_golden) &&
                    (o_nand_dut == o_nand_golden) &&
                    (o_nor_dut == o_nor_golden);

        char pass_str[6];
        sprintf(pass_str, "%s", pass ? "-" : "fail");
        if (!pass) has_fail = true;

        char line[256];
        sprintf(line,
                " %d %d |   %d      %d      %d      %d   |    %d      %d      %d       %d   | %s",
                a, b,
                o_and_dut, o_or_dut, o_nand_dut, o_nor_dut,
                o_and_golden, o_or_golden, o_nand_golden, o_nor_golden,
                pass_str);

        log << line << "\n";
        std::cout << line << std::endl;
    }

    // Dump extra timestamps
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
