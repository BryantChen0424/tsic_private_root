// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvandor.h for the primary calling header

#include "Vvandor__pch.h"
#include "Vvandor___024root.h"

VL_ATTR_COLD void Vvandor___024root___eval_static(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___eval_static\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vvandor___024root___eval_initial(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___eval_initial\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vvandor___024root___eval_final(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___eval_final\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvandor___024root___dump_triggers__stl(Vvandor___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vvandor___024root___eval_phase__stl(Vvandor___024root* vlSelf);

VL_ATTR_COLD void Vvandor___024root___eval_settle(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___eval_settle\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vvandor___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("design_src/vandor.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vvandor___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvandor___024root___dump_triggers__stl(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___dump_triggers__stl\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vvandor___024root___ico_sequent__TOP__0(Vvandor___024root* vlSelf);

VL_ATTR_COLD void Vvandor___024root___eval_stl(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___eval_stl\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vvandor___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vvandor___024root___eval_triggers__stl(Vvandor___024root* vlSelf);

VL_ATTR_COLD bool Vvandor___024root___eval_phase__stl(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___eval_phase__stl\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vvandor___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vvandor___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvandor___024root___dump_triggers__ico(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___dump_triggers__ico\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vvandor___024root___dump_triggers__act(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___dump_triggers__act\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvandor___024root___dump_triggers__nba(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___dump_triggers__nba\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vvandor___024root___ctor_var_reset(Vvandor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvandor___024root___ctor_var_reset\n"); );
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->a = VL_RAND_RESET_I(4);
    vlSelf->b = VL_RAND_RESET_I(4);
    vlSelf->and_ab = VL_RAND_RESET_I(4);
    vlSelf->or_ab = VL_RAND_RESET_I(4);
    vlSelf->and_a = VL_RAND_RESET_I(1);
    vlSelf->or_a = VL_RAND_RESET_I(1);
    vlSelf->vandor__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->vandor__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->vandor__DOT__and_ab = VL_RAND_RESET_I(4);
    vlSelf->vandor__DOT__or_ab = VL_RAND_RESET_I(4);
    vlSelf->vandor__DOT__and_a = VL_RAND_RESET_I(1);
    vlSelf->vandor__DOT__or_a = VL_RAND_RESET_I(1);
}
