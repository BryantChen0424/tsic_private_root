// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcounter10__Syms.h"


void Vcounter10___024root__trace_chg_0_sub_0(Vcounter10___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcounter10___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter10___024root__trace_chg_0\n"); );
    // Init
    Vcounter10___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter10___024root*>(voidSelf);
    Vcounter10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcounter10___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcounter10___024root__trace_chg_0_sub_0(Vcounter10___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter10___024root__trace_chg_0_sub_0\n"); );
    Vcounter10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_n));
    bufp->chgCData(oldp+2,(vlSelfRef.cnt),4);
    bufp->chgBit(oldp+3,(vlSelfRef.counter10__DOT__clk));
    bufp->chgBit(oldp+4,(vlSelfRef.counter10__DOT__rst_n));
    bufp->chgCData(oldp+5,(vlSelfRef.counter10__DOT__cnt),4);
    bufp->chgCData(oldp+6,(vlSelfRef.counter10__DOT__cnt_nxt),4);
}

void Vcounter10___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter10___024root__trace_cleanup\n"); );
    // Init
    Vcounter10___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter10___024root*>(voidSelf);
    Vcounter10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
