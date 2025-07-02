// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vops.h for the primary calling header

#include "Vops__pch.h"
#include "Vops___024root.h"

void Vops___024root___ico_sequent__TOP__0(Vops___024root* vlSelf);

void Vops___024root___eval_ico(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___eval_ico\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vops___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vops___024root___ico_sequent__TOP__0(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___ico_sequent__TOP__0\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ops__DOT__a = vlSelfRef.a;
    vlSelfRef.ops__DOT__b = vlSelfRef.b;
    vlSelfRef.ops__DOT__op = vlSelfRef.op;
    vlSelfRef.ops__DOT__sa = vlSelfRef.a;
    vlSelfRef.ops__DOT__sb = vlSelfRef.b;
    vlSelfRef.ops__DOT__add_result = (0xffU & ((IData)(vlSelfRef.a) 
                                               + (IData)(vlSelfRef.b)));
    vlSelfRef.ops__DOT__sub_result = (0xffU & ((IData)(vlSelfRef.a) 
                                               - (IData)(vlSelfRef.b)));
    vlSelfRef.overflow = 0U;
    if ((2U & (IData)(vlSelfRef.op))) {
        vlSelfRef.o = ((1U & (IData)(vlSelfRef.op))
                        ? ((IData)(vlSelfRef.a) | (IData)(vlSelfRef.b))
                        : ((IData)(vlSelfRef.a) & (IData)(vlSelfRef.b)));
    } else if ((1U & (IData)(vlSelfRef.op))) {
        vlSelfRef.o = vlSelfRef.ops__DOT__sub_result;
        vlSelfRef.overflow = (((1U & ((IData)(vlSelfRef.ops__DOT__sa) 
                                      >> 7U)) != (1U 
                                                  & ((IData)(vlSelfRef.ops__DOT__sb) 
                                                     >> 7U))) 
                              & ((1U & ((IData)(vlSelfRef.o) 
                                        >> 7U)) != 
                                 (1U & ((IData)(vlSelfRef.ops__DOT__sa) 
                                        >> 7U))));
    } else {
        vlSelfRef.o = vlSelfRef.ops__DOT__add_result;
        vlSelfRef.overflow = (((1U & ((IData)(vlSelfRef.ops__DOT__sa) 
                                      >> 7U)) == (1U 
                                                  & ((IData)(vlSelfRef.ops__DOT__sb) 
                                                     >> 7U))) 
                              & ((1U & ((IData)(vlSelfRef.o) 
                                        >> 7U)) != 
                                 (1U & ((IData)(vlSelfRef.ops__DOT__sa) 
                                        >> 7U))));
    }
    vlSelfRef.ops__DOT__overflow = vlSelfRef.overflow;
    vlSelfRef.ops__DOT__o = vlSelfRef.o;
}

void Vops___024root___eval_triggers__ico(Vops___024root* vlSelf);

bool Vops___024root___eval_phase__ico(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___eval_phase__ico\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vops___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vops___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vops___024root___eval_act(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___eval_act\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vops___024root___eval_nba(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___eval_nba\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vops___024root___eval_triggers__act(Vops___024root* vlSelf);

bool Vops___024root___eval_phase__act(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___eval_phase__act\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vops___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vops___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vops___024root___eval_phase__nba(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___eval_phase__nba\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vops___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vops___024root___dump_triggers__ico(Vops___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vops___024root___dump_triggers__nba(Vops___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vops___024root___dump_triggers__act(Vops___024root* vlSelf);
#endif  // VL_DEBUG

void Vops___024root___eval(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___eval\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vops___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/ops.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vops___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vops___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/ops.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vops___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/ops.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vops___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vops___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vops___024root___eval_debug_assertions(Vops___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vops___024root___eval_debug_assertions\n"); );
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.op & 0xfcU)))) {
        Verilated::overWidthError("op");}
}
#endif  // VL_DEBUG
