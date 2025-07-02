// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmod__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmod::Vmod(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmod__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , valid{vlSymsp->TOP.valid}
    , dividend{vlSymsp->TOP.dividend}
    , divisor{vlSymsp->TOP.divisor}
    , ready{vlSymsp->TOP.ready}
    , remainder{vlSymsp->TOP.remainder}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmod::Vmod(const char* _vcname__)
    : Vmod(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmod::~Vmod() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmod___024root___eval_debug_assertions(Vmod___024root* vlSelf);
#endif  // VL_DEBUG
void Vmod___024root___eval_static(Vmod___024root* vlSelf);
void Vmod___024root___eval_initial(Vmod___024root* vlSelf);
void Vmod___024root___eval_settle(Vmod___024root* vlSelf);
void Vmod___024root___eval(Vmod___024root* vlSelf);

void Vmod::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmod::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmod___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmod___024root___eval_static(&(vlSymsp->TOP));
        Vmod___024root___eval_initial(&(vlSymsp->TOP));
        Vmod___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmod___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmod::eventsPending() { return false; }

uint64_t Vmod::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmod::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmod___024root___eval_final(Vmod___024root* vlSelf);

VL_ATTR_COLD void Vmod::final() {
    Vmod___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmod::hierName() const { return vlSymsp->name(); }
const char* Vmod::modelName() const { return "Vmod"; }
unsigned Vmod::threads() const { return 1; }
void Vmod::prepareClone() const { contextp()->prepareClone(); }
void Vmod::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmod::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmod___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmod___024root__trace_init_top(Vmod___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmod___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmod___024root*>(voidSelf);
    Vmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmod___024root__trace_decl_types(tracep);
    Vmod___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmod___024root__trace_register(Vmod___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmod::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmod::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmod___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
