// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconst___Syms.h"


void Vconst____024root__trace_chg_0_sub_0(Vconst____024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vconst____024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst____024root__trace_chg_0\n"); );
    // Init
    Vconst____024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconst____024root*>(voidSelf);
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vconst____024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vconst____024root__trace_chg_0_sub_0(Vconst____024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst____024root__trace_chg_0_sub_0\n"); );
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.ot));
    bufp->chgBit(oldp+1,(vlSelfRef.of));
    bufp->chgCData(oldp+2,(vlSelfRef.o1),8);
    bufp->chgCData(oldp+3,(vlSelfRef.o2),8);
    bufp->chgCData(oldp+4,(vlSelfRef.o16),8);
    bufp->chgCData(oldp+5,(vlSelfRef.o_auto_expand),8);
    bufp->chgCData(oldp+6,(vlSelfRef.o_auto_cut),8);
    bufp->chgCData(oldp+7,(vlSelfRef.o_neg),8);
    bufp->chgBit(oldp+8,(vlSelfRef.const___DOT__ot));
    bufp->chgBit(oldp+9,(vlSelfRef.const___DOT__of));
    bufp->chgCData(oldp+10,(vlSelfRef.const___DOT__o1),8);
    bufp->chgCData(oldp+11,(vlSelfRef.const___DOT__o2),8);
    bufp->chgCData(oldp+12,(vlSelfRef.const___DOT__o16),8);
    bufp->chgCData(oldp+13,(vlSelfRef.const___DOT__o_auto_expand),8);
    bufp->chgCData(oldp+14,(vlSelfRef.const___DOT__o_auto_cut),8);
    bufp->chgCData(oldp+15,(vlSelfRef.const___DOT__o_neg),8);
}

void Vconst____024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst____024root__trace_cleanup\n"); );
    // Init
    Vconst____024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconst____024root*>(voidSelf);
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
