// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhello__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vhello::Vhello(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhello__Syms(contextp(), _vcname__, this)}
    , in{vlSymsp->TOP.in}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vhello::Vhello(const char* _vcname__)
    : Vhello(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhello::~Vhello() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhello___024root___eval_debug_assertions(Vhello___024root* vlSelf);
#endif  // VL_DEBUG
void Vhello___024root___eval_static(Vhello___024root* vlSelf);
void Vhello___024root___eval_initial(Vhello___024root* vlSelf);
void Vhello___024root___eval_settle(Vhello___024root* vlSelf);
void Vhello___024root___eval(Vhello___024root* vlSelf);

void Vhello::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhello::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhello___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vhello___024root___eval_static(&(vlSymsp->TOP));
        Vhello___024root___eval_initial(&(vlSymsp->TOP));
        Vhello___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vhello___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vhello::eventsPending() { return false; }

uint64_t Vhello::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vhello::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vhello___024root___eval_final(Vhello___024root* vlSelf);

VL_ATTR_COLD void Vhello::final() {
    Vhello___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhello::hierName() const { return vlSymsp->name(); }
const char* Vhello::modelName() const { return "Vhello"; }
unsigned Vhello::threads() const { return 1; }
void Vhello::prepareClone() const { contextp()->prepareClone(); }
void Vhello::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vhello::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vhello___024root__trace_decl_types(VerilatedVcd* tracep);

void Vhello___024root__trace_init_top(Vhello___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhello___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhello___024root*>(voidSelf);
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vhello___024root__trace_decl_types(tracep);
    Vhello___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhello___024root__trace_register(Vhello___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhello::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vhello::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vhello___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
