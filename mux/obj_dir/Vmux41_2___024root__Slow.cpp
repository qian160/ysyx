// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux41_2.h for the primary calling header

#include "verilated.h"

#include "Vmux41_2__Syms.h"
#include "Vmux41_2___024root.h"

void Vmux41_2___024root___ctor_var_reset(Vmux41_2___024root* vlSelf);

Vmux41_2___024root::Vmux41_2___024root(Vmux41_2__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmux41_2___024root___ctor_var_reset(this);
}

void Vmux41_2___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmux41_2___024root::~Vmux41_2___024root() {
}
