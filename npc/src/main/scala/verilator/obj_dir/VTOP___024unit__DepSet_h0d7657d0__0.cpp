// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTOP__Syms.h"
#include "VTOP___024unit.h"

extern "C" long long mmio_read(long long addr, int len);

VL_INLINE_OPT void VTOP___024unit____Vdpiimwrap_mmio_read_TOP____024unit(QData/*63:0*/ addr, IData/*31:0*/ len, QData/*63:0*/ &mmio_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP___024unit____Vdpiimwrap_mmio_read_TOP____024unit\n"); );
    // Body
    long long addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    long long mmio_read__Vfuncrtn__Vcvt;
    mmio_read__Vfuncrtn__Vcvt = mmio_read(addr__Vcvt, len__Vcvt);
    mmio_read__Vfuncrtn = mmio_read__Vfuncrtn__Vcvt;
}

extern "C" void mmio_write(long long addr, int len, long long wdata);

VL_INLINE_OPT void VTOP___024unit____Vdpiimwrap_mmio_write_TOP____024unit(QData/*63:0*/ addr, IData/*31:0*/ len, QData/*63:0*/ wdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTOP___024unit____Vdpiimwrap_mmio_write_TOP____024unit\n"); );
    // Body
    long long addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    mmio_write(addr__Vcvt, len__Vcvt, wdata__Vcvt);
}
