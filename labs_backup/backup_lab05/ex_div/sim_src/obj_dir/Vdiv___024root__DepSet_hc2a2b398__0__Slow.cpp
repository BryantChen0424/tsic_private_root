// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdiv.h for the primary calling header

#include "Vdiv__pch.h"
#include "Vdiv__Syms.h"
#include "Vdiv___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__stl(Vdiv___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdiv___024root___eval_triggers__stl(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_triggers__stl\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdiv___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
