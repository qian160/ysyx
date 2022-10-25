// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTOP__Syms.h"
#include "VTOP___024unit.h"

extern "C" void vga_update(const char* s);

VL_INLINE_OPT void VTOP___024unit____Vdpiimwrap_vga_update_TOP____024unit(std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP___024unit____Vdpiimwrap_vga_update_TOP____024unit\n"); );
    // Body
    const char* s__Vcvt;
    for (size_t s__Vidx = 0; s__Vidx < 1; ++s__Vidx) s__Vcvt = s.c_str();
    vga_update(s__Vcvt);
}
