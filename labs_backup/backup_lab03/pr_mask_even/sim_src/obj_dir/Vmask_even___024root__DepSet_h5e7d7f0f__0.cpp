// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmask_even.h for the primary calling header

#include "Vmask_even__pch.h"
#include "Vmask_even__Syms.h"
#include "Vmask_even___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmask_even___024root___dump_triggers__ico(Vmask_even___024root* vlSelf);
#endif  // VL_DEBUG

void Vmask_even___024root___eval_triggers__ico(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___eval_triggers__ico\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmask_even___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmask_even___024root___dump_triggers__act(Vmask_even___024root* vlSelf);
#endif  // VL_DEBUG

void Vmask_even___024root___eval_triggers__act(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___eval_triggers__act\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmask_even___024root___dump_triggers__act(vlSelf);
    }
#endif
}
