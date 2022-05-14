// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vour_OnOff.h"
#include "Vour_OnOff__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vour_OnOff::Vour_OnOff(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vour_OnOff__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , c{vlSymsp->TOP.c}
    , rootp{&(vlSymsp->TOP)}
{
}

Vour_OnOff::Vour_OnOff(const char* _vcname__)
    : Vour_OnOff(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vour_OnOff::~Vour_OnOff() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vour_OnOff___024root___eval_initial(Vour_OnOff___024root* vlSelf);
void Vour_OnOff___024root___eval_settle(Vour_OnOff___024root* vlSelf);
void Vour_OnOff___024root___eval(Vour_OnOff___024root* vlSelf);
#ifdef VL_DEBUG
void Vour_OnOff___024root___eval_debug_assertions(Vour_OnOff___024root* vlSelf);
#endif  // VL_DEBUG
void Vour_OnOff___024root___final(Vour_OnOff___024root* vlSelf);

static void _eval_initial_loop(Vour_OnOff__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vour_OnOff___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vour_OnOff___024root___eval_settle(&(vlSymsp->TOP));
        Vour_OnOff___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vour_OnOff::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vour_OnOff::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vour_OnOff___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vour_OnOff___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vour_OnOff::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vour_OnOff::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vour_OnOff::final() {
    Vour_OnOff___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vour_OnOff___024root__trace_init_top(Vour_OnOff___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vour_OnOff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vour_OnOff___024root*>(voidSelf);
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vour_OnOff___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vour_OnOff___024root__trace_register(Vour_OnOff___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vour_OnOff::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vour_OnOff___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
