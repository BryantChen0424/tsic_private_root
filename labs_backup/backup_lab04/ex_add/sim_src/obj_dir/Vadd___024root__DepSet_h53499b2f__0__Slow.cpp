// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadd.h for the primary calling header

#include "Vadd__pch.h"
#include "Vadd___024root.h"

VL_ATTR_COLD void Vadd___024root___eval_static(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval_static\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vadd___024root___eval_initial(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval_initial\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vadd___024root___eval_final(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval_final\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadd___024root___dump_triggers__stl(Vadd___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vadd___024root___eval_phase__stl(Vadd___024root* vlSelf);

VL_ATTR_COLD void Vadd___024root___eval_settle(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval_settle\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vadd___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("design_src/add.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vadd___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadd___024root___dump_triggers__stl(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___dump_triggers__stl\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vadd___024root___ico_sequent__TOP__0(Vadd___024root* vlSelf);

VL_ATTR_COLD void Vadd___024root___eval_stl(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval_stl\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vadd___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vadd___024root___eval_triggers__stl(Vadd___024root* vlSelf);

VL_ATTR_COLD bool Vadd___024root___eval_phase__stl(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___eval_phase__stl\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vadd___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vadd___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadd___024root___dump_triggers__ico(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___dump_triggers__ico\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vadd___024root___dump_triggers__act(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___dump_triggers__act\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadd___024root___dump_triggers__nba(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___dump_triggers__nba\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vadd___024root___ctor_var_reset(Vadd___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadd___024root___ctor_var_reset\n"); );
    Vadd__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->a = VL_RAND_RESET_I(4);
    vlSelf->b = VL_RAND_RESET_I(4);
    vlSelf->c = VL_RAND_RESET_I(4);
    vlSelf->sum_ab = VL_RAND_RESET_I(5);
    vlSelf->sum_a5 = VL_RAND_RESET_I(5);
    vlSelf->sum_b5 = VL_RAND_RESET_I(5);
    vlSelf->sum_c5 = VL_RAND_RESET_I(5);
    vlSelf->add__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->add__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->add__DOT__c = VL_RAND_RESET_I(4);
    vlSelf->add__DOT__sum_ab = VL_RAND_RESET_I(5);
    vlSelf->add__DOT__sum_a5 = VL_RAND_RESET_I(5);
    vlSelf->add__DOT__sum_b5 = VL_RAND_RESET_I(5);
    vlSelf->add__DOT__sum_c5 = VL_RAND_RESET_I(5);
}
