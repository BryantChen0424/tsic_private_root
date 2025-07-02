// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vandor.h for the primary calling header

#ifndef VERILATED_VANDOR___024ROOT_H_
#define VERILATED_VANDOR___024ROOT_H_  // guard

#include "verilated.h"


class Vandor__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vandor___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(o_and,0,0);
    VL_OUT8(o_or,0,0);
    CData/*0:0*/ andor__DOT__a;
    CData/*0:0*/ andor__DOT__b;
    CData/*0:0*/ andor__DOT__o_and;
    CData/*0:0*/ andor__DOT__o_or;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vandor__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vandor___024root(Vandor__Syms* symsp, const char* v__name);
    ~Vandor___024root();
    VL_UNCOPYABLE(Vandor___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
