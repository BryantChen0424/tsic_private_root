// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhello__Syms.h"


void Vhello___024root__trace_chg_0_sub_0(Vhello___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vhello___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_chg_0\n"); );
    // Init
    Vhello___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhello___024root*>(voidSelf);
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vhello___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vhello___024root__trace_chg_0_sub_0(Vhello___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_chg_0_sub_0\n"); );
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.in),8);
    bufp->chgCData(oldp+1,(vlSelfRef.out),8);
    bufp->chgCData(oldp+2,(vlSelfRef.hello__DOT__in),8);
    bufp->chgCData(oldp+3,(vlSelfRef.hello__DOT__out),8);
}

void Vhello___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhello___024root__trace_cleanup\n"); );
    // Init
    Vhello___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhello___024root*>(voidSelf);
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
