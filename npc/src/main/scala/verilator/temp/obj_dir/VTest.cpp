// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTest.h"
#include "VTest__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VTest::VTest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VTest__Syms(_vcontextp__, _vcname__, this)}
    , panic{vlSymsp->TOP.panic}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , c{vlSymsp->TOP.c}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
}

VTest::VTest(const char* _vcname__)
    : VTest(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VTest::~VTest() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VTest___024root___eval_initial(VTest___024root* vlSelf);
void VTest___024root___eval_settle(VTest___024root* vlSelf);
void VTest___024root___eval(VTest___024root* vlSelf);
#ifdef VL_DEBUG
void VTest___024root___eval_debug_assertions(VTest___024root* vlSelf);
#endif  // VL_DEBUG
void VTest___024root___final(VTest___024root* vlSelf);

static void _eval_initial_loop(VTest__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VTest___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VTest___024root___eval_settle(&(vlSymsp->TOP));
        VTest___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VTest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTest::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTest___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VTest___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VTest::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VTest::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VTest::final() {
    VTest___024root___final(&(vlSymsp->TOP));
}
