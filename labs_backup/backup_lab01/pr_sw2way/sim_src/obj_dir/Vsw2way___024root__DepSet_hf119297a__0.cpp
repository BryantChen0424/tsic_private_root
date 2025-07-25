// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsw2way.h for the primary calling header

#include "Vsw2way__pch.h"
#include "Vsw2way___024root.h"

void Vsw2way___024root___ico_sequent__TOP__0(Vsw2way___024root* vlSelf);

void Vsw2way___024root___eval_ico(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___eval_ico\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vsw2way___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsw2way___024root___ico_sequent__TOP__0(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___ico_sequent__TOP__0\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sw2way__DOT__a = vlSelfRef.a;
    vlSelfRef.sw2way__DOT__b = vlSelfRef.b;
    vlSelfRef.sw2way__DOT__not_a = (1U & (~ (IData)(vlSelfRef.a)));
    vlSelfRef.sw2way__DOT__not_b = (1U & (~ (IData)(vlSelfRef.b)));
    vlSelfRef.na_and_nb = ((IData)(vlSelfRef.sw2way__DOT__not_a) 
                           & (IData)(vlSelfRef.sw2way__DOT__not_b));
    vlSelfRef.sw = (((IData)(vlSelfRef.sw2way__DOT__not_a) 
                     & (IData)(vlSelfRef.b)) | ((IData)(vlSelfRef.a) 
                                                & (IData)(vlSelfRef.sw2way__DOT__not_b)));
    vlSelfRef.sw2way__DOT__na_and_nb = vlSelfRef.na_and_nb;
    vlSelfRef.sw2way__DOT__sw = vlSelfRef.sw;
}

void Vsw2way___024root___eval_triggers__ico(Vsw2way___024root* vlSelf);

bool Vsw2way___024root___eval_phase__ico(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___eval_phase__ico\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vsw2way___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vsw2way___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vsw2way___024root___eval_act(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___eval_act\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsw2way___024root___eval_nba(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___eval_nba\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsw2way___024root___eval_triggers__act(Vsw2way___024root* vlSelf);

bool Vsw2way___024root___eval_phase__act(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___eval_phase__act\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsw2way___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsw2way___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsw2way___024root___eval_phase__nba(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___eval_phase__nba\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsw2way___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsw2way___024root___dump_triggers__ico(Vsw2way___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsw2way___024root___dump_triggers__nba(Vsw2way___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsw2way___024root___dump_triggers__act(Vsw2way___024root* vlSelf);
#endif  // VL_DEBUG

void Vsw2way___024root___eval(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___eval\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vsw2way___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/sw2way.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vsw2way___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsw2way___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/sw2way.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsw2way___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/sw2way.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsw2way___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsw2way___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsw2way___024root___eval_debug_assertions(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___eval_debug_assertions\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.a & 0xfeU)))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY(((vlSelfRef.b & 0xfeU)))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
