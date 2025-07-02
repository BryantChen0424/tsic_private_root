// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vops__Syms.h"


VL_ATTR_COLD void Vops___024root__trace_init_sub__TOP__0(Vops___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root__trace_init_sub__TOP__0\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+4,0,"o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+5,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ops", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+10,0,"overflow",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"sa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"sub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vops___024root__trace_init_top(Vops___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root__trace_init_top\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vops___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vops___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vops___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vops___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vops___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vops___024root__trace_register(Vops___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root__trace_register\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vops___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vops___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vops___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vops___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vops___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root__trace_const_0\n"); );
    // Init
    Vops___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vops___024root*>(voidSelf);
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vops___024root__trace_full_0_sub_0(Vops___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vops___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root__trace_full_0\n"); );
    // Init
    Vops___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vops___024root*>(voidSelf);
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vops___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vops___024root__trace_full_0_sub_0(Vops___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root__trace_full_0_sub_0\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.a),8);
    bufp->fullCData(oldp+2,(vlSelfRef.b),8);
    bufp->fullCData(oldp+3,(vlSelfRef.op),2);
    bufp->fullCData(oldp+4,(vlSelfRef.o),8);
    bufp->fullBit(oldp+5,(vlSelfRef.overflow));
    bufp->fullCData(oldp+6,(vlSelfRef.ops__DOT__a),8);
    bufp->fullCData(oldp+7,(vlSelfRef.ops__DOT__b),8);
    bufp->fullCData(oldp+8,(vlSelfRef.ops__DOT__op),2);
    bufp->fullCData(oldp+9,(vlSelfRef.ops__DOT__o),8);
    bufp->fullBit(oldp+10,(vlSelfRef.ops__DOT__overflow));
    bufp->fullCData(oldp+11,(vlSelfRef.ops__DOT__sa),8);
    bufp->fullCData(oldp+12,(vlSelfRef.ops__DOT__sb),8);
    bufp->fullCData(oldp+13,(vlSelfRef.ops__DOT__add_result),8);
    bufp->fullCData(oldp+14,(vlSelfRef.ops__DOT__sub_result),8);
}
