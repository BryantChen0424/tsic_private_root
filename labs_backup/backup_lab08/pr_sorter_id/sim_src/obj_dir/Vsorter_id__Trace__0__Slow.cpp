// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsorter_id__Syms.h"


VL_ATTR_COLD void Vsorter_id___024root__trace_init_sub__TOP__0(Vsorter_id___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root__trace_init_sub__TOP__0\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    tracep->declBus(c+9,0,"o3_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("sorter_id", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"v0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"v1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"v2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"v3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"o0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"o1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"o2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"o3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,0,"o3_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+19,0,"c0_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"c0_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"c1_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"c1_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"c2_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,0,"c3_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,0,"c3_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"c4_min",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+27,0,"c0_min_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+28,0,"c0_max_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+29,0,"c1_min_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"c1_max_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+31,0,"c2_min_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+32,0,"c3_min_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+33,0,"c3_max_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"c4_min_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("c0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+36,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+37,0,"a_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+38,0,"b_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+39,0,"min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+40,0,"max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"min_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+42,0,"max_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+43,0,"a_is_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("c1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+45,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+46,0,"a_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"b_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+48,0,"min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+49,0,"max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+50,0,"min_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"max_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+52,0,"a_is_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("c2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+53,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+54,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+55,0,"a_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+56,0,"b_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+57,0,"min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+58,0,"max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+59,0,"min_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+60,0,"max_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+61,0,"a_is_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("c3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+62,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+63,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+64,0,"a_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"b_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+66,0,"min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+67,0,"max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+68,0,"min_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+69,0,"max_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+70,0,"a_is_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("c4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+71,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+72,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+73,0,"a_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+74,0,"b_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+75,0,"min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+76,0,"max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+77,0,"min_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+78,0,"max_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+79,0,"a_is_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("c5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+80,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+81,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+82,0,"a_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,0,"b_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+85,0,"max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+86,0,"min_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+87,0,"max_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+88,0,"a_is_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsorter_id___024root__trace_init_top(Vsorter_id___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root__trace_init_top\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsorter_id___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsorter_id___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsorter_id___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsorter_id___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsorter_id___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsorter_id___024root__trace_register(Vsorter_id___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root__trace_register\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsorter_id___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vsorter_id___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vsorter_id___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vsorter_id___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsorter_id___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root__trace_const_0\n"); );
    // Init
    Vsorter_id___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsorter_id___024root*>(voidSelf);
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vsorter_id___024root__trace_full_0_sub_0(Vsorter_id___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsorter_id___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root__trace_full_0\n"); );
    // Init
    Vsorter_id___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsorter_id___024root*>(voidSelf);
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsorter_id___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsorter_id___024root__trace_full_0_sub_0(Vsorter_id___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root__trace_full_0_sub_0\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    bufp->fullCData(oldp+9,(vlSelfRef.o3_id),2);
    bufp->fullCData(oldp+10,(vlSelfRef.sorter_id__DOT__v0),4);
    bufp->fullCData(oldp+11,(vlSelfRef.sorter_id__DOT__v1),4);
    bufp->fullCData(oldp+12,(vlSelfRef.sorter_id__DOT__v2),4);
    bufp->fullCData(oldp+13,(vlSelfRef.sorter_id__DOT__v3),4);
    bufp->fullCData(oldp+14,(vlSelfRef.sorter_id__DOT__o0),4);
    bufp->fullCData(oldp+15,(vlSelfRef.sorter_id__DOT__o1),4);
    bufp->fullCData(oldp+16,(vlSelfRef.sorter_id__DOT__o2),4);
    bufp->fullCData(oldp+17,(vlSelfRef.sorter_id__DOT__o3),4);
    bufp->fullCData(oldp+18,(vlSelfRef.sorter_id__DOT__o3_id),2);
    bufp->fullCData(oldp+19,(vlSelfRef.sorter_id__DOT__c0_min),4);
    bufp->fullCData(oldp+20,(vlSelfRef.sorter_id__DOT__c0_max),4);
    bufp->fullCData(oldp+21,(vlSelfRef.sorter_id__DOT__c1_min),4);
    bufp->fullCData(oldp+22,(vlSelfRef.sorter_id__DOT__c1_max),4);
    bufp->fullCData(oldp+23,(vlSelfRef.sorter_id__DOT__c2_min),4);
    bufp->fullCData(oldp+24,(vlSelfRef.sorter_id__DOT__c3_min),4);
    bufp->fullCData(oldp+25,(vlSelfRef.sorter_id__DOT__c3_max),4);
    bufp->fullCData(oldp+26,(vlSelfRef.sorter_id__DOT__c4_min),4);
    bufp->fullCData(oldp+27,(vlSelfRef.sorter_id__DOT__c0_min_id),4);
    bufp->fullCData(oldp+28,(vlSelfRef.sorter_id__DOT__c0_max_id),4);
    bufp->fullCData(oldp+29,(vlSelfRef.sorter_id__DOT__c1_min_id),4);
    bufp->fullCData(oldp+30,(vlSelfRef.sorter_id__DOT__c1_max_id),4);
    bufp->fullCData(oldp+31,(vlSelfRef.sorter_id__DOT__c2_min_id),4);
    bufp->fullCData(oldp+32,(vlSelfRef.sorter_id__DOT__c3_min_id),4);
    bufp->fullCData(oldp+33,(vlSelfRef.sorter_id__DOT__c3_max_id),4);
    bufp->fullCData(oldp+34,(vlSelfRef.sorter_id__DOT__c4_min_id),4);
    bufp->fullCData(oldp+35,(vlSelfRef.sorter_id__DOT__c0__DOT__a),4);
    bufp->fullCData(oldp+36,(vlSelfRef.sorter_id__DOT__c0__DOT__b),4);
    bufp->fullCData(oldp+37,(vlSelfRef.sorter_id__DOT__c0__DOT__a_id),2);
    bufp->fullCData(oldp+38,(vlSelfRef.sorter_id__DOT__c0__DOT__b_id),2);
    bufp->fullCData(oldp+39,(vlSelfRef.sorter_id__DOT__c0__DOT__min),4);
    bufp->fullCData(oldp+40,(vlSelfRef.sorter_id__DOT__c0__DOT__max),4);
    bufp->fullCData(oldp+41,(vlSelfRef.sorter_id__DOT__c0__DOT__min_id),2);
    bufp->fullCData(oldp+42,(vlSelfRef.sorter_id__DOT__c0__DOT__max_id),2);
    bufp->fullBit(oldp+43,(vlSelfRef.sorter_id__DOT__c0__DOT__a_is_max));
    bufp->fullCData(oldp+44,(vlSelfRef.sorter_id__DOT__c1__DOT__a),4);
    bufp->fullCData(oldp+45,(vlSelfRef.sorter_id__DOT__c1__DOT__b),4);
    bufp->fullCData(oldp+46,(vlSelfRef.sorter_id__DOT__c1__DOT__a_id),2);
    bufp->fullCData(oldp+47,(vlSelfRef.sorter_id__DOT__c1__DOT__b_id),2);
    bufp->fullCData(oldp+48,(vlSelfRef.sorter_id__DOT__c1__DOT__min),4);
    bufp->fullCData(oldp+49,(vlSelfRef.sorter_id__DOT__c1__DOT__max),4);
    bufp->fullCData(oldp+50,(vlSelfRef.sorter_id__DOT__c1__DOT__min_id),2);
    bufp->fullCData(oldp+51,(vlSelfRef.sorter_id__DOT__c1__DOT__max_id),2);
    bufp->fullBit(oldp+52,(vlSelfRef.sorter_id__DOT__c1__DOT__a_is_max));
    bufp->fullCData(oldp+53,(vlSelfRef.sorter_id__DOT__c2__DOT__a),4);
    bufp->fullCData(oldp+54,(vlSelfRef.sorter_id__DOT__c2__DOT__b),4);
    bufp->fullCData(oldp+55,(vlSelfRef.sorter_id__DOT__c2__DOT__a_id),2);
    bufp->fullCData(oldp+56,(vlSelfRef.sorter_id__DOT__c2__DOT__b_id),2);
    bufp->fullCData(oldp+57,(vlSelfRef.sorter_id__DOT__c2__DOT__min),4);
    bufp->fullCData(oldp+58,(vlSelfRef.sorter_id__DOT__c2__DOT__max),4);
    bufp->fullCData(oldp+59,(vlSelfRef.sorter_id__DOT__c2__DOT__min_id),2);
    bufp->fullCData(oldp+60,(vlSelfRef.sorter_id__DOT__c2__DOT__max_id),2);
    bufp->fullBit(oldp+61,(vlSelfRef.sorter_id__DOT__c2__DOT__a_is_max));
    bufp->fullCData(oldp+62,(vlSelfRef.sorter_id__DOT__c3__DOT__a),4);
    bufp->fullCData(oldp+63,(vlSelfRef.sorter_id__DOT__c3__DOT__b),4);
    bufp->fullCData(oldp+64,(vlSelfRef.sorter_id__DOT__c3__DOT__a_id),2);
    bufp->fullCData(oldp+65,(vlSelfRef.sorter_id__DOT__c3__DOT__b_id),2);
    bufp->fullCData(oldp+66,(vlSelfRef.sorter_id__DOT__c3__DOT__min),4);
    bufp->fullCData(oldp+67,(vlSelfRef.sorter_id__DOT__c3__DOT__max),4);
    bufp->fullCData(oldp+68,(vlSelfRef.sorter_id__DOT__c3__DOT__min_id),2);
    bufp->fullCData(oldp+69,(vlSelfRef.sorter_id__DOT__c3__DOT__max_id),2);
    bufp->fullBit(oldp+70,(vlSelfRef.sorter_id__DOT__c3__DOT__a_is_max));
    bufp->fullCData(oldp+71,(vlSelfRef.sorter_id__DOT__c4__DOT__a),4);
    bufp->fullCData(oldp+72,(vlSelfRef.sorter_id__DOT__c4__DOT__b),4);
    bufp->fullCData(oldp+73,(vlSelfRef.sorter_id__DOT__c4__DOT__a_id),2);
    bufp->fullCData(oldp+74,(vlSelfRef.sorter_id__DOT__c4__DOT__b_id),2);
    bufp->fullCData(oldp+75,(vlSelfRef.sorter_id__DOT__c4__DOT__min),4);
    bufp->fullCData(oldp+76,(vlSelfRef.sorter_id__DOT__c4__DOT__max),4);
    bufp->fullCData(oldp+77,(vlSelfRef.sorter_id__DOT__c4__DOT__min_id),2);
    bufp->fullCData(oldp+78,(vlSelfRef.sorter_id__DOT__c4__DOT__max_id),2);
    bufp->fullBit(oldp+79,(vlSelfRef.sorter_id__DOT__c4__DOT__a_is_max));
    bufp->fullCData(oldp+80,(vlSelfRef.sorter_id__DOT__c5__DOT__a),4);
    bufp->fullCData(oldp+81,(vlSelfRef.sorter_id__DOT__c5__DOT__b),4);
    bufp->fullCData(oldp+82,(vlSelfRef.sorter_id__DOT__c5__DOT__a_id),2);
    bufp->fullCData(oldp+83,(vlSelfRef.sorter_id__DOT__c5__DOT__b_id),2);
    bufp->fullCData(oldp+84,(vlSelfRef.sorter_id__DOT__c5__DOT__min),4);
    bufp->fullCData(oldp+85,(vlSelfRef.sorter_id__DOT__c5__DOT__max),4);
    bufp->fullCData(oldp+86,(vlSelfRef.sorter_id__DOT__c5__DOT__min_id),2);
    bufp->fullCData(oldp+87,(vlSelfRef.sorter_id__DOT__c5__DOT__max_id),2);
    bufp->fullBit(oldp+88,(vlSelfRef.sorter_id__DOT__c5__DOT__a_is_max));
}
