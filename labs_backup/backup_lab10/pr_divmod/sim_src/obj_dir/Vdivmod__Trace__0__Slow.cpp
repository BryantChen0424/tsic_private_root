// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdivmod__Syms.h"


VL_ATTR_COLD void Vdivmod___024root__trace_init_sub__TOP__0(Vdivmod___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root__trace_init_sub__TOP__0\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"dividend",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"divisor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+6,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"quotient",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"remainder",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("divmod", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+9,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"dividend",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"divisor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+14,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"quotient",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"remainder",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"BUSY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"OUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"S_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+19,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"a_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"b_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"q_nxt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdivmod___024root__trace_init_top(Vdivmod___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root__trace_init_top\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdivmod___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdivmod___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdivmod___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdivmod___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdivmod___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdivmod___024root__trace_register(Vdivmod___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root__trace_register\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdivmod___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdivmod___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdivmod___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdivmod___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdivmod___024root__trace_const_0_sub_0(Vdivmod___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdivmod___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root__trace_const_0\n"); );
    // Init
    Vdivmod___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdivmod___024root*>(voidSelf);
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdivmod___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdivmod___024root__trace_const_0_sub_0(Vdivmod___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root__trace_const_0_sub_0\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+25,(0U),32);
    bufp->fullIData(oldp+26,(1U),32);
    bufp->fullIData(oldp+27,(2U),32);
}

VL_ATTR_COLD void Vdivmod___024root__trace_full_0_sub_0(Vdivmod___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdivmod___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root__trace_full_0\n"); );
    // Init
    Vdivmod___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdivmod___024root*>(voidSelf);
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdivmod___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdivmod___024root__trace_full_0_sub_0(Vdivmod___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root__trace_full_0_sub_0\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.rst_n));
    bufp->fullBit(oldp+3,(vlSelfRef.valid));
    bufp->fullCData(oldp+4,(vlSelfRef.dividend),8);
    bufp->fullCData(oldp+5,(vlSelfRef.divisor),8);
    bufp->fullBit(oldp+6,(vlSelfRef.ready));
    bufp->fullCData(oldp+7,(vlSelfRef.quotient),8);
    bufp->fullCData(oldp+8,(vlSelfRef.remainder),8);
    bufp->fullBit(oldp+9,(vlSelfRef.divmod__DOT__clk));
    bufp->fullBit(oldp+10,(vlSelfRef.divmod__DOT__rst_n));
    bufp->fullBit(oldp+11,(vlSelfRef.divmod__DOT__valid));
    bufp->fullCData(oldp+12,(vlSelfRef.divmod__DOT__dividend),8);
    bufp->fullCData(oldp+13,(vlSelfRef.divmod__DOT__divisor),8);
    bufp->fullBit(oldp+14,(vlSelfRef.divmod__DOT__ready));
    bufp->fullCData(oldp+15,(vlSelfRef.divmod__DOT__quotient),8);
    bufp->fullCData(oldp+16,(vlSelfRef.divmod__DOT__remainder),8);
    bufp->fullCData(oldp+17,(vlSelfRef.divmod__DOT__S),2);
    bufp->fullCData(oldp+18,(vlSelfRef.divmod__DOT__S_nxt),2);
    bufp->fullCData(oldp+19,(vlSelfRef.divmod__DOT__a),8);
    bufp->fullCData(oldp+20,(vlSelfRef.divmod__DOT__a_nxt),8);
    bufp->fullCData(oldp+21,(vlSelfRef.divmod__DOT__b),8);
    bufp->fullCData(oldp+22,(vlSelfRef.divmod__DOT__b_nxt),8);
    bufp->fullCData(oldp+23,(vlSelfRef.divmod__DOT__q),8);
    bufp->fullCData(oldp+24,(vlSelfRef.divmod__DOT__q_nxt),8);
}
