// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvandor__Syms.h"


VL_ATTR_COLD void Vvandor___024root__trace_init_sub__TOP__0(Vvandor___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root__trace_init_sub__TOP__0\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"and_ab",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"or_ab",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,0,"and_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"or_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("vandor", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"and_ab",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"or_ab",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"and_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"or_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vvandor___024root__trace_init_top(Vvandor___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root__trace_init_top\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vvandor___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vvandor___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vvandor___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vvandor___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vvandor___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vvandor___024root__trace_register(Vvandor___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root__trace_register\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vvandor___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vvandor___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vvandor___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vvandor___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vvandor___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root__trace_const_0\n"); );
    // Init
    Vvandor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvandor___024root*>(voidSelf);
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vvandor___024root__trace_full_0_sub_0(Vvandor___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vvandor___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root__trace_full_0\n"); );
    // Init
    Vvandor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvandor___024root*>(voidSelf);
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vvandor___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vvandor___024root__trace_full_0_sub_0(Vvandor___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root__trace_full_0_sub_0\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.a),4);
    bufp->fullCData(oldp+2,(vlSelfRef.b),4);
    bufp->fullCData(oldp+3,(vlSelfRef.and_ab),4);
    bufp->fullCData(oldp+4,(vlSelfRef.or_ab),4);
    bufp->fullBit(oldp+5,(vlSelfRef.and_a));
    bufp->fullBit(oldp+6,(vlSelfRef.or_a));
    bufp->fullCData(oldp+7,(vlSelfRef.vandor__DOT__a),4);
    bufp->fullCData(oldp+8,(vlSelfRef.vandor__DOT__b),4);
    bufp->fullCData(oldp+9,(vlSelfRef.vandor__DOT__and_ab),4);
    bufp->fullCData(oldp+10,(vlSelfRef.vandor__DOT__or_ab),4);
    bufp->fullBit(oldp+11,(vlSelfRef.vandor__DOT__and_a));
    bufp->fullBit(oldp+12,(vlSelfRef.vandor__DOT__or_a));
}
