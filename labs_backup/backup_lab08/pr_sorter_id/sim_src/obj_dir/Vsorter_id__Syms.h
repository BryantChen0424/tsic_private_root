// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSORTER_ID__SYMS_H_
#define VERILATED_VSORTER_ID__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsorter_id.h"

// INCLUDE MODULE CLASSES
#include "Vsorter_id___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vsorter_id__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsorter_id* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsorter_id___024root           TOP;

    // CONSTRUCTORS
    Vsorter_id__Syms(VerilatedContext* contextp, const char* namep, Vsorter_id* modelp);
    ~Vsorter_id__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
