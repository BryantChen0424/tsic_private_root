// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vinner_signal__Syms.h"


VL_ATTR_COLD void Vinner_signal___024root__trace_init_sub__TOP__0(Vinner_signal___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root__trace_init_sub__TOP__0\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"o_and",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"o_or",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"o_nand",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"o_nor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("inner_signal", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"o_and",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"o_or",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"o_nand",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"o_nor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"and_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"or_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vinner_signal___024root__trace_init_top(Vinner_signal___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root__trace_init_top\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vinner_signal___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vinner_signal___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vinner_signal___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vinner_signal___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vinner_signal___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vinner_signal___024root__trace_register(Vinner_signal___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root__trace_register\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vinner_signal___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vinner_signal___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vinner_signal___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vinner_signal___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vinner_signal___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root__trace_const_0\n"); );
    // Init
    Vinner_signal___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinner_signal___024root*>(voidSelf);
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vinner_signal___024root__trace_full_0_sub_0(Vinner_signal___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vinner_signal___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root__trace_full_0\n"); );
    // Init
    Vinner_signal___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinner_signal___024root*>(voidSelf);
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vinner_signal___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vinner_signal___024root__trace_full_0_sub_0(Vinner_signal___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root__trace_full_0_sub_0\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.a));
    bufp->fullBit(oldp+2,(vlSelfRef.b));
    bufp->fullBit(oldp+3,(vlSelfRef.o_and));
    bufp->fullBit(oldp+4,(vlSelfRef.o_or));
    bufp->fullBit(oldp+5,(vlSelfRef.o_nand));
    bufp->fullBit(oldp+6,(vlSelfRef.o_nor));
    bufp->fullBit(oldp+7,(vlSelfRef.inner_signal__DOT__a));
    bufp->fullBit(oldp+8,(vlSelfRef.inner_signal__DOT__b));
    bufp->fullBit(oldp+9,(vlSelfRef.inner_signal__DOT__o_and));
    bufp->fullBit(oldp+10,(vlSelfRef.inner_signal__DOT__o_or));
    bufp->fullBit(oldp+11,(vlSelfRef.inner_signal__DOT__o_nand));
    bufp->fullBit(oldp+12,(vlSelfRef.inner_signal__DOT__o_nor));
    bufp->fullBit(oldp+13,(vlSelfRef.inner_signal__DOT__and_val));
    bufp->fullBit(oldp+14,(vlSelfRef.inner_signal__DOT__or_val));
}
