// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadd__Syms.h"


void Vadd___024root__trace_chg_0_sub_0(Vadd___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vadd___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root__trace_chg_0\n"); );
    // Init
    Vadd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadd___024root*>(voidSelf);
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vadd___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vadd___024root__trace_chg_0_sub_0(Vadd___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root__trace_chg_0_sub_0\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.a),4);
    bufp->chgCData(oldp+1,(vlSelfRef.b),4);
    bufp->chgCData(oldp+2,(vlSelfRef.c),4);
    bufp->chgCData(oldp+3,(vlSelfRef.sum_ab),5);
    bufp->chgCData(oldp+4,(vlSelfRef.sum_a5),5);
    bufp->chgCData(oldp+5,(vlSelfRef.sum_b5),5);
    bufp->chgCData(oldp+6,(vlSelfRef.sum_c5),5);
    bufp->chgCData(oldp+7,(vlSelfRef.add__DOT__a),4);
    bufp->chgCData(oldp+8,(vlSelfRef.add__DOT__b),4);
    bufp->chgCData(oldp+9,(vlSelfRef.add__DOT__c),4);
    bufp->chgCData(oldp+10,(vlSelfRef.add__DOT__sum_ab),5);
    bufp->chgCData(oldp+11,(vlSelfRef.add__DOT__sum_a5),5);
    bufp->chgCData(oldp+12,(vlSelfRef.add__DOT__sum_b5),5);
    bufp->chgCData(oldp+13,(vlSelfRef.add__DOT__sum_c5),5);
}

void Vadd___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root__trace_cleanup\n"); );
    // Init
    Vadd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadd___024root*>(voidSelf);
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
