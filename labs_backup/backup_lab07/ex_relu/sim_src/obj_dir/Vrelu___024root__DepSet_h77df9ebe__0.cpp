// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrelu.h for the primary calling header

#include "Vrelu__pch.h"
#include "Vrelu__Syms.h"
#include "Vrelu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrelu___024root___dump_triggers__ico(Vrelu___024root* vlSelf);
#endif  // VL_DEBUG

void Vrelu___024root___eval_triggers__ico(Vrelu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrelu___024root___eval_triggers__ico\n"); );
    Vrelu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrelu___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrelu___024root___dump_triggers__act(Vrelu___024root* vlSelf);
#endif  // VL_DEBUG

void Vrelu___024root___eval_triggers__act(Vrelu___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrelu___024root___eval_triggers__act\n"); );
    Vrelu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrelu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
