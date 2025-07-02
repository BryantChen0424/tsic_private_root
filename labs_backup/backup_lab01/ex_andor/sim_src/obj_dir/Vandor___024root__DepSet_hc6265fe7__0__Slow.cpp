// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vandor.h for the primary calling header

#include "Vandor__pch.h"
#include "Vandor__Syms.h"
#include "Vandor___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vandor___024root___dump_triggers__stl(Vandor___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vandor___024root___eval_triggers__stl(Vandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vandor___024root___eval_triggers__stl\n"); );
    Vandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vandor___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
