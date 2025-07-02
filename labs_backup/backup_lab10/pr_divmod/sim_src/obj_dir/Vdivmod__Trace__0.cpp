// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdivmod__Syms.h"


void Vdivmod___024root__trace_chg_0_sub_0(Vdivmod___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdivmod___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root__trace_chg_0\n"); );
    // Init
    Vdivmod___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdivmod___024root*>(voidSelf);
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdivmod___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdivmod___024root__trace_chg_0_sub_0(Vdivmod___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root__trace_chg_0_sub_0\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    bufp->chgCData(oldp+6,(vlSelfRef.quotient),8);
    bufp->chgCData(oldp+7,(vlSelfRef.remainder),8);
    bufp->chgBit(oldp+8,(vlSelfRef.divmod__DOT__clk));
    bufp->chgBit(oldp+9,(vlSelfRef.divmod__DOT__rst_n));
    bufp->chgBit(oldp+10,(vlSelfRef.divmod__DOT__valid));
    bufp->chgCData(oldp+11,(vlSelfRef.divmod__DOT__dividend),8);
    bufp->chgCData(oldp+12,(vlSelfRef.divmod__DOT__divisor),8);
    bufp->chgBit(oldp+13,(vlSelfRef.divmod__DOT__ready));
    bufp->chgCData(oldp+14,(vlSelfRef.divmod__DOT__quotient),8);
    bufp->chgCData(oldp+15,(vlSelfRef.divmod__DOT__remainder),8);
    bufp->chgCData(oldp+16,(vlSelfRef.divmod__DOT__S),2);
    bufp->chgCData(oldp+17,(vlSelfRef.divmod__DOT__S_nxt),2);
    bufp->chgCData(oldp+18,(vlSelfRef.divmod__DOT__a),8);
    bufp->chgCData(oldp+19,(vlSelfRef.divmod__DOT__a_nxt),8);
    bufp->chgCData(oldp+20,(vlSelfRef.divmod__DOT__b),8);
    bufp->chgCData(oldp+21,(vlSelfRef.divmod__DOT__b_nxt),8);
    bufp->chgCData(oldp+22,(vlSelfRef.divmod__DOT__q),8);
    bufp->chgCData(oldp+23,(vlSelfRef.divmod__DOT__q_nxt),8);
}

void Vdivmod___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root__trace_cleanup\n"); );
    // Init
    Vdivmod___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdivmod___024root*>(voidSelf);
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
