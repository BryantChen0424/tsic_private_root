// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vinner_signal.h for the primary calling header

#ifndef VERILATED_VINNER_SIGNAL___024ROOT_H_
#define VERILATED_VINNER_SIGNAL___024ROOT_H_  // guard

#include "verilated.h"


class Vinner_signal__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vinner_signal___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(o_and,0,0);
    VL_OUT8(o_or,0,0);
    VL_OUT8(o_nand,0,0);
    VL_OUT8(o_nor,0,0);
    CData/*0:0*/ inner_signal__DOT__a;
    CData/*0:0*/ inner_signal__DOT__b;
    CData/*0:0*/ inner_signal__DOT__o_and;
    CData/*0:0*/ inner_signal__DOT__o_or;
    CData/*0:0*/ inner_signal__DOT__o_nand;
    CData/*0:0*/ inner_signal__DOT__o_nor;
    CData/*0:0*/ inner_signal__DOT__and_val;
    CData/*0:0*/ inner_signal__DOT__or_val;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vinner_signal__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vinner_signal___024root(Vinner_signal__Syms* symsp, const char* v__name);
    ~Vinner_signal___024root();
    VL_UNCOPYABLE(Vinner_signal___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
