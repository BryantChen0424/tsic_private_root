// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vminmax.h for the primary calling header

#ifndef VERILATED_VMINMAX___024ROOT_H_
#define VERILATED_VMINMAX___024ROOT_H_  // guard

#include "verilated.h"


class Vminmax__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vminmax___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_IN8(s,0,0);
    VL_OUT8(o,7,0);
    CData/*7:0*/ minmax__DOT__a;
    CData/*7:0*/ minmax__DOT__b;
    CData/*0:0*/ minmax__DOT__s;
    CData/*7:0*/ minmax__DOT__o;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vminmax__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vminmax___024root(Vminmax__Syms* symsp, const char* v__name);
    ~Vminmax___024root();
    VL_UNCOPYABLE(Vminmax___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
