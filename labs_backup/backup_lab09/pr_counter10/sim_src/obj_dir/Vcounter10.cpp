// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcounter10__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcounter10::Vcounter10(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcounter10__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , cnt{vlSymsp->TOP.cnt}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcounter10::Vcounter10(const char* _vcname__)
    : Vcounter10(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcounter10::~Vcounter10() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcounter10___024root___eval_debug_assertions(Vcounter10___024root* vlSelf);
#endif  // VL_DEBUG
void Vcounter10___024root___eval_static(Vcounter10___024root* vlSelf);
void Vcounter10___024root___eval_initial(Vcounter10___024root* vlSelf);
void Vcounter10___024root___eval_settle(Vcounter10___024root* vlSelf);
void Vcounter10___024root___eval(Vcounter10___024root* vlSelf);

void Vcounter10::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcounter10::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcounter10___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcounter10___024root___eval_static(&(vlSymsp->TOP));
        Vcounter10___024root___eval_initial(&(vlSymsp->TOP));
        Vcounter10___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcounter10___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcounter10::eventsPending() { return false; }

uint64_t Vcounter10::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcounter10::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcounter10___024root___eval_final(Vcounter10___024root* vlSelf);

VL_ATTR_COLD void Vcounter10::final() {
    Vcounter10___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcounter10::hierName() const { return vlSymsp->name(); }
const char* Vcounter10::modelName() const { return "Vcounter10"; }
unsigned Vcounter10::threads() const { return 1; }
void Vcounter10::prepareClone() const { contextp()->prepareClone(); }
void Vcounter10::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcounter10::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcounter10___024root__trace_decl_types(VerilatedVcd* tracep);

void Vcounter10___024root__trace_init_top(Vcounter10___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcounter10___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter10___024root*>(voidSelf);
    Vcounter10__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vcounter10___024root__trace_decl_types(tracep);
    Vcounter10___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcounter10___024root__trace_register(Vcounter10___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcounter10::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcounter10::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcounter10___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
