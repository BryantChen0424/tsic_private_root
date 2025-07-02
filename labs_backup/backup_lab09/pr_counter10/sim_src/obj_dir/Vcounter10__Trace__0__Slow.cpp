// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcounter10__Syms.h"


VL_ATTR_COLD void Vcounter10___024root__trace_init_sub__TOP__0(Vcounter10___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter10___024root__trace_init_sub__TOP__0\n"); );
    Vcounter10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"cnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("counter10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"cnt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"cnt_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcounter10___024root__trace_init_top(Vcounter10___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter10___024root__trace_init_top\n"); );
    Vcounter10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcounter10___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcounter10___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcounter10___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcounter10___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcounter10___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcounter10___024root__trace_register(Vcounter10___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter10___024root__trace_register\n"); );
    Vcounter10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcounter10___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcounter10___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcounter10___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcounter10___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcounter10___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter10___024root__trace_const_0\n"); );
    // Init
    Vcounter10___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter10___024root*>(voidSelf);
    Vcounter10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vcounter10___024root__trace_full_0_sub_0(Vcounter10___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcounter10___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter10___024root__trace_full_0\n"); );
    // Init
    Vcounter10___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter10___024root*>(voidSelf);
    Vcounter10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcounter10___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcounter10___024root__trace_full_0_sub_0(Vcounter10___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter10___024root__trace_full_0_sub_0\n"); );
    Vcounter10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst_n));
    bufp->fullCData(oldp+3,(vlSelfRef.cnt),4);
    bufp->fullBit(oldp+4,(vlSelfRef.counter10__DOT__clk));
    bufp->fullBit(oldp+5,(vlSelfRef.counter10__DOT__rst_n));
    bufp->fullCData(oldp+6,(vlSelfRef.counter10__DOT__cnt),4);
    bufp->fullCData(oldp+7,(vlSelfRef.counter10__DOT__cnt_nxt),4);
}
