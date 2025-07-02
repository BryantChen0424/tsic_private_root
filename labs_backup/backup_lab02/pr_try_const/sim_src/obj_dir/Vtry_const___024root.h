// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtry_const.h for the primary calling header

#ifndef VERILATED_VTRY_CONST___024ROOT_H_
#define VERILATED_VTRY_CONST___024ROOT_H_  // guard

#include "verilated.h"


class Vtry_const__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtry_const___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(o16,15,0);
    SData/*15:0*/ try_const__DOT__o16;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtry_const__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtry_const___024root(Vtry_const__Syms* symsp, const char* v__name);
    ~Vtry_const___024root();
    VL_UNCOPYABLE(Vtry_const___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
