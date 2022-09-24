// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTest.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTest__Syms.h"
#include "VTest___024unit.h"

void VTest___024unit___ctor_var_reset(VTest___024unit* vlSelf);

VTest___024unit::VTest___024unit(VTest__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTest___024unit___ctor_var_reset(this);
}

void VTest___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTest___024unit::~VTest___024unit() {
}
