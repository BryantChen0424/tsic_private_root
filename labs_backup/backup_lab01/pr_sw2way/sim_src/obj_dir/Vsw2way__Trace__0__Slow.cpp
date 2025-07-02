// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsw2way__Syms.h"


VL_ATTR_COLD void Vsw2way___024root__trace_init_sub__TOP__0(Vsw2way___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root__trace_init_sub__TOP__0\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"na_and_nb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"sw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("sw2way", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+5,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"na_and_nb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"sw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"not_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"not_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsw2way___024root__trace_init_top(Vsw2way___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root__trace_init_top\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsw2way___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsw2way___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsw2way___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsw2way___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsw2way___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsw2way___024root__trace_register(Vsw2way___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root__trace_register\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsw2way___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vsw2way___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vsw2way___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vsw2way___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsw2way___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root__trace_const_0\n"); );
    // Init
    Vsw2way___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsw2way___024root*>(voidSelf);
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vsw2way___024root__trace_full_0_sub_0(Vsw2way___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsw2way___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root__trace_full_0\n"); );
    // Init
    Vsw2way___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsw2way___024root*>(voidSelf);
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsw2way___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsw2way___024root__trace_full_0_sub_0(Vsw2way___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root__trace_full_0_sub_0\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.a));
    bufp->fullBit(oldp+2,(vlSelfRef.b));
    bufp->fullBit(oldp+3,(vlSelfRef.na_and_nb));
    bufp->fullBit(oldp+4,(vlSelfRef.sw));
    bufp->fullBit(oldp+5,(vlSelfRef.sw2way__DOT__a));
    bufp->fullBit(oldp+6,(vlSelfRef.sw2way__DOT__b));
    bufp->fullBit(oldp+7,(vlSelfRef.sw2way__DOT__na_and_nb));
    bufp->fullBit(oldp+8,(vlSelfRef.sw2way__DOT__sw));
    bufp->fullBit(oldp+9,(vlSelfRef.sw2way__DOT__not_a));
    bufp->fullBit(oldp+10,(vlSelfRef.sw2way__DOT__not_b));
}
