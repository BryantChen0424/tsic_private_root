// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmath.h for the primary calling header

#include "Vmath__pch.h"
#include "Vmath__Syms.h"
#include "Vmath___024root.h"

void Vmath___024root___ctor_var_reset(Vmath___024root* vlSelf);

Vmath___024root::Vmath___024root(Vmath__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmath___024root___ctor_var_reset(this);
}

void Vmath___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmath___024root::~Vmath___024root() {
}
