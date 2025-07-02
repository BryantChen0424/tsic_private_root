// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vvandor__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vvandor::Vvandor(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vvandor__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , and_ab{vlSymsp->TOP.and_ab}
    , or_ab{vlSymsp->TOP.or_ab}
    , and_a{vlSymsp->TOP.and_a}
    , or_a{vlSymsp->TOP.or_a}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vvandor::Vvandor(const char* _vcname__)
    : Vvandor(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vvandor::~Vvandor() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vvandor___024root___eval_debug_assertions(Vvandor___024root* vlSelf);
#endif  // VL_DEBUG
void Vvandor___024root___eval_static(Vvandor___024root* vlSelf);
void Vvandor___024root___eval_initial(Vvandor___024root* vlSelf);
void Vvandor___024root___eval_settle(Vvandor___024root* vlSelf);
void Vvandor___024root___eval(Vvandor___024root* vlSelf);

void Vvandor::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vvandor::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vvandor___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vvandor___024root___eval_static(&(vlSymsp->TOP));
        Vvandor___024root___eval_initial(&(vlSymsp->TOP));
        Vvandor___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vvandor___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vvandor::eventsPending() { return false; }

uint64_t Vvandor::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vvandor::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vvandor___024root___eval_final(Vvandor___024root* vlSelf);

VL_ATTR_COLD void Vvandor::final() {
    Vvandor___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vvandor::hierName() const { return vlSymsp->name(); }
const char* Vvandor::modelName() const { return "Vvandor"; }
unsigned Vvandor::threads() const { return 1; }
void Vvandor::prepareClone() const { contextp()->prepareClone(); }
void Vvandor::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vvandor::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vvandor___024root__trace_decl_types(VerilatedVcd* tracep);

void Vvandor___024root__trace_init_top(Vvandor___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vvandor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvandor___024root*>(voidSelf);
    Vvandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vvandor___024root__trace_decl_types(tracep);
    Vvandor___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vvandor___024root__trace_register(Vvandor___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vvandor::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vvandor::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vvandor___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
