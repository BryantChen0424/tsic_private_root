#include "Vsorter_id.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <bitset>
#include <iomanip>
#include <vector>
#include <algorithm>

std::string format_bin(unsigned int value, int bits) {
    return std::bitset<4>(value).to_string().substr(4 - bits);
}

int main(int argc, char **argv) {
    if (argc != 5) {
        std::cout << "usage: obj <inputs> <waveform> <log> <reult>." << std::endl;
    }
    Verilated::commandArgs(argc, argv);
    Vsorter_id* dut = new Vsorter_id;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ifstream infile(argv[1]);
    std::ofstream log(argv[3]);

    log << "##SEC_STUDENT_CAN_SEE" << std::endl;
    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;

    log << "  v0   v1   v2   v3  |   o0   o1   o2   o3 |  o0*  o1*  o2*  o3* | o3_id   o3_id* | PASS?" << std::endl;
    std::cout << "  v0   v1   v2   v3  |   o0   o1   o2   o3 |  o0*  o1*  o2*  o3* | o3_id   o3_id* | PASS?" << std::endl;

    int count = 0;
    bool has_fail = false;
    std::string line;

    while (std::getline(infile, line)) {
        if (line.empty()) continue;
        std::istringstream iss(line);
        int v[4];
        if (!(iss >> v[0] >> v[1] >> v[2] >> v[3])) continue;

        dut->v0 = v[0];
        dut->v1 = v[1];
        dut->v2 = v[2];
        dut->v3 = v[3];
        dut->eval();
        tfp->dump(count++ * 10);

        std::vector<int> original = {v[0], v[1], v[2], v[3]};
        std::vector<int> sorted = original;
        std::sort(sorted.begin(), sorted.end());

        // find max id with tiebreak: choose larger index if tie
        int max_val = original[0], max_idx = 0;
        for (int i = 1; i < 4; ++i) {
            if (original[i] > max_val || (original[i] == max_val && i > max_idx)) {
                max_val = original[i];
                max_idx = i;
            }
        }

        bool pass = (
            dut->o0 == sorted[0] &&
            dut->o1 == sorted[1] &&
            dut->o2 == sorted[2] &&
            dut->o3 == sorted[3] &&
            dut->o3_id == max_idx
        );

        if (!pass) has_fail = true;
        const char* pass_str = pass ? "-" : "fail";

        std::ostringstream oss;
        for (int i = 0; i < 4; ++i)
            oss << format_bin(v[i], 4) << " ";
        oss << " | ";
        oss << format_bin(dut->o0, 4) << " "
            << format_bin(dut->o1, 4) << " "
            << format_bin(dut->o2, 4) << " "
            << format_bin(dut->o3, 4) << " | ";
        for (int i = 0; i < 4; ++i)
            oss << format_bin(sorted[i], 4) << " ";
        oss << "|   " << static_cast<unsigned>(dut->o3_id) << "       " << max_idx << "    | " << pass_str;

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

    std::ofstream result(argv[4]);
    result << (has_fail ? "fail" : "pass") << std::endl;

    log.close();
    tfp->close();
    delete dut;
    delete tfp;
    return 0;
}
