// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsorter_id.h for the primary calling header

#include "Vsorter_id__pch.h"
#include "Vsorter_id__Syms.h"
#include "Vsorter_id___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsorter_id___024root___dump_triggers__stl(Vsorter_id___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsorter_id___024root___eval_triggers__stl(Vsorter_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root___eval_triggers__stl\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsorter_id___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
