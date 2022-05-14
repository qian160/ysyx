// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux2to1.h"
#include "Vmux2to1__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmux2to1::Vmux2to1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vmux2to1__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , select{vlSymsp->TOP.select}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
}

Vmux2to1::Vmux2to1(const char* _vcname__)
    : Vmux2to1(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vmux2to1::~Vmux2to1() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmux2to1___024root___eval_initial(Vmux2to1___024root* vlSelf);
void Vmux2to1___024root___eval_settle(Vmux2to1___024root* vlSelf);
void Vmux2to1___024root___eval(Vmux2to1___024root* vlSelf);
#ifdef VL_DEBUG
void Vmux2to1___024root___eval_debug_assertions(Vmux2to1___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux2to1___024root___final(Vmux2to1___024root* vlSelf);

static void _eval_initial_loop(Vmux2to1__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmux2to1___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmux2to1___024root___eval_settle(&(vlSymsp->TOP));
        Vmux2to1___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vmux2to1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux2to1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux2to1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmux2to1___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vmux2to1::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vmux2to1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vmux2to1::final() {
    Vmux2to1___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vmux2to1___024root__trace_init_top(Vmux2to1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmux2to1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux2to1___024root*>(voidSelf);
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmux2to1___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmux2to1___024root__trace_register(Vmux2to1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmux2to1::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmux2to1___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
