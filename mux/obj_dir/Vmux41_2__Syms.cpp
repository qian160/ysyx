// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmux41_2__Syms.h"
#include "Vmux41_2.h"
#include "Vmux41_2___024root.h"

// FUNCTIONS
Vmux41_2__Syms::~Vmux41_2__Syms()
{
}

Vmux41_2__Syms::Vmux41_2__Syms(VerilatedContext* contextp, const char* namep,Vmux41_2* modelp)
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
