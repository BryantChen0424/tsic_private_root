// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconst_.h for the primary calling header

#include "Vconst___pch.h"
#include "Vconst___Syms.h"
#include "Vconst____024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconst____024root___dump_triggers__act(Vconst____024root* vlSelf);
#endif  // VL_DEBUG

void Vconst____024root___eval_triggers__act(Vconst____024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst____024root___eval_triggers__act\n"); );
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconst____024root___dump_triggers__act(vlSelf);
    }
#endif
}
