// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_onoff.h for the primary calling header

#include "Vcounter_onoff__pch.h"
#include "Vcounter_onoff__Syms.h"
#include "Vcounter_onoff___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_onoff___024root___dump_triggers__ico(Vcounter_onoff___024root* vlSelf);
#endif  // VL_DEBUG

void Vcounter_onoff___024root___eval_triggers__ico(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___eval_triggers__ico\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcounter_onoff___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_onoff___024root___dump_triggers__act(Vcounter_onoff___024root* vlSelf);
#endif  // VL_DEBUG

void Vcounter_onoff___024root___eval_triggers__act(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___eval_triggers__act\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcounter_onoff___024root___dump_triggers__act(vlSelf);
    }
#endif
}
