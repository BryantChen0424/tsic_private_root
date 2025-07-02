// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminmax.h for the primary calling header

#include "Vminmax__pch.h"
#include "Vminmax__Syms.h"
#include "Vminmax___024root.h"

void Vminmax___024root___ctor_var_reset(Vminmax___024root* vlSelf);

Vminmax___024root::Vminmax___024root(Vminmax__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vminmax___024root___ctor_var_reset(this);
}

void Vminmax___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vminmax___024root::~Vminmax___024root() {
}
