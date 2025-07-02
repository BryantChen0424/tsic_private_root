// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbetween__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbetween::Vbetween(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbetween__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , bt{vlSymsp->TOP.bt}
    , ubt{vlSymsp->TOP.ubt}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vbetween::Vbetween(const char* _vcname__)
    : Vbetween(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbetween::~Vbetween() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbetween___024root___eval_debug_assertions(Vbetween___024root* vlSelf);
#endif  // VL_DEBUG
void Vbetween___024root___eval_static(Vbetween___024root* vlSelf);
void Vbetween___024root___eval_initial(Vbetween___024root* vlSelf);
void Vbetween___024root___eval_settle(Vbetween___024root* vlSelf);
void Vbetween___024root___eval(Vbetween___024root* vlSelf);

void Vbetween::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbetween::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbetween___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbetween___024root___eval_static(&(vlSymsp->TOP));
        Vbetween___024root___eval_initial(&(vlSymsp->TOP));
        Vbetween___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbetween___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbetween::eventsPending() { return false; }

uint64_t Vbetween::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vbetween::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbetween___024root___eval_final(Vbetween___024root* vlSelf);

VL_ATTR_COLD void Vbetween::final() {
    Vbetween___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbetween::hierName() const { return vlSymsp->name(); }
const char* Vbetween::modelName() const { return "Vbetween"; }
unsigned Vbetween::threads() const { return 1; }
void Vbetween::prepareClone() const { contextp()->prepareClone(); }
void Vbetween::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vbetween::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vbetween___024root__trace_decl_types(VerilatedVcd* tracep);

void Vbetween___024root__trace_init_top(Vbetween___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbetween___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbetween___024root*>(voidSelf);
    Vbetween__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vbetween___024root__trace_decl_types(tracep);
    Vbetween___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbetween___024root__trace_register(Vbetween___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbetween::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vbetween::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vbetween___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
