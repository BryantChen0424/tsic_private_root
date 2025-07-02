// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmask_even__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmask_even::Vmask_even(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmask_even__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , mask{vlSymsp->TOP.mask}
    , even1{vlSymsp->TOP.even1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmask_even::Vmask_even(const char* _vcname__)
    : Vmask_even(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmask_even::~Vmask_even() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmask_even___024root___eval_debug_assertions(Vmask_even___024root* vlSelf);
#endif  // VL_DEBUG
void Vmask_even___024root___eval_static(Vmask_even___024root* vlSelf);
void Vmask_even___024root___eval_initial(Vmask_even___024root* vlSelf);
void Vmask_even___024root___eval_settle(Vmask_even___024root* vlSelf);
void Vmask_even___024root___eval(Vmask_even___024root* vlSelf);

void Vmask_even::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmask_even::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmask_even___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmask_even___024root___eval_static(&(vlSymsp->TOP));
        Vmask_even___024root___eval_initial(&(vlSymsp->TOP));
        Vmask_even___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmask_even___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmask_even::eventsPending() { return false; }

uint64_t Vmask_even::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmask_even::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmask_even___024root___eval_final(Vmask_even___024root* vlSelf);

VL_ATTR_COLD void Vmask_even::final() {
    Vmask_even___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmask_even::hierName() const { return vlSymsp->name(); }
const char* Vmask_even::modelName() const { return "Vmask_even"; }
unsigned Vmask_even::threads() const { return 1; }
void Vmask_even::prepareClone() const { contextp()->prepareClone(); }
void Vmask_even::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmask_even::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmask_even___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmask_even___024root__trace_init_top(Vmask_even___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmask_even___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmask_even___024root*>(voidSelf);
    Vmask_even__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmask_even___024root__trace_decl_types(tracep);
    Vmask_even___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmask_even___024root__trace_register(Vmask_even___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmask_even::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmask_even::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmask_even___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
