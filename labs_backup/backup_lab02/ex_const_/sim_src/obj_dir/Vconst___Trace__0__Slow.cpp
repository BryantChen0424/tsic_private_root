// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconst___Syms.h"


VL_ATTR_COLD void Vconst____024root__trace_init_sub__TOP__0(Vconst____024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst____024root__trace_init_sub__TOP__0\n"); );
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"ot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"of",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"o1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"o2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"o16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"o_auto_expand",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"o_auto_cut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"o_neg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("const_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+9,0,"ot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"of",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"o1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"o2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"o16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"o_auto_expand",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"o_auto_cut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"o_neg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconst____024root__trace_init_top(Vconst____024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst____024root__trace_init_top\n"); );
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vconst____024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vconst____024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vconst____024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconst____024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vconst____024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vconst____024root__trace_register(Vconst____024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst____024root__trace_register\n"); );
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vconst____024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vconst____024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vconst____024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vconst____024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vconst____024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst____024root__trace_const_0\n"); );
    // Init
    Vconst____024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconst____024root*>(voidSelf);
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vconst____024root__trace_full_0_sub_0(Vconst____024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vconst____024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst____024root__trace_full_0\n"); );
    // Init
    Vconst____024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconst____024root*>(voidSelf);
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vconst____024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vconst____024root__trace_full_0_sub_0(Vconst____024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconst____024root__trace_full_0_sub_0\n"); );
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.ot));
    bufp->fullBit(oldp+2,(vlSelfRef.of));
    bufp->fullCData(oldp+3,(vlSelfRef.o1),8);
    bufp->fullCData(oldp+4,(vlSelfRef.o2),8);
    bufp->fullCData(oldp+5,(vlSelfRef.o16),8);
    bufp->fullCData(oldp+6,(vlSelfRef.o_auto_expand),8);
    bufp->fullCData(oldp+7,(vlSelfRef.o_auto_cut),8);
    bufp->fullCData(oldp+8,(vlSelfRef.o_neg),8);
    bufp->fullBit(oldp+9,(vlSelfRef.const___DOT__ot));
    bufp->fullBit(oldp+10,(vlSelfRef.const___DOT__of));
    bufp->fullCData(oldp+11,(vlSelfRef.const___DOT__o1),8);
    bufp->fullCData(oldp+12,(vlSelfRef.const___DOT__o2),8);
    bufp->fullCData(oldp+13,(vlSelfRef.const___DOT__o16),8);
    bufp->fullCData(oldp+14,(vlSelfRef.const___DOT__o_auto_expand),8);
    bufp->fullCData(oldp+15,(vlSelfRef.const___DOT__o_auto_cut),8);
    bufp->fullCData(oldp+16,(vlSelfRef.const___DOT__o_neg),8);
}
