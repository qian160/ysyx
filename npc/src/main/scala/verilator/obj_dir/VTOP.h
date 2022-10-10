// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"

class VTOP__Syms;
class VTOP___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class VTOP VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    VTOP__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT(&io_inst_o,31,0);
    VL_IN64(&io_timer_i,63,0);
    VL_OUT64(&io_regs_0,63,0);
    VL_OUT64(&io_regs_1,63,0);
    VL_OUT64(&io_regs_2,63,0);
    VL_OUT64(&io_regs_3,63,0);
    VL_OUT64(&io_regs_4,63,0);
    VL_OUT64(&io_regs_5,63,0);
    VL_OUT64(&io_regs_6,63,0);
    VL_OUT64(&io_regs_7,63,0);
    VL_OUT64(&io_regs_8,63,0);
    VL_OUT64(&io_regs_9,63,0);
    VL_OUT64(&io_regs_10,63,0);
    VL_OUT64(&io_regs_11,63,0);
    VL_OUT64(&io_regs_12,63,0);
    VL_OUT64(&io_regs_13,63,0);
    VL_OUT64(&io_regs_14,63,0);
    VL_OUT64(&io_regs_15,63,0);
    VL_OUT64(&io_regs_16,63,0);
    VL_OUT64(&io_regs_17,63,0);
    VL_OUT64(&io_regs_18,63,0);
    VL_OUT64(&io_regs_19,63,0);
    VL_OUT64(&io_regs_20,63,0);
    VL_OUT64(&io_regs_21,63,0);
    VL_OUT64(&io_regs_22,63,0);
    VL_OUT64(&io_regs_23,63,0);
    VL_OUT64(&io_regs_24,63,0);
    VL_OUT64(&io_regs_25,63,0);
    VL_OUT64(&io_regs_26,63,0);
    VL_OUT64(&io_regs_27,63,0);
    VL_OUT64(&io_regs_28,63,0);
    VL_OUT64(&io_regs_29,63,0);
    VL_OUT64(&io_regs_30,63,0);
    VL_OUT64(&io_regs_31,63,0);
    VL_OUT64(&io_pc_o,63,0);
    VL_OUT64(&io_o,63,0);
    VL_OUT64(&io_src1,63,0);
    VL_OUT64(&io_src2,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VTOP___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VTOP(VerilatedContext* contextp, const char* name = "TOP");
    explicit VTOP(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VTOP();
  private:
    VL_UNCOPYABLE(VTOP);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard