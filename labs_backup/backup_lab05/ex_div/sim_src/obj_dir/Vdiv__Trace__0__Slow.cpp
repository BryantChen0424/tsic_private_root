// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdiv__Syms.h"


VL_ATTR_COLD void Vdiv___024root__trace_init_sub__TOP__0(Vdiv___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root__trace_init_sub__TOP__0\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"div2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"div4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"div8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("div", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"div2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"div4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"div8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdiv___024root__trace_init_top(Vdiv___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root__trace_init_top\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdiv___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdiv___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdiv___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdiv___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdiv___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdiv___024root__trace_register(Vdiv___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root__trace_register\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdiv___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdiv___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdiv___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdiv___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdiv___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root__trace_const_0\n"); );
    // Init
    Vdiv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdiv___024root*>(voidSelf);
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vdiv___024root__trace_full_0_sub_0(Vdiv___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdiv___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root__trace_full_0\n"); );
    // Init
    Vdiv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdiv___024root*>(voidSelf);
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdiv___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdiv___024root__trace_full_0_sub_0(Vdiv___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root__trace_full_0_sub_0\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.a),8);
    bufp->fullCData(oldp+2,(vlSelfRef.div2),8);
    bufp->fullCData(oldp+3,(vlSelfRef.div4),8);
    bufp->fullCData(oldp+4,(vlSelfRef.div8),8);
    bufp->fullCData(oldp+5,(vlSelfRef.div__DOT__a),8);
    bufp->fullCData(oldp+6,(vlSelfRef.div__DOT__div2),8);
    bufp->fullCData(oldp+7,(vlSelfRef.div__DOT__div4),8);
    bufp->fullCData(oldp+8,(vlSelfRef.div__DOT__div8),8);
}
