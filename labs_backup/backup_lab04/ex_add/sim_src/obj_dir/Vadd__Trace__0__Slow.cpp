// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadd__Syms.h"


VL_ATTR_COLD void Vadd___024root__trace_init_sub__TOP__0(Vadd___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root__trace_init_sub__TOP__0\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"sum_ab",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"sum_a5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"sum_b5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"sum_c5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"sum_ab",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"sum_a5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"sum_b5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"sum_c5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"FIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vadd___024root__trace_init_top(Vadd___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root__trace_init_top\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vadd___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vadd___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vadd___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vadd___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vadd___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vadd___024root__trace_register(Vadd___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root__trace_register\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vadd___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vadd___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vadd___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vadd___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vadd___024root__trace_const_0_sub_0(Vadd___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vadd___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root__trace_const_0\n"); );
    // Init
    Vadd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadd___024root*>(voidSelf);
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vadd___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vadd___024root__trace_const_0_sub_0(Vadd___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root__trace_const_0_sub_0\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+15,(5U),5);
}

VL_ATTR_COLD void Vadd___024root__trace_full_0_sub_0(Vadd___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vadd___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root__trace_full_0\n"); );
    // Init
    Vadd___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadd___024root*>(voidSelf);
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vadd___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vadd___024root__trace_full_0_sub_0(Vadd___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root__trace_full_0_sub_0\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.a),4);
    bufp->fullCData(oldp+2,(vlSelfRef.b),4);
    bufp->fullCData(oldp+3,(vlSelfRef.c),4);
    bufp->fullCData(oldp+4,(vlSelfRef.sum_ab),5);
    bufp->fullCData(oldp+5,(vlSelfRef.sum_a5),5);
    bufp->fullCData(oldp+6,(vlSelfRef.sum_b5),5);
    bufp->fullCData(oldp+7,(vlSelfRef.sum_c5),5);
    bufp->fullCData(oldp+8,(vlSelfRef.add__DOT__a),4);
    bufp->fullCData(oldp+9,(vlSelfRef.add__DOT__b),4);
    bufp->fullCData(oldp+10,(vlSelfRef.add__DOT__c),4);
    bufp->fullCData(oldp+11,(vlSelfRef.add__DOT__sum_ab),5);
    bufp->fullCData(oldp+12,(vlSelfRef.add__DOT__sum_a5),5);
    bufp->fullCData(oldp+13,(vlSelfRef.add__DOT__sum_b5),5);
    bufp->fullCData(oldp+14,(vlSelfRef.add__DOT__sum_c5),5);
}
