// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdiv.h for the primary calling header

#include "Vdiv__pch.h"
#include "Vdiv___024root.h"

void Vdiv___024root___ico_sequent__TOP__0(Vdiv___024root* vlSelf);

void Vdiv___024root___eval_ico(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_ico\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdiv___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdiv___024root___ico_sequent__TOP__0(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___ico_sequent__TOP__0\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.div__DOT__a = vlSelfRef.a;
    vlSelfRef.div4 = (0x3fU & ((IData)(vlSelfRef.a) 
                               >> 2U));
    vlSelfRef.div2 = (0x7fU & ((IData)(vlSelfRef.a) 
                               >> 1U));
    vlSelfRef.div8 = (0x1fU & ((IData)(vlSelfRef.a) 
                               >> 3U));
    vlSelfRef.div__DOT__div4 = vlSelfRef.div4;
    vlSelfRef.div__DOT__div2 = vlSelfRef.div2;
    vlSelfRef.div__DOT__div8 = vlSelfRef.div8;
}

void Vdiv___024root___eval_triggers__ico(Vdiv___024root* vlSelf);

bool Vdiv___024root___eval_phase__ico(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_phase__ico\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdiv___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vdiv___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdiv___024root___eval_act(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_act\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdiv___024root___eval_nba(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_nba\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdiv___024root___eval_triggers__act(Vdiv___024root* vlSelf);

bool Vdiv___024root___eval_phase__act(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_phase__act\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdiv___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdiv___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdiv___024root___eval_phase__nba(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_phase__nba\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdiv___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__ico(Vdiv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__nba(Vdiv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__act(Vdiv___024root* vlSelf);
#endif  // VL_DEBUG

void Vdiv___024root___eval(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vdiv___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/div.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdiv___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdiv___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/div.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdiv___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/div.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdiv___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdiv___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdiv___024root___eval_debug_assertions(Vdiv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_debug_assertions\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
