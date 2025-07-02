// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vminmax__Syms.h"


void Vminmax___024root__trace_chg_0_sub_0(Vminmax___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vminmax___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root__trace_chg_0\n"); );
    // Init
    Vminmax___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminmax___024root*>(voidSelf);
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vminmax___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vminmax___024root__trace_chg_0_sub_0(Vminmax___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root__trace_chg_0_sub_0\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.a),8);
    bufp->chgCData(oldp+1,(vlSelfRef.b),8);
    bufp->chgBit(oldp+2,(vlSelfRef.s));
    bufp->chgCData(oldp+3,(vlSelfRef.o),8);
    bufp->chgCData(oldp+4,(vlSelfRef.minmax__DOT__a),8);
    bufp->chgCData(oldp+5,(vlSelfRef.minmax__DOT__b),8);
    bufp->chgBit(oldp+6,(vlSelfRef.minmax__DOT__s));
    bufp->chgCData(oldp+7,(vlSelfRef.minmax__DOT__o),8);
}

void Vminmax___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root__trace_cleanup\n"); );
    // Init
    Vminmax___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminmax___024root*>(voidSelf);
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
