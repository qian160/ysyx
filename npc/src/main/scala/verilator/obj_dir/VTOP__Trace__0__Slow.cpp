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
    tracep->declBit(c+134,"clock", false,-1);
    tracep->declBit(c+135,"reset", false,-1);
    tracep->declBus(c+136,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+137,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+139,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+140,"io_o", false,-1, 63,0);
    tracep->declQuad(c+142,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+144,"io_src2", false,-1, 63,0);
    tracep->declBus(c+146,"io_instType", false,-1, 4,0);
    tracep->declBit(c+147,"io_branch", false,-1);
    tracep->pushNamePrefix("TOP ");
    tracep->declBit(c+134,"clock", false,-1);
    tracep->declBit(c+135,"reset", false,-1);
    tracep->declBus(c+136,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+137,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+139,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+140,"io_o", false,-1, 63,0);
    tracep->declQuad(c+142,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+144,"io_src2", false,-1, 63,0);
    tracep->declBus(c+146,"io_instType", false,-1, 4,0);
    tracep->declBit(c+147,"io_branch", false,-1);
    tracep->declBit(c+134,"IF_clock", false,-1);
    tracep->declBit(c+135,"IF_reset", false,-1);
    tracep->declBit(c+85,"IF_io_branchOp_happen", false,-1);
    tracep->declQuad(c+86,"IF_io_branchOp_newPC", false,-1, 63,0);
    tracep->declBus(c+139,"IF_io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+88,"IF_io_pc_o", false,-1, 63,0);
    tracep->declBus(c+139,"IF_io_inst_o", false,-1, 31,0);
    tracep->declBit(c+85,"IF_io_branch", false,-1);
    tracep->declBit(c+134,"ID_clock", false,-1);
    tracep->declBus(c+139,"ID_io_inst", false,-1, 31,0);
    tracep->declQuad(c+88,"ID_io_pc", false,-1, 63,0);
    tracep->declQuad(c+90,"ID_io_regVal_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+90,"ID_io_regVal_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+1,"ID_io_regVal_a0", false,-1, 63,0);
    tracep->declBus(c+148,"ID_io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBit(c+92,"ID_io_decInfo_writeRfOp_wen", false,-1);
    tracep->declBus(c+149,"ID_io_decInfo_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+93,"ID_io_decInfo_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+95,"ID_io_decInfo_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+97,"ID_io_decInfo_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+85,"ID_io_decInfo_branchOp_happen", false,-1);
    tracep->declQuad(c+86,"ID_io_decInfo_branchOp_newPC", false,-1, 63,0);
    tracep->declBit(c+150,"ID_io_decInfo_memOp_isLoad", false,-1);
    tracep->declBit(c+98,"ID_io_decInfo_memOp_isStore", false,-1);
    tracep->declBit(c+99,"ID_io_decInfo_memOp_sign", false,-1);
    tracep->declBus(c+100,"ID_io_decInfo_memOp_length", false,-1, 1,0);
    tracep->declBit(c+151,"ID_io_debug_o_exit", false,-1);
    tracep->declQuad(c+1,"ID_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+3,"ID_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+139,"ID_io_debug_o_inst", false,-1, 31,0);
    tracep->declBus(c+152,"ID_io_instType", false,-1, 4,0);
    tracep->declBit(c+92,"EX_io_decInfo_writeRfOp_wen", false,-1);
    tracep->declBus(c+149,"EX_io_decInfo_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+93,"EX_io_decInfo_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+95,"EX_io_decInfo_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+97,"EX_io_decInfo_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+150,"EX_io_decInfo_memOp_isLoad", false,-1);
    tracep->declBit(c+98,"EX_io_decInfo_memOp_isStore", false,-1);
    tracep->declBit(c+99,"EX_io_decInfo_memOp_sign", false,-1);
    tracep->declBus(c+100,"EX_io_decInfo_memOp_length", false,-1, 1,0);
    tracep->declBit(c+92,"EX_io_writeRfOp_wen", false,-1);
    tracep->declBus(c+149,"EX_io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+101,"EX_io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declBit(c+150,"EX_io_memOp_isLoad", false,-1);
    tracep->declBit(c+98,"EX_io_memOp_isStore", false,-1);
    tracep->declBit(c+99,"EX_io_memOp_sign", false,-1);
    tracep->declBus(c+100,"EX_io_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+101,"EX_io_memOp_addr", false,-1, 63,0);
    tracep->declBit(c+151,"EX_io_debug_i_exit", false,-1);
    tracep->declQuad(c+1,"EX_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+3,"EX_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+139,"EX_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+151,"EX_io_debug_o_exit", false,-1);
    tracep->declQuad(c+1,"EX_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+3,"EX_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+139,"EX_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+134,"MEM_clock", false,-1);
    tracep->declBit(c+92,"MEM_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+149,"MEM_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+101,"MEM_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+150,"MEM_io_memOp_isLoad", false,-1);
    tracep->declBit(c+98,"MEM_io_memOp_isStore", false,-1);
    tracep->declBit(c+99,"MEM_io_memOp_sign", false,-1);
    tracep->declBus(c+100,"MEM_io_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+101,"MEM_io_memOp_addr", false,-1, 63,0);
    tracep->declBit(c+92,"MEM_io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+149,"MEM_io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+103,"MEM_io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+151,"MEM_io_debug_i_exit", false,-1);
    tracep->declQuad(c+1,"MEM_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+3,"MEM_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+139,"MEM_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+151,"MEM_io_debug_o_exit", false,-1);
    tracep->declQuad(c+1,"MEM_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+3,"MEM_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+139,"MEM_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+92,"WB_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+149,"WB_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+103,"WB_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+92,"WB_io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+149,"WB_io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+103,"WB_io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+151,"WB_io_debug_exit", false,-1);
    tracep->declQuad(c+1,"WB_io_debug_a0", false,-1, 63,0);
    tracep->declQuad(c+3,"WB_io_debug_pc", false,-1, 63,0);
    tracep->declBus(c+139,"WB_io_debug_inst", false,-1, 31,0);
    tracep->declBit(c+134,"Regfile_clock", false,-1);
    tracep->declBit(c+135,"Regfile_reset", false,-1);
    tracep->declBus(c+148,"Regfile_io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBit(c+92,"Regfile_io_writeRfOp_wen", false,-1);
    tracep->declBus(c+149,"Regfile_io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+103,"Regfile_io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declQuad(c+90,"Regfile_io_readRes_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+90,"Regfile_io_readRes_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+1,"Regfile_io_readRes_a0", false,-1, 63,0);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+92,"io_decInfo_writeRfOp_wen", false,-1);
    tracep->declBus(c+149,"io_decInfo_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+93,"io_decInfo_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+95,"io_decInfo_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+97,"io_decInfo_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+150,"io_decInfo_memOp_isLoad", false,-1);
    tracep->declBit(c+98,"io_decInfo_memOp_isStore", false,-1);
    tracep->declBit(c+99,"io_decInfo_memOp_sign", false,-1);
    tracep->declBus(c+100,"io_decInfo_memOp_length", false,-1, 1,0);
    tracep->declBit(c+92,"io_writeRfOp_wen", false,-1);
    tracep->declBus(c+149,"io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+101,"io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declBit(c+150,"io_memOp_isLoad", false,-1);
    tracep->declBit(c+98,"io_memOp_isStore", false,-1);
    tracep->declBit(c+99,"io_memOp_sign", false,-1);
    tracep->declBus(c+100,"io_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+101,"io_memOp_addr", false,-1, 63,0);
    tracep->declBit(c+151,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+1,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+3,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+139,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+151,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+1,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+3,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+139,"io_debug_o_inst", false,-1, 31,0);
    tracep->declArray(c+105,"aluRes", false,-1, 126,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+134,"clock", false,-1);
    tracep->declBus(c+139,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+88,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+90,"io_regVal_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+90,"io_regVal_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+1,"io_regVal_a0", false,-1, 63,0);
    tracep->declBus(c+148,"io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBit(c+92,"io_decInfo_writeRfOp_wen", false,-1);
    tracep->declBus(c+149,"io_decInfo_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+93,"io_decInfo_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+95,"io_decInfo_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+97,"io_decInfo_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+85,"io_decInfo_branchOp_happen", false,-1);
    tracep->declQuad(c+86,"io_decInfo_branchOp_newPC", false,-1, 63,0);
    tracep->declBit(c+150,"io_decInfo_memOp_isLoad", false,-1);
    tracep->declBit(c+98,"io_decInfo_memOp_isStore", false,-1);
    tracep->declBit(c+99,"io_decInfo_memOp_sign", false,-1);
    tracep->declBus(c+100,"io_decInfo_memOp_length", false,-1, 1,0);
    tracep->declBit(c+151,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+1,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+3,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+139,"io_debug_o_inst", false,-1, 31,0);
    tracep->declBus(c+152,"io_instType", false,-1, 4,0);
    tracep->declQuad(c+3,"pc", false,-1, 63,0);
    tracep->declBus(c+109,"decRes_0", false,-1, 4,0);
    tracep->declBus(c+153,"opcode", false,-1, 6,0);
    tracep->declBus(c+154,"fct3", false,-1, 2,0);
    tracep->declBit(c+155,"is_jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+134,"clock", false,-1);
    tracep->declBit(c+135,"reset", false,-1);
    tracep->declBit(c+85,"io_branchOp_happen", false,-1);
    tracep->declQuad(c+86,"io_branchOp_newPC", false,-1, 63,0);
    tracep->declBus(c+139,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+88,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+139,"io_inst_o", false,-1, 31,0);
    tracep->declBit(c+85,"io_branch", false,-1);
    tracep->declQuad(c+5,"pc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+134,"clock", false,-1);
    tracep->declBit(c+92,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+149,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+101,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+150,"io_memOp_isLoad", false,-1);
    tracep->declBit(c+98,"io_memOp_isStore", false,-1);
    tracep->declBit(c+99,"io_memOp_sign", false,-1);
    tracep->declBus(c+100,"io_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+101,"io_memOp_addr", false,-1, 63,0);
    tracep->declBit(c+92,"io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+149,"io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+103,"io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+151,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+1,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+3,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+139,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+151,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+1,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+3,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+139,"io_debug_o_inst", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+7+i*1,"ram1", true,(i+0), 7,0);
    }
    tracep->declBit(c+157,"ram1_loadval_MPORT_en", false,-1);
    tracep->declBus(c+110,"ram1_loadval_MPORT_addr", false,-1, 3,0);
    tracep->declBus(c+156,"ram1_loadval_MPORT_data", false,-1, 7,0);
    tracep->declBus(c+111,"ram1_MPORT_data", false,-1, 7,0);
    tracep->declBus(c+110,"ram1_MPORT_addr", false,-1, 3,0);
    tracep->declBit(c+157,"ram1_MPORT_mask", false,-1);
    tracep->declBit(c+98,"ram1_MPORT_en", false,-1);
    tracep->declBus(c+112,"ram1_MPORT_1_data", false,-1, 7,0);
    tracep->declBus(c+110,"ram1_MPORT_1_addr", false,-1, 3,0);
    tracep->declBit(c+157,"ram1_MPORT_1_mask", false,-1);
    tracep->declBit(c+98,"ram1_MPORT_1_en", false,-1);
    tracep->declBus(c+113,"ram1_MPORT_2_data", false,-1, 7,0);
    tracep->declBus(c+110,"ram1_MPORT_2_addr", false,-1, 3,0);
    tracep->declBit(c+157,"ram1_MPORT_2_mask", false,-1);
    tracep->declBit(c+98,"ram1_MPORT_2_en", false,-1);
    tracep->declBus(c+114,"ram1_MPORT_3_data", false,-1, 7,0);
    tracep->declBus(c+110,"ram1_MPORT_3_addr", false,-1, 3,0);
    tracep->declBit(c+157,"ram1_MPORT_3_mask", false,-1);
    tracep->declBit(c+98,"ram1_MPORT_3_en", false,-1);
    tracep->declBus(c+115,"ram1_MPORT_4_data", false,-1, 7,0);
    tracep->declBus(c+110,"ram1_MPORT_4_addr", false,-1, 3,0);
    tracep->declBit(c+157,"ram1_MPORT_4_mask", false,-1);
    tracep->declBit(c+98,"ram1_MPORT_4_en", false,-1);
    tracep->declBus(c+116,"ram1_MPORT_5_data", false,-1, 7,0);
    tracep->declBus(c+110,"ram1_MPORT_5_addr", false,-1, 3,0);
    tracep->declBit(c+157,"ram1_MPORT_5_mask", false,-1);
    tracep->declBit(c+98,"ram1_MPORT_5_en", false,-1);
    tracep->declBus(c+117,"ram1_MPORT_6_data", false,-1, 7,0);
    tracep->declBus(c+110,"ram1_MPORT_6_addr", false,-1, 3,0);
    tracep->declBit(c+157,"ram1_MPORT_6_mask", false,-1);
    tracep->declBit(c+98,"ram1_MPORT_6_en", false,-1);
    tracep->declBus(c+118,"ram1_MPORT_7_data", false,-1, 7,0);
    tracep->declBus(c+110,"ram1_MPORT_7_addr", false,-1, 3,0);
    tracep->declBit(c+157,"ram1_MPORT_7_mask", false,-1);
    tracep->declBit(c+98,"ram1_MPORT_7_en", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+158+i*1,"ram2", true,(i+0), 7,0);
    }
    tracep->declBit(c+157,"ram2_loadval_MPORT_1_en", false,-1);
    tracep->declBus(c+110,"ram2_loadval_MPORT_1_addr", false,-1, 3,0);
    tracep->declBus(c+119,"ram2_loadval_MPORT_1_data", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+174+i*1,"ram3", true,(i+0), 7,0);
    }
    tracep->declBit(c+157,"ram3_loadval_MPORT_2_en", false,-1);
    tracep->declBus(c+110,"ram3_loadval_MPORT_2_addr", false,-1, 3,0);
    tracep->declBus(c+120,"ram3_loadval_MPORT_2_data", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+190+i*1,"ram4", true,(i+0), 7,0);
    }
    tracep->declBit(c+157,"ram4_loadval_MPORT_3_en", false,-1);
    tracep->declBus(c+110,"ram4_loadval_MPORT_3_addr", false,-1, 3,0);
    tracep->declBus(c+121,"ram4_loadval_MPORT_3_data", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+206+i*1,"ram5", true,(i+0), 7,0);
    }
    tracep->declBit(c+157,"ram5_loadval_MPORT_4_en", false,-1);
    tracep->declBus(c+110,"ram5_loadval_MPORT_4_addr", false,-1, 3,0);
    tracep->declBus(c+122,"ram5_loadval_MPORT_4_data", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+222+i*1,"ram6", true,(i+0), 7,0);
    }
    tracep->declBit(c+157,"ram6_loadval_MPORT_5_en", false,-1);
    tracep->declBus(c+110,"ram6_loadval_MPORT_5_addr", false,-1, 3,0);
    tracep->declBus(c+123,"ram6_loadval_MPORT_5_data", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+238+i*1,"ram7", true,(i+0), 7,0);
    }
    tracep->declBit(c+157,"ram7_loadval_MPORT_6_en", false,-1);
    tracep->declBus(c+110,"ram7_loadval_MPORT_6_addr", false,-1, 3,0);
    tracep->declBus(c+124,"ram7_loadval_MPORT_6_data", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+254+i*1,"ram8", true,(i+0), 7,0);
    }
    tracep->declBit(c+157,"ram8_loadval_MPORT_7_en", false,-1);
    tracep->declBus(c+110,"ram8_loadval_MPORT_7_addr", false,-1, 3,0);
    tracep->declBus(c+125,"ram8_loadval_MPORT_7_data", false,-1, 7,0);
    tracep->declQuad(c+126,"addr", false,-1, 60,0);
    tracep->declQuad(c+128,"mask", false,-1, 63,0);
    tracep->declQuad(c+130,"loadval", false,-1, 63,0);
    tracep->declQuad(c+132,"loadVal", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Regfile ");
    tracep->declBit(c+134,"clock", false,-1);
    tracep->declBit(c+135,"reset", false,-1);
    tracep->declBus(c+148,"io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBit(c+92,"io_writeRfOp_wen", false,-1);
    tracep->declBus(c+149,"io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+103,"io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declQuad(c+90,"io_readRes_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+90,"io_readRes_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+1,"io_readRes_a0", false,-1, 63,0);
    tracep->declQuad(c+23,"registers_0", false,-1, 63,0);
    tracep->declQuad(c+25,"registers_1", false,-1, 63,0);
    tracep->declQuad(c+27,"registers_2", false,-1, 63,0);
    tracep->declQuad(c+29,"registers_3", false,-1, 63,0);
    tracep->declQuad(c+31,"registers_4", false,-1, 63,0);
    tracep->declQuad(c+33,"registers_5", false,-1, 63,0);
    tracep->declQuad(c+35,"registers_6", false,-1, 63,0);
    tracep->declQuad(c+37,"registers_7", false,-1, 63,0);
    tracep->declQuad(c+39,"registers_8", false,-1, 63,0);
    tracep->declQuad(c+41,"registers_9", false,-1, 63,0);
    tracep->declQuad(c+1,"registers_10", false,-1, 63,0);
    tracep->declQuad(c+43,"registers_11", false,-1, 63,0);
    tracep->declQuad(c+45,"registers_12", false,-1, 63,0);
    tracep->declQuad(c+47,"registers_13", false,-1, 63,0);
    tracep->declQuad(c+49,"registers_14", false,-1, 63,0);
    tracep->declQuad(c+51,"registers_15", false,-1, 63,0);
    tracep->declQuad(c+53,"registers_16", false,-1, 63,0);
    tracep->declQuad(c+55,"registers_17", false,-1, 63,0);
    tracep->declQuad(c+57,"registers_18", false,-1, 63,0);
    tracep->declQuad(c+59,"registers_19", false,-1, 63,0);
    tracep->declQuad(c+61,"registers_20", false,-1, 63,0);
    tracep->declQuad(c+63,"registers_21", false,-1, 63,0);
    tracep->declQuad(c+65,"registers_22", false,-1, 63,0);
    tracep->declQuad(c+67,"registers_23", false,-1, 63,0);
    tracep->declQuad(c+69,"registers_24", false,-1, 63,0);
    tracep->declQuad(c+71,"registers_25", false,-1, 63,0);
    tracep->declQuad(c+73,"registers_26", false,-1, 63,0);
    tracep->declQuad(c+75,"registers_27", false,-1, 63,0);
    tracep->declQuad(c+77,"registers_28", false,-1, 63,0);
    tracep->declQuad(c+79,"registers_29", false,-1, 63,0);
    tracep->declQuad(c+81,"registers_30", false,-1, 63,0);
    tracep->declQuad(c+83,"registers_31", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+92,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+149,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+103,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+92,"io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+149,"io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+103,"io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+151,"io_debug_exit", false,-1);
    tracep->declQuad(c+1,"io_debug_a0", false,-1, 63,0);
    tracep->declQuad(c+3,"io_debug_pc", false,-1, 63,0);
    tracep->declBus(c+139,"io_debug_inst", false,-1, 31,0);
    tracep->declBit(c+151,"DEBUG_exit", false,-1);
    tracep->declQuad(c+3,"DEBUG_pc", false,-1, 63,0);
    tracep->declBus(c+139,"DEBUG_inst", false,-1, 31,0);
    tracep->declQuad(c+1,"DEBUG_a0", false,-1, 63,0);
    tracep->pushNamePrefix("DEBUG ");
    tracep->declBit(c+151,"exit", false,-1);
    tracep->declQuad(c+3,"pc", false,-1, 63,0);
    tracep->declQuad(c+1,"a0", false,-1, 63,0);
    tracep->declBus(c+139,"inst", false,-1, 31,0);
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
    // Body
    tracep->fullQData(oldp+1,(vlSelf->TOP__DOT__Regfile__DOT__registers_10),64);
    tracep->fullQData(oldp+3,(vlSelf->TOP__DOT__ID__DOT__pc),64);
    tracep->fullQData(oldp+5,(vlSelf->TOP__DOT__IF__DOT__pc),64);
    tracep->fullCData(oldp+7,(vlSelf->TOP__DOT__MEM__DOT__ram1[0]),8);
    tracep->fullCData(oldp+8,(vlSelf->TOP__DOT__MEM__DOT__ram1[1]),8);
    tracep->fullCData(oldp+9,(vlSelf->TOP__DOT__MEM__DOT__ram1[2]),8);
    tracep->fullCData(oldp+10,(vlSelf->TOP__DOT__MEM__DOT__ram1[3]),8);
    tracep->fullCData(oldp+11,(vlSelf->TOP__DOT__MEM__DOT__ram1[4]),8);
    tracep->fullCData(oldp+12,(vlSelf->TOP__DOT__MEM__DOT__ram1[5]),8);
    tracep->fullCData(oldp+13,(vlSelf->TOP__DOT__MEM__DOT__ram1[6]),8);
    tracep->fullCData(oldp+14,(vlSelf->TOP__DOT__MEM__DOT__ram1[7]),8);
    tracep->fullCData(oldp+15,(vlSelf->TOP__DOT__MEM__DOT__ram1[8]),8);
    tracep->fullCData(oldp+16,(vlSelf->TOP__DOT__MEM__DOT__ram1[9]),8);
    tracep->fullCData(oldp+17,(vlSelf->TOP__DOT__MEM__DOT__ram1[10]),8);
    tracep->fullCData(oldp+18,(vlSelf->TOP__DOT__MEM__DOT__ram1[11]),8);
    tracep->fullCData(oldp+19,(vlSelf->TOP__DOT__MEM__DOT__ram1[12]),8);
    tracep->fullCData(oldp+20,(vlSelf->TOP__DOT__MEM__DOT__ram1[13]),8);
    tracep->fullCData(oldp+21,(vlSelf->TOP__DOT__MEM__DOT__ram1[14]),8);
    tracep->fullCData(oldp+22,(vlSelf->TOP__DOT__MEM__DOT__ram1[15]),8);
    tracep->fullQData(oldp+23,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
    tracep->fullQData(oldp+25,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
    tracep->fullQData(oldp+27,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
    tracep->fullQData(oldp+29,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
    tracep->fullQData(oldp+31,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
    tracep->fullQData(oldp+33,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
    tracep->fullQData(oldp+35,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
    tracep->fullQData(oldp+37,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
    tracep->fullQData(oldp+39,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
    tracep->fullQData(oldp+41,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
    tracep->fullQData(oldp+43,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
    tracep->fullQData(oldp+45,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
    tracep->fullQData(oldp+47,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
    tracep->fullQData(oldp+49,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
    tracep->fullQData(oldp+51,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
    tracep->fullQData(oldp+53,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
    tracep->fullQData(oldp+55,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
    tracep->fullQData(oldp+57,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
    tracep->fullQData(oldp+59,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
    tracep->fullQData(oldp+61,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
    tracep->fullQData(oldp+63,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
    tracep->fullQData(oldp+65,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
    tracep->fullQData(oldp+67,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
    tracep->fullQData(oldp+69,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
    tracep->fullQData(oldp+71,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
    tracep->fullQData(oldp+73,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
    tracep->fullQData(oldp+75,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
    tracep->fullQData(oldp+77,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
    tracep->fullQData(oldp+79,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
    tracep->fullQData(oldp+81,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
    tracep->fullQData(oldp+83,(vlSelf->TOP__DOT__Regfile__DOT__registers_31),64);
    tracep->fullBit(oldp+85,((1U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_58))));
    tracep->fullQData(oldp+86,(vlSelf->TOP__DOT__ID_io_decInfo_branchOp_newPC),64);
    tracep->fullQData(oldp+88,(vlSelf->TOP__DOT__IF_io_pc_o),64);
    tracep->fullQData(oldp+90,(vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val),64);
    tracep->fullBit(oldp+92,(vlSelf->TOP__DOT__ID_io_decInfo_writeRfOp_wen));
    tracep->fullQData(oldp+93,(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1),64);
    tracep->fullQData(oldp+95,((((QData)((IData)(vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))),64);
    tracep->fullCData(oldp+97,(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt),5);
    tracep->fullBit(oldp+98,(vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore));
    tracep->fullBit(oldp+99,(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign));
    tracep->fullCData(oldp+100,((3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61))),2);
    tracep->fullQData(oldp+101,((((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TOP__DOT__EX__DOT__aluRes[0U])))),64);
    tracep->fullQData(oldp+103,(vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata),64);
    tracep->fullWData(oldp+105,(vlSelf->TOP__DOT__EX__DOT__aluRes),127);
    tracep->fullCData(oldp+109,(vlSelf->TOP__DOT__ID__DOT__decRes_0),5);
    tracep->fullCData(oldp+110,((0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                         >> 3U))),4);
    tracep->fullCData(oldp+111,((0xffU & (IData)(vlSelf->TOP__DOT__MEM__DOT__mask))),8);
    tracep->fullCData(oldp+112,((0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                                                  >> 8U)))),8);
    tracep->fullCData(oldp+113,((0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                                                  >> 0x10U)))),8);
    tracep->fullCData(oldp+114,((0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                                                  >> 0x18U)))),8);
    tracep->fullCData(oldp+115,((0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                                                  >> 0x20U)))),8);
    tracep->fullCData(oldp+116,((0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                                                  >> 0x28U)))),8);
    tracep->fullCData(oldp+117,((0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                                                  >> 0x30U)))),8);
    tracep->fullCData(oldp+118,((0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                                                  >> 0x38U)))),8);
    tracep->fullCData(oldp+119,(vlSelf->TOP__DOT__MEM__DOT__ram2
                                [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                          >> 3U))]),8);
    tracep->fullCData(oldp+120,(vlSelf->TOP__DOT__MEM__DOT__ram3
                                [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                          >> 3U))]),8);
    tracep->fullCData(oldp+121,(vlSelf->TOP__DOT__MEM__DOT__ram4
                                [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                          >> 3U))]),8);
    tracep->fullCData(oldp+122,(vlSelf->TOP__DOT__MEM__DOT__ram5
                                [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                          >> 3U))]),8);
    tracep->fullCData(oldp+123,(vlSelf->TOP__DOT__MEM__DOT__ram6
                                [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                          >> 3U))]),8);
    tracep->fullCData(oldp+124,(vlSelf->TOP__DOT__MEM__DOT__ram7
                                [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                          >> 3U))]),8);
    tracep->fullCData(oldp+125,(vlSelf->TOP__DOT__MEM__DOT__ram8
                                [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                          >> 3U))]),8);
    tracep->fullQData(oldp+126,((0x1fffffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  vlSelf->TOP__DOT__EX__DOT__aluRes[0U])) 
                                                  >> 3U)))),61);
    tracep->fullQData(oldp+128,(vlSelf->TOP__DOT__MEM__DOT__mask),64);
    tracep->fullQData(oldp+130,(vlSelf->TOP__DOT__MEM__DOT__loadval),64);
    tracep->fullQData(oldp+132,(((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                  ? vlSelf->TOP__DOT__MEM__DOT__loadval
                                  : ((2U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                      ? ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign)
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->TOP__DOT__MEM__DOT__loadval 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->TOP__DOT__MEM__DOT__loadval)))
                                          : vlSelf->TOP__DOT__MEM__DOT__loadval)
                                      : ((1U == (3U 
                                                 & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                          ? ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign)
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->TOP__DOT__MEM__DOT__loadval 
                                                                                >> 0xfU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->TOP__DOT__MEM__DOT__loadval)))))
                                              : vlSelf->TOP__DOT__MEM__DOT__loadval)
                                          : ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign)
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->TOP__DOT__MEM__DOT__loadval 
                                                                                >> 7U)))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->TOP__DOT__MEM__DOT__loadval)))))
                                              : vlSelf->TOP__DOT__MEM__DOT__loadval))))),64);
    tracep->fullBit(oldp+134,(vlSelf->clock));
    tracep->fullBit(oldp+135,(vlSelf->reset));
    tracep->fullIData(oldp+136,(vlSelf->io_inst_i),32);
    tracep->fullQData(oldp+137,(vlSelf->io_pc_o),64);
    tracep->fullIData(oldp+139,(vlSelf->io_inst_o),32);
    tracep->fullQData(oldp+140,(vlSelf->io_o),64);
    tracep->fullQData(oldp+142,(vlSelf->io_src1),64);
    tracep->fullQData(oldp+144,(vlSelf->io_src2),64);
    tracep->fullCData(oldp+146,(vlSelf->io_instType),5);
    tracep->fullBit(oldp+147,(vlSelf->io_branch));
    tracep->fullCData(oldp+148,((0x1fU & (vlSelf->io_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+149,((0x1fU & (vlSelf->io_inst_o 
                                          >> 7U))),5);
    tracep->fullBit(oldp+150,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                               & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                  & (3U == (0x7fU & vlSelf->io_inst_o))))));
    tracep->fullBit(oldp+151,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                ? (0xffffffffU == vlSelf->io_inst_o)
                                : ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                   & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                      & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                         & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                            & ((4U 
                                                != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                               & ((5U 
                                                   != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                  & (6U 
                                                     == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))))))))));
    tracep->fullCData(oldp+152,(((0x33U == (0xfe00707fU 
                                            & vlSelf->io_inst_o))
                                  ? 0U : (IData)(vlSelf->TOP__DOT__ID__DOT___decRes_T_187))),5);
    tracep->fullCData(oldp+153,((0x7fU & vlSelf->io_inst_o)),7);
    tracep->fullCData(oldp+154,((7U & (vlSelf->io_inst_o 
                                       >> 0xcU))),3);
    tracep->fullBit(oldp+155,((0x67U == (0x7fU & vlSelf->io_inst_o))));
    tracep->fullCData(oldp+156,(vlSelf->TOP__DOT__MEM__DOT__ram1
                                [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                          >> 3U))]),8);
    tracep->fullBit(oldp+157,(1U));
    tracep->fullCData(oldp+158,(vlSelf->TOP__DOT__MEM__DOT__ram2[0]),8);
    tracep->fullCData(oldp+159,(vlSelf->TOP__DOT__MEM__DOT__ram2[1]),8);
    tracep->fullCData(oldp+160,(vlSelf->TOP__DOT__MEM__DOT__ram2[2]),8);
    tracep->fullCData(oldp+161,(vlSelf->TOP__DOT__MEM__DOT__ram2[3]),8);
    tracep->fullCData(oldp+162,(vlSelf->TOP__DOT__MEM__DOT__ram2[4]),8);
    tracep->fullCData(oldp+163,(vlSelf->TOP__DOT__MEM__DOT__ram2[5]),8);
    tracep->fullCData(oldp+164,(vlSelf->TOP__DOT__MEM__DOT__ram2[6]),8);
    tracep->fullCData(oldp+165,(vlSelf->TOP__DOT__MEM__DOT__ram2[7]),8);
    tracep->fullCData(oldp+166,(vlSelf->TOP__DOT__MEM__DOT__ram2[8]),8);
    tracep->fullCData(oldp+167,(vlSelf->TOP__DOT__MEM__DOT__ram2[9]),8);
    tracep->fullCData(oldp+168,(vlSelf->TOP__DOT__MEM__DOT__ram2[10]),8);
    tracep->fullCData(oldp+169,(vlSelf->TOP__DOT__MEM__DOT__ram2[11]),8);
    tracep->fullCData(oldp+170,(vlSelf->TOP__DOT__MEM__DOT__ram2[12]),8);
    tracep->fullCData(oldp+171,(vlSelf->TOP__DOT__MEM__DOT__ram2[13]),8);
    tracep->fullCData(oldp+172,(vlSelf->TOP__DOT__MEM__DOT__ram2[14]),8);
    tracep->fullCData(oldp+173,(vlSelf->TOP__DOT__MEM__DOT__ram2[15]),8);
    tracep->fullCData(oldp+174,(vlSelf->TOP__DOT__MEM__DOT__ram3[0]),8);
    tracep->fullCData(oldp+175,(vlSelf->TOP__DOT__MEM__DOT__ram3[1]),8);
    tracep->fullCData(oldp+176,(vlSelf->TOP__DOT__MEM__DOT__ram3[2]),8);
    tracep->fullCData(oldp+177,(vlSelf->TOP__DOT__MEM__DOT__ram3[3]),8);
    tracep->fullCData(oldp+178,(vlSelf->TOP__DOT__MEM__DOT__ram3[4]),8);
    tracep->fullCData(oldp+179,(vlSelf->TOP__DOT__MEM__DOT__ram3[5]),8);
    tracep->fullCData(oldp+180,(vlSelf->TOP__DOT__MEM__DOT__ram3[6]),8);
    tracep->fullCData(oldp+181,(vlSelf->TOP__DOT__MEM__DOT__ram3[7]),8);
    tracep->fullCData(oldp+182,(vlSelf->TOP__DOT__MEM__DOT__ram3[8]),8);
    tracep->fullCData(oldp+183,(vlSelf->TOP__DOT__MEM__DOT__ram3[9]),8);
    tracep->fullCData(oldp+184,(vlSelf->TOP__DOT__MEM__DOT__ram3[10]),8);
    tracep->fullCData(oldp+185,(vlSelf->TOP__DOT__MEM__DOT__ram3[11]),8);
    tracep->fullCData(oldp+186,(vlSelf->TOP__DOT__MEM__DOT__ram3[12]),8);
    tracep->fullCData(oldp+187,(vlSelf->TOP__DOT__MEM__DOT__ram3[13]),8);
    tracep->fullCData(oldp+188,(vlSelf->TOP__DOT__MEM__DOT__ram3[14]),8);
    tracep->fullCData(oldp+189,(vlSelf->TOP__DOT__MEM__DOT__ram3[15]),8);
    tracep->fullCData(oldp+190,(vlSelf->TOP__DOT__MEM__DOT__ram4[0]),8);
    tracep->fullCData(oldp+191,(vlSelf->TOP__DOT__MEM__DOT__ram4[1]),8);
    tracep->fullCData(oldp+192,(vlSelf->TOP__DOT__MEM__DOT__ram4[2]),8);
    tracep->fullCData(oldp+193,(vlSelf->TOP__DOT__MEM__DOT__ram4[3]),8);
    tracep->fullCData(oldp+194,(vlSelf->TOP__DOT__MEM__DOT__ram4[4]),8);
    tracep->fullCData(oldp+195,(vlSelf->TOP__DOT__MEM__DOT__ram4[5]),8);
    tracep->fullCData(oldp+196,(vlSelf->TOP__DOT__MEM__DOT__ram4[6]),8);
    tracep->fullCData(oldp+197,(vlSelf->TOP__DOT__MEM__DOT__ram4[7]),8);
    tracep->fullCData(oldp+198,(vlSelf->TOP__DOT__MEM__DOT__ram4[8]),8);
    tracep->fullCData(oldp+199,(vlSelf->TOP__DOT__MEM__DOT__ram4[9]),8);
    tracep->fullCData(oldp+200,(vlSelf->TOP__DOT__MEM__DOT__ram4[10]),8);
    tracep->fullCData(oldp+201,(vlSelf->TOP__DOT__MEM__DOT__ram4[11]),8);
    tracep->fullCData(oldp+202,(vlSelf->TOP__DOT__MEM__DOT__ram4[12]),8);
    tracep->fullCData(oldp+203,(vlSelf->TOP__DOT__MEM__DOT__ram4[13]),8);
    tracep->fullCData(oldp+204,(vlSelf->TOP__DOT__MEM__DOT__ram4[14]),8);
    tracep->fullCData(oldp+205,(vlSelf->TOP__DOT__MEM__DOT__ram4[15]),8);
    tracep->fullCData(oldp+206,(vlSelf->TOP__DOT__MEM__DOT__ram5[0]),8);
    tracep->fullCData(oldp+207,(vlSelf->TOP__DOT__MEM__DOT__ram5[1]),8);
    tracep->fullCData(oldp+208,(vlSelf->TOP__DOT__MEM__DOT__ram5[2]),8);
    tracep->fullCData(oldp+209,(vlSelf->TOP__DOT__MEM__DOT__ram5[3]),8);
    tracep->fullCData(oldp+210,(vlSelf->TOP__DOT__MEM__DOT__ram5[4]),8);
    tracep->fullCData(oldp+211,(vlSelf->TOP__DOT__MEM__DOT__ram5[5]),8);
    tracep->fullCData(oldp+212,(vlSelf->TOP__DOT__MEM__DOT__ram5[6]),8);
    tracep->fullCData(oldp+213,(vlSelf->TOP__DOT__MEM__DOT__ram5[7]),8);
    tracep->fullCData(oldp+214,(vlSelf->TOP__DOT__MEM__DOT__ram5[8]),8);
    tracep->fullCData(oldp+215,(vlSelf->TOP__DOT__MEM__DOT__ram5[9]),8);
    tracep->fullCData(oldp+216,(vlSelf->TOP__DOT__MEM__DOT__ram5[10]),8);
    tracep->fullCData(oldp+217,(vlSelf->TOP__DOT__MEM__DOT__ram5[11]),8);
    tracep->fullCData(oldp+218,(vlSelf->TOP__DOT__MEM__DOT__ram5[12]),8);
    tracep->fullCData(oldp+219,(vlSelf->TOP__DOT__MEM__DOT__ram5[13]),8);
    tracep->fullCData(oldp+220,(vlSelf->TOP__DOT__MEM__DOT__ram5[14]),8);
    tracep->fullCData(oldp+221,(vlSelf->TOP__DOT__MEM__DOT__ram5[15]),8);
    tracep->fullCData(oldp+222,(vlSelf->TOP__DOT__MEM__DOT__ram6[0]),8);
    tracep->fullCData(oldp+223,(vlSelf->TOP__DOT__MEM__DOT__ram6[1]),8);
    tracep->fullCData(oldp+224,(vlSelf->TOP__DOT__MEM__DOT__ram6[2]),8);
    tracep->fullCData(oldp+225,(vlSelf->TOP__DOT__MEM__DOT__ram6[3]),8);
    tracep->fullCData(oldp+226,(vlSelf->TOP__DOT__MEM__DOT__ram6[4]),8);
    tracep->fullCData(oldp+227,(vlSelf->TOP__DOT__MEM__DOT__ram6[5]),8);
    tracep->fullCData(oldp+228,(vlSelf->TOP__DOT__MEM__DOT__ram6[6]),8);
    tracep->fullCData(oldp+229,(vlSelf->TOP__DOT__MEM__DOT__ram6[7]),8);
    tracep->fullCData(oldp+230,(vlSelf->TOP__DOT__MEM__DOT__ram6[8]),8);
    tracep->fullCData(oldp+231,(vlSelf->TOP__DOT__MEM__DOT__ram6[9]),8);
    tracep->fullCData(oldp+232,(vlSelf->TOP__DOT__MEM__DOT__ram6[10]),8);
    tracep->fullCData(oldp+233,(vlSelf->TOP__DOT__MEM__DOT__ram6[11]),8);
    tracep->fullCData(oldp+234,(vlSelf->TOP__DOT__MEM__DOT__ram6[12]),8);
    tracep->fullCData(oldp+235,(vlSelf->TOP__DOT__MEM__DOT__ram6[13]),8);
    tracep->fullCData(oldp+236,(vlSelf->TOP__DOT__MEM__DOT__ram6[14]),8);
    tracep->fullCData(oldp+237,(vlSelf->TOP__DOT__MEM__DOT__ram6[15]),8);
    tracep->fullCData(oldp+238,(vlSelf->TOP__DOT__MEM__DOT__ram7[0]),8);
    tracep->fullCData(oldp+239,(vlSelf->TOP__DOT__MEM__DOT__ram7[1]),8);
    tracep->fullCData(oldp+240,(vlSelf->TOP__DOT__MEM__DOT__ram7[2]),8);
    tracep->fullCData(oldp+241,(vlSelf->TOP__DOT__MEM__DOT__ram7[3]),8);
    tracep->fullCData(oldp+242,(vlSelf->TOP__DOT__MEM__DOT__ram7[4]),8);
    tracep->fullCData(oldp+243,(vlSelf->TOP__DOT__MEM__DOT__ram7[5]),8);
    tracep->fullCData(oldp+244,(vlSelf->TOP__DOT__MEM__DOT__ram7[6]),8);
    tracep->fullCData(oldp+245,(vlSelf->TOP__DOT__MEM__DOT__ram7[7]),8);
    tracep->fullCData(oldp+246,(vlSelf->TOP__DOT__MEM__DOT__ram7[8]),8);
    tracep->fullCData(oldp+247,(vlSelf->TOP__DOT__MEM__DOT__ram7[9]),8);
    tracep->fullCData(oldp+248,(vlSelf->TOP__DOT__MEM__DOT__ram7[10]),8);
    tracep->fullCData(oldp+249,(vlSelf->TOP__DOT__MEM__DOT__ram7[11]),8);
    tracep->fullCData(oldp+250,(vlSelf->TOP__DOT__MEM__DOT__ram7[12]),8);
    tracep->fullCData(oldp+251,(vlSelf->TOP__DOT__MEM__DOT__ram7[13]),8);
    tracep->fullCData(oldp+252,(vlSelf->TOP__DOT__MEM__DOT__ram7[14]),8);
    tracep->fullCData(oldp+253,(vlSelf->TOP__DOT__MEM__DOT__ram7[15]),8);
    tracep->fullCData(oldp+254,(vlSelf->TOP__DOT__MEM__DOT__ram8[0]),8);
    tracep->fullCData(oldp+255,(vlSelf->TOP__DOT__MEM__DOT__ram8[1]),8);
    tracep->fullCData(oldp+256,(vlSelf->TOP__DOT__MEM__DOT__ram8[2]),8);
    tracep->fullCData(oldp+257,(vlSelf->TOP__DOT__MEM__DOT__ram8[3]),8);
    tracep->fullCData(oldp+258,(vlSelf->TOP__DOT__MEM__DOT__ram8[4]),8);
    tracep->fullCData(oldp+259,(vlSelf->TOP__DOT__MEM__DOT__ram8[5]),8);
    tracep->fullCData(oldp+260,(vlSelf->TOP__DOT__MEM__DOT__ram8[6]),8);
    tracep->fullCData(oldp+261,(vlSelf->TOP__DOT__MEM__DOT__ram8[7]),8);
    tracep->fullCData(oldp+262,(vlSelf->TOP__DOT__MEM__DOT__ram8[8]),8);
    tracep->fullCData(oldp+263,(vlSelf->TOP__DOT__MEM__DOT__ram8[9]),8);
    tracep->fullCData(oldp+264,(vlSelf->TOP__DOT__MEM__DOT__ram8[10]),8);
    tracep->fullCData(oldp+265,(vlSelf->TOP__DOT__MEM__DOT__ram8[11]),8);
    tracep->fullCData(oldp+266,(vlSelf->TOP__DOT__MEM__DOT__ram8[12]),8);
    tracep->fullCData(oldp+267,(vlSelf->TOP__DOT__MEM__DOT__ram8[13]),8);
    tracep->fullCData(oldp+268,(vlSelf->TOP__DOT__MEM__DOT__ram8[14]),8);
    tracep->fullCData(oldp+269,(vlSelf->TOP__DOT__MEM__DOT__ram8[15]),8);
}
