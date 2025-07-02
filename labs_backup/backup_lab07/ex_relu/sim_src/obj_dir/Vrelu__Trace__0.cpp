// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrelu__Syms.h"


void Vrelu___024root__trace_chg_0_sub_0(Vrelu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vrelu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrelu___024root__trace_chg_0\n"); );
    // Init
    Vrelu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrelu___024root*>(voidSelf);
    Vrelu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vrelu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vrelu___024root__trace_chg_0_sub_0(Vrelu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrelu___024root__trace_chg_0_sub_0\n"); );
    Vrelu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.a),8);
    bufp->chgCData(oldp+1,(vlSelfRef.relu_a),8);
    bufp->chgCData(oldp+2,(vlSelfRef.relu__DOT__a),8);
    bufp->chgCData(oldp+3,(vlSelfRef.relu__DOT__relu_a),8);
}

void Vrelu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrelu___024root__trace_cleanup\n"); );
    // Init
    Vrelu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrelu___024root*>(voidSelf);
    Vrelu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
