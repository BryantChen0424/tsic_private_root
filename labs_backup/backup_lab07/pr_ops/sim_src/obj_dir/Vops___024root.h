// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vops.h for the primary calling header

#ifndef VERILATED_VOPS___024ROOT_H_
#define VERILATED_VOPS___024ROOT_H_  // guard

#include "verilated.h"


class Vops__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vops___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_IN8(op,1,0);
    VL_OUT8(o,7,0);
    VL_OUT8(overflow,0,0);
    CData/*7:0*/ ops__DOT__a;
    CData/*7:0*/ ops__DOT__b;
    CData/*1:0*/ ops__DOT__op;
    CData/*7:0*/ ops__DOT__o;
    CData/*0:0*/ ops__DOT__overflow;
    CData/*7:0*/ ops__DOT__sa;
    CData/*7:0*/ ops__DOT__sb;
    CData/*7:0*/ ops__DOT__add_result;
    CData/*7:0*/ ops__DOT__sub_result;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vops__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vops___024root(Vops__Syms* symsp, const char* v__name);
    ~Vops___024root();
    VL_UNCOPYABLE(Vops___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
