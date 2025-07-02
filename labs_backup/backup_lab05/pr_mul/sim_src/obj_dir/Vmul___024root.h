// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmul.h for the primary calling header

#ifndef VERILATED_VMUL___024ROOT_H_
#define VERILATED_VMUL___024ROOT_H_  // guard

#include "verilated.h"


class Vmul__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmul___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,3,0);
    VL_OUT8(mul2,7,0);
    VL_OUT8(mul4,7,0);
    VL_OUT8(mul8,7,0);
    VL_OUT8(be4,0,0);
    CData/*3:0*/ mul__DOT__a;
    CData/*7:0*/ mul__DOT__mul2;
    CData/*7:0*/ mul__DOT__mul4;
    CData/*7:0*/ mul__DOT__mul8;
    CData/*0:0*/ mul__DOT__be4;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmul__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmul___024root(Vmul__Syms* symsp, const char* v__name);
    ~Vmul___024root();
    VL_UNCOPYABLE(Vmul___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
