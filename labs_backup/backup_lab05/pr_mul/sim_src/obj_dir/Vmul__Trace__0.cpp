// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmul__Syms.h"


void Vmul___024root__trace_chg_0_sub_0(Vmul___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmul___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_chg_0\n"); );
    // Init
    Vmul___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmul___024root*>(voidSelf);
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmul___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmul___024root__trace_chg_0_sub_0(Vmul___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_chg_0_sub_0\n"); );
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.a),4);
    bufp->chgCData(oldp+1,(vlSelfRef.mul2),8);
    bufp->chgCData(oldp+2,(vlSelfRef.mul4),8);
    bufp->chgCData(oldp+3,(vlSelfRef.mul8),8);
    bufp->chgBit(oldp+4,(vlSelfRef.be4));
    bufp->chgCData(oldp+5,(vlSelfRef.mul__DOT__a),4);
    bufp->chgCData(oldp+6,(vlSelfRef.mul__DOT__mul2),8);
    bufp->chgCData(oldp+7,(vlSelfRef.mul__DOT__mul4),8);
    bufp->chgCData(oldp+8,(vlSelfRef.mul__DOT__mul8),8);
    bufp->chgBit(oldp+9,(vlSelfRef.mul__DOT__be4));
}

void Vmul___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_cleanup\n"); );
    // Init
    Vmul___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmul___024root*>(voidSelf);
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
