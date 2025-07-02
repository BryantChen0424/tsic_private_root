// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vops__Syms.h"


void Vops___024root__trace_chg_0_sub_0(Vops___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vops___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root__trace_chg_0\n"); );
    // Init
    Vops___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vops___024root*>(voidSelf);
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vops___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vops___024root__trace_chg_0_sub_0(Vops___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root__trace_chg_0_sub_0\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.a),8);
    bufp->chgCData(oldp+1,(vlSelfRef.b),8);
    bufp->chgCData(oldp+2,(vlSelfRef.op),2);
    bufp->chgCData(oldp+3,(vlSelfRef.o),8);
    bufp->chgBit(oldp+4,(vlSelfRef.overflow));
    bufp->chgCData(oldp+5,(vlSelfRef.ops__DOT__a),8);
    bufp->chgCData(oldp+6,(vlSelfRef.ops__DOT__b),8);
    bufp->chgCData(oldp+7,(vlSelfRef.ops__DOT__op),2);
    bufp->chgCData(oldp+8,(vlSelfRef.ops__DOT__o),8);
    bufp->chgBit(oldp+9,(vlSelfRef.ops__DOT__overflow));
    bufp->chgCData(oldp+10,(vlSelfRef.ops__DOT__sa),8);
    bufp->chgCData(oldp+11,(vlSelfRef.ops__DOT__sb),8);
    bufp->chgCData(oldp+12,(vlSelfRef.ops__DOT__add_result),8);
    bufp->chgCData(oldp+13,(vlSelfRef.ops__DOT__sub_result),8);
}

void Vops___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root__trace_cleanup\n"); );
    // Init
    Vops___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vops___024root*>(voidSelf);
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
