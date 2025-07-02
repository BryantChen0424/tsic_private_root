// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vinner_signal__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vinner_signal::Vinner_signal(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vinner_signal__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , o_and{vlSymsp->TOP.o_and}
    , o_or{vlSymsp->TOP.o_or}
    , o_nand{vlSymsp->TOP.o_nand}
    , o_nor{vlSymsp->TOP.o_nor}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vinner_signal::Vinner_signal(const char* _vcname__)
    : Vinner_signal(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vinner_signal::~Vinner_signal() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vinner_signal___024root___eval_debug_assertions(Vinner_signal___024root* vlSelf);
#endif  // VL_DEBUG
void Vinner_signal___024root___eval_static(Vinner_signal___024root* vlSelf);
void Vinner_signal___024root___eval_initial(Vinner_signal___024root* vlSelf);
void Vinner_signal___024root___eval_settle(Vinner_signal___024root* vlSelf);
void Vinner_signal___024root___eval(Vinner_signal___024root* vlSelf);

void Vinner_signal::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vinner_signal::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vinner_signal___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vinner_signal___024root___eval_static(&(vlSymsp->TOP));
        Vinner_signal___024root___eval_initial(&(vlSymsp->TOP));
        Vinner_signal___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vinner_signal___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vinner_signal::eventsPending() { return false; }

uint64_t Vinner_signal::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vinner_signal::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vinner_signal___024root___eval_final(Vinner_signal___024root* vlSelf);

VL_ATTR_COLD void Vinner_signal::final() {
    Vinner_signal___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vinner_signal::hierName() const { return vlSymsp->name(); }
const char* Vinner_signal::modelName() const { return "Vinner_signal"; }
unsigned Vinner_signal::threads() const { return 1; }
void Vinner_signal::prepareClone() const { contextp()->prepareClone(); }
void Vinner_signal::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vinner_signal::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vinner_signal___024root__trace_decl_types(VerilatedVcd* tracep);

void Vinner_signal___024root__trace_init_top(Vinner_signal___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vinner_signal___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinner_signal___024root*>(voidSelf);
    Vinner_signal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vinner_signal___024root__trace_decl_types(tracep);
    Vinner_signal___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vinner_signal___024root__trace_register(Vinner_signal___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vinner_signal::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vinner_signal::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vinner_signal___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
