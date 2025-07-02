// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter10.h for the primary calling header

#include "Vcounter10__pch.h"
#include "Vcounter10__Syms.h"
#include "Vcounter10___024root.h"

void Vcounter10___024root___ctor_var_reset(Vcounter10___024root* vlSelf);

Vcounter10___024root::Vcounter10___024root(Vcounter10__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcounter10___024root___ctor_var_reset(this);
}

void Vcounter10___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcounter10___024root::~Vcounter10___024root() {
}
