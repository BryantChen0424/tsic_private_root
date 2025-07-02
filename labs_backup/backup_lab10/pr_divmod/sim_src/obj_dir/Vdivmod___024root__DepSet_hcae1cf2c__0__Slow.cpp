// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdivmod.h for the primary calling header

#include "Vdivmod__pch.h"
#include "Vdivmod___024root.h"

VL_ATTR_COLD void Vdivmod___024root___eval_static(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___eval_static\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vdivmod___024root___eval_initial(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___eval_initial\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdivmod___024root___eval_final(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___eval_final\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivmod___024root___dump_triggers__stl(Vdivmod___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdivmod___024root___eval_phase__stl(Vdivmod___024root* vlSelf);

VL_ATTR_COLD void Vdivmod___024root___eval_settle(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___eval_settle\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vdivmod___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("design_src/divmod.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdivmod___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivmod___024root___dump_triggers__stl(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___dump_triggers__stl\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vdivmod___024root___stl_sequent__TOP__0(Vdivmod___024root* vlSelf);

VL_ATTR_COLD void Vdivmod___024root___eval_stl(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___eval_stl\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vdivmod___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vdivmod___024root___stl_sequent__TOP__0(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___stl_sequent__TOP__0\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.divmod__DOT__clk = vlSelfRef.clk;
    vlSelfRef.divmod__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.divmod__DOT__valid = vlSelfRef.valid;
    vlSelfRef.divmod__DOT__dividend = vlSelfRef.dividend;
    vlSelfRef.divmod__DOT__divisor = vlSelfRef.divisor;
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

VL_ATTR_COLD void Vdivmod___024root___eval_triggers__stl(Vdivmod___024root* vlSelf);

VL_ATTR_COLD bool Vdivmod___024root___eval_phase__stl(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___eval_phase__stl\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdivmod___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vdivmod___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdivmod___024root___dump_triggers__ico(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___dump_triggers__ico\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vdivmod___024root___dump_triggers__act(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___dump_triggers__act\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vdivmod___024root___dump_triggers__nba(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___dump_triggers__nba\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vdivmod___024root___ctor_var_reset(Vdivmod___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdivmod___024root___ctor_var_reset\n"); );
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->dividend = VL_RAND_RESET_I(8);
    vlSelf->divisor = VL_RAND_RESET_I(8);
    vlSelf->ready = VL_RAND_RESET_I(1);
    vlSelf->quotient = VL_RAND_RESET_I(8);
    vlSelf->remainder = VL_RAND_RESET_I(8);
    vlSelf->divmod__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->divmod__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->divmod__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->divmod__DOT__dividend = VL_RAND_RESET_I(8);
    vlSelf->divmod__DOT__divisor = VL_RAND_RESET_I(8);
    vlSelf->divmod__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->divmod__DOT__quotient = VL_RAND_RESET_I(8);
    vlSelf->divmod__DOT__remainder = VL_RAND_RESET_I(8);
    vlSelf->divmod__DOT__S = VL_RAND_RESET_I(2);
    vlSelf->divmod__DOT__S_nxt = VL_RAND_RESET_I(2);
    vlSelf->divmod__DOT__a = VL_RAND_RESET_I(8);
    vlSelf->divmod__DOT__a_nxt = VL_RAND_RESET_I(8);
    vlSelf->divmod__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->divmod__DOT__b_nxt = VL_RAND_RESET_I(8);
    vlSelf->divmod__DOT__q = VL_RAND_RESET_I(8);
    vlSelf->divmod__DOT__q_nxt = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
