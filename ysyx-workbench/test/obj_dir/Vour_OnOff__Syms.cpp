// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vour_OnOff__Syms.h"
#include "Vour_OnOff.h"
#include "Vour_OnOff___024root.h"

// FUNCTIONS
Vour_OnOff__Syms::~Vour_OnOff__Syms()
{
}

Vour_OnOff__Syms::Vour_OnOff__Syms(VerilatedContext* contextp, const char* namep,Vour_OnOff* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
