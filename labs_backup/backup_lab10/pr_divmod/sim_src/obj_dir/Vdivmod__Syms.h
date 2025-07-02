// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDIVMOD__SYMS_H_
#define VERILATED_VDIVMOD__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdivmod.h"

// INCLUDE MODULE CLASSES
#include "Vdivmod___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vdivmod__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdivmod* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdivmod___024root              TOP;

    // CONSTRUCTORS
    Vdivmod__Syms(VerilatedContext* contextp, const char* namep, Vdivmod* modelp);
    ~Vdivmod__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
