// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmod.h for the primary calling header

#include "Vmod__pch.h"
#include "Vmod___024root.h"

void Vmod___024root___ico_sequent__TOP__0(Vmod___024root* vlSelf);

void Vmod___024root___eval_ico(Vmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod___024root___eval_ico\n"); );
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vmod___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmod___024root___ico_sequent__TOP__0(Vmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod___024root___ico_sequent__TOP__0\n"); );
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mod__DOT__clk = vlSelfRef.clk;
    vlSelfRef.mod__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.mod__DOT__valid = vlSelfRef.valid;
    vlSelfRef.mod__DOT__dividend = vlSelfRef.dividend;
    vlSelfRef.mod__DOT__divisor = vlSelfRef.divisor;
    if ((0U == (IData)(vlSelfRef.mod__DOT__S))) {
        if (vlSelfRef.valid) {
            vlSelfRef.mod__DOT__S_nxt = 1U;
            vlSelfRef.mod__DOT__b_nxt = vlSelfRef.divisor;
            vlSelfRef.mod__DOT__a_nxt = (0xffU & (IData)(vlSelfRef.dividend));
        } else {
            vlSelfRef.mod__DOT__S_nxt = 0U;
            vlSelfRef.mod__DOT__b_nxt = vlSelfRef.mod__DOT__b;
            vlSelfRef.mod__DOT__a_nxt = (0xffU & (IData)(vlSelfRef.mod__DOT__a));
        }
    } else if ((1U == (IData)(vlSelfRef.mod__DOT__S))) {
        if (((IData)(vlSelfRef.mod__DOT__a) < (IData)(vlSelfRef.mod__DOT__b))) {
            vlSelfRef.mod__DOT__S_nxt = 2U;
            vlSelfRef.mod__DOT__a_nxt = (0xffU & (IData)(vlSelfRef.mod__DOT__a));
        } else {
            vlSelfRef.mod__DOT__S_nxt = 1U;
            vlSelfRef.mod__DOT__a_nxt = (0xffU & ((IData)(vlSelfRef.mod__DOT__a) 
                                                  - (IData)(vlSelfRef.mod__DOT__b)));
        }
        vlSelfRef.mod__DOT__b_nxt = vlSelfRef.mod__DOT__b;
    } else {
        vlSelfRef.mod__DOT__S_nxt = 0U;
        if ((2U == (IData)(vlSelfRef.mod__DOT__S))) {
            vlSelfRef.mod__DOT__b_nxt = vlSelfRef.mod__DOT__b;
            vlSelfRef.mod__DOT__a_nxt = (0xffU & (IData)(vlSelfRef.mod__DOT__a));
        } else {
            vlSelfRef.mod__DOT__b_nxt = 0U;
            vlSelfRef.mod__DOT__a_nxt = (0xffU & 0U);
        }
    }
}

void Vmod___024root___eval_triggers__ico(Vmod___024root* vlSelf);

bool Vmod___024root___eval_phase__ico(Vmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod___024root___eval_phase__ico\n"); );
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmod___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vmod___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmod___024root___eval_act(Vmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod___024root___eval_act\n"); );
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmod___024root___nba_sequent__TOP__0(Vmod___024root* vlSelf);

void Vmod___024root___eval_nba(Vmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod___024root___eval_nba\n"); );
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmod___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmod___024root___nba_sequent__TOP__0(Vmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod___024root___nba_sequent__TOP__0\n"); );
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        vlSelfRef.mod__DOT__b = vlSelfRef.mod__DOT__b_nxt;
        vlSelfRef.mod__DOT__a = vlSelfRef.mod__DOT__a_nxt;
        vlSelfRef.mod__DOT__S = vlSelfRef.mod__DOT__S_nxt;
    } else {
        vlSelfRef.mod__DOT__b = 0U;
        vlSelfRef.mod__DOT__a = 0U;
        vlSelfRef.mod__DOT__S = 0U;
    }
    if ((0U == (IData)(vlSelfRef.mod__DOT__S))) {
        if (vlSelfRef.valid) {
            vlSelfRef.mod__DOT__S_nxt = 1U;
            vlSelfRef.mod__DOT__b_nxt = vlSelfRef.divisor;
            vlSelfRef.mod__DOT__a_nxt = (0xffU & (IData)(vlSelfRef.dividend));
        } else {
            vlSelfRef.mod__DOT__S_nxt = 0U;
            vlSelfRef.mod__DOT__b_nxt = vlSelfRef.mod__DOT__b;
            vlSelfRef.mod__DOT__a_nxt = (0xffU & (IData)(vlSelfRef.mod__DOT__a));
        }
    } else if ((1U == (IData)(vlSelfRef.mod__DOT__S))) {
        if (((IData)(vlSelfRef.mod__DOT__a) < (IData)(vlSelfRef.mod__DOT__b))) {
            vlSelfRef.mod__DOT__S_nxt = 2U;
            vlSelfRef.mod__DOT__a_nxt = (0xffU & (IData)(vlSelfRef.mod__DOT__a));
        } else {
            vlSelfRef.mod__DOT__S_nxt = 1U;
            vlSelfRef.mod__DOT__a_nxt = (0xffU & ((IData)(vlSelfRef.mod__DOT__a) 
                                                  - (IData)(vlSelfRef.mod__DOT__b)));
        }
        vlSelfRef.mod__DOT__b_nxt = vlSelfRef.mod__DOT__b;
    } else {
        vlSelfRef.mod__DOT__S_nxt = 0U;
        if ((2U == (IData)(vlSelfRef.mod__DOT__S))) {
            vlSelfRef.mod__DOT__b_nxt = vlSelfRef.mod__DOT__b;
            vlSelfRef.mod__DOT__a_nxt = (0xffU & (IData)(vlSelfRef.mod__DOT__a));
        } else {
            vlSelfRef.mod__DOT__b_nxt = 0U;
            vlSelfRef.mod__DOT__a_nxt = (0xffU & 0U);
        }
    }
    if ((2U == (IData)(vlSelfRef.mod__DOT__S))) {
        vlSelfRef.ready = 1U;
        vlSelfRef.remainder = (0xffU & (IData)(vlSelfRef.mod__DOT__a));
    } else {
        vlSelfRef.ready = 0U;
        vlSelfRef.remainder = 0U;
    }
    vlSelfRef.mod__DOT__ready = vlSelfRef.ready;
    vlSelfRef.mod__DOT__remainder = vlSelfRef.remainder;
}

void Vmod___024root___eval_triggers__act(Vmod___024root* vlSelf);

bool Vmod___024root___eval_phase__act(Vmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod___024root___eval_phase__act\n"); );
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmod___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmod___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmod___024root___eval_phase__nba(Vmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod___024root___eval_phase__nba\n"); );
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmod___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmod___024root___dump_triggers__ico(Vmod___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmod___024root___dump_triggers__nba(Vmod___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmod___024root___dump_triggers__act(Vmod___024root* vlSelf);
#endif  // VL_DEBUG

void Vmod___024root___eval(Vmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod___024root___eval\n"); );
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmod___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/mod.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmod___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmod___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/mod.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmod___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/mod.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmod___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmod___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmod___024root___eval_debug_assertions(Vmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmod___024root___eval_debug_assertions\n"); );
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.valid & 0xfeU)))) {
        Verilated::overWidthError("valid");}
}
#endif  // VL_DEBUG
