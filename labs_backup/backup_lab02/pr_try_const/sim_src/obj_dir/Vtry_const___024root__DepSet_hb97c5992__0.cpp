// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtry_const.h for the primary calling header

#include "Vtry_const__pch.h"
#include "Vtry_const___024root.h"

void Vtry_const___024root___eval_act(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval_act\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtry_const___024root___eval_nba(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval_nba\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtry_const___024root___eval_triggers__act(Vtry_const___024root* vlSelf);

bool Vtry_const___024root___eval_phase__act(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval_phase__act\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtry_const___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtry_const___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtry_const___024root___eval_phase__nba(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval_phase__nba\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtry_const___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtry_const___024root___dump_triggers__nba(Vtry_const___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtry_const___024root___dump_triggers__act(Vtry_const___024root* vlSelf);
#endif  // VL_DEBUG

void Vtry_const___024root___eval(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtry_const___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/try_const.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtry_const___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/try_const.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtry_const___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtry_const___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtry_const___024root___eval_debug_assertions(Vtry_const___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtry_const___024root___eval_debug_assertions\n"); );
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
