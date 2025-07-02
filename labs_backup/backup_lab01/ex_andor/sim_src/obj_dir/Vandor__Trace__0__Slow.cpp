// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vandor__Syms.h"


VL_ATTR_COLD void Vandor___024root__trace_init_sub__TOP__0(Vandor___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vandor___024root__trace_init_sub__TOP__0\n"); );
    Vandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"o_and",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"o_or",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("andor", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+5,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"o_and",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"o_or",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vandor___024root__trace_init_top(Vandor___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vandor___024root__trace_init_top\n"); );
    Vandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vandor___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vandor___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vandor___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vandor___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vandor___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vandor___024root__trace_register(Vandor___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vandor___024root__trace_register\n"); );
    Vandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vandor___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vandor___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vandor___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vandor___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vandor___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vandor___024root__trace_const_0\n"); );
    // Init
    Vandor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vandor___024root*>(voidSelf);
    Vandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vandor___024root__trace_full_0_sub_0(Vandor___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vandor___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vandor___024root__trace_full_0\n"); );
    // Init
    Vandor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vandor___024root*>(voidSelf);
    Vandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vandor___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vandor___024root__trace_full_0_sub_0(Vandor___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vandor___024root__trace_full_0_sub_0\n"); );
    Vandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.a));
    bufp->fullBit(oldp+2,(vlSelfRef.b));
    bufp->fullBit(oldp+3,(vlSelfRef.o_and));
    bufp->fullBit(oldp+4,(vlSelfRef.o_or));
    bufp->fullBit(oldp+5,(vlSelfRef.andor__DOT__a));
    bufp->fullBit(oldp+6,(vlSelfRef.andor__DOT__b));
    bufp->fullBit(oldp+7,(vlSelfRef.andor__DOT__o_and));
    bufp->fullBit(oldp+8,(vlSelfRef.andor__DOT__o_or));
}
