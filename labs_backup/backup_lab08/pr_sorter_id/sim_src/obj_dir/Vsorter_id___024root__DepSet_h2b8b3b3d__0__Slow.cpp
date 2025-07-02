// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsorter_id.h for the primary calling header

#include "Vsorter_id__pch.h"
#include "Vsorter_id___024root.h"

VL_ATTR_COLD void Vsorter_id___024root___eval_static(Vsorter_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root___eval_static\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsorter_id___024root___eval_initial__TOP(Vsorter_id___024root* vlSelf);

VL_ATTR_COLD void Vsorter_id___024root___eval_initial(Vsorter_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root___eval_initial\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsorter_id___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vsorter_id___024root___eval_initial__TOP(Vsorter_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root___eval_initial__TOP\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sorter_id__DOT__c0__DOT__a_id = 0U;
    vlSelfRef.sorter_id__DOT__c0__DOT__b_id = 1U;
    vlSelfRef.sorter_id__DOT__c1__DOT__b_id = 2U;
    vlSelfRef.sorter_id__DOT__c2__DOT__b_id = 3U;
}

VL_ATTR_COLD void Vsorter_id___024root___eval_final(Vsorter_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root___eval_final\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsorter_id___024root___dump_triggers__stl(Vsorter_id___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsorter_id___024root___eval_phase__stl(Vsorter_id___024root* vlSelf);

VL_ATTR_COLD void Vsorter_id___024root___eval_settle(Vsorter_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root___eval_settle\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vsorter_id___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("design_src/sorter_id.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsorter_id___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsorter_id___024root___dump_triggers__stl(Vsorter_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root___dump_triggers__stl\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vsorter_id___024root___ico_sequent__TOP__0(Vsorter_id___024root* vlSelf);

VL_ATTR_COLD void Vsorter_id___024root___eval_stl(Vsorter_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root___eval_stl\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsorter_id___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vsorter_id___024root___eval_triggers__stl(Vsorter_id___024root* vlSelf);

VL_ATTR_COLD bool Vsorter_id___024root___eval_phase__stl(Vsorter_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root___eval_phase__stl\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsorter_id___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsorter_id___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsorter_id___024root___dump_triggers__ico(Vsorter_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root___dump_triggers__ico\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vsorter_id___024root___dump_triggers__act(Vsorter_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root___dump_triggers__act\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsorter_id___024root___dump_triggers__nba(Vsorter_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root___dump_triggers__nba\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsorter_id___024root___ctor_var_reset(Vsorter_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsorter_id___024root___ctor_var_reset\n"); );
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->v0 = VL_RAND_RESET_I(4);
    vlSelf->v1 = VL_RAND_RESET_I(4);
    vlSelf->v2 = VL_RAND_RESET_I(4);
    vlSelf->v3 = VL_RAND_RESET_I(4);
    vlSelf->o0 = VL_RAND_RESET_I(4);
    vlSelf->o1 = VL_RAND_RESET_I(4);
    vlSelf->o2 = VL_RAND_RESET_I(4);
    vlSelf->o3 = VL_RAND_RESET_I(4);
    vlSelf->o3_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__v0 = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__v1 = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__v2 = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__v3 = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__o0 = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__o1 = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__o2 = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__o3 = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__o3_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c0_min = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c0_max = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c1_min = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c1_max = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c2_min = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c3_min = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c3_max = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c4_min = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c0_min_id = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c0_max_id = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c1_min_id = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c1_max_id = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c2_min_id = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c3_min_id = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c3_max_id = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c4_min_id = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c0__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c0__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c0__DOT__a_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c0__DOT__b_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c0__DOT__min = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c0__DOT__max = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c0__DOT__min_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c0__DOT__max_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c0__DOT__a_is_max = VL_RAND_RESET_I(1);
    vlSelf->sorter_id__DOT__c1__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c1__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c1__DOT__a_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c1__DOT__b_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c1__DOT__min = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c1__DOT__max = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c1__DOT__min_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c1__DOT__max_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c1__DOT__a_is_max = VL_RAND_RESET_I(1);
    vlSelf->sorter_id__DOT__c2__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c2__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c2__DOT__a_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c2__DOT__b_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c2__DOT__min = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c2__DOT__max = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c2__DOT__min_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c2__DOT__max_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c2__DOT__a_is_max = VL_RAND_RESET_I(1);
    vlSelf->sorter_id__DOT__c3__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c3__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c3__DOT__a_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c3__DOT__b_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c3__DOT__min = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c3__DOT__max = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c3__DOT__min_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c3__DOT__max_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c3__DOT__a_is_max = VL_RAND_RESET_I(1);
    vlSelf->sorter_id__DOT__c4__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c4__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c4__DOT__a_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c4__DOT__b_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c4__DOT__min = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c4__DOT__max = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c4__DOT__min_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c4__DOT__max_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c4__DOT__a_is_max = VL_RAND_RESET_I(1);
    vlSelf->sorter_id__DOT__c5__DOT__a = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c5__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c5__DOT__a_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c5__DOT__b_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c5__DOT__min = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c5__DOT__max = VL_RAND_RESET_I(4);
    vlSelf->sorter_id__DOT__c5__DOT__min_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c5__DOT__max_id = VL_RAND_RESET_I(2);
    vlSelf->sorter_id__DOT__c5__DOT__a_is_max = VL_RAND_RESET_I(1);
}
