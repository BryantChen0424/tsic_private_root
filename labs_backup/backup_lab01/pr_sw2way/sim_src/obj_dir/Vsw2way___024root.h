// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsw2way.h for the primary calling header

#ifndef VERILATED_VSW2WAY___024ROOT_H_
#define VERILATED_VSW2WAY___024ROOT_H_  // guard

#include "verilated.h"


class Vsw2way__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsw2way___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(na_and_nb,0,0);
    VL_OUT8(sw,0,0);
    CData/*0:0*/ sw2way__DOT__a;
    CData/*0:0*/ sw2way__DOT__b;
    CData/*0:0*/ sw2way__DOT__na_and_nb;
    CData/*0:0*/ sw2way__DOT__sw;
    CData/*0:0*/ sw2way__DOT__not_a;
    CData/*0:0*/ sw2way__DOT__not_b;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsw2way__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsw2way___024root(Vsw2way__Syms* symsp, const char* v__name);
    ~Vsw2way___024root();
    VL_UNCOPYABLE(Vsw2way___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
