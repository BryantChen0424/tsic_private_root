// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsorter.h for the primary calling header

#include "Vsorter__pch.h"
#include "Vsorter__Syms.h"
#include "Vsorter___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsorter___024root___dump_triggers__ico(Vsorter___024root* vlSelf);
#endif  // VL_DEBUG

void Vsorter___024root___eval_triggers__ico(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___eval_triggers__ico\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsorter___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsorter___024root___dump_triggers__act(Vsorter___024root* vlSelf);
#endif  // VL_DEBUG

void Vsorter___024root___eval_triggers__act(Vsorter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root___eval_triggers__act\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsorter___024root___dump_triggers__act(vlSelf);
    }
#endif
}
