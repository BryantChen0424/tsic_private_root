// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtry_const__Syms.h"


VL_ATTR_COLD void Vtry_const___024root__trace_init_sub__TOP__0(Vtry_const___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root__trace_init_sub__TOP__0\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"o16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("try_const", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"o16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtry_const___024root__trace_init_top(Vtry_const___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root__trace_init_top\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtry_const___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtry_const___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtry_const___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtry_const___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtry_const___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtry_const___024root__trace_register(Vtry_const___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root__trace_register\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtry_const___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtry_const___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtry_const___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtry_const___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtry_const___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root__trace_const_0\n"); );
    // Init
    Vtry_const___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtry_const___024root*>(voidSelf);
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtry_const___024root__trace_full_0_sub_0(Vtry_const___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtry_const___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root__trace_full_0\n"); );
    // Init
    Vtry_const___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtry_const___024root*>(voidSelf);
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtry_const___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtry_const___024root__trace_full_0_sub_0(Vtry_const___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root__trace_full_0_sub_0\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelfRef.o16),16);
    bufp->fullSData(oldp+2,(vlSelfRef.try_const__DOT__o16),16);
}
