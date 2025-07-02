// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vminmax__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vminmax::Vminmax(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vminmax__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , s{vlSymsp->TOP.s}
    , o{vlSymsp->TOP.o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vminmax::Vminmax(const char* _vcname__)
    : Vminmax(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vminmax::~Vminmax() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vminmax___024root___eval_debug_assertions(Vminmax___024root* vlSelf);
#endif  // VL_DEBUG
void Vminmax___024root___eval_static(Vminmax___024root* vlSelf);
void Vminmax___024root___eval_initial(Vminmax___024root* vlSelf);
void Vminmax___024root___eval_settle(Vminmax___024root* vlSelf);
void Vminmax___024root___eval(Vminmax___024root* vlSelf);

void Vminmax::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vminmax::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vminmax___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vminmax___024root___eval_static(&(vlSymsp->TOP));
        Vminmax___024root___eval_initial(&(vlSymsp->TOP));
        Vminmax___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vminmax___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vminmax::eventsPending() { return false; }

uint64_t Vminmax::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vminmax::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vminmax___024root___eval_final(Vminmax___024root* vlSelf);

VL_ATTR_COLD void Vminmax::final() {
    Vminmax___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vminmax::hierName() const { return vlSymsp->name(); }
const char* Vminmax::modelName() const { return "Vminmax"; }
unsigned Vminmax::threads() const { return 1; }
void Vminmax::prepareClone() const { contextp()->prepareClone(); }
void Vminmax::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vminmax::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vminmax___024root__trace_decl_types(VerilatedVcd* tracep);

void Vminmax___024root__trace_init_top(Vminmax___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vminmax___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vminmax___024root*>(voidSelf);
    Vminmax__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vminmax___024root__trace_decl_types(tracep);
    Vminmax___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vminmax___024root__trace_register(Vminmax___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vminmax::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vminmax::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vminmax___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
