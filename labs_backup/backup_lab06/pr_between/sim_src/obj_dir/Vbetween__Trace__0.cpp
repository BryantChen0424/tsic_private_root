// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbetween__Syms.h"


void Vbetween___024root__trace_chg_0_sub_0(Vbetween___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbetween___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root__trace_chg_0\n"); );
    // Init
    Vbetween___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbetween___024root*>(voidSelf);
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbetween___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vbetween___024root__trace_chg_0_sub_0(Vbetween___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root__trace_chg_0_sub_0\n"); );
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.a),8);
    bufp->chgBit(oldp+1,(vlSelfRef.bt));
    bufp->chgBit(oldp+2,(vlSelfRef.ubt));
    bufp->chgCData(oldp+3,(vlSelfRef.between__DOT__a),8);
    bufp->chgBit(oldp+4,(vlSelfRef.between__DOT__bt));
    bufp->chgBit(oldp+5,(vlSelfRef.between__DOT__ubt));
}

void Vbetween___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root__trace_cleanup\n"); );
    // Init
    Vbetween___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbetween___024root*>(voidSelf);
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
