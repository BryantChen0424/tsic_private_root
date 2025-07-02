// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsorter_id__pch.h"
#include "Vsorter_id.h"
#include "Vsorter_id___024root.h"

// FUNCTIONS
Vsorter_id__Syms::~Vsorter_id__Syms()
{
}

Vsorter_id__Syms::Vsorter_id__Syms(VerilatedContext* contextp, const char* namep, Vsorter_id* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(57);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
