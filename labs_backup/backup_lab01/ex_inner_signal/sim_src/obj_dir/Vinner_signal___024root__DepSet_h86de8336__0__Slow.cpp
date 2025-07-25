// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinner_signal.h for the primary calling header

#include "Vinner_signal__pch.h"
#include "Vinner_signal___024root.h"

VL_ATTR_COLD void Vinner_signal___024root___eval_static(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___eval_static\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vinner_signal___024root___eval_initial(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___eval_initial\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vinner_signal___024root___eval_final(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___eval_final\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinner_signal___024root___dump_triggers__stl(Vinner_signal___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vinner_signal___024root___eval_phase__stl(Vinner_signal___024root* vlSelf);

VL_ATTR_COLD void Vinner_signal___024root___eval_settle(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___eval_settle\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vinner_signal___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("design_src/inner_signal.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vinner_signal___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinner_signal___024root___dump_triggers__stl(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___dump_triggers__stl\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vinner_signal___024root___ico_sequent__TOP__0(Vinner_signal___024root* vlSelf);

VL_ATTR_COLD void Vinner_signal___024root___eval_stl(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___eval_stl\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vinner_signal___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vinner_signal___024root___eval_triggers__stl(Vinner_signal___024root* vlSelf);

VL_ATTR_COLD bool Vinner_signal___024root___eval_phase__stl(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___eval_phase__stl\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vinner_signal___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vinner_signal___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinner_signal___024root___dump_triggers__ico(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___dump_triggers__ico\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vinner_signal___024root___dump_triggers__act(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___dump_triggers__act\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinner_signal___024root___dump_triggers__nba(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___dump_triggers__nba\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vinner_signal___024root___ctor_var_reset(Vinner_signal___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinner_signal___024root___ctor_var_reset\n"); );
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->o_and = VL_RAND_RESET_I(1);
    vlSelf->o_or = VL_RAND_RESET_I(1);
    vlSelf->o_nand = VL_RAND_RESET_I(1);
    vlSelf->o_nor = VL_RAND_RESET_I(1);
    vlSelf->inner_signal__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->inner_signal__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->inner_signal__DOT__o_and = VL_RAND_RESET_I(1);
    vlSelf->inner_signal__DOT__o_or = VL_RAND_RESET_I(1);
    vlSelf->inner_signal__DOT__o_nand = VL_RAND_RESET_I(1);
    vlSelf->inner_signal__DOT__o_nor = VL_RAND_RESET_I(1);
    vlSelf->inner_signal__DOT__and_val = VL_RAND_RESET_I(1);
    vlSelf->inner_signal__DOT__or_val = VL_RAND_RESET_I(1);
}
