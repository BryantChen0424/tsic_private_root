// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinner_signal.h for the primary calling header

#include "Vinner_signal__pch.h"
#include "Vinner_signal___024root.h"

void Vinner_signal___024root___ico_sequent__TOP__0(Vinner_signal___024root* vlSelf);

void Vinner_signal___024root___eval_ico(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___eval_ico\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vinner_signal___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vinner_signal___024root___ico_sequent__TOP__0(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___ico_sequent__TOP__0\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.inner_signal__DOT__a = vlSelfRef.a;
    vlSelfRef.inner_signal__DOT__b = vlSelfRef.b;
    vlSelfRef.inner_signal__DOT__and_val = ((IData)(vlSelfRef.a) 
                                            & (IData)(vlSelfRef.b));
    vlSelfRef.o_and = vlSelfRef.inner_signal__DOT__and_val;
    vlSelfRef.o_nand = (1U & (~ (IData)(vlSelfRef.inner_signal__DOT__and_val)));
    vlSelfRef.inner_signal__DOT__or_val = ((IData)(vlSelfRef.a) 
                                           | (IData)(vlSelfRef.b));
    vlSelfRef.o_or = vlSelfRef.inner_signal__DOT__or_val;
    vlSelfRef.o_nor = (1U & (~ (IData)(vlSelfRef.inner_signal__DOT__or_val)));
    vlSelfRef.inner_signal__DOT__o_and = vlSelfRef.o_and;
    vlSelfRef.inner_signal__DOT__o_nand = vlSelfRef.o_nand;
    vlSelfRef.inner_signal__DOT__o_or = vlSelfRef.o_or;
    vlSelfRef.inner_signal__DOT__o_nor = vlSelfRef.o_nor;
}

void Vinner_signal___024root___eval_triggers__ico(Vinner_signal___024root* vlSelf);

bool Vinner_signal___024root___eval_phase__ico(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___eval_phase__ico\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vinner_signal___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vinner_signal___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vinner_signal___024root___eval_act(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___eval_act\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vinner_signal___024root___eval_nba(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___eval_nba\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vinner_signal___024root___eval_triggers__act(Vinner_signal___024root* vlSelf);

bool Vinner_signal___024root___eval_phase__act(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___eval_phase__act\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vinner_signal___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vinner_signal___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vinner_signal___024root___eval_phase__nba(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___eval_phase__nba\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vinner_signal___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinner_signal___024root___dump_triggers__ico(Vinner_signal___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vinner_signal___024root___dump_triggers__nba(Vinner_signal___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vinner_signal___024root___dump_triggers__act(Vinner_signal___024root* vlSelf);
#endif  // VL_DEBUG

void Vinner_signal___024root___eval(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___eval\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vinner_signal___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/inner_signal.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vinner_signal___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vinner_signal___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/inner_signal.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vinner_signal___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/inner_signal.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vinner_signal___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vinner_signal___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vinner_signal___024root___eval_debug_assertions(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___eval_debug_assertions\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.a & 0xfeU)))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY(((vlSelfRef.b & 0xfeU)))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
