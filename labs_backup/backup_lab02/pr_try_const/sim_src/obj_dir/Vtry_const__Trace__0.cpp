// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtry_const__Syms.h"


void Vtry_const___024root__trace_chg_0_sub_0(Vtry_const___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtry_const___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root__trace_chg_0\n"); );
    // Init
    Vtry_const___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtry_const___024root*>(voidSelf);
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtry_const___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtry_const___024root__trace_chg_0_sub_0(Vtry_const___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root__trace_chg_0_sub_0\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgSData(oldp+0,(vlSelfRef.o16),16);
    bufp->chgSData(oldp+1,(vlSelfRef.try_const__DOT__o16),16);
}

void Vtry_const___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root__trace_cleanup\n"); );
    // Init
    Vtry_const___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtry_const___024root*>(voidSelf);
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
