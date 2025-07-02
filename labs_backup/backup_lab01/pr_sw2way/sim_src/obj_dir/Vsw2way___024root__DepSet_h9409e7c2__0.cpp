// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsw2way.h for the primary calling header

#include "Vsw2way__pch.h"
#include "Vsw2way__Syms.h"
#include "Vsw2way___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsw2way___024root___dump_triggers__ico(Vsw2way___024root* vlSelf);
#endif  // VL_DEBUG

void Vsw2way___024root___eval_triggers__ico(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___eval_triggers__ico\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsw2way___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsw2way___024root___dump_triggers__act(Vsw2way___024root* vlSelf);
#endif  // VL_DEBUG

void Vsw2way___024root___eval_triggers__act(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___eval_triggers__act\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsw2way___024root___dump_triggers__act(vlSelf);
    }
#endif
}
