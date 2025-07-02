// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbetween.h for the primary calling header

#ifndef VERILATED_VBETWEEN___024ROOT_H_
#define VERILATED_VBETWEEN___024ROOT_H_  // guard

#include "verilated.h"


class Vbetween__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbetween___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_OUT8(bt,0,0);
    VL_OUT8(ubt,0,0);
    CData/*7:0*/ between__DOT__a;
    CData/*0:0*/ between__DOT__bt;
    CData/*0:0*/ between__DOT__ubt;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbetween__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbetween___024root(Vbetween__Syms* symsp, const char* v__name);
    ~Vbetween___024root();
    VL_UNCOPYABLE(Vbetween___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
