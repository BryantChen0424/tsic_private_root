// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbetween.h for the primary calling header

#include "Vbetween__pch.h"
#include "Vbetween__Syms.h"
#include "Vbetween___024root.h"

void Vbetween___024root___ctor_var_reset(Vbetween___024root* vlSelf);

Vbetween___024root::Vbetween___024root(Vbetween__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbetween___024root___ctor_var_reset(this);
}

void Vbetween___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vbetween___024root::~Vbetween___024root() {
}
