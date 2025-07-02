// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdiv.h for the primary calling header

#ifndef VERILATED_VDIV___024ROOT_H_
#define VERILATED_VDIV___024ROOT_H_  // guard

#include "verilated.h"


class Vdiv__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdiv___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_OUT8(div2,7,0);
    VL_OUT8(div4,7,0);
    VL_OUT8(div8,7,0);
    CData/*7:0*/ div__DOT__a;
    CData/*7:0*/ div__DOT__div2;
    CData/*7:0*/ div__DOT__div4;
    CData/*7:0*/ div__DOT__div8;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdiv__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdiv___024root(Vdiv__Syms* symsp, const char* v__name);
    ~Vdiv___024root();
    VL_UNCOPYABLE(Vdiv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
