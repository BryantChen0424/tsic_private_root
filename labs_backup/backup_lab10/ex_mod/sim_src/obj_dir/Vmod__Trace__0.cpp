// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmod__Syms.h"


void Vmod___024root__trace_chg_0_sub_0(Vmod___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmod___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod___024root__trace_chg_0\n"); );
    // Init
    Vmod___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmod___024root*>(voidSelf);
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmod___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmod___024root__trace_chg_0_sub_0(Vmod___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod___024root__trace_chg_0_sub_0\n"); );
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst_n));
    bufp->chgBit(oldp+2,(vlSelfRef.valid));
    bufp->chgCData(oldp+3,(vlSelfRef.dividend),8);
    bufp->chgCData(oldp+4,(vlSelfRef.divisor),8);
    bufp->chgBit(oldp+5,(vlSelfRef.ready));
    bufp->chgCData(oldp+6,(vlSelfRef.remainder),8);
    bufp->chgBit(oldp+7,(vlSelfRef.mod__DOT__clk));
    bufp->chgBit(oldp+8,(vlSelfRef.mod__DOT__rst_n));
    bufp->chgBit(oldp+9,(vlSelfRef.mod__DOT__valid));
    bufp->chgCData(oldp+10,(vlSelfRef.mod__DOT__dividend),8);
    bufp->chgCData(oldp+11,(vlSelfRef.mod__DOT__divisor),8);
    bufp->chgBit(oldp+12,(vlSelfRef.mod__DOT__ready));
    bufp->chgCData(oldp+13,(vlSelfRef.mod__DOT__remainder),8);
    bufp->chgCData(oldp+14,(vlSelfRef.mod__DOT__S),2);
    bufp->chgCData(oldp+15,(vlSelfRef.mod__DOT__S_nxt),2);
    bufp->chgCData(oldp+16,(vlSelfRef.mod__DOT__a),8);
    bufp->chgCData(oldp+17,(vlSelfRef.mod__DOT__a_nxt),8);
    bufp->chgCData(oldp+18,(vlSelfRef.mod__DOT__b),8);
    bufp->chgCData(oldp+19,(vlSelfRef.mod__DOT__b_nxt),8);
}

void Vmod___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod___024root__trace_cleanup\n"); );
    // Init
    Vmod___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmod___024root*>(voidSelf);
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
