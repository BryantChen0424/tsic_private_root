// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmath.h for the primary calling header

#include "Vmath__pch.h"
#include "Vmath__Syms.h"
#include "Vmath___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmath___024root___dump_triggers__stl(Vmath___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmath___024root___eval_triggers__stl(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___eval_triggers__stl\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmath___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
