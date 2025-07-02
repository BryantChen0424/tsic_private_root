// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinner_signal.h for the primary calling header

#include "Vinner_signal__pch.h"
#include "Vinner_signal__Syms.h"
#include "Vinner_signal___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinner_signal___024root___dump_triggers__ico(Vinner_signal___024root* vlSelf);
#endif  // VL_DEBUG

void Vinner_signal___024root___eval_triggers__ico(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___eval_triggers__ico\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vinner_signal___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinner_signal___024root___dump_triggers__act(Vinner_signal___024root* vlSelf);
#endif  // VL_DEBUG

void Vinner_signal___024root___eval_triggers__act(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___eval_triggers__act\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vinner_signal___024root___dump_triggers__act(vlSelf);
    }
#endif
}
