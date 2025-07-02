// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsw2way.h for the primary calling header

#include "Vsw2way__pch.h"
#include "Vsw2way___024root.h"

VL_ATTR_COLD void Vsw2way___024root___eval_static(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___eval_static\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsw2way___024root___eval_initial(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___eval_initial\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsw2way___024root___eval_final(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___eval_final\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsw2way___024root___dump_triggers__stl(Vsw2way___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsw2way___024root___eval_phase__stl(Vsw2way___024root* vlSelf);

VL_ATTR_COLD void Vsw2way___024root___eval_settle(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___eval_settle\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vsw2way___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("design_src/sw2way.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsw2way___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsw2way___024root___dump_triggers__stl(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___dump_triggers__stl\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vsw2way___024root___ico_sequent__TOP__0(Vsw2way___024root* vlSelf);

VL_ATTR_COLD void Vsw2way___024root___eval_stl(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___eval_stl\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsw2way___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vsw2way___024root___eval_triggers__stl(Vsw2way___024root* vlSelf);

VL_ATTR_COLD bool Vsw2way___024root___eval_phase__stl(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___eval_phase__stl\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsw2way___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsw2way___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsw2way___024root___dump_triggers__ico(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___dump_triggers__ico\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vsw2way___024root___dump_triggers__act(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___dump_triggers__act\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsw2way___024root___dump_triggers__nba(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___dump_triggers__nba\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsw2way___024root___ctor_var_reset(Vsw2way___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsw2way___024root___ctor_var_reset\n"); );
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->na_and_nb = VL_RAND_RESET_I(1);
    vlSelf->sw = VL_RAND_RESET_I(1);
    vlSelf->sw2way__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->sw2way__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->sw2way__DOT__na_and_nb = VL_RAND_RESET_I(1);
    vlSelf->sw2way__DOT__sw = VL_RAND_RESET_I(1);
    vlSelf->sw2way__DOT__not_a = VL_RAND_RESET_I(1);
    vlSelf->sw2way__DOT__not_b = VL_RAND_RESET_I(1);
}
