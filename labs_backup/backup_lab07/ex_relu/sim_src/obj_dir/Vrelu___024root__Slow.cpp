// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrelu.h for the primary calling header

#include "Vrelu__pch.h"
#include "Vrelu__Syms.h"
#include "Vrelu___024root.h"

void Vrelu___024root___ctor_var_reset(Vrelu___024root* vlSelf);

Vrelu___024root::Vrelu___024root(Vrelu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrelu___024root___ctor_var_reset(this);
}

void Vrelu___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrelu___024root::~Vrelu___024root() {
}
