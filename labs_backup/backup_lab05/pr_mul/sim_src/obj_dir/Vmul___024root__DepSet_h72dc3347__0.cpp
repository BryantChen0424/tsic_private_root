// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul.h for the primary calling header

#include "Vmul__pch.h"
#include "Vmul___024root.h"

void Vmul___024root___ico_sequent__TOP__0(Vmul___024root* vlSelf);

void Vmul___024root___eval_ico(Vmul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_ico\n"); );
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vmul___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmul___024root___ico_sequent__TOP__0(Vmul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___ico_sequent__TOP__0\n"); );
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mul__DOT__a = vlSelfRef.a;
    vlSelfRef.mul4 = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.a), 2U));
    vlSelfRef.mul2 = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.a), 1U));
    vlSelfRef.mul8 = (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.a), 3U));
    vlSelfRef.be4 = (1U & (~ (IData)((0U != (3U & (IData)(vlSelfRef.a))))));
    vlSelfRef.mul__DOT__mul4 = vlSelfRef.mul4;
    vlSelfRef.mul__DOT__mul2 = vlSelfRef.mul2;
    vlSelfRef.mul__DOT__mul8 = vlSelfRef.mul8;
    vlSelfRef.mul__DOT__be4 = vlSelfRef.be4;
}

void Vmul___024root___eval_triggers__ico(Vmul___024root* vlSelf);

bool Vmul___024root___eval_phase__ico(Vmul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_phase__ico\n"); );
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmul___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vmul___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmul___024root___eval_act(Vmul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_act\n"); );
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmul___024root___eval_nba(Vmul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_nba\n"); );
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmul___024root___eval_triggers__act(Vmul___024root* vlSelf);

bool Vmul___024root___eval_phase__act(Vmul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_phase__act\n"); );
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmul___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmul___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmul___024root___eval_phase__nba(Vmul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_phase__nba\n"); );
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmul___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul___024root___dump_triggers__ico(Vmul___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul___024root___dump_triggers__nba(Vmul___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul___024root___dump_triggers__act(Vmul___024root* vlSelf);
#endif  // VL_DEBUG

void Vmul___024root___eval(Vmul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval\n"); );
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmul___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/mul.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmul___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmul___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/mul.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmul___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/mul.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmul___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmul___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmul___024root___eval_debug_assertions(Vmul___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_debug_assertions\n"); );
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.a & 0xf0U)))) {
        Verilated::overWidthError("a");}
}
#endif  // VL_DEBUG
