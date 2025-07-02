// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmask_even.h for the primary calling header

#ifndef VERILATED_VMASK_EVEN___024ROOT_H_
#define VERILATED_VMASK_EVEN___024ROOT_H_  // guard

#include "verilated.h"


class Vmask_even__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmask_even___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_OUT8(mask,7,0);
    VL_OUT8(even1,0,0);
    CData/*7:0*/ mask_even__DOT__a;
    CData/*7:0*/ mask_even__DOT__mask;
    CData/*0:0*/ mask_even__DOT__even1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmask_even__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmask_even___024root(Vmask_even__Syms* symsp, const char* v__name);
    ~Vmask_even___024root();
    VL_UNCOPYABLE(Vmask_even___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
