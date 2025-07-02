// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmath.h for the primary calling header

#ifndef VERILATED_VMATH___024ROOT_H_
#define VERILATED_VMATH___024ROOT_H_  // guard

#include "verilated.h"


class Vmath__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmath___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,3,0);
    VL_OUT8(mul2,7,0);
    VL_OUT8(div2,3,0);
    VL_OUT8(mod2,3,0);
    VL_OUT8(mul4,7,0);
    VL_OUT8(div4,3,0);
    VL_OUT8(mod4,3,0);
    CData/*3:0*/ math__DOT__a;
    CData/*7:0*/ math__DOT__mul2;
    CData/*3:0*/ math__DOT__div2;
    CData/*3:0*/ math__DOT__mod2;
    CData/*7:0*/ math__DOT__mul4;
    CData/*3:0*/ math__DOT__div4;
    CData/*3:0*/ math__DOT__mod4;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmath__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmath___024root(Vmath__Syms* symsp, const char* v__name);
    ~Vmath___024root();
    VL_UNCOPYABLE(Vmath___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
