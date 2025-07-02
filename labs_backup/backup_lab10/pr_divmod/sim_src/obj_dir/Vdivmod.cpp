// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdivmod__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdivmod::Vdivmod(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdivmod__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , valid{vlSymsp->TOP.valid}
    , dividend{vlSymsp->TOP.dividend}
    , divisor{vlSymsp->TOP.divisor}
    , ready{vlSymsp->TOP.ready}
    , quotient{vlSymsp->TOP.quotient}
    , remainder{vlSymsp->TOP.remainder}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vdivmod::Vdivmod(const char* _vcname__)
    : Vdivmod(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdivmod::~Vdivmod() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdivmod___024root___eval_debug_assertions(Vdivmod___024root* vlSelf);
#endif  // VL_DEBUG
void Vdivmod___024root___eval_static(Vdivmod___024root* vlSelf);
void Vdivmod___024root___eval_initial(Vdivmod___024root* vlSelf);
void Vdivmod___024root___eval_settle(Vdivmod___024root* vlSelf);
void Vdivmod___024root___eval(Vdivmod___024root* vlSelf);

void Vdivmod::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdivmod::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdivmod___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdivmod___024root___eval_static(&(vlSymsp->TOP));
        Vdivmod___024root___eval_initial(&(vlSymsp->TOP));
        Vdivmod___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdivmod___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdivmod::eventsPending() { return false; }

uint64_t Vdivmod::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdivmod::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdivmod___024root___eval_final(Vdivmod___024root* vlSelf);

VL_ATTR_COLD void Vdivmod::final() {
    Vdivmod___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdivmod::hierName() const { return vlSymsp->name(); }
const char* Vdivmod::modelName() const { return "Vdivmod"; }
unsigned Vdivmod::threads() const { return 1; }
void Vdivmod::prepareClone() const { contextp()->prepareClone(); }
void Vdivmod::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdivmod::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdivmod___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdivmod___024root__trace_init_top(Vdivmod___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdivmod___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdivmod___024root*>(voidSelf);
    Vdivmod__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdivmod___024root__trace_decl_types(tracep);
    Vdivmod___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdivmod___024root__trace_register(Vdivmod___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdivmod::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdivmod::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdivmod___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
