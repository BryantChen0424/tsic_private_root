// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrelu__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vrelu::Vrelu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrelu__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , relu_a{vlSymsp->TOP.relu_a}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vrelu::Vrelu(const char* _vcname__)
    : Vrelu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrelu::~Vrelu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrelu___024root___eval_debug_assertions(Vrelu___024root* vlSelf);
#endif  // VL_DEBUG
void Vrelu___024root___eval_static(Vrelu___024root* vlSelf);
void Vrelu___024root___eval_initial(Vrelu___024root* vlSelf);
void Vrelu___024root___eval_settle(Vrelu___024root* vlSelf);
void Vrelu___024root___eval(Vrelu___024root* vlSelf);

void Vrelu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrelu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrelu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrelu___024root___eval_static(&(vlSymsp->TOP));
        Vrelu___024root___eval_initial(&(vlSymsp->TOP));
        Vrelu___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrelu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrelu::eventsPending() { return false; }

uint64_t Vrelu::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vrelu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrelu___024root___eval_final(Vrelu___024root* vlSelf);

VL_ATTR_COLD void Vrelu::final() {
    Vrelu___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrelu::hierName() const { return vlSymsp->name(); }
const char* Vrelu::modelName() const { return "Vrelu"; }
unsigned Vrelu::threads() const { return 1; }
void Vrelu::prepareClone() const { contextp()->prepareClone(); }
void Vrelu::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vrelu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vrelu___024root__trace_decl_types(VerilatedVcd* tracep);

void Vrelu___024root__trace_init_top(Vrelu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrelu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrelu___024root*>(voidSelf);
    Vrelu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vrelu___024root__trace_decl_types(tracep);
    Vrelu___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vrelu___024root__trace_register(Vrelu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrelu::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vrelu::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vrelu___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
