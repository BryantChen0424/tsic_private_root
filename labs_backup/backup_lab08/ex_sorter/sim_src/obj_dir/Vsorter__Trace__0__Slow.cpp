// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsorter__Syms.h"


VL_ATTR_COLD void Vsorter___024root__trace_init_sub__TOP__0(Vsorter___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root__trace_init_sub__TOP__0\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"v0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"v1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"v2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"v3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"o0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,0,"o1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"o2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"o3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sorter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"v0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"v1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"v2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"v3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"o0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"o1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"o2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"o3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"c0_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,0,"c0_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"c1_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"c1_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"c2_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"c3_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"c3_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,0,"c4_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("c0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+27,0,"max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+28,0,"min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("c1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+29,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+31,0,"max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+32,0,"min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("c2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+35,0,"max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+36,0,"min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("c3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+37,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+38,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+39,0,"max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+40,0,"min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("c4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+41,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+42,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+43,0,"max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("c5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+46,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+47,0,"max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsorter___024root__trace_init_top(Vsorter___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root__trace_init_top\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsorter___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsorter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsorter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsorter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsorter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsorter___024root__trace_register(Vsorter___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root__trace_register\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsorter___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vsorter___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vsorter___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vsorter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsorter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root__trace_const_0\n"); );
    // Init
    Vsorter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsorter___024root*>(voidSelf);
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vsorter___024root__trace_full_0_sub_0(Vsorter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsorter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root__trace_full_0\n"); );
    // Init
    Vsorter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsorter___024root*>(voidSelf);
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsorter___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsorter___024root__trace_full_0_sub_0(Vsorter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter___024root__trace_full_0_sub_0\n"); );
    Vsorter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.v0),4);
    bufp->fullCData(oldp+2,(vlSelfRef.v1),4);
    bufp->fullCData(oldp+3,(vlSelfRef.v2),4);
    bufp->fullCData(oldp+4,(vlSelfRef.v3),4);
    bufp->fullCData(oldp+5,(vlSelfRef.o0),4);
    bufp->fullCData(oldp+6,(vlSelfRef.o1),4);
    bufp->fullCData(oldp+7,(vlSelfRef.o2),4);
    bufp->fullCData(oldp+8,(vlSelfRef.o3),4);
    bufp->fullCData(oldp+9,(vlSelfRef.sorter__DOT__v0),4);
    bufp->fullCData(oldp+10,(vlSelfRef.sorter__DOT__v1),4);
    bufp->fullCData(oldp+11,(vlSelfRef.sorter__DOT__v2),4);
    bufp->fullCData(oldp+12,(vlSelfRef.sorter__DOT__v3),4);
    bufp->fullCData(oldp+13,(vlSelfRef.sorter__DOT__o0),4);
    bufp->fullCData(oldp+14,(vlSelfRef.sorter__DOT__o1),4);
    bufp->fullCData(oldp+15,(vlSelfRef.sorter__DOT__o2),4);
    bufp->fullCData(oldp+16,(vlSelfRef.sorter__DOT__o3),4);
    bufp->fullCData(oldp+17,(vlSelfRef.sorter__DOT__c0_min),4);
    bufp->fullCData(oldp+18,(vlSelfRef.sorter__DOT__c0_max),4);
    bufp->fullCData(oldp+19,(vlSelfRef.sorter__DOT__c1_min),4);
    bufp->fullCData(oldp+20,(vlSelfRef.sorter__DOT__c1_max),4);
    bufp->fullCData(oldp+21,(vlSelfRef.sorter__DOT__c2_min),4);
    bufp->fullCData(oldp+22,(vlSelfRef.sorter__DOT__c3_min),4);
    bufp->fullCData(oldp+23,(vlSelfRef.sorter__DOT__c3_max),4);
    bufp->fullCData(oldp+24,(vlSelfRef.sorter__DOT__c4_min),4);
    bufp->fullCData(oldp+25,(vlSelfRef.sorter__DOT__c0__DOT__a),4);
    bufp->fullCData(oldp+26,(vlSelfRef.sorter__DOT__c0__DOT__b),4);
    bufp->fullCData(oldp+27,(vlSelfRef.sorter__DOT__c0__DOT__max),4);
    bufp->fullCData(oldp+28,(vlSelfRef.sorter__DOT__c0__DOT__min),4);
    bufp->fullCData(oldp+29,(vlSelfRef.sorter__DOT__c1__DOT__a),4);
    bufp->fullCData(oldp+30,(vlSelfRef.sorter__DOT__c1__DOT__b),4);
    bufp->fullCData(oldp+31,(vlSelfRef.sorter__DOT__c1__DOT__max),4);
    bufp->fullCData(oldp+32,(vlSelfRef.sorter__DOT__c1__DOT__min),4);
    bufp->fullCData(oldp+33,(vlSelfRef.sorter__DOT__c2__DOT__a),4);
    bufp->fullCData(oldp+34,(vlSelfRef.sorter__DOT__c2__DOT__b),4);
    bufp->fullCData(oldp+35,(vlSelfRef.sorter__DOT__c2__DOT__max),4);
    bufp->fullCData(oldp+36,(vlSelfRef.sorter__DOT__c2__DOT__min),4);
    bufp->fullCData(oldp+37,(vlSelfRef.sorter__DOT__c3__DOT__a),4);
    bufp->fullCData(oldp+38,(vlSelfRef.sorter__DOT__c3__DOT__b),4);
    bufp->fullCData(oldp+39,(vlSelfRef.sorter__DOT__c3__DOT__max),4);
    bufp->fullCData(oldp+40,(vlSelfRef.sorter__DOT__c3__DOT__min),4);
    bufp->fullCData(oldp+41,(vlSelfRef.sorter__DOT__c4__DOT__a),4);
    bufp->fullCData(oldp+42,(vlSelfRef.sorter__DOT__c4__DOT__b),4);
    bufp->fullCData(oldp+43,(vlSelfRef.sorter__DOT__c4__DOT__max),4);
    bufp->fullCData(oldp+44,(vlSelfRef.sorter__DOT__c4__DOT__min),4);
    bufp->fullCData(oldp+45,(vlSelfRef.sorter__DOT__c5__DOT__a),4);
    bufp->fullCData(oldp+46,(vlSelfRef.sorter__DOT__c5__DOT__b),4);
    bufp->fullCData(oldp+47,(vlSelfRef.sorter__DOT__c5__DOT__max),4);
    bufp->fullCData(oldp+48,(vlSelfRef.sorter__DOT__c5__DOT__min),4);
}
