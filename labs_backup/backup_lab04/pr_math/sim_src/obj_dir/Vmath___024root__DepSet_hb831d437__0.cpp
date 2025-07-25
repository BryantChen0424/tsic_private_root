// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmath.h for the primary calling header

#include "Vmath__pch.h"
#include "Vmath__Syms.h"
#include "Vmath___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmath___024root___dump_triggers__ico(Vmath___024root* vlSelf);
#endif  // VL_DEBUG

void Vmath___024root___eval_triggers__ico(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___eval_triggers__ico\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmath___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmath___024root___dump_triggers__act(Vmath___024root* vlSelf);
#endif  // VL_DEBUG

void Vmath___024root___eval_triggers__act(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___eval_triggers__act\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmath___024root___dump_triggers__act(vlSelf);
    }
#endif
}
