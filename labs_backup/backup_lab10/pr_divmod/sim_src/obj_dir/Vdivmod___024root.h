// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdivmod.h for the primary calling header

#ifndef VERILATED_VDIVMOD___024ROOT_H_
#define VERILATED_VDIVMOD___024ROOT_H_  // guard

#include "verilated.h"


class Vdivmod__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdivmod___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(valid,0,0);
    VL_IN8(dividend,7,0);
    VL_IN8(divisor,7,0);
    VL_OUT8(ready,0,0);
    VL_OUT8(quotient,7,0);
    VL_OUT8(remainder,7,0);
    CData/*0:0*/ divmod__DOT__clk;
    CData/*0:0*/ divmod__DOT__rst_n;
    CData/*0:0*/ divmod__DOT__valid;
    CData/*7:0*/ divmod__DOT__dividend;
    CData/*7:0*/ divmod__DOT__divisor;
    CData/*0:0*/ divmod__DOT__ready;
    CData/*7:0*/ divmod__DOT__quotient;
    CData/*7:0*/ divmod__DOT__remainder;
    CData/*1:0*/ divmod__DOT__S;
    CData/*1:0*/ divmod__DOT__S_nxt;
    CData/*7:0*/ divmod__DOT__a;
    CData/*7:0*/ divmod__DOT__a_nxt;
    CData/*7:0*/ divmod__DOT__b;
    CData/*7:0*/ divmod__DOT__b_nxt;
    CData/*7:0*/ divmod__DOT__q;
    CData/*7:0*/ divmod__DOT__q_nxt;
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
    Vdivmod__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ divmod__DOT__IDLE = 0U;
    static constexpr IData/*31:0*/ divmod__DOT__BUSY = 1U;
    static constexpr IData/*31:0*/ divmod__DOT__OUT = 2U;

    // CONSTRUCTORS
    Vdivmod___024root(Vdivmod__Syms* symsp, const char* v__name);
    ~Vdivmod___024root();
    VL_UNCOPYABLE(Vdivmod___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
