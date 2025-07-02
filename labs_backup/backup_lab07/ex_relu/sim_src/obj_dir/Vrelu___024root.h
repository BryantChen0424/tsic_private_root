// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrelu.h for the primary calling header

#ifndef VERILATED_VRELU___024ROOT_H_
#define VERILATED_VRELU___024ROOT_H_  // guard

#include "verilated.h"


class Vrelu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrelu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_OUT8(relu_a,7,0);
    CData/*7:0*/ relu__DOT__a;
    CData/*7:0*/ relu__DOT__relu_a;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrelu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrelu___024root(Vrelu__Syms* symsp, const char* v__name);
    ~Vrelu___024root();
    VL_UNCOPYABLE(Vrelu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
