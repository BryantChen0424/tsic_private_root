// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd.h for the primary calling header

#include "Vadd__pch.h"
#include "Vadd__Syms.h"
#include "Vadd___024root.h"

// Parameter definitions for Vadd___024root
constexpr CData/*4:0*/ Vadd___024root::add__DOT__FIVE;


void Vadd___024root___ctor_var_reset(Vadd___024root* vlSelf);

Vadd___024root::Vadd___024root(Vadd__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vadd___024root___ctor_var_reset(this);
}

void Vadd___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vadd___024root::~Vadd___024root() {
}
