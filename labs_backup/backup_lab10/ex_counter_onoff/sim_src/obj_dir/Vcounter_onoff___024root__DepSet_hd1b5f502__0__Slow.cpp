// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_onoff.h for the primary calling header

#include "Vcounter_onoff__pch.h"
#include "Vcounter_onoff___024root.h"

VL_ATTR_COLD void Vcounter_onoff___024root___eval_static(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___eval_static\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vcounter_onoff___024root___eval_initial(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___eval_initial\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcounter_onoff___024root___eval_final(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___eval_final\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_onoff___024root___dump_triggers__stl(Vcounter_onoff___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcounter_onoff___024root___eval_phase__stl(Vcounter_onoff___024root* vlSelf);

VL_ATTR_COLD void Vcounter_onoff___024root___eval_settle(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___eval_settle\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcounter_onoff___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("design_src/counter_onoff.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcounter_onoff___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_onoff___024root___dump_triggers__stl(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___dump_triggers__stl\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcounter_onoff___024root___stl_sequent__TOP__0(Vcounter_onoff___024root* vlSelf);

VL_ATTR_COLD void Vcounter_onoff___024root___eval_stl(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___eval_stl\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcounter_onoff___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*5:0*/, 256> Vcounter_onoff__ConstPool__TABLE_h07836706_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcounter_onoff__ConstPool__TABLE_hb49b59ce_0;

VL_ATTR_COLD void Vcounter_onoff___024root___stl_sequent__TOP__0(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___stl_sequent__TOP__0\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.counter_onoff__DOT__clk = vlSelfRef.clk;
    vlSelfRef.counter_onoff__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.counter_onoff__DOT__sw = vlSelfRef.sw;
    vlSelfRef.counter_onoff__DOT__cnt = vlSelfRef.cnt;
    __Vtableidx1 = (((IData)(vlSelfRef.sw) << 7U) | 
                    (((IData)(vlSelfRef.cnt) << 1U) 
                     | (IData)(vlSelfRef.counter_onoff__DOT__S)));
    vlSelfRef.counter_onoff__DOT__cnt_nxt = Vcounter_onoff__ConstPool__TABLE_h07836706_0
        [__Vtableidx1];
    vlSelfRef.counter_onoff__DOT__S_nxt = Vcounter_onoff__ConstPool__TABLE_hb49b59ce_0
        [__Vtableidx1];
}

VL_ATTR_COLD void Vcounter_onoff___024root___eval_triggers__stl(Vcounter_onoff___024root* vlSelf);

VL_ATTR_COLD bool Vcounter_onoff___024root___eval_phase__stl(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___eval_phase__stl\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcounter_onoff___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcounter_onoff___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_onoff___024root___dump_triggers__ico(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___dump_triggers__ico\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_onoff___024root___dump_triggers__act(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___dump_triggers__act\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_onoff___024root___dump_triggers__nba(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___dump_triggers__nba\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcounter_onoff___024root___ctor_var_reset(Vcounter_onoff___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_onoff___024root___ctor_var_reset\n"); );
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->sw = VL_RAND_RESET_I(1);
    vlSelf->cnt = VL_RAND_RESET_I(6);
    vlSelf->counter_onoff__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->counter_onoff__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->counter_onoff__DOT__sw = VL_RAND_RESET_I(1);
    vlSelf->counter_onoff__DOT__cnt = VL_RAND_RESET_I(6);
    vlSelf->counter_onoff__DOT__S = VL_RAND_RESET_I(1);
    vlSelf->counter_onoff__DOT__S_nxt = VL_RAND_RESET_I(1);
    vlSelf->counter_onoff__DOT__cnt_nxt = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
