// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vops.h for the primary calling header

#include "Vops__pch.h"
#include "Vops___024root.h"

VL_ATTR_COLD void Vops___024root___eval_static(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___eval_static\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vops___024root___eval_initial(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___eval_initial\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vops___024root___eval_final(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___eval_final\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vops___024root___dump_triggers__stl(Vops___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vops___024root___eval_phase__stl(Vops___024root* vlSelf);

VL_ATTR_COLD void Vops___024root___eval_settle(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___eval_settle\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vops___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("design_src/ops.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vops___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vops___024root___dump_triggers__stl(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___dump_triggers__stl\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vops___024root___ico_sequent__TOP__0(Vops___024root* vlSelf);

VL_ATTR_COLD void Vops___024root___eval_stl(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___eval_stl\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vops___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vops___024root___eval_triggers__stl(Vops___024root* vlSelf);

VL_ATTR_COLD bool Vops___024root___eval_phase__stl(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___eval_phase__stl\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vops___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vops___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vops___024root___dump_triggers__ico(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___dump_triggers__ico\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vops___024root___dump_triggers__act(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___dump_triggers__act\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vops___024root___dump_triggers__nba(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___dump_triggers__nba\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vops___024root___ctor_var_reset(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___ctor_var_reset\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->b = VL_RAND_RESET_I(8);
    vlSelf->op = VL_RAND_RESET_I(2);
    vlSelf->o = VL_RAND_RESET_I(8);
    vlSelf->overflow = VL_RAND_RESET_I(1);
    vlSelf->ops__DOT__a = VL_RAND_RESET_I(8);
    vlSelf->ops__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->ops__DOT__op = VL_RAND_RESET_I(2);
    vlSelf->ops__DOT__o = VL_RAND_RESET_I(8);
    vlSelf->ops__DOT__overflow = VL_RAND_RESET_I(1);
    vlSelf->ops__DOT__sa = VL_RAND_RESET_I(8);
    vlSelf->ops__DOT__sb = VL_RAND_RESET_I(8);
    vlSelf->ops__DOT__add_result = VL_RAND_RESET_I(8);
    vlSelf->ops__DOT__sub_result = VL_RAND_RESET_I(8);
}
