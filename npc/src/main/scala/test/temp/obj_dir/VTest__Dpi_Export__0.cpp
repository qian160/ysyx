// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "VTest.h"
#include "VTest__Syms.h"
#include "verilated_dpi.h"


void VTest::EXIT() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest___024root::EXIT\n"); );
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("EXIT");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VTest__Vcb_EXIT_t __Vcb = (VTest__Vcb_EXIT_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VTest__Syms*)(__Vscopep->symsp()));
}
