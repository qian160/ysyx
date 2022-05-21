// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrandom.h for the primary calling header

#include "verilated.h"

#include "Vrandom__Syms.h"
#include "Vrandom___024root.h"

void Vrandom___024root___ctor_var_reset(Vrandom___024root* vlSelf);

Vrandom___024root::Vrandom___024root(Vrandom__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrandom___024root___ctor_var_reset(this);
}

void Vrandom___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vrandom___024root::~Vrandom___024root() {
}
