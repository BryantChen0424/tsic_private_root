// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vops.h for the primary calling header

#include "Vops__pch.h"
#include "Vops__Syms.h"
#include "Vops___024root.h"

void Vops___024root___ctor_var_reset(Vops___024root* vlSelf);

Vops___024root::Vops___024root(Vops__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vops___024root___ctor_var_reset(this);
}

void Vops___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vops___024root::~Vops___024root() {
}
