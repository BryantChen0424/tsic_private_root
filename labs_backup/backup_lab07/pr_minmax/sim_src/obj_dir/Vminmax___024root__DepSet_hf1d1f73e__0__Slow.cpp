// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminmax.h for the primary calling header

#include "Vminmax__pch.h"
#include "Vminmax___024root.h"

VL_ATTR_COLD void Vminmax___024root___eval_static(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___eval_static\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vminmax___024root___eval_initial(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___eval_initial\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vminmax___024root___eval_final(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___eval_final\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminmax___024root___dump_triggers__stl(Vminmax___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vminmax___024root___eval_phase__stl(Vminmax___024root* vlSelf);

VL_ATTR_COLD void Vminmax___024root___eval_settle(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___eval_settle\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vminmax___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("design_src/minmax.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vminmax___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminmax___024root___dump_triggers__stl(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___dump_triggers__stl\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vminmax___024root___ico_sequent__TOP__0(Vminmax___024root* vlSelf);

VL_ATTR_COLD void Vminmax___024root___eval_stl(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___eval_stl\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vminmax___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vminmax___024root___eval_triggers__stl(Vminmax___024root* vlSelf);

VL_ATTR_COLD bool Vminmax___024root___eval_phase__stl(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___eval_phase__stl\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vminmax___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vminmax___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminmax___024root___dump_triggers__ico(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___dump_triggers__ico\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vminmax___024root___dump_triggers__act(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___dump_triggers__act\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminmax___024root___dump_triggers__nba(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___dump_triggers__nba\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vminmax___024root___ctor_var_reset(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___ctor_var_reset\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->b = VL_RAND_RESET_I(8);
    vlSelf->s = VL_RAND_RESET_I(1);
    vlSelf->o = VL_RAND_RESET_I(8);
    vlSelf->minmax__DOT__a = VL_RAND_RESET_I(8);
    vlSelf->minmax__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->minmax__DOT__s = VL_RAND_RESET_I(1);
    vlSelf->minmax__DOT__o = VL_RAND_RESET_I(8);
}
