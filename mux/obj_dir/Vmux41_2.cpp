// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux41_2.h"
#include "Vmux41_2__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmux41_2::Vmux41_2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vmux41_2__Syms(_vcontextp__, _vcname__, this)}
    , x0{vlSymsp->TOP.x0}
    , x1{vlSymsp->TOP.x1}
    , x2{vlSymsp->TOP.x2}
    , x3{vlSymsp->TOP.x3}
    , y{vlSymsp->TOP.y}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
}

Vmux41_2::Vmux41_2(const char* _vcname__)
    : Vmux41_2(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vmux41_2::~Vmux41_2() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmux41_2___024root___eval_initial(Vmux41_2___024root* vlSelf);
void Vmux41_2___024root___eval_settle(Vmux41_2___024root* vlSelf);
void Vmux41_2___024root___eval(Vmux41_2___024root* vlSelf);
#ifdef VL_DEBUG
void Vmux41_2___024root___eval_debug_assertions(Vmux41_2___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux41_2___024root___final(Vmux41_2___024root* vlSelf);

static void _eval_initial_loop(Vmux41_2__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmux41_2___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmux41_2___024root___eval_settle(&(vlSymsp->TOP));
        Vmux41_2___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vmux41_2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux41_2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux41_2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmux41_2___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vmux41_2::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vmux41_2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vmux41_2::final() {
    Vmux41_2___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vmux41_2___024root__trace_init_top(Vmux41_2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmux41_2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux41_2___024root*>(voidSelf);
    Vmux41_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmux41_2___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmux41_2___024root__trace_register(Vmux41_2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmux41_2::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmux41_2___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
