// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsorter_id__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsorter_id::Vsorter_id(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsorter_id__Syms(contextp(), _vcname__, this)}
    , v0{vlSymsp->TOP.v0}
    , v1{vlSymsp->TOP.v1}
    , v2{vlSymsp->TOP.v2}
    , v3{vlSymsp->TOP.v3}
    , o0{vlSymsp->TOP.o0}
    , o1{vlSymsp->TOP.o1}
    , o2{vlSymsp->TOP.o2}
    , o3{vlSymsp->TOP.o3}
    , o3_id{vlSymsp->TOP.o3_id}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsorter_id::Vsorter_id(const char* _vcname__)
    : Vsorter_id(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsorter_id::~Vsorter_id() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsorter_id___024root___eval_debug_assertions(Vsorter_id___024root* vlSelf);
#endif  // VL_DEBUG
void Vsorter_id___024root___eval_static(Vsorter_id___024root* vlSelf);
void Vsorter_id___024root___eval_initial(Vsorter_id___024root* vlSelf);
void Vsorter_id___024root___eval_settle(Vsorter_id___024root* vlSelf);
void Vsorter_id___024root___eval(Vsorter_id___024root* vlSelf);

void Vsorter_id::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsorter_id::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsorter_id___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsorter_id___024root___eval_static(&(vlSymsp->TOP));
        Vsorter_id___024root___eval_initial(&(vlSymsp->TOP));
        Vsorter_id___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsorter_id___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsorter_id::eventsPending() { return false; }

uint64_t Vsorter_id::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsorter_id::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsorter_id___024root___eval_final(Vsorter_id___024root* vlSelf);

VL_ATTR_COLD void Vsorter_id::final() {
    Vsorter_id___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsorter_id::hierName() const { return vlSymsp->name(); }
const char* Vsorter_id::modelName() const { return "Vsorter_id"; }
unsigned Vsorter_id::threads() const { return 1; }
void Vsorter_id::prepareClone() const { contextp()->prepareClone(); }
void Vsorter_id::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsorter_id::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsorter_id___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsorter_id___024root__trace_init_top(Vsorter_id___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsorter_id___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsorter_id___024root*>(voidSelf);
    Vsorter_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsorter_id___024root__trace_decl_types(tracep);
    Vsorter_id___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsorter_id___024root__trace_register(Vsorter_id___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsorter_id::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsorter_id::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsorter_id___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
