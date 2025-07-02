// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmath__Syms.h"


void Vmath___024root__trace_chg_0_sub_0(Vmath___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmath___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root__trace_chg_0\n"); );
    // Init
    Vmath___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmath___024root*>(voidSelf);
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmath___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmath___024root__trace_chg_0_sub_0(Vmath___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root__trace_chg_0_sub_0\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.a),4);
    bufp->chgCData(oldp+1,(vlSelfRef.mul2),8);
    bufp->chgCData(oldp+2,(vlSelfRef.div2),4);
    bufp->chgCData(oldp+3,(vlSelfRef.mod2),4);
    bufp->chgCData(oldp+4,(vlSelfRef.mul4),8);
    bufp->chgCData(oldp+5,(vlSelfRef.div4),4);
    bufp->chgCData(oldp+6,(vlSelfRef.mod4),4);
    bufp->chgCData(oldp+7,(vlSelfRef.math__DOT__a),4);
    bufp->chgCData(oldp+8,(vlSelfRef.math__DOT__mul2),8);
    bufp->chgCData(oldp+9,(vlSelfRef.math__DOT__div2),4);
    bufp->chgCData(oldp+10,(vlSelfRef.math__DOT__mod2),4);
    bufp->chgCData(oldp+11,(vlSelfRef.math__DOT__mul4),8);
    bufp->chgCData(oldp+12,(vlSelfRef.math__DOT__div4),4);
    bufp->chgCData(oldp+13,(vlSelfRef.math__DOT__mod4),4);
}

void Vmath___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root__trace_cleanup\n"); );
    // Init
    Vmath___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmath___024root*>(voidSelf);
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
