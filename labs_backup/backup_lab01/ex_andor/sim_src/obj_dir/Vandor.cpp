// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vandor__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vandor::Vandor(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vandor__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , o_and{vlSymsp->TOP.o_and}
    , o_or{vlSymsp->TOP.o_or}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vandor::Vandor(const char* _vcname__)
    : Vandor(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vandor::~Vandor() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vandor___024root___eval_debug_assertions(Vandor___024root* vlSelf);
#endif  // VL_DEBUG
void Vandor___024root___eval_static(Vandor___024root* vlSelf);
void Vandor___024root___eval_initial(Vandor___024root* vlSelf);
void Vandor___024root___eval_settle(Vandor___024root* vlSelf);
void Vandor___024root___eval(Vandor___024root* vlSelf);

void Vandor::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vandor::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vandor___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vandor___024root___eval_static(&(vlSymsp->TOP));
        Vandor___024root___eval_initial(&(vlSymsp->TOP));
        Vandor___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vandor___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vandor::eventsPending() { return false; }

uint64_t Vandor::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vandor::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vandor___024root___eval_final(Vandor___024root* vlSelf);

VL_ATTR_COLD void Vandor::final() {
    Vandor___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vandor::hierName() const { return vlSymsp->name(); }
const char* Vandor::modelName() const { return "Vandor"; }
unsigned Vandor::threads() const { return 1; }
void Vandor::prepareClone() const { contextp()->prepareClone(); }
void Vandor::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vandor::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vandor___024root__trace_decl_types(VerilatedVcd* tracep);

void Vandor___024root__trace_init_top(Vandor___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vandor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vandor___024root*>(voidSelf);
    Vandor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vandor___024root__trace_decl_types(tracep);
    Vandor___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vandor___024root__trace_register(Vandor___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vandor::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vandor::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vandor___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
