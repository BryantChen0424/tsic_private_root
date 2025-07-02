// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter_onoff.h for the primary calling header

#ifndef VERILATED_VCOUNTER_ONOFF___024ROOT_H_
#define VERILATED_VCOUNTER_ONOFF___024ROOT_H_  // guard

#include "verilated.h"


class Vcounter_onoff__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcounter_onoff___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(sw,0,0);
    VL_OUT8(cnt,5,0);
    CData/*0:0*/ counter_onoff__DOT__clk;
    CData/*0:0*/ counter_onoff__DOT__rst_n;
    CData/*0:0*/ counter_onoff__DOT__sw;
    CData/*5:0*/ counter_onoff__DOT__cnt;
    CData/*0:0*/ counter_onoff__DOT__S;
    CData/*0:0*/ counter_onoff__DOT__S_nxt;
    CData/*5:0*/ counter_onoff__DOT__cnt_nxt;
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
    Vcounter_onoff__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ counter_onoff__DOT__OFF = 0U;
    static constexpr IData/*31:0*/ counter_onoff__DOT__ON = 1U;

    // CONSTRUCTORS
    Vcounter_onoff___024root(Vcounter_onoff__Syms* symsp, const char* v__name);
    ~Vcounter_onoff___024root();
    VL_UNCOPYABLE(Vcounter_onoff___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
