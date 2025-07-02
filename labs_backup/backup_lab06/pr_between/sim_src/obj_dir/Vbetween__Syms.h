// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBETWEEN__SYMS_H_
#define VERILATED_VBETWEEN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vbetween.h"

// INCLUDE MODULE CLASSES
#include "Vbetween___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vbetween__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbetween* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbetween___024root             TOP;

    // CONSTRUCTORS
    Vbetween__Syms(VerilatedContext* contextp, const char* namep, Vbetween* modelp);
    ~Vbetween__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
