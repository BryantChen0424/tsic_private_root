// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vinner_signal__Syms.h"


void Vinner_signal___024root__trace_chg_0_sub_0(Vinner_signal___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vinner_signal___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root__trace_chg_0\n"); );
    // Init
    Vinner_signal___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinner_signal___024root*>(voidSelf);
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vinner_signal___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vinner_signal___024root__trace_chg_0_sub_0(Vinner_signal___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root__trace_chg_0_sub_0\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.a));
    bufp->chgBit(oldp+1,(vlSelfRef.b));
    bufp->chgBit(oldp+2,(vlSelfRef.o_and));
    bufp->chgBit(oldp+3,(vlSelfRef.o_or));
    bufp->chgBit(oldp+4,(vlSelfRef.o_nand));
    bufp->chgBit(oldp+5,(vlSelfRef.o_nor));
    bufp->chgBit(oldp+6,(vlSelfRef.inner_signal__DOT__a));
    bufp->chgBit(oldp+7,(vlSelfRef.inner_signal__DOT__b));
    bufp->chgBit(oldp+8,(vlSelfRef.inner_signal__DOT__o_and));
    bufp->chgBit(oldp+9,(vlSelfRef.inner_signal__DOT__o_or));
    bufp->chgBit(oldp+10,(vlSelfRef.inner_signal__DOT__o_nand));
    bufp->chgBit(oldp+11,(vlSelfRef.inner_signal__DOT__o_nor));
    bufp->chgBit(oldp+12,(vlSelfRef.inner_signal__DOT__and_val));
    bufp->chgBit(oldp+13,(vlSelfRef.inner_signal__DOT__or_val));
}

void Vinner_signal___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root__trace_cleanup\n"); );
    // Init
    Vinner_signal___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinner_signal___024root*>(voidSelf);
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
