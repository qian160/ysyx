// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "VTOP.h"
#include "VTOP__Syms.h"
#include "verilated_dpi.h"


void VTOP::EXIT() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root::EXIT\n"); );
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("EXIT");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VTOP__Vcb_EXIT_t __Vcb = (VTOP__Vcb_EXIT_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VTOP__Syms*)(__Vscopep->symsp()));
}
