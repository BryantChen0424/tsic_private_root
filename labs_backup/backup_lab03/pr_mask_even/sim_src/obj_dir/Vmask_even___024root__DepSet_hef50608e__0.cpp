// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmask_even.h for the primary calling header

#include "Vmask_even__pch.h"
#include "Vmask_even___024root.h"

void Vmask_even___024root___ico_sequent__TOP__0(Vmask_even___024root* vlSelf);

void Vmask_even___024root___eval_ico(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___eval_ico\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vmask_even___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmask_even___024root___ico_sequent__TOP__0(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___ico_sequent__TOP__0\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mask_even__DOT__a = vlSelfRef.a;
    vlSelfRef.mask = (0xfU & (IData)(vlSelfRef.a));
    vlSelfRef.even1 = (1U & (~ VL_REDXOR_8(vlSelfRef.a)));
    vlSelfRef.mask_even__DOT__mask = vlSelfRef.mask;
    vlSelfRef.mask_even__DOT__even1 = vlSelfRef.even1;
}

void Vmask_even___024root___eval_triggers__ico(Vmask_even___024root* vlSelf);

bool Vmask_even___024root___eval_phase__ico(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___eval_phase__ico\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmask_even___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vmask_even___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmask_even___024root___eval_act(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___eval_act\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmask_even___024root___eval_nba(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___eval_nba\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmask_even___024root___eval_triggers__act(Vmask_even___024root* vlSelf);

bool Vmask_even___024root___eval_phase__act(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___eval_phase__act\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmask_even___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmask_even___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmask_even___024root___eval_phase__nba(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___eval_phase__nba\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmask_even___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmask_even___024root___dump_triggers__ico(Vmask_even___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmask_even___024root___dump_triggers__nba(Vmask_even___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmask_even___024root___dump_triggers__act(Vmask_even___024root* vlSelf);
#endif  // VL_DEBUG

void Vmask_even___024root___eval(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___eval\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmask_even___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/mask_even.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmask_even___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmask_even___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/mask_even.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmask_even___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/mask_even.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmask_even___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmask_even___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmask_even___024root___eval_debug_assertions(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___eval_debug_assertions\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
