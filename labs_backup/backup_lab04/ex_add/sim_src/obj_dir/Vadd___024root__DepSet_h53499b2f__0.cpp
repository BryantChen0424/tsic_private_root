// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd.h for the primary calling header

#include "Vadd__pch.h"
#include "Vadd___024root.h"

void Vadd___024root___ico_sequent__TOP__0(Vadd___024root* vlSelf);

void Vadd___024root___eval_ico(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval_ico\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vadd___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vadd___024root___ico_sequent__TOP__0(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___ico_sequent__TOP__0\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.add__DOT__a = vlSelfRef.a;
    vlSelfRef.add__DOT__b = vlSelfRef.b;
    vlSelfRef.add__DOT__c = vlSelfRef.c;
    vlSelfRef.sum_a5 = (0x1fU & ((IData)(5U) + (IData)(vlSelfRef.a)));
    vlSelfRef.sum_b5 = (0x1fU & ((IData)(5U) + (IData)(vlSelfRef.b)));
    vlSelfRef.sum_c5 = (0x1fU & ((IData)(5U) + (IData)(vlSelfRef.c)));
    vlSelfRef.sum_ab = (0x1fU & ((IData)(vlSelfRef.a) 
                                 + (IData)(vlSelfRef.b)));
    vlSelfRef.add__DOT__sum_a5 = vlSelfRef.sum_a5;
    vlSelfRef.add__DOT__sum_b5 = vlSelfRef.sum_b5;
    vlSelfRef.add__DOT__sum_c5 = vlSelfRef.sum_c5;
    vlSelfRef.add__DOT__sum_ab = vlSelfRef.sum_ab;
}

void Vadd___024root___eval_triggers__ico(Vadd___024root* vlSelf);

bool Vadd___024root___eval_phase__ico(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval_phase__ico\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vadd___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vadd___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vadd___024root___eval_act(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval_act\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vadd___024root___eval_nba(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval_nba\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vadd___024root___eval_triggers__act(Vadd___024root* vlSelf);

bool Vadd___024root___eval_phase__act(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval_phase__act\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vadd___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vadd___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vadd___024root___eval_phase__nba(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval_phase__nba\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vadd___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadd___024root___dump_triggers__ico(Vadd___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vadd___024root___dump_triggers__nba(Vadd___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vadd___024root___dump_triggers__act(Vadd___024root* vlSelf);
#endif  // VL_DEBUG

void Vadd___024root___eval(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vadd___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/add.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vadd___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vadd___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/add.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vadd___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/add.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vadd___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vadd___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vadd___024root___eval_debug_assertions(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval_debug_assertions\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.a & 0xf0U)))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY(((vlSelfRef.b & 0xf0U)))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY(((vlSelfRef.c & 0xf0U)))) {
        Verilated::overWidthError("c");}
}
#endif  // VL_DEBUG
