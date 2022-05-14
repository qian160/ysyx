// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux2to1.h for the primary calling header

#ifndef VERILATED_VMUX2TO1___024ROOT_H_
#define VERILATED_VMUX2TO1___024ROOT_H_  // guard

#include "verilated.h"

class Vmux2to1__Syms;
VL_MODULE(Vmux2to1___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_IN8(select,0,0);
    VL_OUT8(y,0,0);

    // INTERNAL VARIABLES
    Vmux2to1__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux2to1___024root(Vmux2to1__Syms* symsp, const char* name);
    ~Vmux2to1___024root();
    VL_UNCOPYABLE(Vmux2to1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
