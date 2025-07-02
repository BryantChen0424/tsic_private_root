// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinner_signal.h for the primary calling header

#include "Vinner_signal__pch.h"
#include "Vinner_signal__Syms.h"
#include "Vinner_signal___024root.h"

void Vinner_signal___024root___ctor_var_reset(Vinner_signal___024root* vlSelf);

Vinner_signal___024root::Vinner_signal___024root(Vinner_signal__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vinner_signal___024root___ctor_var_reset(this);
}

void Vinner_signal___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vinner_signal___024root::~Vinner_signal___024root() {
}
