// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvandor.h for the primary calling header

#ifndef VERILATED_VVANDOR___024ROOT_H_
#define VERILATED_VVANDOR___024ROOT_H_  // guard

#include "verilated.h"


class Vvandor__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvandor___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_OUT8(and_ab,3,0);
    VL_OUT8(or_ab,3,0);
    VL_OUT8(and_a,0,0);
    VL_OUT8(or_a,0,0);
    CData/*3:0*/ vandor__DOT__a;
    CData/*3:0*/ vandor__DOT__b;
    CData/*3:0*/ vandor__DOT__and_ab;
    CData/*3:0*/ vandor__DOT__or_ab;
    CData/*0:0*/ vandor__DOT__and_a;
    CData/*0:0*/ vandor__DOT__or_a;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vvandor__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvandor___024root(Vvandor__Syms* symsp, const char* v__name);
    ~Vvandor___024root();
    VL_UNCOPYABLE(Vvandor___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
