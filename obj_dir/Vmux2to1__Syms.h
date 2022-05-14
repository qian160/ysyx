// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMUX2TO1__SYMS_H_
#define VERILATED_VMUX2TO1__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmux2to1.h"

// INCLUDE MODULE CLASSES
#include "Vmux2to1___024root.h"

// SYMS CLASS (contains all model state)
class Vmux2to1__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmux2to1* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmux2to1___024root             TOP;

    // CONSTRUCTORS
    Vmux2to1__Syms(VerilatedContext* contextp, const char* namep, Vmux2to1* modelp);
    ~Vmux2to1__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
