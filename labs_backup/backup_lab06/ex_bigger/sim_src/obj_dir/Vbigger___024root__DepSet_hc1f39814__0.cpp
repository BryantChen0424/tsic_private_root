// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbigger.h for the primary calling header

#include "Vbigger__pch.h"
#include "Vbigger__Syms.h"
#include "Vbigger___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbigger___024root___dump_triggers__ico(Vbigger___024root* vlSelf);
#endif  // VL_DEBUG

void Vbigger___024root___eval_triggers__ico(Vbigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root___eval_triggers__ico\n"); );
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbigger___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbigger___024root___dump_triggers__act(Vbigger___024root* vlSelf);
#endif  // VL_DEBUG

void Vbigger___024root___eval_triggers__act(Vbigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root___eval_triggers__act\n"); );
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbigger___024root___dump_triggers__act(vlSelf);
    }
#endif
}
