// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbigger.h for the primary calling header

#include "Vbigger__pch.h"
#include "Vbigger__Syms.h"
#include "Vbigger___024root.h"

void Vbigger___024root___ctor_var_reset(Vbigger___024root* vlSelf);

Vbigger___024root::Vbigger___024root(Vbigger__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vbigger___024root___ctor_var_reset(this);
}

void Vbigger___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vbigger___024root::~Vbigger___024root() {
}
