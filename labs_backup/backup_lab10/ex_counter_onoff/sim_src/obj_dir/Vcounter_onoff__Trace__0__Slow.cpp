// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcounter_onoff__Syms.h"


VL_ATTR_COLD void Vcounter_onoff___024root__trace_init_sub__TOP__0(Vcounter_onoff___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root__trace_init_sub__TOP__0\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"cnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("counter_onoff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+5,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"cnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+12,0,"OFF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"ON",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"S_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"cnt_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcounter_onoff___024root__trace_init_top(Vcounter_onoff___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root__trace_init_top\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcounter_onoff___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcounter_onoff___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcounter_onoff___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcounter_onoff___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcounter_onoff___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcounter_onoff___024root__trace_register(Vcounter_onoff___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root__trace_register\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcounter_onoff___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcounter_onoff___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcounter_onoff___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcounter_onoff___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcounter_onoff___024root__trace_const_0_sub_0(Vcounter_onoff___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcounter_onoff___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root__trace_const_0\n"); );
    // Init
    Vcounter_onoff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter_onoff___024root*>(voidSelf);
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcounter_onoff___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcounter_onoff___024root__trace_const_0_sub_0(Vcounter_onoff___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root__trace_const_0_sub_0\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+12,(0U),32);
    bufp->fullIData(oldp+13,(1U),32);
}

VL_ATTR_COLD void Vcounter_onoff___024root__trace_full_0_sub_0(Vcounter_onoff___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcounter_onoff___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root__trace_full_0\n"); );
    // Init
    Vcounter_onoff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter_onoff___024root*>(voidSelf);
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcounter_onoff___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcounter_onoff___024root__trace_full_0_sub_0(Vcounter_onoff___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root__trace_full_0_sub_0\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+3,(vlSelfRef.sw));
    bufp->fullCData(oldp+4,(vlSelfRef.cnt),6);
    bufp->fullBit(oldp+5,(vlSelfRef.counter_onoff__DOT__clk));
    bufp->fullBit(oldp+6,(vlSelfRef.counter_onoff__DOT__rst_n));
    bufp->fullBit(oldp+7,(vlSelfRef.counter_onoff__DOT__sw));
    bufp->fullCData(oldp+8,(vlSelfRef.counter_onoff__DOT__cnt),6);
    bufp->fullBit(oldp+9,(vlSelfRef.counter_onoff__DOT__S));
    bufp->fullBit(oldp+10,(vlSelfRef.counter_onoff__DOT__S_nxt));
    bufp->fullCData(oldp+11,(vlSelfRef.counter_onoff__DOT__cnt_nxt),6);
}
