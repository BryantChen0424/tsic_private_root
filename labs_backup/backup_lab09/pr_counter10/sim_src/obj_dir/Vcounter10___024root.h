// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter10.h for the primary calling header

#ifndef VERILATED_VCOUNTER10___024ROOT_H_
#define VERILATED_VCOUNTER10___024ROOT_H_  // guard

#include "verilated.h"


class Vcounter10__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcounter10___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(cnt,3,0);
    CData/*0:0*/ counter10__DOT__clk;
    CData/*0:0*/ counter10__DOT__rst_n;
    CData/*3:0*/ counter10__DOT__cnt;
    CData/*3:0*/ counter10__DOT__cnt_nxt;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcounter10__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcounter10___024root(Vcounter10__Syms* symsp, const char* v__name);
    ~Vcounter10___024root();
    VL_UNCOPYABLE(Vcounter10___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
