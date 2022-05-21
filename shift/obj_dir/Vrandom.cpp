// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrandom.h"
#include "Vrandom__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vrandom::Vrandom(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vrandom__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , data{vlSymsp->TOP.data}
    , rootp{&(vlSymsp->TOP)}
{
}

Vrandom::Vrandom(const char* _vcname__)
    : Vrandom(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vrandom::~Vrandom() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vrandom___024root___eval_initial(Vrandom___024root* vlSelf);
void Vrandom___024root___eval_settle(Vrandom___024root* vlSelf);
void Vrandom___024root___eval(Vrandom___024root* vlSelf);
#ifdef VL_DEBUG
void Vrandom___024root___eval_debug_assertions(Vrandom___024root* vlSelf);
#endif  // VL_DEBUG
void Vrandom___024root___final(Vrandom___024root* vlSelf);

static void _eval_initial_loop(Vrandom__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vrandom___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vrandom___024root___eval_settle(&(vlSymsp->TOP));
        Vrandom___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vrandom::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrandom::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrandom___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vrandom___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vrandom::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vrandom::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vrandom::final() {
    Vrandom___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vrandom___024root__trace_init_top(Vrandom___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrandom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrandom___024root*>(voidSelf);
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vrandom___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vrandom___024root__trace_register(Vrandom___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrandom::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vrandom___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
