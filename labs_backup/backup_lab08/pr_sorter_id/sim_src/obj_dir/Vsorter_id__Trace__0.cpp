// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsorter_id__Syms.h"


void Vsorter_id___024root__trace_chg_0_sub_0(Vsorter_id___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsorter_id___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root__trace_chg_0\n"); );
    // Init
    Vsorter_id___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsorter_id___024root*>(voidSelf);
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsorter_id___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsorter_id___024root__trace_chg_0_sub_0(Vsorter_id___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root__trace_chg_0_sub_0\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelfRef.v0),4);
    bufp->chgCData(oldp+1,(vlSelfRef.v1),4);
    bufp->chgCData(oldp+2,(vlSelfRef.v2),4);
    bufp->chgCData(oldp+3,(vlSelfRef.v3),4);
    bufp->chgCData(oldp+4,(vlSelfRef.o0),4);
    bufp->chgCData(oldp+5,(vlSelfRef.o1),4);
    bufp->chgCData(oldp+6,(vlSelfRef.o2),4);
    bufp->chgCData(oldp+7,(vlSelfRef.o3),4);
    bufp->chgCData(oldp+8,(vlSelfRef.o3_id),2);
    bufp->chgCData(oldp+9,(vlSelfRef.sorter_id__DOT__v0),4);
    bufp->chgCData(oldp+10,(vlSelfRef.sorter_id__DOT__v1),4);
    bufp->chgCData(oldp+11,(vlSelfRef.sorter_id__DOT__v2),4);
    bufp->chgCData(oldp+12,(vlSelfRef.sorter_id__DOT__v3),4);
    bufp->chgCData(oldp+13,(vlSelfRef.sorter_id__DOT__o0),4);
    bufp->chgCData(oldp+14,(vlSelfRef.sorter_id__DOT__o1),4);
    bufp->chgCData(oldp+15,(vlSelfRef.sorter_id__DOT__o2),4);
    bufp->chgCData(oldp+16,(vlSelfRef.sorter_id__DOT__o3),4);
    bufp->chgCData(oldp+17,(vlSelfRef.sorter_id__DOT__o3_id),2);
    bufp->chgCData(oldp+18,(vlSelfRef.sorter_id__DOT__c0_min),4);
    bufp->chgCData(oldp+19,(vlSelfRef.sorter_id__DOT__c0_max),4);
    bufp->chgCData(oldp+20,(vlSelfRef.sorter_id__DOT__c1_min),4);
    bufp->chgCData(oldp+21,(vlSelfRef.sorter_id__DOT__c1_max),4);
    bufp->chgCData(oldp+22,(vlSelfRef.sorter_id__DOT__c2_min),4);
    bufp->chgCData(oldp+23,(vlSelfRef.sorter_id__DOT__c3_min),4);
    bufp->chgCData(oldp+24,(vlSelfRef.sorter_id__DOT__c3_max),4);
    bufp->chgCData(oldp+25,(vlSelfRef.sorter_id__DOT__c4_min),4);
    bufp->chgCData(oldp+26,(vlSelfRef.sorter_id__DOT__c0_min_id),4);
    bufp->chgCData(oldp+27,(vlSelfRef.sorter_id__DOT__c0_max_id),4);
    bufp->chgCData(oldp+28,(vlSelfRef.sorter_id__DOT__c1_min_id),4);
    bufp->chgCData(oldp+29,(vlSelfRef.sorter_id__DOT__c1_max_id),4);
    bufp->chgCData(oldp+30,(vlSelfRef.sorter_id__DOT__c2_min_id),4);
    bufp->chgCData(oldp+31,(vlSelfRef.sorter_id__DOT__c3_min_id),4);
    bufp->chgCData(oldp+32,(vlSelfRef.sorter_id__DOT__c3_max_id),4);
    bufp->chgCData(oldp+33,(vlSelfRef.sorter_id__DOT__c4_min_id),4);
    bufp->chgCData(oldp+34,(vlSelfRef.sorter_id__DOT__c0__DOT__a),4);
    bufp->chgCData(oldp+35,(vlSelfRef.sorter_id__DOT__c0__DOT__b),4);
    bufp->chgCData(oldp+36,(vlSelfRef.sorter_id__DOT__c0__DOT__a_id),2);
    bufp->chgCData(oldp+37,(vlSelfRef.sorter_id__DOT__c0__DOT__b_id),2);
    bufp->chgCData(oldp+38,(vlSelfRef.sorter_id__DOT__c0__DOT__min),4);
    bufp->chgCData(oldp+39,(vlSelfRef.sorter_id__DOT__c0__DOT__max),4);
    bufp->chgCData(oldp+40,(vlSelfRef.sorter_id__DOT__c0__DOT__min_id),2);
    bufp->chgCData(oldp+41,(vlSelfRef.sorter_id__DOT__c0__DOT__max_id),2);
    bufp->chgBit(oldp+42,(vlSelfRef.sorter_id__DOT__c0__DOT__a_is_max));
    bufp->chgCData(oldp+43,(vlSelfRef.sorter_id__DOT__c1__DOT__a),4);
    bufp->chgCData(oldp+44,(vlSelfRef.sorter_id__DOT__c1__DOT__b),4);
    bufp->chgCData(oldp+45,(vlSelfRef.sorter_id__DOT__c1__DOT__a_id),2);
    bufp->chgCData(oldp+46,(vlSelfRef.sorter_id__DOT__c1__DOT__b_id),2);
    bufp->chgCData(oldp+47,(vlSelfRef.sorter_id__DOT__c1__DOT__min),4);
    bufp->chgCData(oldp+48,(vlSelfRef.sorter_id__DOT__c1__DOT__max),4);
    bufp->chgCData(oldp+49,(vlSelfRef.sorter_id__DOT__c1__DOT__min_id),2);
    bufp->chgCData(oldp+50,(vlSelfRef.sorter_id__DOT__c1__DOT__max_id),2);
    bufp->chgBit(oldp+51,(vlSelfRef.sorter_id__DOT__c1__DOT__a_is_max));
    bufp->chgCData(oldp+52,(vlSelfRef.sorter_id__DOT__c2__DOT__a),4);
    bufp->chgCData(oldp+53,(vlSelfRef.sorter_id__DOT__c2__DOT__b),4);
    bufp->chgCData(oldp+54,(vlSelfRef.sorter_id__DOT__c2__DOT__a_id),2);
    bufp->chgCData(oldp+55,(vlSelfRef.sorter_id__DOT__c2__DOT__b_id),2);
    bufp->chgCData(oldp+56,(vlSelfRef.sorter_id__DOT__c2__DOT__min),4);
    bufp->chgCData(oldp+57,(vlSelfRef.sorter_id__DOT__c2__DOT__max),4);
    bufp->chgCData(oldp+58,(vlSelfRef.sorter_id__DOT__c2__DOT__min_id),2);
    bufp->chgCData(oldp+59,(vlSelfRef.sorter_id__DOT__c2__DOT__max_id),2);
    bufp->chgBit(oldp+60,(vlSelfRef.sorter_id__DOT__c2__DOT__a_is_max));
    bufp->chgCData(oldp+61,(vlSelfRef.sorter_id__DOT__c3__DOT__a),4);
    bufp->chgCData(oldp+62,(vlSelfRef.sorter_id__DOT__c3__DOT__b),4);
    bufp->chgCData(oldp+63,(vlSelfRef.sorter_id__DOT__c3__DOT__a_id),2);
    bufp->chgCData(oldp+64,(vlSelfRef.sorter_id__DOT__c3__DOT__b_id),2);
    bufp->chgCData(oldp+65,(vlSelfRef.sorter_id__DOT__c3__DOT__min),4);
    bufp->chgCData(oldp+66,(vlSelfRef.sorter_id__DOT__c3__DOT__max),4);
    bufp->chgCData(oldp+67,(vlSelfRef.sorter_id__DOT__c3__DOT__min_id),2);
    bufp->chgCData(oldp+68,(vlSelfRef.sorter_id__DOT__c3__DOT__max_id),2);
    bufp->chgBit(oldp+69,(vlSelfRef.sorter_id__DOT__c3__DOT__a_is_max));
    bufp->chgCData(oldp+70,(vlSelfRef.sorter_id__DOT__c4__DOT__a),4);
    bufp->chgCData(oldp+71,(vlSelfRef.sorter_id__DOT__c4__DOT__b),4);
    bufp->chgCData(oldp+72,(vlSelfRef.sorter_id__DOT__c4__DOT__a_id),2);
    bufp->chgCData(oldp+73,(vlSelfRef.sorter_id__DOT__c4__DOT__b_id),2);
    bufp->chgCData(oldp+74,(vlSelfRef.sorter_id__DOT__c4__DOT__min),4);
    bufp->chgCData(oldp+75,(vlSelfRef.sorter_id__DOT__c4__DOT__max),4);
    bufp->chgCData(oldp+76,(vlSelfRef.sorter_id__DOT__c4__DOT__min_id),2);
    bufp->chgCData(oldp+77,(vlSelfRef.sorter_id__DOT__c4__DOT__max_id),2);
    bufp->chgBit(oldp+78,(vlSelfRef.sorter_id__DOT__c4__DOT__a_is_max));
    bufp->chgCData(oldp+79,(vlSelfRef.sorter_id__DOT__c5__DOT__a),4);
    bufp->chgCData(oldp+80,(vlSelfRef.sorter_id__DOT__c5__DOT__b),4);
    bufp->chgCData(oldp+81,(vlSelfRef.sorter_id__DOT__c5__DOT__a_id),2);
    bufp->chgCData(oldp+82,(vlSelfRef.sorter_id__DOT__c5__DOT__b_id),2);
    bufp->chgCData(oldp+83,(vlSelfRef.sorter_id__DOT__c5__DOT__min),4);
    bufp->chgCData(oldp+84,(vlSelfRef.sorter_id__DOT__c5__DOT__max),4);
    bufp->chgCData(oldp+85,(vlSelfRef.sorter_id__DOT__c5__DOT__min_id),2);
    bufp->chgCData(oldp+86,(vlSelfRef.sorter_id__DOT__c5__DOT__max_id),2);
    bufp->chgBit(oldp+87,(vlSelfRef.sorter_id__DOT__c5__DOT__a_is_max));
}

void Vsorter_id___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root__trace_cleanup\n"); );
    // Init
    Vsorter_id___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsorter_id___024root*>(voidSelf);
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
