// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmath.h for the primary calling header

#include "Vmath__pch.h"
#include "Vmath___024root.h"

VL_ATTR_COLD void Vmath___024root___eval_static(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___eval_static\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmath___024root___eval_initial(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___eval_initial\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmath___024root___eval_final(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___eval_final\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmath___024root___dump_triggers__stl(Vmath___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmath___024root___eval_phase__stl(Vmath___024root* vlSelf);

VL_ATTR_COLD void Vmath___024root___eval_settle(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___eval_settle\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmath___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("design_src/math.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmath___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmath___024root___dump_triggers__stl(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___dump_triggers__stl\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vmath___024root___ico_sequent__TOP__0(Vmath___024root* vlSelf);

VL_ATTR_COLD void Vmath___024root___eval_stl(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___eval_stl\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmath___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmath___024root___eval_triggers__stl(Vmath___024root* vlSelf);

VL_ATTR_COLD bool Vmath___024root___eval_phase__stl(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___eval_phase__stl\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmath___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmath___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmath___024root___dump_triggers__ico(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___dump_triggers__ico\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vmath___024root___dump_triggers__act(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___dump_triggers__act\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmath___024root___dump_triggers__nba(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___dump_triggers__nba\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmath___024root___ctor_var_reset(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___ctor_var_reset\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->a = VL_RAND_RESET_I(4);
    vlSelf->mul2 = VL_RAND_RESET_I(8);
    vlSelf->div2 = VL_RAND_RESET_I(4);
    vlSelf->mod2 = VL_RAND_RESET_I(4);
    vlSelf->mul4 = VL_RAND_RESET_I(8);
    vlSelf->div4 = VL_RAND_RESET_I(4);
    vlSelf->mod4 = VL_RAND_RESET_I(4);
    vlSelf->math__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->math__DOT__mul2 = VL_RAND_RESET_I(8);
    vlSelf->math__DOT__div2 = VL_RAND_RESET_I(4);
    vlSelf->math__DOT__mod2 = VL_RAND_RESET_I(4);
    vlSelf->math__DOT__mul4 = VL_RAND_RESET_I(8);
    vlSelf->math__DOT__div4 = VL_RAND_RESET_I(4);
    vlSelf->math__DOT__mod4 = VL_RAND_RESET_I(4);
}
