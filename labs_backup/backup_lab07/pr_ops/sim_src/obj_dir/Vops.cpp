// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vops__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vops::Vops(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vops__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , op{vlSymsp->TOP.op}
    , o{vlSymsp->TOP.o}
    , overflow{vlSymsp->TOP.overflow}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vops::Vops(const char* _vcname__)
    : Vops(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vops::~Vops() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vops___024root___eval_debug_assertions(Vops___024root* vlSelf);
#endif  // VL_DEBUG
void Vops___024root___eval_static(Vops___024root* vlSelf);
void Vops___024root___eval_initial(Vops___024root* vlSelf);
void Vops___024root___eval_settle(Vops___024root* vlSelf);
void Vops___024root___eval(Vops___024root* vlSelf);

void Vops::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vops::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vops___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vops___024root___eval_static(&(vlSymsp->TOP));
        Vops___024root___eval_initial(&(vlSymsp->TOP));
        Vops___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vops___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vops::eventsPending() { return false; }

uint64_t Vops::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vops::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vops___024root___eval_final(Vops___024root* vlSelf);

VL_ATTR_COLD void Vops::final() {
    Vops___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vops::hierName() const { return vlSymsp->name(); }
const char* Vops::modelName() const { return "Vops"; }
unsigned Vops::threads() const { return 1; }
void Vops::prepareClone() const { contextp()->prepareClone(); }
void Vops::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vops::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vops___024root__trace_decl_types(VerilatedVcd* tracep);

void Vops___024root__trace_init_top(Vops___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vops___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vops___024root*>(voidSelf);
    Vops__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vops___024root__trace_decl_types(tracep);
    Vops___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vops___024root__trace_register(Vops___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vops::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vops::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vops___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
