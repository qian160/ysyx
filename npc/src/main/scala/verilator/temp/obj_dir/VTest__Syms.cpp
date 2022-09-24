// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTest__Syms.h"
#include "VTest.h"
#include "VTest___024root.h"
#include "VTest___024unit.h"

void VTest___024unit____Vdpiexp_EXIT_TOP____024unit(VTest__Syms* __restrict vlSymsp);

// FUNCTIONS
VTest__Syms::~VTest__Syms()
{
}

VTest__Syms::VTest__Syms(VerilatedContext* contextp, const char* namep,VTest* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope___024unit.configure(this, name(), "$unit", "$unit", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope___024unit.exportInsert(__Vfinal, "EXIT", (void*)(&VTest___024unit____Vdpiexp_EXIT_TOP____024unit));
    }
}
