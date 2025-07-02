// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbetween.h for the primary calling header

#include "Vbetween__pch.h"
#include "Vbetween__Syms.h"
#include "Vbetween___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbetween___024root___dump_triggers__ico(Vbetween___024root* vlSelf);
#endif  // VL_DEBUG

void Vbetween___024root___eval_triggers__ico(Vbetween___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root___eval_triggers__ico\n"); );
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbetween___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbetween___024root___dump_triggers__act(Vbetween___024root* vlSelf);
#endif  // VL_DEBUG

void Vbetween___024root___eval_triggers__act(Vbetween___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root___eval_triggers__act\n"); );
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbetween___024root___dump_triggers__act(vlSelf);
    }
#endif
}
