// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTOP__Syms.h"


VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+149,"clock", false,-1);
    tracep->declBit(c+150,"reset", false,-1);
    tracep->declQuad(c+151,"io_timer_i", false,-1, 63,0);
    tracep->declQuad(c+153,"io_regs_0", false,-1, 63,0);
    tracep->declQuad(c+155,"io_regs_1", false,-1, 63,0);
    tracep->declQuad(c+157,"io_regs_2", false,-1, 63,0);
    tracep->declQuad(c+159,"io_regs_3", false,-1, 63,0);
    tracep->declQuad(c+161,"io_regs_4", false,-1, 63,0);
    tracep->declQuad(c+163,"io_regs_5", false,-1, 63,0);
    tracep->declQuad(c+165,"io_regs_6", false,-1, 63,0);
    tracep->declQuad(c+167,"io_regs_7", false,-1, 63,0);
    tracep->declQuad(c+169,"io_regs_8", false,-1, 63,0);
    tracep->declQuad(c+171,"io_regs_9", false,-1, 63,0);
    tracep->declQuad(c+173,"io_regs_10", false,-1, 63,0);
    tracep->declQuad(c+175,"io_regs_11", false,-1, 63,0);
    tracep->declQuad(c+177,"io_regs_12", false,-1, 63,0);
    tracep->declQuad(c+179,"io_regs_13", false,-1, 63,0);
    tracep->declQuad(c+181,"io_regs_14", false,-1, 63,0);
    tracep->declQuad(c+183,"io_regs_15", false,-1, 63,0);
    tracep->declQuad(c+185,"io_regs_16", false,-1, 63,0);
    tracep->declQuad(c+187,"io_regs_17", false,-1, 63,0);
    tracep->declQuad(c+189,"io_regs_18", false,-1, 63,0);
    tracep->declQuad(c+191,"io_regs_19", false,-1, 63,0);
    tracep->declQuad(c+193,"io_regs_20", false,-1, 63,0);
    tracep->declQuad(c+195,"io_regs_21", false,-1, 63,0);
    tracep->declQuad(c+197,"io_regs_22", false,-1, 63,0);
    tracep->declQuad(c+199,"io_regs_23", false,-1, 63,0);
    tracep->declQuad(c+201,"io_regs_24", false,-1, 63,0);
    tracep->declQuad(c+203,"io_regs_25", false,-1, 63,0);
    tracep->declQuad(c+205,"io_regs_26", false,-1, 63,0);
    tracep->declQuad(c+207,"io_regs_27", false,-1, 63,0);
    tracep->declQuad(c+209,"io_regs_28", false,-1, 63,0);
    tracep->declQuad(c+211,"io_regs_29", false,-1, 63,0);
    tracep->declQuad(c+213,"io_regs_30", false,-1, 63,0);
    tracep->declQuad(c+215,"io_regs_31", false,-1, 63,0);
    tracep->declQuad(c+217,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+219,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+220,"io_o", false,-1, 63,0);
    tracep->declQuad(c+222,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+224,"io_src2", false,-1, 63,0);
    tracep->pushNamePrefix("TOP ");
    tracep->declBit(c+149,"clock", false,-1);
    tracep->declBit(c+150,"reset", false,-1);
    tracep->declQuad(c+151,"io_timer_i", false,-1, 63,0);
    tracep->declQuad(c+153,"io_regs_0", false,-1, 63,0);
    tracep->declQuad(c+155,"io_regs_1", false,-1, 63,0);
    tracep->declQuad(c+157,"io_regs_2", false,-1, 63,0);
    tracep->declQuad(c+159,"io_regs_3", false,-1, 63,0);
    tracep->declQuad(c+161,"io_regs_4", false,-1, 63,0);
    tracep->declQuad(c+163,"io_regs_5", false,-1, 63,0);
    tracep->declQuad(c+165,"io_regs_6", false,-1, 63,0);
    tracep->declQuad(c+167,"io_regs_7", false,-1, 63,0);
    tracep->declQuad(c+169,"io_regs_8", false,-1, 63,0);
    tracep->declQuad(c+171,"io_regs_9", false,-1, 63,0);
    tracep->declQuad(c+173,"io_regs_10", false,-1, 63,0);
    tracep->declQuad(c+175,"io_regs_11", false,-1, 63,0);
    tracep->declQuad(c+177,"io_regs_12", false,-1, 63,0);
    tracep->declQuad(c+179,"io_regs_13", false,-1, 63,0);
    tracep->declQuad(c+181,"io_regs_14", false,-1, 63,0);
    tracep->declQuad(c+183,"io_regs_15", false,-1, 63,0);
    tracep->declQuad(c+185,"io_regs_16", false,-1, 63,0);
    tracep->declQuad(c+187,"io_regs_17", false,-1, 63,0);
    tracep->declQuad(c+189,"io_regs_18", false,-1, 63,0);
    tracep->declQuad(c+191,"io_regs_19", false,-1, 63,0);
    tracep->declQuad(c+193,"io_regs_20", false,-1, 63,0);
    tracep->declQuad(c+195,"io_regs_21", false,-1, 63,0);
    tracep->declQuad(c+197,"io_regs_22", false,-1, 63,0);
    tracep->declQuad(c+199,"io_regs_23", false,-1, 63,0);
    tracep->declQuad(c+201,"io_regs_24", false,-1, 63,0);
    tracep->declQuad(c+203,"io_regs_25", false,-1, 63,0);
    tracep->declQuad(c+205,"io_regs_26", false,-1, 63,0);
    tracep->declQuad(c+207,"io_regs_27", false,-1, 63,0);
    tracep->declQuad(c+209,"io_regs_28", false,-1, 63,0);
    tracep->declQuad(c+211,"io_regs_29", false,-1, 63,0);
    tracep->declQuad(c+213,"io_regs_30", false,-1, 63,0);
    tracep->declQuad(c+215,"io_regs_31", false,-1, 63,0);
    tracep->declQuad(c+217,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+219,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+220,"io_o", false,-1, 63,0);
    tracep->declQuad(c+222,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+224,"io_src2", false,-1, 63,0);
    tracep->declBit(c+149,"IF_clock", false,-1);
    tracep->declBit(c+150,"IF_reset", false,-1);
    tracep->declBit(c+1,"IF_io_branchOp_i_happen", false,-1);
    tracep->declQuad(c+2,"IF_io_branchOp_i_newPC", false,-1, 63,0);
    tracep->declBus(c+4,"IF_io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+5,"IF_io_pc_o", false,-1, 63,0);
    tracep->declBus(c+4,"IF_io_inst_o", false,-1, 31,0);
    tracep->declBit(c+149,"ID_clock", false,-1);
    tracep->declBit(c+150,"ID_reset", false,-1);
    tracep->declBus(c+4,"ID_io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+5,"ID_io_pc_i", false,-1, 63,0);
    tracep->declQuad(c+7,"ID_io_regVal_i_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+9,"ID_io_regVal_i_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+11,"ID_io_regVal_i_a0", false,-1, 63,0);
    tracep->declBus(c+13,"ID_io_readRfOp_o_rs1", false,-1, 4,0);
    tracep->declBus(c+14,"ID_io_readRfOp_o_rs2", false,-1, 4,0);
    tracep->declBit(c+15,"ID_io_decInfo_o_writeRfOp_wen", false,-1);
    tracep->declBus(c+16,"ID_io_decInfo_o_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+17,"ID_io_decInfo_o_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+19,"ID_io_decInfo_o_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+21,"ID_io_decInfo_o_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+1,"ID_io_decInfo_o_branchOp_happen", false,-1);
    tracep->declQuad(c+2,"ID_io_decInfo_o_branchOp_newPC", false,-1, 63,0);
    tracep->declBit(c+22,"ID_io_decInfo_o_memOp_isLoad", false,-1);
    tracep->declBit(c+23,"ID_io_decInfo_o_memOp_isStore", false,-1);
    tracep->declBit(c+24,"ID_io_decInfo_o_memOp_unsigned", false,-1);
    tracep->declBus(c+25,"ID_io_decInfo_o_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+26,"ID_io_decInfo_o_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+28,"ID_io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"ID_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"ID_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+4,"ID_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+15,"EX_io_decInfo_i_writeRfOp_wen", false,-1);
    tracep->declBus(c+16,"EX_io_decInfo_i_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+17,"EX_io_decInfo_i_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+19,"EX_io_decInfo_i_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+21,"EX_io_decInfo_i_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+22,"EX_io_decInfo_i_memOp_isLoad", false,-1);
    tracep->declBit(c+23,"EX_io_decInfo_i_memOp_isStore", false,-1);
    tracep->declBit(c+24,"EX_io_decInfo_i_memOp_unsigned", false,-1);
    tracep->declBus(c+25,"EX_io_decInfo_i_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+26,"EX_io_decInfo_i_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+15,"EX_io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+16,"EX_io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+29,"EX_io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+22,"EX_io_memOp_o_isLoad", false,-1);
    tracep->declBit(c+23,"EX_io_memOp_o_isStore", false,-1);
    tracep->declBit(c+24,"EX_io_memOp_o_unsigned", false,-1);
    tracep->declBus(c+25,"EX_io_memOp_o_length", false,-1, 1,0);
    tracep->declQuad(c+29,"EX_io_memOp_o_addr", false,-1, 63,0);
    tracep->declQuad(c+26,"EX_io_memOp_o_sdata", false,-1, 63,0);
    tracep->declBit(c+28,"EX_io_debug_i_exit", false,-1);
    tracep->declQuad(c+11,"EX_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"EX_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+4,"EX_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+28,"EX_io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"EX_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"EX_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+4,"EX_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+15,"MEM_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+16,"MEM_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+29,"MEM_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+22,"MEM_io_memOp_i_isLoad", false,-1);
    tracep->declBit(c+23,"MEM_io_memOp_i_isStore", false,-1);
    tracep->declBit(c+24,"MEM_io_memOp_i_unsigned", false,-1);
    tracep->declBus(c+25,"MEM_io_memOp_i_length", false,-1, 1,0);
    tracep->declQuad(c+29,"MEM_io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+26,"MEM_io_memOp_i_sdata", false,-1, 63,0);
    tracep->declQuad(c+31,"MEM_io_loadVal_i", false,-1, 63,0);
    tracep->declBit(c+15,"MEM_io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+16,"MEM_io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+33,"MEM_io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"MEM_io_debug_i_exit", false,-1);
    tracep->declQuad(c+11,"MEM_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"MEM_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+4,"MEM_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+28,"MEM_io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"MEM_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"MEM_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+4,"MEM_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+149,"WB_clock", false,-1);
    tracep->declBit(c+150,"WB_reset", false,-1);
    tracep->declBit(c+15,"WB_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+16,"WB_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+33,"WB_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+15,"WB_io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+16,"WB_io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+33,"WB_io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"WB_io_debug_exit", false,-1);
    tracep->declQuad(c+11,"WB_io_debug_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"WB_io_debug_pc", false,-1, 63,0);
    tracep->declBus(c+4,"WB_io_debug_inst", false,-1, 31,0);
    tracep->declBit(c+149,"Regfile_clock", false,-1);
    tracep->declBit(c+150,"Regfile_reset", false,-1);
    tracep->declBus(c+13,"Regfile_io_readRfOp_i_rs1", false,-1, 4,0);
    tracep->declBus(c+14,"Regfile_io_readRfOp_i_rs2", false,-1, 4,0);
    tracep->declBit(c+15,"Regfile_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+16,"Regfile_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+33,"Regfile_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declQuad(c+7,"Regfile_io_readRes_o_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+9,"Regfile_io_readRes_o_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+11,"Regfile_io_readRes_o_a0", false,-1, 63,0);
    tracep->declQuad(c+35,"Regfile_io_regs_o_0", false,-1, 63,0);
    tracep->declQuad(c+37,"Regfile_io_regs_o_1", false,-1, 63,0);
    tracep->declQuad(c+39,"Regfile_io_regs_o_2", false,-1, 63,0);
    tracep->declQuad(c+41,"Regfile_io_regs_o_3", false,-1, 63,0);
    tracep->declQuad(c+43,"Regfile_io_regs_o_4", false,-1, 63,0);
    tracep->declQuad(c+45,"Regfile_io_regs_o_5", false,-1, 63,0);
    tracep->declQuad(c+47,"Regfile_io_regs_o_6", false,-1, 63,0);
    tracep->declQuad(c+49,"Regfile_io_regs_o_7", false,-1, 63,0);
    tracep->declQuad(c+51,"Regfile_io_regs_o_8", false,-1, 63,0);
    tracep->declQuad(c+53,"Regfile_io_regs_o_9", false,-1, 63,0);
    tracep->declQuad(c+11,"Regfile_io_regs_o_10", false,-1, 63,0);
    tracep->declQuad(c+55,"Regfile_io_regs_o_11", false,-1, 63,0);
    tracep->declQuad(c+57,"Regfile_io_regs_o_12", false,-1, 63,0);
    tracep->declQuad(c+59,"Regfile_io_regs_o_13", false,-1, 63,0);
    tracep->declQuad(c+61,"Regfile_io_regs_o_14", false,-1, 63,0);
    tracep->declQuad(c+63,"Regfile_io_regs_o_15", false,-1, 63,0);
    tracep->declQuad(c+65,"Regfile_io_regs_o_16", false,-1, 63,0);
    tracep->declQuad(c+67,"Regfile_io_regs_o_17", false,-1, 63,0);
    tracep->declQuad(c+69,"Regfile_io_regs_o_18", false,-1, 63,0);
    tracep->declQuad(c+71,"Regfile_io_regs_o_19", false,-1, 63,0);
    tracep->declQuad(c+73,"Regfile_io_regs_o_20", false,-1, 63,0);
    tracep->declQuad(c+75,"Regfile_io_regs_o_21", false,-1, 63,0);
    tracep->declQuad(c+77,"Regfile_io_regs_o_22", false,-1, 63,0);
    tracep->declQuad(c+79,"Regfile_io_regs_o_23", false,-1, 63,0);
    tracep->declQuad(c+81,"Regfile_io_regs_o_24", false,-1, 63,0);
    tracep->declQuad(c+83,"Regfile_io_regs_o_25", false,-1, 63,0);
    tracep->declQuad(c+85,"Regfile_io_regs_o_26", false,-1, 63,0);
    tracep->declQuad(c+87,"Regfile_io_regs_o_27", false,-1, 63,0);
    tracep->declQuad(c+89,"Regfile_io_regs_o_28", false,-1, 63,0);
    tracep->declQuad(c+91,"Regfile_io_regs_o_29", false,-1, 63,0);
    tracep->declQuad(c+93,"Regfile_io_regs_o_30", false,-1, 63,0);
    tracep->declQuad(c+95,"Regfile_io_regs_o_31", false,-1, 63,0);
    tracep->declBit(c+149,"Main_Memory_clock", false,-1);
    tracep->declBit(c+150,"Main_Memory_reset", false,-1);
    tracep->declQuad(c+151,"Main_Memory_io_timer_i", false,-1, 63,0);
    tracep->declQuad(c+5,"Main_Memory_io_pc_i", false,-1, 63,0);
    tracep->declBit(c+23,"Main_Memory_io_memOp_i_isStore", false,-1);
    tracep->declBit(c+24,"Main_Memory_io_memOp_i_unsigned", false,-1);
    tracep->declBus(c+25,"Main_Memory_io_memOp_i_length", false,-1, 1,0);
    tracep->declQuad(c+29,"Main_Memory_io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+26,"Main_Memory_io_memOp_i_sdata", false,-1, 63,0);
    tracep->declBus(c+4,"Main_Memory_io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+31,"Main_Memory_io_loadVal_o", false,-1, 63,0);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+15,"io_decInfo_i_writeRfOp_wen", false,-1);
    tracep->declBus(c+16,"io_decInfo_i_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+17,"io_decInfo_i_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+19,"io_decInfo_i_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+21,"io_decInfo_i_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+22,"io_decInfo_i_memOp_isLoad", false,-1);
    tracep->declBit(c+23,"io_decInfo_i_memOp_isStore", false,-1);
    tracep->declBit(c+24,"io_decInfo_i_memOp_unsigned", false,-1);
    tracep->declBus(c+25,"io_decInfo_i_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+26,"io_decInfo_i_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+15,"io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+29,"io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+22,"io_memOp_o_isLoad", false,-1);
    tracep->declBit(c+23,"io_memOp_o_isStore", false,-1);
    tracep->declBit(c+24,"io_memOp_o_unsigned", false,-1);
    tracep->declBus(c+25,"io_memOp_o_length", false,-1, 1,0);
    tracep->declQuad(c+29,"io_memOp_o_addr", false,-1, 63,0);
    tracep->declQuad(c+26,"io_memOp_o_sdata", false,-1, 63,0);
    tracep->declBit(c+28,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+4,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+28,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+4,"io_debug_o_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+149,"clock", false,-1);
    tracep->declBit(c+150,"reset", false,-1);
    tracep->declBus(c+4,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+5,"io_pc_i", false,-1, 63,0);
    tracep->declQuad(c+7,"io_regVal_i_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+9,"io_regVal_i_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+11,"io_regVal_i_a0", false,-1, 63,0);
    tracep->declBus(c+13,"io_readRfOp_o_rs1", false,-1, 4,0);
    tracep->declBus(c+14,"io_readRfOp_o_rs2", false,-1, 4,0);
    tracep->declBit(c+15,"io_decInfo_o_writeRfOp_wen", false,-1);
    tracep->declBus(c+16,"io_decInfo_o_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+17,"io_decInfo_o_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+19,"io_decInfo_o_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+21,"io_decInfo_o_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+1,"io_decInfo_o_branchOp_happen", false,-1);
    tracep->declQuad(c+2,"io_decInfo_o_branchOp_newPC", false,-1, 63,0);
    tracep->declBit(c+22,"io_decInfo_o_memOp_isLoad", false,-1);
    tracep->declBit(c+23,"io_decInfo_o_memOp_isStore", false,-1);
    tracep->declBit(c+24,"io_decInfo_o_memOp_unsigned", false,-1);
    tracep->declBus(c+25,"io_decInfo_o_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+26,"io_decInfo_o_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+28,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+4,"io_debug_o_inst", false,-1, 31,0);
    tracep->declBus(c+97,"decRes_0", false,-1, 4,0);
    tracep->declBus(c+98,"opcode", false,-1, 6,0);
    tracep->declBus(c+99,"fct3", false,-1, 2,0);
    tracep->declQuad(c+100,"immI", false,-1, 63,0);
    tracep->declBit(c+102,"is_jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+149,"clock", false,-1);
    tracep->declBit(c+150,"reset", false,-1);
    tracep->declBit(c+1,"io_branchOp_i_happen", false,-1);
    tracep->declQuad(c+2,"io_branchOp_i_newPC", false,-1, 63,0);
    tracep->declBus(c+4,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+5,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+4,"io_inst_o", false,-1, 31,0);
    tracep->declBus(c+103,"pc", false,-1, 31,0);
    tracep->declQuad(c+104,"nextPC", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+15,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+29,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+22,"io_memOp_i_isLoad", false,-1);
    tracep->declBit(c+23,"io_memOp_i_isStore", false,-1);
    tracep->declBit(c+24,"io_memOp_i_unsigned", false,-1);
    tracep->declBus(c+25,"io_memOp_i_length", false,-1, 1,0);
    tracep->declQuad(c+29,"io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+26,"io_memOp_i_sdata", false,-1, 63,0);
    tracep->declQuad(c+31,"io_loadVal_i", false,-1, 63,0);
    tracep->declBit(c+15,"io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+33,"io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+4,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+28,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+4,"io_debug_o_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Main_Memory ");
    tracep->declBit(c+149,"clock", false,-1);
    tracep->declBit(c+150,"reset", false,-1);
    tracep->declQuad(c+151,"io_timer_i", false,-1, 63,0);
    tracep->declQuad(c+5,"io_pc_i", false,-1, 63,0);
    tracep->declBit(c+23,"io_memOp_i_isStore", false,-1);
    tracep->declBit(c+24,"io_memOp_i_unsigned", false,-1);
    tracep->declBus(c+25,"io_memOp_i_length", false,-1, 1,0);
    tracep->declQuad(c+29,"io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+26,"io_memOp_i_sdata", false,-1, 63,0);
    tracep->declBus(c+4,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+31,"io_loadVal_o", false,-1, 63,0);
    tracep->declBit(c+226,"ram_io_inst_o_MPORT_en", false,-1);
    tracep->declBus(c+106,"ram_io_inst_o_MPORT_addr", false,-1, 19,0);
    tracep->declBus(c+4,"ram_io_inst_o_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+107,"ram_dword_MPORT_en", false,-1);
    tracep->declBus(c+108,"ram_dword_MPORT_addr", false,-1, 19,0);
    tracep->declBus(c+109,"ram_dword_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+107,"ram_dword_MPORT_1_en", false,-1);
    tracep->declBus(c+110,"ram_dword_MPORT_1_addr", false,-1, 19,0);
    tracep->declBus(c+111,"ram_dword_MPORT_1_data", false,-1, 31,0);
    tracep->declBit(c+107,"ram_test0_MPORT_en", false,-1);
    tracep->declBus(c+227,"ram_test0_MPORT_addr", false,-1, 19,0);
    tracep->declBus(c+112,"ram_test0_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+107,"ram_test1_MPORT_en", false,-1);
    tracep->declBus(c+228,"ram_test1_MPORT_addr", false,-1, 19,0);
    tracep->declBus(c+113,"ram_test1_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+114,"ram_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+108,"ram_MPORT_addr", false,-1, 19,0);
    tracep->declBit(c+226,"ram_MPORT_mask", false,-1);
    tracep->declBit(c+115,"ram_MPORT_en", false,-1);
    tracep->declBus(c+116,"ram_MPORT_1_data", false,-1, 31,0);
    tracep->declBus(c+110,"ram_MPORT_1_addr", false,-1, 19,0);
    tracep->declBit(c+226,"ram_MPORT_1_mask", false,-1);
    tracep->declBit(c+115,"ram_MPORT_1_en", false,-1);
    tracep->declQuad(c+117,"rtc_past_time", false,-1, 63,0);
    tracep->declQuad(c+119,"addr", false,-1, 61,0);
    tracep->declQuad(c+121,"dword", false,-1, 63,0);
    tracep->declBus(c+123,"offset", false,-1, 1,0);
    tracep->declQuad(c+124,"byteMask", false,-1, 63,0);
    tracep->declArray(c+126,"mask", false,-1, 94,0);
    tracep->declArray(c+129,"loadVal_temp", false,-1, 94,0);
    tracep->declArray(c+132,"loadVal", false,-1, 94,0);
    tracep->declBus(c+135,"store_en", false,-1, 7,0);
    tracep->declBus(c+136,"temp_1", false,-1, 7,0);
    tracep->declBus(c+137,"temp_0", false,-1, 7,0);
    tracep->declBus(c+138,"temp_3", false,-1, 7,0);
    tracep->declBus(c+139,"temp_2", false,-1, 7,0);
    tracep->declBus(c+140,"temp_5", false,-1, 7,0);
    tracep->declBus(c+141,"temp_4", false,-1, 7,0);
    tracep->declBus(c+142,"temp_7", false,-1, 7,0);
    tracep->declBus(c+143,"temp_6", false,-1, 7,0);
    tracep->declQuad(c+144,"offset_", false,-1, 63,0);
    tracep->declBit(c+146,"need_update", false,-1);
    tracep->declBus(c+112,"test0", false,-1, 31,0);
    tracep->declBus(c+113,"test1", false,-1, 31,0);
    tracep->declBus(c+229,"initvar", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Regfile ");
    tracep->declBit(c+149,"clock", false,-1);
    tracep->declBit(c+150,"reset", false,-1);
    tracep->declBus(c+13,"io_readRfOp_i_rs1", false,-1, 4,0);
    tracep->declBus(c+14,"io_readRfOp_i_rs2", false,-1, 4,0);
    tracep->declBit(c+15,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+33,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declQuad(c+7,"io_readRes_o_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+9,"io_readRes_o_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+11,"io_readRes_o_a0", false,-1, 63,0);
    tracep->declQuad(c+35,"io_regs_o_0", false,-1, 63,0);
    tracep->declQuad(c+37,"io_regs_o_1", false,-1, 63,0);
    tracep->declQuad(c+39,"io_regs_o_2", false,-1, 63,0);
    tracep->declQuad(c+41,"io_regs_o_3", false,-1, 63,0);
    tracep->declQuad(c+43,"io_regs_o_4", false,-1, 63,0);
    tracep->declQuad(c+45,"io_regs_o_5", false,-1, 63,0);
    tracep->declQuad(c+47,"io_regs_o_6", false,-1, 63,0);
    tracep->declQuad(c+49,"io_regs_o_7", false,-1, 63,0);
    tracep->declQuad(c+51,"io_regs_o_8", false,-1, 63,0);
    tracep->declQuad(c+53,"io_regs_o_9", false,-1, 63,0);
    tracep->declQuad(c+11,"io_regs_o_10", false,-1, 63,0);
    tracep->declQuad(c+55,"io_regs_o_11", false,-1, 63,0);
    tracep->declQuad(c+57,"io_regs_o_12", false,-1, 63,0);
    tracep->declQuad(c+59,"io_regs_o_13", false,-1, 63,0);
    tracep->declQuad(c+61,"io_regs_o_14", false,-1, 63,0);
    tracep->declQuad(c+63,"io_regs_o_15", false,-1, 63,0);
    tracep->declQuad(c+65,"io_regs_o_16", false,-1, 63,0);
    tracep->declQuad(c+67,"io_regs_o_17", false,-1, 63,0);
    tracep->declQuad(c+69,"io_regs_o_18", false,-1, 63,0);
    tracep->declQuad(c+71,"io_regs_o_19", false,-1, 63,0);
    tracep->declQuad(c+73,"io_regs_o_20", false,-1, 63,0);
    tracep->declQuad(c+75,"io_regs_o_21", false,-1, 63,0);
    tracep->declQuad(c+77,"io_regs_o_22", false,-1, 63,0);
    tracep->declQuad(c+79,"io_regs_o_23", false,-1, 63,0);
    tracep->declQuad(c+81,"io_regs_o_24", false,-1, 63,0);
    tracep->declQuad(c+83,"io_regs_o_25", false,-1, 63,0);
    tracep->declQuad(c+85,"io_regs_o_26", false,-1, 63,0);
    tracep->declQuad(c+87,"io_regs_o_27", false,-1, 63,0);
    tracep->declQuad(c+89,"io_regs_o_28", false,-1, 63,0);
    tracep->declQuad(c+91,"io_regs_o_29", false,-1, 63,0);
    tracep->declQuad(c+93,"io_regs_o_30", false,-1, 63,0);
    tracep->declQuad(c+95,"io_regs_o_31", false,-1, 63,0);
    tracep->declQuad(c+35,"registers_0", false,-1, 63,0);
    tracep->declQuad(c+37,"registers_1", false,-1, 63,0);
    tracep->declQuad(c+39,"registers_2", false,-1, 63,0);
    tracep->declQuad(c+41,"registers_3", false,-1, 63,0);
    tracep->declQuad(c+43,"registers_4", false,-1, 63,0);
    tracep->declQuad(c+45,"registers_5", false,-1, 63,0);
    tracep->declQuad(c+47,"registers_6", false,-1, 63,0);
    tracep->declQuad(c+49,"registers_7", false,-1, 63,0);
    tracep->declQuad(c+51,"registers_8", false,-1, 63,0);
    tracep->declQuad(c+53,"registers_9", false,-1, 63,0);
    tracep->declQuad(c+11,"registers_10", false,-1, 63,0);
    tracep->declQuad(c+55,"registers_11", false,-1, 63,0);
    tracep->declQuad(c+57,"registers_12", false,-1, 63,0);
    tracep->declQuad(c+59,"registers_13", false,-1, 63,0);
    tracep->declQuad(c+61,"registers_14", false,-1, 63,0);
    tracep->declQuad(c+63,"registers_15", false,-1, 63,0);
    tracep->declQuad(c+65,"registers_16", false,-1, 63,0);
    tracep->declQuad(c+67,"registers_17", false,-1, 63,0);
    tracep->declQuad(c+69,"registers_18", false,-1, 63,0);
    tracep->declQuad(c+71,"registers_19", false,-1, 63,0);
    tracep->declQuad(c+73,"registers_20", false,-1, 63,0);
    tracep->declQuad(c+75,"registers_21", false,-1, 63,0);
    tracep->declQuad(c+77,"registers_22", false,-1, 63,0);
    tracep->declQuad(c+79,"registers_23", false,-1, 63,0);
    tracep->declQuad(c+81,"registers_24", false,-1, 63,0);
    tracep->declQuad(c+83,"registers_25", false,-1, 63,0);
    tracep->declQuad(c+85,"registers_26", false,-1, 63,0);
    tracep->declQuad(c+87,"registers_27", false,-1, 63,0);
    tracep->declQuad(c+89,"registers_28", false,-1, 63,0);
    tracep->declQuad(c+91,"registers_29", false,-1, 63,0);
    tracep->declQuad(c+93,"registers_30", false,-1, 63,0);
    tracep->declQuad(c+95,"registers_31", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+149,"clock", false,-1);
    tracep->declBit(c+150,"reset", false,-1);
    tracep->declBit(c+15,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+33,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+15,"io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+33,"io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"io_debug_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"io_debug_pc", false,-1, 63,0);
    tracep->declBus(c+4,"io_debug_inst", false,-1, 31,0);
    tracep->declBit(c+28,"DEBUG_exit", false,-1);
    tracep->declQuad(c+5,"DEBUG_pc", false,-1, 63,0);
    tracep->declBus(c+4,"DEBUG_inst", false,-1, 31,0);
    tracep->declQuad(c+11,"DEBUG_a0", false,-1, 63,0);
    tracep->declQuad(c+147,"foo", false,-1, 63,0);
    tracep->pushNamePrefix("DEBUG ");
    tracep->declBit(c+28,"exit", false,-1);
    tracep->declQuad(c+5,"pc", false,-1, 63,0);
    tracep->declQuad(c+11,"a0", false,-1, 63,0);
    tracep->declBus(c+4,"inst", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VTOP___024root__trace_init_top(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_top\n"); );
    // Body
    VTOP___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTOP___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VTOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VTOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTOP___024root__trace_register(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTOP___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTOP___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTOP___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTOP___024root__trace_full_sub_0(VTOP___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTOP___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_full_top_0\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTOP___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VTOP___024root__trace_full_sub_0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h45976053__0;
    VlWide<3>/*95:0*/ __Vtemp_hbd746cff__0;
    VlWide<3>/*95:0*/ __Vtemp_h9b56c48b__0;
    VlWide<3>/*95:0*/ __Vtemp_h8883d467__0;
    VlWide<3>/*95:0*/ __Vtemp_he39eabc1__0;
    VlWide<3>/*95:0*/ __Vtemp_hd6722311__0;
    VlWide<3>/*95:0*/ __Vtemp_h1c2aa7b5__0;
    VlWide<3>/*95:0*/ __Vtemp_h45976053__1;
    VlWide<3>/*95:0*/ __Vtemp_hbd746cff__1;
    VlWide<3>/*95:0*/ __Vtemp_h9b56c48b__1;
    VlWide<3>/*95:0*/ __Vtemp_haaf55256__0;
    // Body
    tracep->fullBit(oldp+1,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                             & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                 ? (0x67U == (0x7fU 
                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                 : ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                    & ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                        ? ((7U == (7U 
                                                   & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                      >> 0xcU)))
                                            ? (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                               >= vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                            : ((6U 
                                                == 
                                                (7U 
                                                 & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                    >> 0xcU)))
                                                ? (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                   < vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                        >> 0xcU)))
                                                    ? 
                                                   VL_GTES_IQQ(64, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                         >> 0xcU)))
                                                     ? 
                                                    VL_LTS_IQQ(64, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                          >> 0xcU)))
                                                      ? 
                                                     (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                      != vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                      : (IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)) 
                                                                 & (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                                    == vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val))))))))
                                        : ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                           & (4U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))))))));
    tracep->fullQData(oldp+2,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                ? 0ULL : ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                           ? (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                              + vlSelf->TOP__DOT__ID__DOT__immI)
                                           : ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                               ? 0ULL
                                               : ((3U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)) 
                                                   + 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                            >> 7U))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0x800U 
                                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                           << 4U)) 
                                                                       | ((0x7e0U 
                                                                           & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                              >> 0x14U)) 
                                                                          | (0x1eU 
                                                                             & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 7U))))))))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)) 
                                                     + 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_24 
                                                                              >> 0x14U))))) 
                                                       << 0x15U) 
                                                      | (QData)((IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_24))))
                                                     : 0ULL))))))),64);
    tracep->fullIData(oldp+4,(vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data),32);
    tracep->fullQData(oldp+5,((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc))),64);
    tracep->fullQData(oldp+7,(vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val),64);
    tracep->fullQData(oldp+9,(vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val),64);
    tracep->fullQData(oldp+11,(vlSelf->TOP__DOT__Regfile__DOT__registers_10),64);
    tracep->fullCData(oldp+13,((0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+14,((0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                         >> 0x14U))),5);
    tracep->fullBit(oldp+15,(vlSelf->TOP__DOT__ID_io_decInfo_o_writeRfOp_wen));
    tracep->fullCData(oldp+16,((0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                         >> 7U))),5);
    tracep->fullQData(oldp+17,(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1),64);
    tracep->fullQData(oldp+19,((((QData)((IData)(vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))),64);
    tracep->fullCData(oldp+21,(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt),5);
    tracep->fullBit(oldp+22,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                              & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & (3U == (0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))))));
    tracep->fullBit(oldp+23,(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore));
    tracep->fullBit(oldp+24,(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned));
    tracep->fullCData(oldp+25,((3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61))),2);
    tracep->fullQData(oldp+26,(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata),64);
    tracep->fullBit(oldp+28,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                               ? (0xffffffffU == vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)
                               : ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                  & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                     & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                        & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                           & ((4U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                              & ((5U 
                                                  != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                 & (6U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))))))))));
    tracep->fullQData(oldp+29,((((QData)((IData)(vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))),64);
    VL_EXTEND_WQ(95,64, __Vtemp_h45976053__0, (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]))));
    VL_EXTEND_WQ(95,64, __Vtemp_hbd746cff__0, (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                       >> 0xfU))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U])))));
    VL_EXTEND_WQ(95,64, __Vtemp_h9b56c48b__0, (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                       >> 7U))))) 
                                                << 8U) 
                                               | (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U])))));
    VL_EXTEND_WQ(95,64, __Vtemp_h8883d467__0, ((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_69)
                                                ? 0ULL
                                                : ((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_74)
                                                    ? vlSelf->TOP__DOT__Main_Memory__DOT__rtc_past_time
                                                    : 0ULL)));
    tracep->fullQData(oldp+31,((((QData)((IData)(((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2)
                                                   ? 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                    ? 
                                                   vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U]
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                     ? 
                                                    ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                      ? 
                                                     vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U]
                                                      : 
                                                     __Vtemp_h45976053__0[1U])
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                      ? 
                                                     ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                       ? 
                                                      vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U]
                                                       : 
                                                      __Vtemp_hbd746cff__0[1U])
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                       ? 
                                                      vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U]
                                                       : 
                                                      __Vtemp_h9b56c48b__0[1U]))))
                                                   : 
                                                  __Vtemp_h8883d467__0[1U]))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2)
                                                               ? 
                                                              ((3U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                                ? 
                                                               vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]
                                                                : 
                                                               ((2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                                 ? 
                                                                ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                                  ? 
                                                                 vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]
                                                                  : 
                                                                 __Vtemp_h45976053__0[0U])
                                                                 : 
                                                                ((1U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                                  ? 
                                                                 ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                                   ? 
                                                                  vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]
                                                                   : 
                                                                  __Vtemp_hbd746cff__0[0U])
                                                                  : 
                                                                 ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                                   ? 
                                                                  vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]
                                                                   : 
                                                                  __Vtemp_h9b56c48b__0[0U]))))
                                                               : 
                                                              __Vtemp_h8883d467__0[0U]))))),64);
    tracep->fullQData(oldp+33,(vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata),64);
    tracep->fullQData(oldp+35,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
    tracep->fullQData(oldp+37,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
    tracep->fullQData(oldp+39,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
    tracep->fullQData(oldp+41,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
    tracep->fullQData(oldp+43,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
    tracep->fullQData(oldp+45,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
    tracep->fullQData(oldp+47,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
    tracep->fullQData(oldp+49,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
    tracep->fullQData(oldp+51,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
    tracep->fullQData(oldp+53,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
    tracep->fullQData(oldp+55,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
    tracep->fullQData(oldp+57,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
    tracep->fullQData(oldp+59,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
    tracep->fullQData(oldp+61,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
    tracep->fullQData(oldp+63,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
    tracep->fullQData(oldp+65,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
    tracep->fullQData(oldp+67,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
    tracep->fullQData(oldp+69,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
    tracep->fullQData(oldp+71,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
    tracep->fullQData(oldp+73,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
    tracep->fullQData(oldp+75,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
    tracep->fullQData(oldp+77,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
    tracep->fullQData(oldp+79,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
    tracep->fullQData(oldp+81,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
    tracep->fullQData(oldp+83,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
    tracep->fullQData(oldp+85,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
    tracep->fullQData(oldp+87,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
    tracep->fullQData(oldp+89,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
    tracep->fullQData(oldp+91,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
    tracep->fullQData(oldp+93,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
    tracep->fullQData(oldp+95,(vlSelf->TOP__DOT__Regfile__DOT__registers_31),64);
    tracep->fullCData(oldp+97,(vlSelf->TOP__DOT__ID__DOT__decRes_0),5);
    tracep->fullCData(oldp+98,((0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)),7);
    tracep->fullCData(oldp+99,((7U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                      >> 0xcU))),3);
    tracep->fullQData(oldp+100,(vlSelf->TOP__DOT__ID__DOT__immI),64);
    tracep->fullBit(oldp+102,((0x67U == (0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))));
    tracep->fullIData(oldp+103,(vlSelf->TOP__DOT__IF__DOT__pc),32);
    tracep->fullQData(oldp+104,((((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                  & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                      ? (0x67U == (0x7fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                      : ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                         & ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                             ? ((7U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                     >> 0xcU)))
                                                 ? 
                                                (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                 >= vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                 : 
                                                ((6U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                      >> 0xcU)))
                                                  ? 
                                                 (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                  < vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                       >> 0xcU)))
                                                   ? 
                                                  VL_GTES_IQQ(64, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                        >> 0xcU)))
                                                    ? 
                                                   VL_LTS_IQQ(64, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                         >> 0xcU)))
                                                     ? 
                                                    (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                     != vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                     : (IData)(
                                                               ((0U 
                                                                 == 
                                                                 (0x7000U 
                                                                  & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)) 
                                                                & (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                                   == vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val))))))))
                                             : ((2U 
                                                 != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                & (4U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))))))
                                  ? ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                      ? 0ULL : ((1U 
                                                 == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                 ? 
                                                (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                 + vlSelf->TOP__DOT__ID__DOT__immI)
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                  ? 0ULL
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)) 
                                                   + 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                            >> 7U))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0x800U 
                                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                           << 4U)) 
                                                                       | ((0x7e0U 
                                                                           & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                              >> 0x14U)) 
                                                                          | (0x1eU 
                                                                             & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 7U))))))))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)) 
                                                     + 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_24 
                                                                              >> 0x14U))))) 
                                                       << 0x15U) 
                                                      | (QData)((IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_24))))
                                                     : 0ULL))))))
                                  : (QData)((IData)(
                                                    ((IData)(4U) 
                                                     + vlSelf->TOP__DOT__IF__DOT__pc))))),64);
    tracep->fullIData(oldp+106,((0xfffffU & (IData)(
                                                    (((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)) 
                                                      - 0x80000000ULL) 
                                                     >> 2U)))),20);
    tracep->fullBit(oldp+107,(((0x80000000ULL <= (((QData)((IData)(
                                                                   vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))) 
                               & (0x87ffffffULL >= 
                                  (((QData)((IData)(
                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))))));
    tracep->fullIData(oldp+108,((0xfffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (((((QData)((IData)(
                                                                           vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))) 
                                                         - 0x80000000ULL) 
                                                        >> 2U))))),20);
    tracep->fullIData(oldp+109,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                [(0xfffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (((((QData)((IData)(
                                                                            vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))) 
                                                          - 0x80000000ULL) 
                                                         >> 2U))))]),32);
    tracep->fullIData(oldp+110,((0xfffffU & (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))) 
                                                      - 0x80000000ULL) 
                                                     >> 2U)))),20);
    tracep->fullIData(oldp+111,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                [(0xfffffU & (IData)(
                                                     (((((QData)((IData)(
                                                                         vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))) 
                                                       - 0x80000000ULL) 
                                                      >> 2U)))]),32);
    tracep->fullIData(oldp+112,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                [0U]),32);
    tracep->fullIData(oldp+113,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                [1U]),32);
    tracep->fullIData(oldp+114,((IData)((vlSelf->TOP__DOT__Main_Memory__DOT___T_62 
                                         >> 0x20U))),32);
    tracep->fullBit(oldp+115,(((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2) 
                               & (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore))));
    tracep->fullIData(oldp+116,((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_62)),32);
    tracep->fullQData(oldp+117,(vlSelf->TOP__DOT__Main_Memory__DOT__rtc_past_time),64);
    tracep->fullQData(oldp+119,((((((QData)((IData)(
                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))) 
                                  - 0x80000000ULL) 
                                 >> 2U)),62);
    tracep->fullQData(oldp+121,(vlSelf->TOP__DOT__Main_Memory__DOT__dword),64);
    tracep->fullCData(oldp+123,((3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])),2);
    tracep->fullQData(oldp+124,(((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                  ? 0xffffffffffffffffULL
                                  : (QData)((IData)(
                                                    ((2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                      ? 0xffffffffU
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                       ? 0xffffU
                                                       : 0xffU)))))),64);
    VL_EXTEND_WQ(95,64, __Vtemp_he39eabc1__0, ((3U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                ? 0xffffffffffffffffULL
                                                : (QData)((IData)(
                                                                  ((2U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                                    ? 0xffffffffU
                                                                    : 
                                                                   ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                                     ? 0xffffU
                                                                     : 0xffU))))));
    VL_SHIFTL_WWI(95,95,5, __Vtemp_hd6722311__0, __Vtemp_he39eabc1__0, 
                  (0x18U & (vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U] 
                            << 3U)));
    __Vtemp_h1c2aa7b5__0[0U] = __Vtemp_hd6722311__0[0U];
    __Vtemp_h1c2aa7b5__0[1U] = __Vtemp_hd6722311__0[1U];
    __Vtemp_h1c2aa7b5__0[2U] = (0x7fffffffU & __Vtemp_hd6722311__0[2U]);
    tracep->fullWData(oldp+126,(__Vtemp_h1c2aa7b5__0),95);
    tracep->fullWData(oldp+129,(vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp),95);
    VL_EXTEND_WQ(95,64, __Vtemp_h45976053__1, (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]))));
    VL_EXTEND_WQ(95,64, __Vtemp_hbd746cff__1, (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                       >> 0xfU))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U])))));
    VL_EXTEND_WQ(95,64, __Vtemp_h9b56c48b__1, (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                       >> 7U))))) 
                                                << 8U) 
                                               | (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U])))));
    if ((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))) {
        __Vtemp_haaf55256__0[0U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U];
        __Vtemp_haaf55256__0[1U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U];
        __Vtemp_haaf55256__0[2U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U];
    } else if ((2U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))) {
        if (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned) {
            __Vtemp_haaf55256__0[0U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U];
            __Vtemp_haaf55256__0[1U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U];
            __Vtemp_haaf55256__0[2U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U];
        } else {
            __Vtemp_haaf55256__0[0U] = __Vtemp_h45976053__1[0U];
            __Vtemp_haaf55256__0[1U] = __Vtemp_h45976053__1[1U];
            __Vtemp_haaf55256__0[2U] = __Vtemp_h45976053__1[2U];
        }
    } else if ((1U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))) {
        if (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned) {
            __Vtemp_haaf55256__0[0U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U];
            __Vtemp_haaf55256__0[1U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U];
            __Vtemp_haaf55256__0[2U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U];
        } else {
            __Vtemp_haaf55256__0[0U] = __Vtemp_hbd746cff__1[0U];
            __Vtemp_haaf55256__0[1U] = __Vtemp_hbd746cff__1[1U];
            __Vtemp_haaf55256__0[2U] = __Vtemp_hbd746cff__1[2U];
        }
    } else if (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned) {
        __Vtemp_haaf55256__0[0U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U];
        __Vtemp_haaf55256__0[1U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U];
        __Vtemp_haaf55256__0[2U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U];
    } else {
        __Vtemp_haaf55256__0[0U] = __Vtemp_h9b56c48b__1[0U];
        __Vtemp_haaf55256__0[1U] = __Vtemp_h9b56c48b__1[1U];
        __Vtemp_haaf55256__0[2U] = __Vtemp_h9b56c48b__1[2U];
    }
    tracep->fullWData(oldp+132,(__Vtemp_haaf55256__0),95);
    tracep->fullCData(oldp+135,(vlSelf->TOP__DOT__Main_Memory__DOT__store_en),8);
    tracep->fullCData(oldp+136,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((1U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_109))
                                               : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_109))
                                           : (IData)(
                                                     (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                      >> 8U))))),8);
    tracep->fullCData(oldp+137,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((0U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_108))
                                               : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_108))
                                           : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__dword)))),8);
    tracep->fullCData(oldp+138,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((3U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_111))
                                               : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_111))
                                           : (IData)(
                                                     (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                      >> 0x18U))))),8);
    tracep->fullCData(oldp+139,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((2U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_110))
                                               : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_110))
                                           : (IData)(
                                                     (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                      >> 0x10U))))),8);
    tracep->fullCData(oldp+140,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((5U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_113))
                                               : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_113))
                                           : (IData)(
                                                     (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                      >> 0x28U))))),8);
    tracep->fullCData(oldp+141,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_112))
                                               : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_112))
                                           : (IData)(
                                                     (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                      >> 0x20U))))),8);
    tracep->fullCData(oldp+142,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((7U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_115))
                                               : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_115))
                                           : (IData)(
                                                     (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                      >> 0x38U))))),8);
    tracep->fullCData(oldp+143,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_114))
                                               : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_114))
                                           : (IData)(
                                                     (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                      >> 0x30U))))),8);
    tracep->fullQData(oldp+144,(((((QData)((IData)(
                                                   vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))) 
                                 - 0xa0000048ULL)),64);
    tracep->fullBit(oldp+146,(((~ (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)) 
                               & (4ULL == ((((QData)((IData)(
                                                             vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))) 
                                           - 0xa0000048ULL)))));
    tracep->fullQData(oldp+147,(((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_writeRfOp_wen)
                                  ? vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata
                                  : 0ULL)),64);
    tracep->fullBit(oldp+149,(vlSelf->clock));
    tracep->fullBit(oldp+150,(vlSelf->reset));
    tracep->fullQData(oldp+151,(vlSelf->io_timer_i),64);
    tracep->fullQData(oldp+153,(vlSelf->io_regs_0),64);
    tracep->fullQData(oldp+155,(vlSelf->io_regs_1),64);
    tracep->fullQData(oldp+157,(vlSelf->io_regs_2),64);
    tracep->fullQData(oldp+159,(vlSelf->io_regs_3),64);
    tracep->fullQData(oldp+161,(vlSelf->io_regs_4),64);
    tracep->fullQData(oldp+163,(vlSelf->io_regs_5),64);
    tracep->fullQData(oldp+165,(vlSelf->io_regs_6),64);
    tracep->fullQData(oldp+167,(vlSelf->io_regs_7),64);
    tracep->fullQData(oldp+169,(vlSelf->io_regs_8),64);
    tracep->fullQData(oldp+171,(vlSelf->io_regs_9),64);
    tracep->fullQData(oldp+173,(vlSelf->io_regs_10),64);
    tracep->fullQData(oldp+175,(vlSelf->io_regs_11),64);
    tracep->fullQData(oldp+177,(vlSelf->io_regs_12),64);
    tracep->fullQData(oldp+179,(vlSelf->io_regs_13),64);
    tracep->fullQData(oldp+181,(vlSelf->io_regs_14),64);
    tracep->fullQData(oldp+183,(vlSelf->io_regs_15),64);
    tracep->fullQData(oldp+185,(vlSelf->io_regs_16),64);
    tracep->fullQData(oldp+187,(vlSelf->io_regs_17),64);
    tracep->fullQData(oldp+189,(vlSelf->io_regs_18),64);
    tracep->fullQData(oldp+191,(vlSelf->io_regs_19),64);
    tracep->fullQData(oldp+193,(vlSelf->io_regs_20),64);
    tracep->fullQData(oldp+195,(vlSelf->io_regs_21),64);
    tracep->fullQData(oldp+197,(vlSelf->io_regs_22),64);
    tracep->fullQData(oldp+199,(vlSelf->io_regs_23),64);
    tracep->fullQData(oldp+201,(vlSelf->io_regs_24),64);
    tracep->fullQData(oldp+203,(vlSelf->io_regs_25),64);
    tracep->fullQData(oldp+205,(vlSelf->io_regs_26),64);
    tracep->fullQData(oldp+207,(vlSelf->io_regs_27),64);
    tracep->fullQData(oldp+209,(vlSelf->io_regs_28),64);
    tracep->fullQData(oldp+211,(vlSelf->io_regs_29),64);
    tracep->fullQData(oldp+213,(vlSelf->io_regs_30),64);
    tracep->fullQData(oldp+215,(vlSelf->io_regs_31),64);
    tracep->fullQData(oldp+217,(vlSelf->io_pc_o),64);
    tracep->fullIData(oldp+219,(vlSelf->io_inst_o),32);
    tracep->fullQData(oldp+220,(vlSelf->io_o),64);
    tracep->fullQData(oldp+222,(vlSelf->io_src1),64);
    tracep->fullQData(oldp+224,(vlSelf->io_src2),64);
    tracep->fullBit(oldp+226,(1U));
    tracep->fullIData(oldp+227,(0U),20);
    tracep->fullIData(oldp+228,(1U),20);
    tracep->fullIData(oldp+229,(vlSelf->TOP__DOT__Main_Memory__DOT__initvar),32);
}
