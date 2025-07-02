// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsorter.h for the primary calling header

#include "Vsorter__pch.h"
#include "Vsorter__Syms.h"
#include "Vsorter___024root.h"

void Vsorter___024root___ctor_var_reset(Vsorter___024root* vlSelf);

Vsorter___024root::Vsorter___024root(Vsorter__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsorter___024root___ctor_var_reset(this);
}

void Vsorter___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsorter___024root::~Vsorter___024root() {
}
