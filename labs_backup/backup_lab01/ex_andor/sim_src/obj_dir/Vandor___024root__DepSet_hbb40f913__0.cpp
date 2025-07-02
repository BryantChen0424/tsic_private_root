// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vandor.h for the primary calling header

#include "Vandor__pch.h"
#include "Vandor___024root.h"

void Vandor___024root___ico_sequent__TOP__0(Vandor___024root* vlSelf);

void Vandor___024root___eval_ico(Vandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vandor___024root___eval_ico\n"); );
    Vandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vandor___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vandor___024root___ico_sequent__TOP__0(Vandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vandor___024root___ico_sequent__TOP__0\n"); );
    Vandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.andor__DOT__a = vlSelfRef.a;
    vlSelfRef.andor__DOT__b = vlSelfRef.b;
    vlSelfRef.o_and = ((IData)(vlSelfRef.a) & (IData)(vlSelfRef.b));
    vlSelfRef.o_or = ((IData)(vlSelfRef.a) | (IData)(vlSelfRef.b));
    vlSelfRef.andor__DOT__o_and = vlSelfRef.o_and;
    vlSelfRef.andor__DOT__o_or = vlSelfRef.o_or;
}

void Vandor___024root___eval_triggers__ico(Vandor___024root* vlSelf);

bool Vandor___024root___eval_phase__ico(Vandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vandor___024root___eval_phase__ico\n"); );
    Vandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vandor___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vandor___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vandor___024root___eval_act(Vandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vandor___024root___eval_act\n"); );
    Vandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vandor___024root___eval_nba(Vandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vandor___024root___eval_nba\n"); );
    Vandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vandor___024root___eval_triggers__act(Vandor___024root* vlSelf);

bool Vandor___024root___eval_phase__act(Vandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vandor___024root___eval_phase__act\n"); );
    Vandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vandor___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vandor___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vandor___024root___eval_phase__nba(Vandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vandor___024root___eval_phase__nba\n"); );
    Vandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vandor___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vandor___024root___dump_triggers__ico(Vandor___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vandor___024root___dump_triggers__nba(Vandor___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vandor___024root___dump_triggers__act(Vandor___024root* vlSelf);
#endif  // VL_DEBUG

void Vandor___024root___eval(Vandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vandor___024root___eval\n"); );
    Vandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vandor___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/andor.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vandor___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vandor___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/andor.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vandor___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/andor.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vandor___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vandor___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vandor___024root___eval_debug_assertions(Vandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vandor___024root___eval_debug_assertions\n"); );
    Vandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.a & 0xfeU)))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY(((vlSelfRef.b & 0xfeU)))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
