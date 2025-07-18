// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmask_even.h for the primary calling header

#include "Vmask_even__pch.h"
#include "Vmask_even___024root.h"

VL_ATTR_COLD void Vmask_even___024root___eval_static(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___eval_static\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmask_even___024root___eval_initial(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___eval_initial\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmask_even___024root___eval_final(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___eval_final\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmask_even___024root___dump_triggers__stl(Vmask_even___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmask_even___024root___eval_phase__stl(Vmask_even___024root* vlSelf);

VL_ATTR_COLD void Vmask_even___024root___eval_settle(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___eval_settle\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vmask_even___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("design_src/mask_even.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmask_even___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmask_even___024root___dump_triggers__stl(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___dump_triggers__stl\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vmask_even___024root___ico_sequent__TOP__0(Vmask_even___024root* vlSelf);

VL_ATTR_COLD void Vmask_even___024root___eval_stl(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___eval_stl\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmask_even___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmask_even___024root___eval_triggers__stl(Vmask_even___024root* vlSelf);

VL_ATTR_COLD bool Vmask_even___024root___eval_phase__stl(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___eval_phase__stl\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmask_even___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmask_even___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmask_even___024root___dump_triggers__ico(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___dump_triggers__ico\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmask_even___024root___dump_triggers__act(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___dump_triggers__act\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmask_even___024root___dump_triggers__nba(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___dump_triggers__nba\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmask_even___024root___ctor_var_reset(Vmask_even___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmask_even___024root___ctor_var_reset\n"); );
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->mask = VL_RAND_RESET_I(8);
    vlSelf->even1 = VL_RAND_RESET_I(1);
    vlSelf->mask_even__DOT__a = VL_RAND_RESET_I(8);
    vlSelf->mask_even__DOT__mask = VL_RAND_RESET_I(8);
    vlSelf->mask_even__DOT__even1 = VL_RAND_RESET_I(1);
}
