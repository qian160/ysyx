// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/s081/Downloads/ysyx-workbench/npc/src/main/scala/verilator/verilog/MMIO_RW.sv:1:33
    extern long long mmio_read(long long addr, int len);
    // DPI import at /home/s081/Downloads/ysyx-workbench/npc/src/main/scala/verilator/verilog/MMIO_RW.sv:2:30
    extern void mmio_write(long long addr, int len, long long wdata);

#ifdef __cplusplus
}
#endif

#endif  // guard
