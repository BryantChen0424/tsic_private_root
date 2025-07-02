// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminmax.h for the primary calling header

#include "Vminmax__pch.h"
#include "Vminmax__Syms.h"
#include "Vminmax___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminmax___024root___dump_triggers__ico(Vminmax___024root* vlSelf);
#endif  // VL_DEBUG

void Vminmax___024root___eval_triggers__ico(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___eval_triggers__ico\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vminmax___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminmax___024root___dump_triggers__act(Vminmax___024root* vlSelf);
#endif  // VL_DEBUG

void Vminmax___024root___eval_triggers__act(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___eval_triggers__act\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vminmax___024root___dump_triggers__act(vlSelf);
    }
#endif
}
