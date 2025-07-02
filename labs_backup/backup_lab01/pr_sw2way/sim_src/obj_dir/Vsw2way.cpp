// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsw2way__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsw2way::Vsw2way(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsw2way__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , na_and_nb{vlSymsp->TOP.na_and_nb}
    , sw{vlSymsp->TOP.sw}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsw2way::Vsw2way(const char* _vcname__)
    : Vsw2way(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsw2way::~Vsw2way() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsw2way___024root___eval_debug_assertions(Vsw2way___024root* vlSelf);
#endif  // VL_DEBUG
void Vsw2way___024root___eval_static(Vsw2way___024root* vlSelf);
void Vsw2way___024root___eval_initial(Vsw2way___024root* vlSelf);
void Vsw2way___024root___eval_settle(Vsw2way___024root* vlSelf);
void Vsw2way___024root___eval(Vsw2way___024root* vlSelf);

void Vsw2way::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsw2way::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsw2way___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsw2way___024root___eval_static(&(vlSymsp->TOP));
        Vsw2way___024root___eval_initial(&(vlSymsp->TOP));
        Vsw2way___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsw2way___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsw2way::eventsPending() { return false; }

uint64_t Vsw2way::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsw2way::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsw2way___024root___eval_final(Vsw2way___024root* vlSelf);

VL_ATTR_COLD void Vsw2way::final() {
    Vsw2way___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsw2way::hierName() const { return vlSymsp->name(); }
const char* Vsw2way::modelName() const { return "Vsw2way"; }
unsigned Vsw2way::threads() const { return 1; }
void Vsw2way::prepareClone() const { contextp()->prepareClone(); }
void Vsw2way::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsw2way::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsw2way___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsw2way___024root__trace_init_top(Vsw2way___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsw2way___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsw2way___024root*>(voidSelf);
    Vsw2way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsw2way___024root__trace_decl_types(tracep);
    Vsw2way___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsw2way___024root__trace_register(Vsw2way___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsw2way::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsw2way::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsw2way___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
