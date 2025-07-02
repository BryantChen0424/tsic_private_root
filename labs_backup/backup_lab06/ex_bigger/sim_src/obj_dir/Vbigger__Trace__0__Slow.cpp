// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbigger__Syms.h"


VL_ATTR_COLD void Vbigger___024root__trace_init_sub__TOP__0(Vbigger___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root__trace_init_sub__TOP__0\n"); );
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"bgt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"seq_bgt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bigger", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+9,0,"bgt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"seq_bgt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbigger___024root__trace_init_top(Vbigger___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root__trace_init_top\n"); );
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbigger___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbigger___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vbigger___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbigger___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbigger___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbigger___024root__trace_register(Vbigger___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root__trace_register\n"); );
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vbigger___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vbigger___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vbigger___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vbigger___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbigger___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root__trace_const_0\n"); );
    // Init
    Vbigger___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbigger___024root*>(voidSelf);
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vbigger___024root__trace_full_0_sub_0(Vbigger___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbigger___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root__trace_full_0\n"); );
    // Init
    Vbigger___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbigger___024root*>(voidSelf);
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbigger___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbigger___024root__trace_full_0_sub_0(Vbigger___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root__trace_full_0_sub_0\n"); );
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.a),4);
    bufp->fullCData(oldp+2,(vlSelfRef.b),4);
    bufp->fullCData(oldp+3,(vlSelfRef.c),4);
    bufp->fullBit(oldp+4,(vlSelfRef.bgt));
    bufp->fullBit(oldp+5,(vlSelfRef.seq_bgt));
    bufp->fullCData(oldp+6,(vlSelfRef.bigger__DOT__a),4);
    bufp->fullCData(oldp+7,(vlSelfRef.bigger__DOT__b),4);
    bufp->fullCData(oldp+8,(vlSelfRef.bigger__DOT__c),4);
    bufp->fullBit(oldp+9,(vlSelfRef.bigger__DOT__bgt));
    bufp->fullBit(oldp+10,(vlSelfRef.bigger__DOT__seq_bgt));
}
