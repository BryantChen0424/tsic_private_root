// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbigger__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbigger::Vbigger(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbigger__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , c{vlSymsp->TOP.c}
    , bgt{vlSymsp->TOP.bgt}
    , seq_bgt{vlSymsp->TOP.seq_bgt}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vbigger::Vbigger(const char* _vcname__)
    : Vbigger(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbigger::~Vbigger() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbigger___024root___eval_debug_assertions(Vbigger___024root* vlSelf);
#endif  // VL_DEBUG
void Vbigger___024root___eval_static(Vbigger___024root* vlSelf);
void Vbigger___024root___eval_initial(Vbigger___024root* vlSelf);
void Vbigger___024root___eval_settle(Vbigger___024root* vlSelf);
void Vbigger___024root___eval(Vbigger___024root* vlSelf);

void Vbigger::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbigger::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbigger___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbigger___024root___eval_static(&(vlSymsp->TOP));
        Vbigger___024root___eval_initial(&(vlSymsp->TOP));
        Vbigger___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbigger___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbigger::eventsPending() { return false; }

uint64_t Vbigger::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vbigger::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbigger___024root___eval_final(Vbigger___024root* vlSelf);

VL_ATTR_COLD void Vbigger::final() {
    Vbigger___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbigger::hierName() const { return vlSymsp->name(); }
const char* Vbigger::modelName() const { return "Vbigger"; }
unsigned Vbigger::threads() const { return 1; }
void Vbigger::prepareClone() const { contextp()->prepareClone(); }
void Vbigger::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vbigger::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vbigger___024root__trace_decl_types(VerilatedVcd* tracep);

void Vbigger___024root__trace_init_top(Vbigger___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbigger___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbigger___024root*>(voidSelf);
    Vbigger__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vbigger___024root__trace_decl_types(tracep);
    Vbigger___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbigger___024root__trace_register(Vbigger___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbigger::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vbigger::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vbigger___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
