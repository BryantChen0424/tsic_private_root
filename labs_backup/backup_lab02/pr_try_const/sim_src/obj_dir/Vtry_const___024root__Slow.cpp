// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtry_const.h for the primary calling header

#include "Vtry_const__pch.h"
#include "Vtry_const__Syms.h"
#include "Vtry_const___024root.h"

void Vtry_const___024root___ctor_var_reset(Vtry_const___024root* vlSelf);

Vtry_const___024root::Vtry_const___024root(Vtry_const__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtry_const___024root___ctor_var_reset(this);
}

void Vtry_const___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtry_const___024root::~Vtry_const___024root() {
}
