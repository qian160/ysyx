// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux41_2.h for the primary calling header

#ifndef VERILATED_VMUX41_2___024ROOT_H_
#define VERILATED_VMUX41_2___024ROOT_H_  // guard

#include "verilated.h"

class Vmux41_2__Syms;
VL_MODULE(Vmux41_2___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(x0,1,0);
    VL_IN8(x1,1,0);
    VL_IN8(x2,1,0);
    VL_IN8(x3,1,0);
    VL_IN8(y,1,0);
    VL_OUT8(f,1,0);
    CData/*1:0*/ mux41_2__DOT__m0__DOT__i0__DOT__lut_out;
    CData/*0:0*/ mux41_2__DOT__m0__DOT__i0__DOT__hit;
    SData/*15:0*/ mux41_2__DOT____Vcellinp__m0____pinNumber3;
    VlUnpacked<CData/*3:0*/, 4> mux41_2__DOT__m0__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 4> mux41_2__DOT__m0__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*1:0*/, 4> mux41_2__DOT__m0__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vmux41_2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux41_2___024root(Vmux41_2__Syms* symsp, const char* name);
    ~Vmux41_2___024root();
    VL_UNCOPYABLE(Vmux41_2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
