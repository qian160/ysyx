// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTEST__SYMS_H_
#define VERILATED_VTEST__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VTest.h"

// INCLUDE MODULE CLASSES
#include "VTest___024root.h"
#include "VTest___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using VTest__Vcb_EXIT_t = void (*) (VTest__Syms* __restrict vlSymsp);

// SYMS CLASS (contains all model state)
class VTest__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTest* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTest___024root                TOP;
    VTest___024unit                TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope___024unit;

    // CONSTRUCTORS
    VTest__Syms(VerilatedContext* contextp, const char* namep, VTest* modelp);
    ~VTest__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
