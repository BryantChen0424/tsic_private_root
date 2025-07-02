// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvandor__Syms.h"


void Vvandor___024root__trace_chg_0_sub_0(Vvandor___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vvandor___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root__trace_chg_0\n"); );
    // Init
    Vvandor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvandor___024root*>(voidSelf);
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vvandor___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vvandor___024root__trace_chg_0_sub_0(Vvandor___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root__trace_chg_0_sub_0\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.a),4);
    bufp->chgCData(oldp+1,(vlSelfRef.b),4);
    bufp->chgCData(oldp+2,(vlSelfRef.and_ab),4);
    bufp->chgCData(oldp+3,(vlSelfRef.or_ab),4);
    bufp->chgBit(oldp+4,(vlSelfRef.and_a));
    bufp->chgBit(oldp+5,(vlSelfRef.or_a));
    bufp->chgCData(oldp+6,(vlSelfRef.vandor__DOT__a),4);
    bufp->chgCData(oldp+7,(vlSelfRef.vandor__DOT__b),4);
    bufp->chgCData(oldp+8,(vlSelfRef.vandor__DOT__and_ab),4);
    bufp->chgCData(oldp+9,(vlSelfRef.vandor__DOT__or_ab),4);
    bufp->chgBit(oldp+10,(vlSelfRef.vandor__DOT__and_a));
    bufp->chgBit(oldp+11,(vlSelfRef.vandor__DOT__or_a));
}

void Vvandor___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root__trace_cleanup\n"); );
    // Init
    Vvandor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvandor___024root*>(voidSelf);
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
