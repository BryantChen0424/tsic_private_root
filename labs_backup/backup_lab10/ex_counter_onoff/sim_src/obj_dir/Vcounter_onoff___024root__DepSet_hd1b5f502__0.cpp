// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_onoff.h for the primary calling header

#include "Vcounter_onoff__pch.h"
#include "Vcounter_onoff___024root.h"

void Vcounter_onoff___024root___ico_sequent__TOP__0(Vcounter_onoff___024root* vlSelf);

void Vcounter_onoff___024root___eval_ico(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___eval_ico\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcounter_onoff___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*5:0*/, 256> Vcounter_onoff__ConstPool__TABLE_h07836706_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcounter_onoff__ConstPool__TABLE_hb49b59ce_0;

VL_INLINE_OPT void Vcounter_onoff___024root___ico_sequent__TOP__0(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___ico_sequent__TOP__0\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.counter_onoff__DOT__clk = vlSelfRef.clk;
    vlSelfRef.counter_onoff__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.counter_onoff__DOT__sw = vlSelfRef.sw;
    __Vtableidx1 = (((IData)(vlSelfRef.sw) << 7U) | 
                    (((IData)(vlSelfRef.cnt) << 1U) 
                     | (IData)(vlSelfRef.counter_onoff__DOT__S)));
    vlSelfRef.counter_onoff__DOT__cnt_nxt = Vcounter_onoff__ConstPool__TABLE_h07836706_0
        [__Vtableidx1];
    vlSelfRef.counter_onoff__DOT__S_nxt = Vcounter_onoff__ConstPool__TABLE_hb49b59ce_0
        [__Vtableidx1];
}

void Vcounter_onoff___024root___eval_triggers__ico(Vcounter_onoff___024root* vlSelf);

bool Vcounter_onoff___024root___eval_phase__ico(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___eval_phase__ico\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcounter_onoff___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vcounter_onoff___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcounter_onoff___024root___eval_act(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___eval_act\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcounter_onoff___024root___nba_sequent__TOP__0(Vcounter_onoff___024root* vlSelf);

void Vcounter_onoff___024root___eval_nba(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___eval_nba\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcounter_onoff___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcounter_onoff___024root___nba_sequent__TOP__0(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___nba_sequent__TOP__0\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.counter_onoff__DOT__S = ((IData)(vlSelfRef.rst_n) 
                                       && (IData)(vlSelfRef.counter_onoff__DOT__S_nxt));
    vlSelfRef.cnt = ((IData)(vlSelfRef.rst_n) ? (IData)(vlSelfRef.counter_onoff__DOT__cnt_nxt)
                      : 0U);
    vlSelfRef.counter_onoff__DOT__cnt = vlSelfRef.cnt;
    __Vtableidx1 = (((IData)(vlSelfRef.sw) << 7U) | 
                    (((IData)(vlSelfRef.cnt) << 1U) 
                     | (IData)(vlSelfRef.counter_onoff__DOT__S)));
    vlSelfRef.counter_onoff__DOT__cnt_nxt = Vcounter_onoff__ConstPool__TABLE_h07836706_0
        [__Vtableidx1];
    vlSelfRef.counter_onoff__DOT__S_nxt = Vcounter_onoff__ConstPool__TABLE_hb49b59ce_0
        [__Vtableidx1];
}

void Vcounter_onoff___024root___eval_triggers__act(Vcounter_onoff___024root* vlSelf);

bool Vcounter_onoff___024root___eval_phase__act(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___eval_phase__act\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcounter_onoff___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcounter_onoff___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcounter_onoff___024root___eval_phase__nba(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___eval_phase__nba\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcounter_onoff___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_onoff___024root___dump_triggers__ico(Vcounter_onoff___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_onoff___024root___dump_triggers__nba(Vcounter_onoff___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_onoff___024root___dump_triggers__act(Vcounter_onoff___024root* vlSelf);
#endif  // VL_DEBUG

void Vcounter_onoff___024root___eval(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___eval\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcounter_onoff___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/counter_onoff.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcounter_onoff___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcounter_onoff___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/counter_onoff.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcounter_onoff___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/counter_onoff.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcounter_onoff___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcounter_onoff___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcounter_onoff___024root___eval_debug_assertions(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___eval_debug_assertions\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.sw & 0xfeU)))) {
        Verilated::overWidthError("sw");}
}
#endif  // VL_DEBUG
