// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrandom.h for the primary calling header

#ifndef VERILATED_VRANDOM___024ROOT_H_
#define VERILATED_VRANDOM___024ROOT_H_  // guard

#include "verilated.h"

class Vrandom__Syms;
VL_MODULE(Vrandom___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*7:0*/ random__DOT__temp;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT8(data[8],7,0);

    // INTERNAL VARIABLES
    Vrandom__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrandom___024root(Vrandom__Syms* symsp, const char* name);
    ~Vrandom___024root();
    VL_UNCOPYABLE(Vrandom___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
