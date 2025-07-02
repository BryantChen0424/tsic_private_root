// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvandor.h for the primary calling header

#include "Vvandor__pch.h"
#include "Vvandor___024root.h"

void Vvandor___024root___ico_sequent__TOP__0(Vvandor___024root* vlSelf);

void Vvandor___024root___eval_ico(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___eval_ico\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vvandor___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vvandor___024root___ico_sequent__TOP__0(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___ico_sequent__TOP__0\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.vandor__DOT__a = vlSelfRef.a;
    vlSelfRef.vandor__DOT__b = vlSelfRef.b;
    vlSelfRef.and_a = (IData)((0xfU == (IData)(vlSelfRef.a)));
    vlSelfRef.or_a = (0U != (IData)(vlSelfRef.a));
    vlSelfRef.or_ab = ((IData)(vlSelfRef.a) | (IData)(vlSelfRef.b));
    vlSelfRef.and_ab = ((IData)(vlSelfRef.a) & (IData)(vlSelfRef.b));
    vlSelfRef.vandor__DOT__and_a = vlSelfRef.and_a;
    vlSelfRef.vandor__DOT__or_a = vlSelfRef.or_a;
    vlSelfRef.vandor__DOT__or_ab = vlSelfRef.or_ab;
    vlSelfRef.vandor__DOT__and_ab = vlSelfRef.and_ab;
}

void Vvandor___024root___eval_triggers__ico(Vvandor___024root* vlSelf);

bool Vvandor___024root___eval_phase__ico(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___eval_phase__ico\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vvandor___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vvandor___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vvandor___024root___eval_act(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___eval_act\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vvandor___024root___eval_nba(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___eval_nba\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vvandor___024root___eval_triggers__act(Vvandor___024root* vlSelf);

bool Vvandor___024root___eval_phase__act(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___eval_phase__act\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vvandor___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vvandor___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vvandor___024root___eval_phase__nba(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___eval_phase__nba\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vvandor___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvandor___024root___dump_triggers__ico(Vvandor___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vvandor___024root___dump_triggers__nba(Vvandor___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vvandor___024root___dump_triggers__act(Vvandor___024root* vlSelf);
#endif  // VL_DEBUG

void Vvandor___024root___eval(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___eval\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vvandor___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/vandor.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vvandor___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vvandor___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/vandor.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vvandor___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/vandor.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vvandor___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vvandor___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vvandor___024root___eval_debug_assertions(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___eval_debug_assertions\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.a & 0xf0U)))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY(((vlSelfRef.b & 0xf0U)))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
