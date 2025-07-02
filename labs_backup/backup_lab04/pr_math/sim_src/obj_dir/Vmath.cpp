// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmath__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmath::Vmath(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmath__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , mul2{vlSymsp->TOP.mul2}
    , div2{vlSymsp->TOP.div2}
    , mod2{vlSymsp->TOP.mod2}
    , mul4{vlSymsp->TOP.mul4}
    , div4{vlSymsp->TOP.div4}
    , mod4{vlSymsp->TOP.mod4}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmath::Vmath(const char* _vcname__)
    : Vmath(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmath::~Vmath() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmath___024root___eval_debug_assertions(Vmath___024root* vlSelf);
#endif  // VL_DEBUG
void Vmath___024root___eval_static(Vmath___024root* vlSelf);
void Vmath___024root___eval_initial(Vmath___024root* vlSelf);
void Vmath___024root___eval_settle(Vmath___024root* vlSelf);
void Vmath___024root___eval(Vmath___024root* vlSelf);

void Vmath::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmath::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmath___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmath___024root___eval_static(&(vlSymsp->TOP));
        Vmath___024root___eval_initial(&(vlSymsp->TOP));
        Vmath___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmath___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmath::eventsPending() { return false; }

uint64_t Vmath::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmath::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmath___024root___eval_final(Vmath___024root* vlSelf);

VL_ATTR_COLD void Vmath::final() {
    Vmath___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmath::hierName() const { return vlSymsp->name(); }
const char* Vmath::modelName() const { return "Vmath"; }
unsigned Vmath::threads() const { return 1; }
void Vmath::prepareClone() const { contextp()->prepareClone(); }
void Vmath::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmath::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmath___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmath___024root__trace_init_top(Vmath___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmath___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmath___024root*>(voidSelf);
    Vmath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmath___024root__trace_decl_types(tracep);
    Vmath___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmath___024root__trace_register(Vmath___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmath::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmath::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmath___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
