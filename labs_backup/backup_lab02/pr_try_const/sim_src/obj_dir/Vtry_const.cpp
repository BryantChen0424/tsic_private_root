// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtry_const__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtry_const::Vtry_const(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtry_const__Syms(contextp(), _vcname__, this)}
    , o16{vlSymsp->TOP.o16}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtry_const::Vtry_const(const char* _vcname__)
    : Vtry_const(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtry_const::~Vtry_const() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtry_const___024root___eval_debug_assertions(Vtry_const___024root* vlSelf);
#endif  // VL_DEBUG
void Vtry_const___024root___eval_static(Vtry_const___024root* vlSelf);
void Vtry_const___024root___eval_initial(Vtry_const___024root* vlSelf);
void Vtry_const___024root___eval_settle(Vtry_const___024root* vlSelf);
void Vtry_const___024root___eval(Vtry_const___024root* vlSelf);

void Vtry_const::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtry_const::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtry_const___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtry_const___024root___eval_static(&(vlSymsp->TOP));
        Vtry_const___024root___eval_initial(&(vlSymsp->TOP));
        Vtry_const___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtry_const___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtry_const::eventsPending() { return false; }

uint64_t Vtry_const::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtry_const::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtry_const___024root___eval_final(Vtry_const___024root* vlSelf);

VL_ATTR_COLD void Vtry_const::final() {
    Vtry_const___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtry_const::hierName() const { return vlSymsp->name(); }
const char* Vtry_const::modelName() const { return "Vtry_const"; }
unsigned Vtry_const::threads() const { return 1; }
void Vtry_const::prepareClone() const { contextp()->prepareClone(); }
void Vtry_const::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtry_const::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtry_const___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtry_const___024root__trace_init_top(Vtry_const___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtry_const___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtry_const___024root*>(voidSelf);
    Vtry_const__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtry_const___024root__trace_decl_types(tracep);
    Vtry_const___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtry_const___024root__trace_register(Vtry_const___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtry_const::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtry_const::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtry_const___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
