// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbetween.h for the primary calling header

#include "Vbetween__pch.h"
#include "Vbetween___024root.h"

void Vbetween___024root___ico_sequent__TOP__0(Vbetween___024root* vlSelf);

void Vbetween___024root___eval_ico(Vbetween___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root___eval_ico\n"); );
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vbetween___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbetween___024root___ico_sequent__TOP__0(Vbetween___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root___ico_sequent__TOP__0\n"); );
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.between__DOT__a = vlSelfRef.a;
    vlSelfRef.bt = (VL_LTES_III(32, 0xffffffe7U, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.a))) 
                    & VL_GTES_III(32, 0x19U, VL_EXTENDS_II(32,8, (IData)(vlSelfRef.a))));
    vlSelfRef.ubt = ((0x19U > (IData)(vlSelfRef.a)) 
                     | (0x7dU < (IData)(vlSelfRef.a)));
    vlSelfRef.between__DOT__bt = vlSelfRef.bt;
    vlSelfRef.between__DOT__ubt = vlSelfRef.ubt;
}

void Vbetween___024root___eval_triggers__ico(Vbetween___024root* vlSelf);

bool Vbetween___024root___eval_phase__ico(Vbetween___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root___eval_phase__ico\n"); );
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vbetween___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vbetween___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vbetween___024root___eval_act(Vbetween___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root___eval_act\n"); );
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vbetween___024root___eval_nba(Vbetween___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root___eval_nba\n"); );
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vbetween___024root___eval_triggers__act(Vbetween___024root* vlSelf);

bool Vbetween___024root___eval_phase__act(Vbetween___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root___eval_phase__act\n"); );
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbetween___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vbetween___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbetween___024root___eval_phase__nba(Vbetween___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root___eval_phase__nba\n"); );
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbetween___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbetween___024root___dump_triggers__ico(Vbetween___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbetween___024root___dump_triggers__nba(Vbetween___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbetween___024root___dump_triggers__act(Vbetween___024root* vlSelf);
#endif  // VL_DEBUG

void Vbetween___024root___eval(Vbetween___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root___eval\n"); );
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vbetween___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/between.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vbetween___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vbetween___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/between.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vbetween___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/between.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vbetween___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vbetween___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbetween___024root___eval_debug_assertions(Vbetween___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbetween___024root___eval_debug_assertions\n"); );
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
