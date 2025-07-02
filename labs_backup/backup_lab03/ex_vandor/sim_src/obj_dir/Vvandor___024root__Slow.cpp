// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvandor.h for the primary calling header

#include "Vvandor__pch.h"
#include "Vvandor__Syms.h"
#include "Vvandor___024root.h"

void Vvandor___024root___ctor_var_reset(Vvandor___024root* vlSelf);

Vvandor___024root::Vvandor___024root(Vvandor__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vvandor___024root___ctor_var_reset(this);
}

void Vvandor___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vvandor___024root::~Vvandor___024root() {
}
