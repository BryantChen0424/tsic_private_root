// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconst_.h for the primary calling header

#include "Vconst___pch.h"
#include "Vconst___Syms.h"
#include "Vconst____024root.h"

void Vconst____024root___ctor_var_reset(Vconst____024root* vlSelf);

Vconst____024root::Vconst____024root(Vconst___Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vconst____024root___ctor_var_reset(this);
}

void Vconst____024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vconst____024root::~Vconst____024root() {
}
