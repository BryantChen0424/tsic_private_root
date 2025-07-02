// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbetween__Syms.h"


VL_ATTR_COLD void Vbetween___024root__trace_init_sub__TOP__0(Vbetween___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root__trace_init_sub__TOP__0\n"); );
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2,0,"bt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"ubt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("between", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+5,0,"bt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"ubt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbetween___024root__trace_init_top(Vbetween___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root__trace_init_top\n"); );
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbetween___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbetween___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vbetween___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbetween___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbetween___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbetween___024root__trace_register(Vbetween___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root__trace_register\n"); );
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vbetween___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vbetween___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vbetween___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vbetween___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbetween___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root__trace_const_0\n"); );
    // Init
    Vbetween___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbetween___024root*>(voidSelf);
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vbetween___024root__trace_full_0_sub_0(Vbetween___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbetween___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root__trace_full_0\n"); );
    // Init
    Vbetween___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbetween___024root*>(voidSelf);
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbetween___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbetween___024root__trace_full_0_sub_0(Vbetween___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root__trace_full_0_sub_0\n"); );
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.a),8);
    bufp->fullBit(oldp+2,(vlSelfRef.bt));
    bufp->fullBit(oldp+3,(vlSelfRef.ubt));
    bufp->fullCData(oldp+4,(vlSelfRef.between__DOT__a),8);
    bufp->fullBit(oldp+5,(vlSelfRef.between__DOT__bt));
    bufp->fullBit(oldp+6,(vlSelfRef.between__DOT__ubt));
}
