// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vandor.h for the primary calling header

#include "Vandor__pch.h"
#include "Vandor__Syms.h"
#include "Vandor___024root.h"

void Vandor___024root___ctor_var_reset(Vandor___024root* vlSelf);

Vandor___024root::Vandor___024root(Vandor__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vandor___024root___ctor_var_reset(this);
}

void Vandor___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vandor___024root::~Vandor___024root() {
}
