// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vour_OnOff.h for the primary calling header

#include "verilated.h"

#include "Vour_OnOff__Syms.h"
#include "Vour_OnOff___024root.h"

void Vour_OnOff___024root___ctor_var_reset(Vour_OnOff___024root* vlSelf);

Vour_OnOff___024root::Vour_OnOff___024root(Vour_OnOff__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vour_OnOff___024root___ctor_var_reset(this);
}

void Vour_OnOff___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vour_OnOff___024root::~Vour_OnOff___024root() {
}
