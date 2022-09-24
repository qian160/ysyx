// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTest.h for the primary calling header

#ifndef VERILATED_VTEST___024UNIT_H_
#define VERILATED_VTEST___024UNIT_H_  // guard

#include "verilated.h"

class VTest__Syms;
VL_MODULE(VTest___024unit) {
  public:

    // INTERNAL VARIABLES
    VTest__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTest___024unit(VTest__Syms* symsp, const char* name);
    ~VTest___024unit();
    VL_UNCOPYABLE(VTest___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
