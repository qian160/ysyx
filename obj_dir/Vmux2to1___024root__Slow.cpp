// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux2to1.h for the primary calling header

#include "verilated.h"

#include "Vmux2to1__Syms.h"
#include "Vmux2to1___024root.h"

void Vmux2to1___024root___ctor_var_reset(Vmux2to1___024root* vlSelf);

Vmux2to1___024root::Vmux2to1___024root(Vmux2to1__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmux2to1___024root___ctor_var_reset(this);
}

void Vmux2to1___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmux2to1___024root::~Vmux2to1___024root() {
}
