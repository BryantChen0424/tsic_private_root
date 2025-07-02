// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vconst___pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vconst_::Vconst_(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vconst___Syms(contextp(), _vcname__, this)}
    , ot{vlSymsp->TOP.ot}
    , of{vlSymsp->TOP.of}
    , o1{vlSymsp->TOP.o1}
    , o2{vlSymsp->TOP.o2}
    , o16{vlSymsp->TOP.o16}
    , o_auto_expand{vlSymsp->TOP.o_auto_expand}
    , o_auto_cut{vlSymsp->TOP.o_auto_cut}
    , o_neg{vlSymsp->TOP.o_neg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vconst_::Vconst_(const char* _vcname__)
    : Vconst_(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vconst_::~Vconst_() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vconst____024root___eval_debug_assertions(Vconst____024root* vlSelf);
#endif  // VL_DEBUG
void Vconst____024root___eval_static(Vconst____024root* vlSelf);
void Vconst____024root___eval_initial(Vconst____024root* vlSelf);
void Vconst____024root___eval_settle(Vconst____024root* vlSelf);
void Vconst____024root___eval(Vconst____024root* vlSelf);

void Vconst_::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vconst_::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vconst____024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vconst____024root___eval_static(&(vlSymsp->TOP));
        Vconst____024root___eval_initial(&(vlSymsp->TOP));
        Vconst____024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vconst____024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vconst_::eventsPending() { return false; }

uint64_t Vconst_::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vconst_::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vconst____024root___eval_final(Vconst____024root* vlSelf);

VL_ATTR_COLD void Vconst_::final() {
    Vconst____024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vconst_::hierName() const { return vlSymsp->name(); }
const char* Vconst_::modelName() const { return "Vconst_"; }
unsigned Vconst_::threads() const { return 1; }
void Vconst_::prepareClone() const { contextp()->prepareClone(); }
void Vconst_::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vconst_::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vconst____024root__trace_decl_types(VerilatedVcd* tracep);

void Vconst____024root__trace_init_top(Vconst____024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vconst____024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconst____024root*>(voidSelf);
    Vconst___Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vconst____024root__trace_decl_types(tracep);
    Vconst____024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vconst____024root__trace_register(Vconst____024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vconst_::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vconst_::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vconst____024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
