// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vadd.h for the primary calling header

#ifndef VERILATED_VADD___024ROOT_H_
#define VERILATED_VADD___024ROOT_H_  // guard

#include "verilated.h"


class Vadd__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vadd___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_IN8(c,3,0);
    VL_OUT8(sum_ab,4,0);
    VL_OUT8(sum_a5,4,0);
    VL_OUT8(sum_b5,4,0);
    VL_OUT8(sum_c5,4,0);
    CData/*3:0*/ add__DOT__a;
    CData/*3:0*/ add__DOT__b;
    CData/*3:0*/ add__DOT__c;
    CData/*4:0*/ add__DOT__sum_ab;
    CData/*4:0*/ add__DOT__sum_a5;
    CData/*4:0*/ add__DOT__sum_b5;
    CData/*4:0*/ add__DOT__sum_c5;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vadd__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*4:0*/ add__DOT__FIVE = 5U;

    // CONSTRUCTORS
    Vadd___024root(Vadd__Syms* symsp, const char* v__name);
    ~Vadd___024root();
    VL_UNCOPYABLE(Vadd___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
