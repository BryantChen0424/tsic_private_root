// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmod.h for the primary calling header

#include "Vmod__pch.h"
#include "Vmod__Syms.h"
#include "Vmod___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmod___024root___dump_triggers__ico(Vmod___024root* vlSelf);
#endif  // VL_DEBUG

void Vmod___024root___eval_triggers__ico(Vmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod___024root___eval_triggers__ico\n"); );
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmod___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmod___024root___dump_triggers__act(Vmod___024root* vlSelf);
#endif  // VL_DEBUG

void Vmod___024root___eval_triggers__act(Vmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod___024root___eval_triggers__act\n"); );
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vmod___024root___dump_triggers__act(vlSelf);
    }
#endif
}
