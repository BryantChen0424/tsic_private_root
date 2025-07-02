// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSW2WAY__SYMS_H_
#define VERILATED_VSW2WAY__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsw2way.h"

// INCLUDE MODULE CLASSES
#include "Vsw2way___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vsw2way__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsw2way* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsw2way___024root              TOP;

    // CONSTRUCTORS
    Vsw2way__Syms(VerilatedContext* contextp, const char* namep, Vsw2way* modelp);
    ~Vsw2way__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
