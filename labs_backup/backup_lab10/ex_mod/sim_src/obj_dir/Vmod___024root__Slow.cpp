// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmod.h for the primary calling header

#include "Vmod__pch.h"
#include "Vmod__Syms.h"
#include "Vmod___024root.h"

// Parameter definitions for Vmod___024root
constexpr IData/*31:0*/ Vmod___024root::mod__DOT__IDLE;
constexpr IData/*31:0*/ Vmod___024root::mod__DOT__BUSY;
constexpr IData/*31:0*/ Vmod___024root::mod__DOT__OUT;


void Vmod___024root___ctor_var_reset(Vmod___024root* vlSelf);

Vmod___024root::Vmod___024root(Vmod__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmod___024root___ctor_var_reset(this);
}

void Vmod___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmod___024root::~Vmod___024root() {
}
