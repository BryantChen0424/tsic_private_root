// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdivmod.h for the primary calling header

#include "Vdivmod__pch.h"
#include "Vdivmod__Syms.h"
#include "Vdivmod___024root.h"

// Parameter definitions for Vdivmod___024root
constexpr IData/*31:0*/ Vdivmod___024root::divmod__DOT__IDLE;
constexpr IData/*31:0*/ Vdivmod___024root::divmod__DOT__BUSY;
constexpr IData/*31:0*/ Vdivmod___024root::divmod__DOT__OUT;


void Vdivmod___024root___ctor_var_reset(Vdivmod___024root* vlSelf);

Vdivmod___024root::Vdivmod___024root(Vdivmod__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdivmod___024root___ctor_var_reset(this);
}

void Vdivmod___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdivmod___024root::~Vdivmod___024root() {
}
