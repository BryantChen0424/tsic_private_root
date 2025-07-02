// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtry_const.h for the primary calling header

#include "Vtry_const__pch.h"
#include "Vtry_const___024root.h"

VL_ATTR_COLD void Vtry_const___024root___eval_static(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval_static\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtry_const___024root___eval_initial__TOP(Vtry_const___024root* vlSelf);

VL_ATTR_COLD void Vtry_const___024root___eval_initial(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval_initial\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtry_const___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtry_const___024root___eval_initial__TOP(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval_initial__TOP\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.o16 = 0x5aU;
}

VL_ATTR_COLD void Vtry_const___024root___eval_final(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval_final\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtry_const___024root___dump_triggers__stl(Vtry_const___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtry_const___024root___eval_phase__stl(Vtry_const___024root* vlSelf);

VL_ATTR_COLD void Vtry_const___024root___eval_settle(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval_settle\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtry_const___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("design_src/try_const.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtry_const___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtry_const___024root___dump_triggers__stl(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___dump_triggers__stl\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtry_const___024root___stl_sequent__TOP__0(Vtry_const___024root* vlSelf);

VL_ATTR_COLD void Vtry_const___024root___eval_stl(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval_stl\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtry_const___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtry_const___024root___stl_sequent__TOP__0(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___stl_sequent__TOP__0\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.try_const__DOT__o16 = vlSelfRef.o16;
}

VL_ATTR_COLD void Vtry_const___024root___eval_triggers__stl(Vtry_const___024root* vlSelf);

VL_ATTR_COLD bool Vtry_const___024root___eval_phase__stl(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval_phase__stl\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtry_const___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtry_const___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtry_const___024root___dump_triggers__act(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___dump_triggers__act\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtry_const___024root___dump_triggers__nba(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___dump_triggers__nba\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtry_const___024root___ctor_var_reset(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___ctor_var_reset\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->o16 = VL_RAND_RESET_I(16);
    vlSelf->try_const__DOT__o16 = VL_RAND_RESET_I(16);
}
