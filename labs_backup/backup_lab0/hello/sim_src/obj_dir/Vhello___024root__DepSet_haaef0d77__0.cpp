// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhello.h for the primary calling header

#include "Vhello__pch.h"
#include "Vhello__Syms.h"
#include "Vhello___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhello___024root___dump_triggers__ico(Vhello___024root* vlSelf);
#endif  // VL_DEBUG

void Vhello___024root___eval_triggers__ico(Vhello___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___eval_triggers__ico\n"); );
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhello___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhello___024root___dump_triggers__act(Vhello___024root* vlSelf);
#endif  // VL_DEBUG

void Vhello___024root___eval_triggers__act(Vhello___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root___eval_triggers__act\n"); );
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhello___024root___dump_triggers__act(vlSelf);
    }
#endif
}
