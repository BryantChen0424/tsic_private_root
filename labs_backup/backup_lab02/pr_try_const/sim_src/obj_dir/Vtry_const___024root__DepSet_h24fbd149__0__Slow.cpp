// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtry_const.h for the primary calling header

#include "Vtry_const__pch.h"
#include "Vtry_const__Syms.h"
#include "Vtry_const___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtry_const___024root___dump_triggers__stl(Vtry_const___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtry_const___024root___eval_triggers__stl(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval_triggers__stl\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtry_const___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
