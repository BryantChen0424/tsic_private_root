// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbigger.h for the primary calling header

#ifndef VERILATED_VBIGGER___024ROOT_H_
#define VERILATED_VBIGGER___024ROOT_H_  // guard

#include "verilated.h"


class Vbigger__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbigger___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_IN8(c,3,0);
    VL_OUT8(bgt,0,0);
    VL_OUT8(seq_bgt,0,0);
    CData/*3:0*/ bigger__DOT__a;
    CData/*3:0*/ bigger__DOT__b;
    CData/*3:0*/ bigger__DOT__c;
    CData/*0:0*/ bigger__DOT__bgt;
    CData/*0:0*/ bigger__DOT__seq_bgt;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbigger__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbigger___024root(Vbigger__Syms* symsp, const char* v__name);
    ~Vbigger___024root();
    VL_UNCOPYABLE(Vbigger___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
