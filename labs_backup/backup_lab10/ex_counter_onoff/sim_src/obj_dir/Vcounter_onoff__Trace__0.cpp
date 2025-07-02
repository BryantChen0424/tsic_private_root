// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcounter_onoff__Syms.h"


void Vcounter_onoff___024root__trace_chg_0_sub_0(Vcounter_onoff___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcounter_onoff___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root__trace_chg_0\n"); );
    // Init
    Vcounter_onoff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter_onoff___024root*>(voidSelf);
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcounter_onoff___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcounter_onoff___024root__trace_chg_0_sub_0(Vcounter_onoff___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root__trace_chg_0_sub_0\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+2,(vlSelfRef.sw));
    bufp->chgCData(oldp+3,(vlSelfRef.cnt),6);
    bufp->chgBit(oldp+4,(vlSelfRef.counter_onoff__DOT__clk));
    bufp->chgBit(oldp+5,(vlSelfRef.counter_onoff__DOT__rst_n));
    bufp->chgBit(oldp+6,(vlSelfRef.counter_onoff__DOT__sw));
    bufp->chgCData(oldp+7,(vlSelfRef.counter_onoff__DOT__cnt),6);
    bufp->chgBit(oldp+8,(vlSelfRef.counter_onoff__DOT__S));
    bufp->chgBit(oldp+9,(vlSelfRef.counter_onoff__DOT__S_nxt));
    bufp->chgCData(oldp+10,(vlSelfRef.counter_onoff__DOT__cnt_nxt),6);
}

void Vcounter_onoff___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root__trace_cleanup\n"); );
    // Init
    Vcounter_onoff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter_onoff___024root*>(voidSelf);
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
