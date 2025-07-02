// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbigger.h for the primary calling header

#include "Vbigger__pch.h"
#include "Vbigger___024root.h"

void Vbigger___024root___ico_sequent__TOP__0(Vbigger___024root* vlSelf);

void Vbigger___024root___eval_ico(Vbigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root___eval_ico\n"); );
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vbigger___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbigger___024root___ico_sequent__TOP__0(Vbigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root___ico_sequent__TOP__0\n"); );
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bigger__DOT__a = vlSelfRef.a;
    vlSelfRef.bigger__DOT__b = vlSelfRef.b;
    vlSelfRef.bigger__DOT__c = vlSelfRef.c;
    vlSelfRef.bgt = VL_GTS_III(4, (IData)(vlSelfRef.a), (IData)(vlSelfRef.b));
    vlSelfRef.seq_bgt = (VL_GTS_III(4, (IData)(vlSelfRef.a), (IData)(vlSelfRef.b)) 
                         & VL_GTS_III(4, (IData)(vlSelfRef.b), (IData)(vlSelfRef.c)));
    vlSelfRef.bigger__DOT__bgt = vlSelfRef.bgt;
    vlSelfRef.bigger__DOT__seq_bgt = vlSelfRef.seq_bgt;
}

void Vbigger___024root___eval_triggers__ico(Vbigger___024root* vlSelf);

bool Vbigger___024root___eval_phase__ico(Vbigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root___eval_phase__ico\n"); );
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vbigger___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vbigger___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vbigger___024root___eval_act(Vbigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root___eval_act\n"); );
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vbigger___024root___eval_nba(Vbigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root___eval_nba\n"); );
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vbigger___024root___eval_triggers__act(Vbigger___024root* vlSelf);

bool Vbigger___024root___eval_phase__act(Vbigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root___eval_phase__act\n"); );
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbigger___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vbigger___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbigger___024root___eval_phase__nba(Vbigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root___eval_phase__nba\n"); );
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbigger___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbigger___024root___dump_triggers__ico(Vbigger___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbigger___024root___dump_triggers__nba(Vbigger___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbigger___024root___dump_triggers__act(Vbigger___024root* vlSelf);
#endif  // VL_DEBUG

void Vbigger___024root___eval(Vbigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root___eval\n"); );
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vbigger___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/bigger.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vbigger___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vbigger___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/bigger.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vbigger___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/bigger.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vbigger___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vbigger___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbigger___024root___eval_debug_assertions(Vbigger___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbigger___024root___eval_debug_assertions\n"); );
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.a & 0xf0U)))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY(((vlSelfRef.b & 0xf0U)))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY(((vlSelfRef.c & 0xf0U)))) {
        Verilated::overWidthError("c");}
}
#endif  // VL_DEBUG
