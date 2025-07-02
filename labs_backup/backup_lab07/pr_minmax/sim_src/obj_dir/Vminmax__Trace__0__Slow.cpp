// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vminmax__Syms.h"


VL_ATTR_COLD void Vminmax___024root__trace_init_sub__TOP__0(Vminmax___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root__trace_init_sub__TOP__0\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+3,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("minmax", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+7,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vminmax___024root__trace_init_top(Vminmax___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root__trace_init_top\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vminmax___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vminmax___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vminmax___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vminmax___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vminmax___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vminmax___024root__trace_register(Vminmax___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root__trace_register\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vminmax___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vminmax___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vminmax___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vminmax___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vminmax___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root__trace_const_0\n"); );
    // Init
    Vminmax___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminmax___024root*>(voidSelf);
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vminmax___024root__trace_full_0_sub_0(Vminmax___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vminmax___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root__trace_full_0\n"); );
    // Init
    Vminmax___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminmax___024root*>(voidSelf);
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vminmax___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vminmax___024root__trace_full_0_sub_0(Vminmax___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root__trace_full_0_sub_0\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.a),8);
    bufp->fullCData(oldp+2,(vlSelfRef.b),8);
    bufp->fullBit(oldp+3,(vlSelfRef.s));
    bufp->fullCData(oldp+4,(vlSelfRef.o),8);
    bufp->fullCData(oldp+5,(vlSelfRef.minmax__DOT__a),8);
    bufp->fullCData(oldp+6,(vlSelfRef.minmax__DOT__b),8);
    bufp->fullBit(oldp+7,(vlSelfRef.minmax__DOT__s));
    bufp->fullCData(oldp+8,(vlSelfRef.minmax__DOT__o),8);
}
