// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello.h for the primary calling header

#ifndef VERILATED_VHELLO___024ROOT_H_
#define VERILATED_VHELLO___024ROOT_H_  // guard

#include "verilated.h"


class Vhello__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(in,7,0);
    VL_OUT8(out,7,0);
    CData/*7:0*/ hello__DOT__in;
    CData/*7:0*/ hello__DOT__out;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhello__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhello___024root(Vhello__Syms* symsp, const char* v__name);
    ~Vhello___024root();
    VL_UNCOPYABLE(Vhello___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
