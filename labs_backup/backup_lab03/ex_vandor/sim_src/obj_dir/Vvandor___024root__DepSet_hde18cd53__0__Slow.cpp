// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvandor.h for the primary calling header

#include "Vvandor__pch.h"
#include "Vvandor__Syms.h"
#include "Vvandor___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvandor___024root___dump_triggers__stl(Vvandor___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vvandor___024root___eval_triggers__stl(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___eval_triggers__stl\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vvandor___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
