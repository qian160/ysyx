// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTest.h for the primary calling header

#ifndef VERILATED_VTEST___024ROOT_H_
#define VERILATED_VTEST___024ROOT_H_  // guard

#include "verilated.h"

class VTest__Syms;
class VTest___024unit;

VL_MODULE(VTest___024root) {
  public:
    // CELLS
    VTest___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(panic,0,0);
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    VL_OUT16(c,8,0);

    // INTERNAL VARIABLES
    VTest__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTest___024root(VTest__Syms* symsp, const char* name);
    ~VTest___024root();
    VL_UNCOPYABLE(VTest___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
