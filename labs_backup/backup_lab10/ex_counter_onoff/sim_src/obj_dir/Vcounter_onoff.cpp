// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcounter_onoff__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcounter_onoff::Vcounter_onoff(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcounter_onoff__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , sw{vlSymsp->TOP.sw}
    , cnt{vlSymsp->TOP.cnt}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcounter_onoff::Vcounter_onoff(const char* _vcname__)
    : Vcounter_onoff(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcounter_onoff::~Vcounter_onoff() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcounter_onoff___024root___eval_debug_assertions(Vcounter_onoff___024root* vlSelf);
#endif  // VL_DEBUG
void Vcounter_onoff___024root___eval_static(Vcounter_onoff___024root* vlSelf);
void Vcounter_onoff___024root___eval_initial(Vcounter_onoff___024root* vlSelf);
void Vcounter_onoff___024root___eval_settle(Vcounter_onoff___024root* vlSelf);
void Vcounter_onoff___024root___eval(Vcounter_onoff___024root* vlSelf);

void Vcounter_onoff::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcounter_onoff::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcounter_onoff___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcounter_onoff___024root___eval_static(&(vlSymsp->TOP));
        Vcounter_onoff___024root___eval_initial(&(vlSymsp->TOP));
        Vcounter_onoff___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcounter_onoff___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcounter_onoff::eventsPending() { return false; }

uint64_t Vcounter_onoff::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcounter_onoff::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcounter_onoff___024root___eval_final(Vcounter_onoff___024root* vlSelf);

VL_ATTR_COLD void Vcounter_onoff::final() {
    Vcounter_onoff___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcounter_onoff::hierName() const { return vlSymsp->name(); }
const char* Vcounter_onoff::modelName() const { return "Vcounter_onoff"; }
unsigned Vcounter_onoff::threads() const { return 1; }
void Vcounter_onoff::prepareClone() const { contextp()->prepareClone(); }
void Vcounter_onoff::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcounter_onoff::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcounter_onoff___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcounter_onoff___024root__trace_init_top(Vcounter_onoff___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcounter_onoff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter_onoff___024root*>(voidSelf);
    Vcounter_onoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcounter_onoff___024root__trace_decl_types(tracep);
    Vcounter_onoff___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcounter_onoff___024root__trace_register(Vcounter_onoff___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcounter_onoff::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcounter_onoff::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcounter_onoff___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
