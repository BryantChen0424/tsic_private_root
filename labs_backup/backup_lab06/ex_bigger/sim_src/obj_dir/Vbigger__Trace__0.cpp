// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbigger__Syms.h"


void Vbigger___024root__trace_chg_0_sub_0(Vbigger___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbigger___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root__trace_chg_0\n"); );
    // Init
    Vbigger___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbigger___024root*>(voidSelf);
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbigger___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vbigger___024root__trace_chg_0_sub_0(Vbigger___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root__trace_chg_0_sub_0\n"); );
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.a),4);
    bufp->chgCData(oldp+1,(vlSelfRef.b),4);
    bufp->chgCData(oldp+2,(vlSelfRef.c),4);
    bufp->chgBit(oldp+3,(vlSelfRef.bgt));
    bufp->chgBit(oldp+4,(vlSelfRef.seq_bgt));
    bufp->chgCData(oldp+5,(vlSelfRef.bigger__DOT__a),4);
    bufp->chgCData(oldp+6,(vlSelfRef.bigger__DOT__b),4);
    bufp->chgCData(oldp+7,(vlSelfRef.bigger__DOT__c),4);
    bufp->chgBit(oldp+8,(vlSelfRef.bigger__DOT__bgt));
    bufp->chgBit(oldp+9,(vlSelfRef.bigger__DOT__seq_bgt));
}

void Vbigger___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root__trace_cleanup\n"); );
    // Init
    Vbigger___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbigger___024root*>(voidSelf);
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
