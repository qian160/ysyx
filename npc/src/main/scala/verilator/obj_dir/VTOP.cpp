// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTOP.h"
#include "VTOP__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTOP::VTOP(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VTOP__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_inst_o{vlSymsp->TOP.io_inst_o}
    , io_timer_i{vlSymsp->TOP.io_timer_i}
    , io_csrData_csrVal{vlSymsp->TOP.io_csrData_csrVal}
    , io_csrData_epc{vlSymsp->TOP.io_csrData_epc}
    , io_csrData_tvec{vlSymsp->TOP.io_csrData_tvec}
    , io_csrData_cause{vlSymsp->TOP.io_csrData_cause}
    , io_csrData_status{vlSymsp->TOP.io_csrData_status}
    , io_regs_0{vlSymsp->TOP.io_regs_0}
    , io_regs_1{vlSymsp->TOP.io_regs_1}
    , io_regs_2{vlSymsp->TOP.io_regs_2}
    , io_regs_3{vlSymsp->TOP.io_regs_3}
    , io_regs_4{vlSymsp->TOP.io_regs_4}
    , io_regs_5{vlSymsp->TOP.io_regs_5}
    , io_regs_6{vlSymsp->TOP.io_regs_6}
    , io_regs_7{vlSymsp->TOP.io_regs_7}
    , io_regs_8{vlSymsp->TOP.io_regs_8}
    , io_regs_9{vlSymsp->TOP.io_regs_9}
    , io_regs_10{vlSymsp->TOP.io_regs_10}
    , io_regs_11{vlSymsp->TOP.io_regs_11}
    , io_regs_12{vlSymsp->TOP.io_regs_12}
    , io_regs_13{vlSymsp->TOP.io_regs_13}
    , io_regs_14{vlSymsp->TOP.io_regs_14}
    , io_regs_15{vlSymsp->TOP.io_regs_15}
    , io_regs_16{vlSymsp->TOP.io_regs_16}
    , io_regs_17{vlSymsp->TOP.io_regs_17}
    , io_regs_18{vlSymsp->TOP.io_regs_18}
    , io_regs_19{vlSymsp->TOP.io_regs_19}
    , io_regs_20{vlSymsp->TOP.io_regs_20}
    , io_regs_21{vlSymsp->TOP.io_regs_21}
    , io_regs_22{vlSymsp->TOP.io_regs_22}
    , io_regs_23{vlSymsp->TOP.io_regs_23}
    , io_regs_24{vlSymsp->TOP.io_regs_24}
    , io_regs_25{vlSymsp->TOP.io_regs_25}
    , io_regs_26{vlSymsp->TOP.io_regs_26}
    , io_regs_27{vlSymsp->TOP.io_regs_27}
    , io_regs_28{vlSymsp->TOP.io_regs_28}
    , io_regs_29{vlSymsp->TOP.io_regs_29}
    , io_regs_30{vlSymsp->TOP.io_regs_30}
    , io_regs_31{vlSymsp->TOP.io_regs_31}
    , io_pc_o{vlSymsp->TOP.io_pc_o}
    , io_o1{vlSymsp->TOP.io_o1}
    , io_o2{vlSymsp->TOP.io_o2}
    , io_src1{vlSymsp->TOP.io_src1}
    , io_src2{vlSymsp->TOP.io_src2}
    , rootp{&(vlSymsp->TOP)}
{
}

VTOP::VTOP(const char* _vcname__)
    : VTOP(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VTOP::~VTOP() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VTOP___024root___eval_initial(VTOP___024root* vlSelf);
void VTOP___024root___eval_settle(VTOP___024root* vlSelf);
void VTOP___024root___eval(VTOP___024root* vlSelf);
#ifdef VL_DEBUG
void VTOP___024root___eval_debug_assertions(VTOP___024root* vlSelf);
#endif  // VL_DEBUG
void VTOP___024root___final(VTOP___024root* vlSelf);

static void _eval_initial_loop(VTOP__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VTOP___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VTOP___024root___eval_settle(&(vlSymsp->TOP));
        VTOP___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VTOP::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTOP::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTOP___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VTOP___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VTOP::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VTOP::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VTOP::final() {
    VTOP___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VTOP___024root__trace_init_top(VTOP___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VTOP___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VTOP___024root__trace_register(VTOP___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTOP::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTOP___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
