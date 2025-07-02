// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsorter_id.h for the primary calling header

#ifndef VERILATED_VSORTER_ID___024ROOT_H_
#define VERILATED_VSORTER_ID___024ROOT_H_  // guard

#include "verilated.h"


class Vsorter_id__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsorter_id___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(v0,3,0);
        VL_IN8(v1,3,0);
        VL_IN8(v2,3,0);
        VL_IN8(v3,3,0);
        VL_OUT8(o0,3,0);
        VL_OUT8(o1,3,0);
        VL_OUT8(o2,3,0);
        VL_OUT8(o3,3,0);
        VL_OUT8(o3_id,1,0);
        CData/*3:0*/ sorter_id__DOT__v0;
        CData/*3:0*/ sorter_id__DOT__v1;
        CData/*3:0*/ sorter_id__DOT__v2;
        CData/*3:0*/ sorter_id__DOT__v3;
        CData/*3:0*/ sorter_id__DOT__o0;
        CData/*3:0*/ sorter_id__DOT__o1;
        CData/*3:0*/ sorter_id__DOT__o2;
        CData/*3:0*/ sorter_id__DOT__o3;
        CData/*1:0*/ sorter_id__DOT__o3_id;
        CData/*3:0*/ sorter_id__DOT__c0_min;
        CData/*3:0*/ sorter_id__DOT__c0_max;
        CData/*3:0*/ sorter_id__DOT__c1_min;
        CData/*3:0*/ sorter_id__DOT__c1_max;
        CData/*3:0*/ sorter_id__DOT__c2_min;
        CData/*3:0*/ sorter_id__DOT__c3_min;
        CData/*3:0*/ sorter_id__DOT__c3_max;
        CData/*3:0*/ sorter_id__DOT__c4_min;
        CData/*3:0*/ sorter_id__DOT__c0_min_id;
        CData/*3:0*/ sorter_id__DOT__c0_max_id;
        CData/*3:0*/ sorter_id__DOT__c1_min_id;
        CData/*3:0*/ sorter_id__DOT__c1_max_id;
        CData/*3:0*/ sorter_id__DOT__c2_min_id;
        CData/*3:0*/ sorter_id__DOT__c3_min_id;
        CData/*3:0*/ sorter_id__DOT__c3_max_id;
        CData/*3:0*/ sorter_id__DOT__c4_min_id;
        CData/*3:0*/ sorter_id__DOT__c0__DOT__a;
        CData/*3:0*/ sorter_id__DOT__c0__DOT__b;
        CData/*1:0*/ sorter_id__DOT__c0__DOT__a_id;
        CData/*1:0*/ sorter_id__DOT__c0__DOT__b_id;
        CData/*3:0*/ sorter_id__DOT__c0__DOT__min;
        CData/*3:0*/ sorter_id__DOT__c0__DOT__max;
        CData/*1:0*/ sorter_id__DOT__c0__DOT__min_id;
        CData/*1:0*/ sorter_id__DOT__c0__DOT__max_id;
        CData/*0:0*/ sorter_id__DOT__c0__DOT__a_is_max;
        CData/*3:0*/ sorter_id__DOT__c1__DOT__a;
        CData/*3:0*/ sorter_id__DOT__c1__DOT__b;
        CData/*1:0*/ sorter_id__DOT__c1__DOT__a_id;
        CData/*1:0*/ sorter_id__DOT__c1__DOT__b_id;
        CData/*3:0*/ sorter_id__DOT__c1__DOT__min;
        CData/*3:0*/ sorter_id__DOT__c1__DOT__max;
        CData/*1:0*/ sorter_id__DOT__c1__DOT__min_id;
        CData/*1:0*/ sorter_id__DOT__c1__DOT__max_id;
        CData/*0:0*/ sorter_id__DOT__c1__DOT__a_is_max;
        CData/*3:0*/ sorter_id__DOT__c2__DOT__a;
        CData/*3:0*/ sorter_id__DOT__c2__DOT__b;
        CData/*1:0*/ sorter_id__DOT__c2__DOT__a_id;
        CData/*1:0*/ sorter_id__DOT__c2__DOT__b_id;
        CData/*3:0*/ sorter_id__DOT__c2__DOT__min;
        CData/*3:0*/ sorter_id__DOT__c2__DOT__max;
        CData/*1:0*/ sorter_id__DOT__c2__DOT__min_id;
        CData/*1:0*/ sorter_id__DOT__c2__DOT__max_id;
        CData/*0:0*/ sorter_id__DOT__c2__DOT__a_is_max;
        CData/*3:0*/ sorter_id__DOT__c3__DOT__a;
        CData/*3:0*/ sorter_id__DOT__c3__DOT__b;
        CData/*1:0*/ sorter_id__DOT__c3__DOT__a_id;
    };
    struct {
        CData/*1:0*/ sorter_id__DOT__c3__DOT__b_id;
        CData/*3:0*/ sorter_id__DOT__c3__DOT__min;
        CData/*3:0*/ sorter_id__DOT__c3__DOT__max;
        CData/*1:0*/ sorter_id__DOT__c3__DOT__min_id;
        CData/*1:0*/ sorter_id__DOT__c3__DOT__max_id;
        CData/*0:0*/ sorter_id__DOT__c3__DOT__a_is_max;
        CData/*3:0*/ sorter_id__DOT__c4__DOT__a;
        CData/*3:0*/ sorter_id__DOT__c4__DOT__b;
        CData/*1:0*/ sorter_id__DOT__c4__DOT__a_id;
        CData/*1:0*/ sorter_id__DOT__c4__DOT__b_id;
        CData/*3:0*/ sorter_id__DOT__c4__DOT__min;
        CData/*3:0*/ sorter_id__DOT__c4__DOT__max;
        CData/*1:0*/ sorter_id__DOT__c4__DOT__min_id;
        CData/*1:0*/ sorter_id__DOT__c4__DOT__max_id;
        CData/*0:0*/ sorter_id__DOT__c4__DOT__a_is_max;
        CData/*3:0*/ sorter_id__DOT__c5__DOT__a;
        CData/*3:0*/ sorter_id__DOT__c5__DOT__b;
        CData/*1:0*/ sorter_id__DOT__c5__DOT__a_id;
        CData/*1:0*/ sorter_id__DOT__c5__DOT__b_id;
        CData/*3:0*/ sorter_id__DOT__c5__DOT__min;
        CData/*3:0*/ sorter_id__DOT__c5__DOT__max;
        CData/*1:0*/ sorter_id__DOT__c5__DOT__min_id;
        CData/*1:0*/ sorter_id__DOT__c5__DOT__max_id;
        CData/*0:0*/ sorter_id__DOT__c5__DOT__a_is_max;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ __VactIterCount;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsorter_id__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsorter_id___024root(Vsorter_id__Syms* symsp, const char* v__name);
    ~Vsorter_id___024root();
    VL_UNCOPYABLE(Vsorter_id___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
