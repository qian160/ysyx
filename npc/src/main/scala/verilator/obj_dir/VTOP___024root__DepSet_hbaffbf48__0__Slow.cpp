// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTOP___024root.h"

extern const VlWide<16>/*511:0*/ VTOP__ConstPool__CONST_h83ea3072_0;

VL_ATTR_COLD void VTOP___024root___initial__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___initial__TOP__0\n"); );
    // Body
    VL_READMEM_N(true, 32, 1048576, 0, VL_CVT_PACK_STR_NW(16, VTOP__ConstPool__CONST_h83ea3072_0)
                 ,  &(vlSelf->TOP__DOT__Main_Memory__DOT__ram)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VTOP___024root___eval_initial(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_initial\n"); );
    // Body
    VTOP___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VTOP___024root___settle__TOP__0(VTOP___024root* vlSelf);

VL_ATTR_COLD void VTOP___024root___eval_settle(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_settle\n"); );
    // Body
    VTOP___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VTOP___024root___final(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___final\n"); );
}

VL_ATTR_COLD void VTOP___024root___ctor_var_reset(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_timer_i = VL_RAND_RESET_Q(64);
    vlSelf->io_csrData_csrVal = VL_RAND_RESET_Q(64);
    vlSelf->io_csrData_epc = VL_RAND_RESET_Q(64);
    vlSelf->io_csrData_tvec = VL_RAND_RESET_Q(64);
    vlSelf->io_csrData_cause = VL_RAND_RESET_Q(64);
    vlSelf->io_csrData_status = VL_RAND_RESET_Q(64);
    vlSelf->io_stall_o = VL_RAND_RESET_I(5);
    vlSelf->io_flush_o = VL_RAND_RESET_I(5);
    vlSelf->io_regs_0 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_1 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_2 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_3 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_4 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_5 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_6 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_7 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_8 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_9 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_10 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_11 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_12 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_13 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_14 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_15 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_16 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_17 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_18 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_19 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_20 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_21 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_22 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_23 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_24 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_25 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_26 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_27 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_28 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_29 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_30 = VL_RAND_RESET_Q(64);
    vlSelf->io_regs_31 = VL_RAND_RESET_Q(64);
    vlSelf->io_pc_o = VL_RAND_RESET_Q(64);
    vlSelf->io_inst_o = VL_RAND_RESET_I(32);
    vlSelf->io_o1 = VL_RAND_RESET_Q(64);
    vlSelf->io_o2 = VL_RAND_RESET_Q(64);
    vlSelf->io_src1 = VL_RAND_RESET_Q(64);
    vlSelf->io_src2 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID_io_decInfo_o_branchOp_happen = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID_io_stall_req_o = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_io_ex_fwd_o_rf_rd = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__MEM_io_writeOp_o_rf_wdata = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__MEM_io_mem_fwd_o_rf_rd = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__Csr_io_csrData_o_csrVal = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__IF__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__IF__DOT___GEN_0 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID__DOT___rs1Val_T_6 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID__DOT__rs1Val = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID__DOT___rs2Val_T_6 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID__DOT__rs2Val = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID__DOT__csrVal = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID__DOT___decRes_T_140 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ID__DOT___decRes_T_155 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ID__DOT___decRes_T_170 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ID__DOT___decRes_T_185 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ID__DOT__decRes_0 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ID__DOT___decRes_T_203 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ID__DOT___decRes_T_218 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ID__DOT___decRes_T_233 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ID__DOT___decRes_T_248 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_aluOp_src2_T_4 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID__DOT___io_stall_req_o_T = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID__DOT___io_stall_req_o_T_5 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_13 = VL_RAND_RESET_I(13);
    vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_24 = VL_RAND_RESET_I(21);
    vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_aluOp_src2_T_16 = VL_RAND_RESET_I(12);
    vlSelf->TOP__DOT__ID__DOT__rsVal = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID__DOT___GEN_75 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(76, vlSelf->TOP__DOT__ID__DOT___GEN_120);
    VL_RAND_RESET_W(128, vlSelf->TOP__DOT__EX__DOT___aluRes_T_13);
    VL_RAND_RESET_W(128, vlSelf->TOP__DOT__EX__DOT___aluRes_T_15);
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_34 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_42 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_68 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_77 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_109 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_126 = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_133 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->TOP__DOT__EX__DOT___aluRes_T_159);
    VL_RAND_RESET_W(128, vlSelf->TOP__DOT__EX__DOT___aluRes_T_169);
    VL_RAND_RESET_W(128, vlSelf->TOP__DOT__EX__DOT___aluRes_T_187);
    VL_RAND_RESET_W(128, vlSelf->TOP__DOT__EX__DOT___aluRes_T_191);
    vlSelf->TOP__DOT__Regfile__DOT__registers_0 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_1 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_2 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_3 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_4 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_5 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_6 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_7 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_8 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_9 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_10 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_11 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_12 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_13 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_14 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_15 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_16 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_17 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_18 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_19 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_20 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_21 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_22 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_23 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_24 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_25 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_26 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_27 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_28 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_29 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_30 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_31 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT___GEN_77 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT___GEN_90 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT___GEN_109 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT___GEN_122 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Csr__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Csr__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Csr__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Csr__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Csr__DOT___GEN_1 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Csr__DOT___GEN_2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<1048576; ++__Vi0) {
        vlSelf->TOP__DOT__Main_Memory__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__Main_Memory__DOT__MMIO_RW_rdata = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Main_Memory__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__Main_Memory__DOT__dword = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Main_Memory__DOT___store_en_T_3 = VL_RAND_RESET_I(2);
    vlSelf->TOP__DOT__Main_Memory__DOT__store_en = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_12 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_13 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_14 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_15 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_16 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_17 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_18 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_19 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_28 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_29 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_30 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_31 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_44 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_45 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_46 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_47 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_60 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_61 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_62 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_63 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_76 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_77 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_78 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_79 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_80 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_81 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_82 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_83 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_92 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_93 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_94 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_95 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_96 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_97 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_98 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_99 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_108 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_109 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_110 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_111 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_112 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_113 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_114 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_115 = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__Main_Memory__DOT___T_62 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(95, vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151);
    vlSelf->TOP__DOT__Main_Memory__DOT__initvar = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__IF_ID__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__IF_ID__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID_EX__DOT__decInfo_writeOp_rf_wen = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID_EX__DOT__decInfo_writeOp_rf_rd = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ID_EX__DOT__decInfo_writeOp_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID_EX__DOT__decInfo_writeOp_csr_wdata = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID_EX__DOT__decInfo_writeOp_csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->TOP__DOT__ID_EX__DOT__decInfo_aluOp_src1 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID_EX__DOT__decInfo_aluOp_src2 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID_EX__DOT__decInfo_aluOp_opt = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ID_EX__DOT__decInfo_memOp_is_load = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID_EX__DOT__decInfo_memOp_is_store = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID_EX__DOT__decInfo_memOp_unsigned = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID_EX__DOT__decInfo_memOp_length = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__ID_EX__DOT__decInfo_memOp_sdata = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID_EX__DOT__debug_exit = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID_EX__DOT__debug_a0 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID_EX__DOT__debug_pc = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID_EX__DOT__debug_inst = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID_EX__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_rf_wen = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_rf_rd = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_rf_wdata = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_csr_wdata = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_load = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_MEM__DOT__memOp_unsigned = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length = VL_RAND_RESET_I(4);
    vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__EX_MEM__DOT__debug_exit = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__EX_MEM__DOT__debug_a0 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__EX_MEM__DOT__debug_pc = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__EX_MEM__DOT__debug_inst = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_rf_wen = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_rf_rd = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_rf_wdata = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_csr_wdata = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->TOP__DOT__MEM_WB__DOT__debug_exit = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__MEM_WB__DOT__debug_a0 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__MEM_WB__DOT__debug_pc = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__MEM_WB__DOT__debug_inst = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_mmio_read__0__Vfuncout = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
