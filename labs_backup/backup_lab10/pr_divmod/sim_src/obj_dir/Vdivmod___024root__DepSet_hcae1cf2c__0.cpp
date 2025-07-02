// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdivmod.h for the primary calling header

#include "Vdivmod__pch.h"
#include "Vdivmod___024root.h"

void Vdivmod___024root___ico_sequent__TOP__0(Vdivmod___024root* vlSelf);

void Vdivmod___024root___eval_ico(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___eval_ico\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdivmod___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdivmod___024root___ico_sequent__TOP__0(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___ico_sequent__TOP__0\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.divmod__DOT__clk = vlSelfRef.clk;
    vlSelfRef.divmod__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.divmod__DOT__valid = vlSelfRef.valid;
    vlSelfRef.divmod__DOT__dividend = vlSelfRef.dividend;
    vlSelfRef.divmod__DOT__divisor = vlSelfRef.divisor;
    if ((0U == (IData)(vlSelfRef.divmod__DOT__S))) {
        if (vlSelfRef.valid) {
            vlSelfRef.divmod__DOT__b_nxt = vlSelfRef.divisor;
            vlSelfRef.divmod__DOT__S_nxt = 1U;
            vlSelfRef.divmod__DOT__a_nxt = (0xffU & (IData)(vlSelfRef.dividend));
        } else {
            vlSelfRef.divmod__DOT__b_nxt = vlSelfRef.divmod__DOT__b;
            vlSelfRef.divmod__DOT__S_nxt = 0U;
            vlSelfRef.divmod__DOT__a_nxt = (0xffU & (IData)(vlSelfRef.divmod__DOT__a));
        }
    } else if ((1U == (IData)(vlSelfRef.divmod__DOT__S))) {
        vlSelfRef.divmod__DOT__b_nxt = vlSelfRef.divmod__DOT__b;
        if (((IData)(vlSelfRef.divmod__DOT__a) < (IData)(vlSelfRef.divmod__DOT__b))) {
            vlSelfRef.divmod__DOT__S_nxt = 2U;
            vlSelfRef.divmod__DOT__a_nxt = (0xffU & (IData)(vlSelfRef.divmod__DOT__a));
        } else {
            vlSelfRef.divmod__DOT__S_nxt = 1U;
            vlSelfRef.divmod__DOT__a_nxt = (0xffU & 
                                            ((IData)(vlSelfRef.divmod__DOT__a) 
                                             - (IData)(vlSelfRef.divmod__DOT__b)));
        }
    } else {
        if ((2U == (IData)(vlSelfRef.divmod__DOT__S))) {
            vlSelfRef.divmod__DOT__b_nxt = vlSelfRef.divmod__DOT__b;
            vlSelfRef.divmod__DOT__a_nxt = (0xffU & (IData)(vlSelfRef.divmod__DOT__a));
        } else {
            vlSelfRef.divmod__DOT__b_nxt = 0U;
            vlSelfRef.divmod__DOT__a_nxt = (0xffU & 0U);
        }
        vlSelfRef.divmod__DOT__S_nxt = 0U;
    }
}

void Vdivmod___024root___eval_triggers__ico(Vdivmod___024root* vlSelf);

bool Vdivmod___024root___eval_phase__ico(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___eval_phase__ico\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdivmod___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vdivmod___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdivmod___024root___eval_act(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___eval_act\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vdivmod___024root___nba_sequent__TOP__0(Vdivmod___024root* vlSelf);

void Vdivmod___024root___eval_nba(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___eval_nba\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdivmod___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdivmod___024root___nba_sequent__TOP__0(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___nba_sequent__TOP__0\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        vlSelfRef.divmod__DOT__q = vlSelfRef.divmod__DOT__q_nxt;
        vlSelfRef.divmod__DOT__b = vlSelfRef.divmod__DOT__b_nxt;
        vlSelfRef.divmod__DOT__a = vlSelfRef.divmod__DOT__a_nxt;
        vlSelfRef.divmod__DOT__S = vlSelfRef.divmod__DOT__S_nxt;
    } else {
        vlSelfRef.divmod__DOT__q = 0U;
        vlSelfRef.divmod__DOT__b = 0U;
        vlSelfRef.divmod__DOT__a = 0U;
        vlSelfRef.divmod__DOT__S = 0U;
    }
    if ((0U == (IData)(vlSelfRef.divmod__DOT__S))) {
        vlSelfRef.divmod__DOT__q_nxt = 0U;
        if (vlSelfRef.valid) {
            vlSelfRef.divmod__DOT__b_nxt = vlSelfRef.divisor;
            vlSelfRef.divmod__DOT__S_nxt = 1U;
            vlSelfRef.divmod__DOT__a_nxt = (0xffU & (IData)(vlSelfRef.dividend));
        } else {
            vlSelfRef.divmod__DOT__b_nxt = vlSelfRef.divmod__DOT__b;
            vlSelfRef.divmod__DOT__S_nxt = 0U;
            vlSelfRef.divmod__DOT__a_nxt = (0xffU & (IData)(vlSelfRef.divmod__DOT__a));
        }
    } else if ((1U == (IData)(vlSelfRef.divmod__DOT__S))) {
        if (((IData)(vlSelfRef.divmod__DOT__a) < (IData)(vlSelfRef.divmod__DOT__b))) {
            vlSelfRef.divmod__DOT__q_nxt = (0xffU & (IData)(vlSelfRef.divmod__DOT__q));
            vlSelfRef.divmod__DOT__S_nxt = 2U;
            vlSelfRef.divmod__DOT__a_nxt = (0xffU & (IData)(vlSelfRef.divmod__DOT__a));
        } else {
            vlSelfRef.divmod__DOT__q_nxt = (0xffU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelfRef.divmod__DOT__q)));
            vlSelfRef.divmod__DOT__S_nxt = 1U;
            vlSelfRef.divmod__DOT__a_nxt = (0xffU & 
                                            ((IData)(vlSelfRef.divmod__DOT__a) 
                                             - (IData)(vlSelfRef.divmod__DOT__b)));
        }
        vlSelfRef.divmod__DOT__b_nxt = vlSelfRef.divmod__DOT__b;
    } else {
        if ((2U == (IData)(vlSelfRef.divmod__DOT__S))) {
            vlSelfRef.divmod__DOT__q_nxt = (0xffU & (IData)(vlSelfRef.divmod__DOT__q));
            vlSelfRef.divmod__DOT__b_nxt = vlSelfRef.divmod__DOT__b;
            vlSelfRef.divmod__DOT__a_nxt = (0xffU & (IData)(vlSelfRef.divmod__DOT__a));
        } else {
            vlSelfRef.divmod__DOT__q_nxt = (0xffU & 0U);
            vlSelfRef.divmod__DOT__b_nxt = 0U;
            vlSelfRef.divmod__DOT__a_nxt = (0xffU & 0U);
        }
        vlSelfRef.divmod__DOT__S_nxt = 0U;
    }
    if ((2U == (IData)(vlSelfRef.divmod__DOT__S))) {
        vlSelfRef.ready = 1U;
        vlSelfRef.quotient = (0xffU & (IData)(vlSelfRef.divmod__DOT__q));
        vlSelfRef.remainder = (0xffU & (IData)(vlSelfRef.divmod__DOT__a));
    } else {
        vlSelfRef.ready = 0U;
        vlSelfRef.quotient = 0U;
        vlSelfRef.remainder = 0U;
    }
    vlSelfRef.divmod__DOT__ready = vlSelfRef.ready;
    vlSelfRef.divmod__DOT__quotient = vlSelfRef.quotient;
    vlSelfRef.divmod__DOT__remainder = vlSelfRef.remainder;
}

void Vdivmod___024root___eval_triggers__act(Vdivmod___024root* vlSelf);

bool Vdivmod___024root___eval_phase__act(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___eval_phase__act\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdivmod___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdivmod___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdivmod___024root___eval_phase__nba(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___eval_phase__nba\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdivmod___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivmod___024root___dump_triggers__ico(Vdivmod___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivmod___024root___dump_triggers__nba(Vdivmod___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivmod___024root___dump_triggers__act(Vdivmod___024root* vlSelf);
#endif  // VL_DEBUG

void Vdivmod___024root___eval(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___eval\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vdivmod___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/divmod.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdivmod___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdivmod___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/divmod.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdivmod___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/divmod.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdivmod___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdivmod___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdivmod___024root___eval_debug_assertions(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___eval_debug_assertions\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
