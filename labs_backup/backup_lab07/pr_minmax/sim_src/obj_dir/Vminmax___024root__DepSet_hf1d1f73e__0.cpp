// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vminmax.h for the primary calling header

#include "Vminmax__pch.h"
#include "Vminmax___024root.h"

void Vminmax___024root___ico_sequent__TOP__0(Vminmax___024root* vlSelf);

void Vminmax___024root___eval_ico(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___eval_ico\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vminmax___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vminmax___024root___ico_sequent__TOP__0(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___ico_sequent__TOP__0\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.minmax__DOT__a = vlSelfRef.a;
    vlSelfRef.minmax__DOT__b = vlSelfRef.b;
    if (vlSelfRef.s) {
        vlSelfRef.minmax__DOT__s = 1U;
        vlSelfRef.o = (((IData)(vlSelfRef.a) < (IData)(vlSelfRef.b))
                        ? (IData)(vlSelfRef.a) : (IData)(vlSelfRef.b));
    } else {
        vlSelfRef.minmax__DOT__s = 0U;
        vlSelfRef.o = (((IData)(vlSelfRef.a) > (IData)(vlSelfRef.b))
                        ? (IData)(vlSelfRef.a) : (IData)(vlSelfRef.b));
    }
    vlSelfRef.minmax__DOT__o = vlSelfRef.o;
}

void Vminmax___024root___eval_triggers__ico(Vminmax___024root* vlSelf);

bool Vminmax___024root___eval_phase__ico(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___eval_phase__ico\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vminmax___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vminmax___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vminmax___024root___eval_act(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___eval_act\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vminmax___024root___eval_nba(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___eval_nba\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vminmax___024root___eval_triggers__act(Vminmax___024root* vlSelf);

bool Vminmax___024root___eval_phase__act(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___eval_phase__act\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vminmax___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vminmax___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vminmax___024root___eval_phase__nba(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___eval_phase__nba\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vminmax___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vminmax___024root___dump_triggers__ico(Vminmax___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vminmax___024root___dump_triggers__nba(Vminmax___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vminmax___024root___dump_triggers__act(Vminmax___024root* vlSelf);
#endif  // VL_DEBUG

void Vminmax___024root___eval(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___eval\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vminmax___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/minmax.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vminmax___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vminmax___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/minmax.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vminmax___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/minmax.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vminmax___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vminmax___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vminmax___024root___eval_debug_assertions(Vminmax___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vminmax___024root___eval_debug_assertions\n"); );
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.s & 0xfeU)))) {
        Verilated::overWidthError("s");}
}
#endif  // VL_DEBUG
