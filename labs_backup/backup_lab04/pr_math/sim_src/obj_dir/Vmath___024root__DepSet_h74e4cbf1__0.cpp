// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmath.h for the primary calling header

#include "Vmath__pch.h"
#include "Vmath___024root.h"

void Vmath___024root___ico_sequent__TOP__0(Vmath___024root* vlSelf);

void Vmath___024root___eval_ico(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___eval_ico\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vmath___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*7:0*/, 16> Vmath__ConstPool__TABLE_hec1eabc4_0;
extern const VlUnpacked<CData/*3:0*/, 16> Vmath__ConstPool__TABLE_hfc198c03_0;
extern const VlUnpacked<CData/*3:0*/, 16> Vmath__ConstPool__TABLE_h1c7cf08d_0;
extern const VlUnpacked<CData/*7:0*/, 16> Vmath__ConstPool__TABLE_h36e24c0f_0;
extern const VlUnpacked<CData/*3:0*/, 16> Vmath__ConstPool__TABLE_h5091c474_0;
extern const VlUnpacked<CData/*3:0*/, 16> Vmath__ConstPool__TABLE_hee147766_0;

VL_INLINE_OPT void Vmath___024root___ico_sequent__TOP__0(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___ico_sequent__TOP__0\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.math__DOT__a = vlSelfRef.a;
    __Vtableidx1 = vlSelfRef.a;
    vlSelfRef.mul2 = Vmath__ConstPool__TABLE_hec1eabc4_0
        [__Vtableidx1];
    vlSelfRef.div2 = Vmath__ConstPool__TABLE_hfc198c03_0
        [__Vtableidx1];
    vlSelfRef.mod2 = Vmath__ConstPool__TABLE_h1c7cf08d_0
        [__Vtableidx1];
    vlSelfRef.mul4 = Vmath__ConstPool__TABLE_h36e24c0f_0
        [__Vtableidx1];
    vlSelfRef.div4 = Vmath__ConstPool__TABLE_h5091c474_0
        [__Vtableidx1];
    vlSelfRef.mod4 = Vmath__ConstPool__TABLE_hee147766_0
        [__Vtableidx1];
    vlSelfRef.math__DOT__mul2 = vlSelfRef.mul2;
    vlSelfRef.math__DOT__div2 = vlSelfRef.div2;
    vlSelfRef.math__DOT__mod2 = vlSelfRef.mod2;
    vlSelfRef.math__DOT__mul4 = vlSelfRef.mul4;
    vlSelfRef.math__DOT__div4 = vlSelfRef.div4;
    vlSelfRef.math__DOT__mod4 = vlSelfRef.mod4;
}

void Vmath___024root___eval_triggers__ico(Vmath___024root* vlSelf);

bool Vmath___024root___eval_phase__ico(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___eval_phase__ico\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmath___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vmath___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmath___024root___eval_act(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___eval_act\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmath___024root___eval_nba(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___eval_nba\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmath___024root___eval_triggers__act(Vmath___024root* vlSelf);

bool Vmath___024root___eval_phase__act(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___eval_phase__act\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmath___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmath___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmath___024root___eval_phase__nba(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___eval_phase__nba\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmath___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmath___024root___dump_triggers__ico(Vmath___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmath___024root___dump_triggers__nba(Vmath___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmath___024root___dump_triggers__act(Vmath___024root* vlSelf);
#endif  // VL_DEBUG

void Vmath___024root___eval(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___eval\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmath___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("design_src/math.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmath___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmath___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("design_src/math.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmath___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("design_src/math.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmath___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmath___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmath___024root___eval_debug_assertions(Vmath___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmath___024root___eval_debug_assertions\n"); );
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.a & 0xf0U)))) {
        Verilated::overWidthError("a");}
}
#endif  // VL_DEBUG
