// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmath__Syms.h"


VL_ATTR_COLD void Vmath___024root__trace_init_sub__TOP__0(Vmath___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root__trace_init_sub__TOP__0\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"mul2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"div2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"mod2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"mul4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"div4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"mod4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("math", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"mul2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"div2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"mod2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"mul4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"div4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"mod4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmath___024root__trace_init_top(Vmath___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root__trace_init_top\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmath___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmath___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmath___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmath___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmath___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmath___024root__trace_register(Vmath___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root__trace_register\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmath___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmath___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmath___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmath___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmath___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root__trace_const_0\n"); );
    // Init
    Vmath___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmath___024root*>(voidSelf);
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vmath___024root__trace_full_0_sub_0(Vmath___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmath___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root__trace_full_0\n"); );
    // Init
    Vmath___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmath___024root*>(voidSelf);
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmath___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmath___024root__trace_full_0_sub_0(Vmath___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root__trace_full_0_sub_0\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.a),4);
    bufp->fullCData(oldp+2,(vlSelfRef.mul2),8);
    bufp->fullCData(oldp+3,(vlSelfRef.div2),4);
    bufp->fullCData(oldp+4,(vlSelfRef.mod2),4);
    bufp->fullCData(oldp+5,(vlSelfRef.mul4),8);
    bufp->fullCData(oldp+6,(vlSelfRef.div4),4);
    bufp->fullCData(oldp+7,(vlSelfRef.mod4),4);
    bufp->fullCData(oldp+8,(vlSelfRef.math__DOT__a),4);
    bufp->fullCData(oldp+9,(vlSelfRef.math__DOT__mul2),8);
    bufp->fullCData(oldp+10,(vlSelfRef.math__DOT__div2),4);
    bufp->fullCData(oldp+11,(vlSelfRef.math__DOT__mod2),4);
    bufp->fullCData(oldp+12,(vlSelfRef.math__DOT__mul4),8);
    bufp->fullCData(oldp+13,(vlSelfRef.math__DOT__div4),4);
    bufp->fullCData(oldp+14,(vlSelfRef.math__DOT__mod4),4);
}
