// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrelu__Syms.h"


VL_ATTR_COLD void Vrelu___024root__trace_init_sub__TOP__0(Vrelu___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrelu___024root__trace_init_sub__TOP__0\n"); );
    Vrelu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"relu_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("relu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"relu_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vrelu___024root__trace_init_top(Vrelu___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrelu___024root__trace_init_top\n"); );
    Vrelu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrelu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vrelu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vrelu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrelu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrelu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vrelu___024root__trace_register(Vrelu___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrelu___024root__trace_register\n"); );
    Vrelu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vrelu___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vrelu___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vrelu___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vrelu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vrelu___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrelu___024root__trace_const_0\n"); );
    // Init
    Vrelu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrelu___024root*>(voidSelf);
    Vrelu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vrelu___024root__trace_full_0_sub_0(Vrelu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vrelu___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrelu___024root__trace_full_0\n"); );
    // Init
    Vrelu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrelu___024root*>(voidSelf);
    Vrelu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vrelu___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vrelu___024root__trace_full_0_sub_0(Vrelu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrelu___024root__trace_full_0_sub_0\n"); );
    Vrelu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.a),8);
    bufp->fullCData(oldp+2,(vlSelfRef.relu_a),8);
    bufp->fullCData(oldp+3,(vlSelfRef.relu__DOT__a),8);
    bufp->fullCData(oldp+4,(vlSelfRef.relu__DOT__relu_a),8);
}
