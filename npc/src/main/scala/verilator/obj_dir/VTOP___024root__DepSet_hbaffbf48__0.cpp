// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP___024root.h"

VL_INLINE_OPT void VTOP___024root___sequent__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_140;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_155;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_170;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_185;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_203;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_218;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_233;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_248;
    SData/*11:0*/ TOP__DOT__ID__DOT___io_decInfo_o_aluOp_src2_T_16;
    VlWide<4>/*127:0*/ TOP__DOT__EX__DOT___aluRes_T_13;
    VlWide<4>/*127:0*/ TOP__DOT__EX__DOT___aluRes_T_15;
    IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_34;
    IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_42;
    IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_66;
    IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_75;
    IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_107;
    IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_124;
    IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_131;
    VlWide<4>/*127:0*/ TOP__DOT__EX__DOT___aluRes_T_153;
    VlWide<4>/*127:0*/ TOP__DOT__EX__DOT___aluRes_T_165;
    VlWide<4>/*127:0*/ TOP__DOT__EX__DOT___aluRes_T_183;
    QData/*63:0*/ TOP__DOT__Regfile__DOT___GEN_77;
    QData/*63:0*/ TOP__DOT__Regfile__DOT___GEN_90;
    QData/*63:0*/ TOP__DOT__Regfile__DOT___GEN_109;
    QData/*63:0*/ TOP__DOT__Regfile__DOT___GEN_122;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_12;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_13;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_14;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_15;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_16;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_17;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_18;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_19;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_28;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_29;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_30;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_31;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_44;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_45;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_46;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_47;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_60;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_61;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_62;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_63;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_76;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_77;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_78;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_79;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_80;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_81;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_82;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_83;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_92;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_93;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_94;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_95;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_96;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_97;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_98;
    CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_99;
    IData/*19:0*/ __Vdlyvdim0__TOP__DOT__Main_Memory__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__TOP__DOT__Main_Memory__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__TOP__DOT__Main_Memory__DOT__ram__v0;
    IData/*19:0*/ __Vdlyvdim0__TOP__DOT__Main_Memory__DOT__ram__v1;
    IData/*31:0*/ __Vdlyvval__TOP__DOT__Main_Memory__DOT__ram__v1;
    CData/*0:0*/ __Vdlyvset__TOP__DOT__Main_Memory__DOT__ram__v1;
    VlWide<3>/*95:0*/ __Vtemp_h45976053__0;
    VlWide<3>/*95:0*/ __Vtemp_hbd746cff__0;
    VlWide<3>/*95:0*/ __Vtemp_h9b56c48b__0;
    VlWide<3>/*95:0*/ __Vtemp_h6e016bcf__0;
    VlWide<3>/*95:0*/ __Vtemp_h12d5adeb__0;
    VlWide<3>/*95:0*/ __Vtemp_h6e016bcf__1;
    VlWide<3>/*95:0*/ __Vtemp_h6e016bcf__2;
    VlWide<3>/*95:0*/ __Vtemp_hb9699ee4__0;
    VlWide<4>/*127:0*/ __Vtemp_h599f8521__0;
    VlWide<4>/*127:0*/ __Vtemp_ha1b92fdf__0;
    VlWide<4>/*127:0*/ __Vtemp_h039f9161__0;
    VlWide<4>/*127:0*/ __Vtemp_h59a031f2__0;
    VlWide<4>/*127:0*/ __Vtemp_ha1b95f30__0;
    VlWide<4>/*127:0*/ __Vtemp_h0e1cdfb7__0;
    VlWide<4>/*127:0*/ __Vtemp_h599f8521__1;
    VlWide<4>/*127:0*/ __Vtemp_h318a8c2e__0;
    VlWide<4>/*127:0*/ __Vtemp_hf331cfa8__0;
    VlWide<4>/*127:0*/ __Vtemp_hca73e840__0;
    VlWide<4>/*127:0*/ __Vtemp_h0642b548__0;
    VlWide<4>/*127:0*/ __Vtemp_h06ad13c5__0;
    VlWide<4>/*127:0*/ __Vtemp_h0637f069__0;
    VlWide<4>/*127:0*/ __Vtemp_hf2114ced__0;
    VlWide<4>/*127:0*/ __Vtemp_h5f19f17b__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1fa8384__0;
    VlWide<4>/*127:0*/ __Vtemp_h3ebbcb83__0;
    VlWide<4>/*127:0*/ __Vtemp_h4cd9da6c__0;
    VlWide<4>/*127:0*/ __Vtemp_h1b652c57__0;
    VlWide<4>/*127:0*/ __Vtemp_hb1b25555__0;
    VlWide<4>/*127:0*/ __Vtemp_hb1364460__0;
    VlWide<4>/*127:0*/ __Vtemp_h02d50b33__0;
    VlWide<4>/*127:0*/ __Vtemp_h83a76580__0;
    VlWide<4>/*127:0*/ __Vtemp_h0977e4b3__0;
    VlWide<4>/*127:0*/ __Vtemp_h090619eb__0;
    VlWide<3>/*95:0*/ __Vtemp_h597d9c60__0;
    VlWide<3>/*95:0*/ __Vtemp_hd6d71b49__0;
    VlWide<3>/*95:0*/ __Vtemp_ha234199e__0;
    VlWide<3>/*95:0*/ __Vtemp_h161ad283__0;
    VlWide<3>/*95:0*/ __Vtemp_hb01e2c0c__0;
    VlWide<3>/*95:0*/ __Vtemp_hb1a7d02f__0;
    VlWide<4>/*127:0*/ __Vtemp_h241bfdbe__0;
    VlWide<4>/*127:0*/ __Vtemp_h103e8c55__0;
    VlWide<5>/*159:0*/ __Vtemp_h59a58cdc__0;
    VlWide<5>/*159:0*/ __Vtemp_ha26f5680__0;
    VlWide<3>/*95:0*/ __Vtemp_ha2349b6d__0;
    VlWide<5>/*159:0*/ __Vtemp_hf2a98cfe__0;
    VlWide<5>/*159:0*/ __Vtemp_h2e01ceb5__0;
    VlWide<5>/*159:0*/ __Vtemp_h8c070b57__0;
    VlWide<4>/*127:0*/ __Vtemp_h1671d807__0;
    VlWide<4>/*127:0*/ __Vtemp_h487115af__0;
    VlWide<4>/*127:0*/ __Vtemp_h3d38089f__0;
    VlWide<4>/*127:0*/ __Vtemp_hf9194c46__0;
    VlWide<4>/*127:0*/ __Vtemp_h7f1c07f7__0;
    VlWide<4>/*127:0*/ __Vtemp_h6752e77f__0;
    VlWide<3>/*95:0*/ __Vtemp_hc9c1da9f__0;
    VlWide<3>/*95:0*/ __Vtemp_he39eabc1__0;
    VlWide<3>/*95:0*/ __Vtemp_hd6722311__0;
    VlWide<3>/*95:0*/ __Vtemp_he1248906__0;
    VlWide<3>/*95:0*/ __Vtemp_h880a3279__0;
    VlWide<3>/*95:0*/ __Vtemp_h45976053__1;
    VlWide<3>/*95:0*/ __Vtemp_hbd746cff__1;
    VlWide<3>/*95:0*/ __Vtemp_h9b56c48b__1;
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"\nwdata = %x\n",64,
                   ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_writeRfOp_wen)
                     ? vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata
                     : 0ULL));
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore) 
                      & (0U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"sb: 0x%x    =>  pmem[0x%x]\n",
                   8,(0xffU & (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata)),
                   64,(((QData)((IData)(vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))));
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore) 
                       & (0U != (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))) 
                      & (1U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"sh: 0x%x    =>  pmem[0x%x]\n",
                   16,(0xffffU & (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata)),
                   64,(((QData)((IData)(vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))));
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore) 
                        & (0U != (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))) 
                       & (1U != (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))) 
                      & (2U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"sw: 0x%x    =>  pmem[0x%x]\n",
                   32,(IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata),
                   64,(((QData)((IData)(vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))));
    }
    if (VL_UNLIKELY(((((((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore) 
                         & (0U != (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))) 
                        & (1U != (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))) 
                       & (2U != (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))) 
                      & (3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"sd: 0x%x    =>  pmem[0x%x]\n",
                   64,vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata,
                   64,(((QData)((IData)(vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))));
    }
    if (VL_UNLIKELY((((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                      & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                         & (3U == (0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_EXTEND_WQ(95,64, __Vtemp_h45976053__0, (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]))));
        VL_EXTEND_WQ(95,64, __Vtemp_hbd746cff__0, (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                           >> 0xfU))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U])))));
        VL_EXTEND_WQ(95,64, __Vtemp_h9b56c48b__0, (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                           >> 7U))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U])))));
        VL_FWRITEF(0x80000002U,"[x%2#]   <=  0x%x\n",
                   5,(0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                               >> 7U)),64,(((QData)((IData)(
                                                            ((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2)
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
                                                              : 0U))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
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
                                                               : 0U)))));
    }
    if (VL_UNLIKELY((((((((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                          & (1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) 
                         & (0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) 
                        & (3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) 
                       & (2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) 
                      & (4U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"raw data = %x\n",21,
                   ((0x100000U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                  >> 0xbU)) | ((0xff000U 
                                                & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data) 
                                               | ((0x800U 
                                                   & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                        >> 0x14U))))));
    }
    if (VL_UNLIKELY((((((((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                          & (1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) 
                         & (0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) 
                        & (3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) 
                       & (2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) 
                      & (4U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"imm = %x, target at %x\n",
                   64,(((- (QData)((IData)((1U & (vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_24 
                                                  >> 0x14U))))) 
                        << 0x15U) | (QData)((IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_24))),
                   64,((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)) 
                       + (((- (QData)((IData)((1U & 
                                               (vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_24 
                                                >> 0x14U))))) 
                           << 0x15U) | (QData)((IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_24)))));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"pc = %x, inst = %x\n\n",
                   64,(QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)),
                   32,vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data);
    }
    __Vdlyvset__TOP__DOT__Main_Memory__DOT__ram__v0 = 0U;
    __Vdlyvset__TOP__DOT__Main_Memory__DOT__ram__v1 = 0U;
    if (vlSelf->reset) {
        vlSelf->TOP__DOT__Regfile__DOT__registers_29 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_28 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_27 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_30 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_31 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_26 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_25 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_14 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_15 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_16 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_17 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_18 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_19 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_20 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_21 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_22 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_23 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_24 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_12 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_11 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_9 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_8 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_7 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_2 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_1 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_3 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_0 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_4 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_5 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_6 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_13 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_10 = 0ULL;
    } else if (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_writeRfOp_wen) 
                & (0U != (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                   >> 7U))))) {
        if ((0x1dU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_29 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x1cU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_28 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x1bU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_27 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x1eU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_30 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x1fU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_31 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x1aU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_26 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x19U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_25 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0xeU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                               >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_14 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0xfU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                               >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_15 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x10U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_16 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x11U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_17 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x12U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_18 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x13U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_19 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x14U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_20 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x15U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_21 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x16U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_22 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x17U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_23 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x18U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_24 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0xcU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                               >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_12 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0xbU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                               >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_11 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((9U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                             >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_9 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((8U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                             >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_8 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((7U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                             >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_7 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((2U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                             >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_2 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((1U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                             >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_1 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((3U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                             >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_3 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        vlSelf->TOP__DOT__Regfile__DOT__registers_0 
            = ((0U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                >> 7U))) ? vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata
                : 0ULL);
        if ((4U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                             >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_4 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((5U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                             >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_5 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((6U == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                             >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_6 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0xdU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                               >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_13 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0xaU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                               >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_10 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
    } else {
        vlSelf->TOP__DOT__Regfile__DOT__registers_0 = 0ULL;
    }
    if (((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2) 
         & (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore))) {
        __Vdlyvval__TOP__DOT__Main_Memory__DOT__ram__v0 
            = (IData)((vlSelf->TOP__DOT__Main_Memory__DOT___T_62 
                       >> 0x20U));
        __Vdlyvset__TOP__DOT__Main_Memory__DOT__ram__v0 = 1U;
        __Vdlyvdim0__TOP__DOT__Main_Memory__DOT__ram__v0 
            = (0xfffffU & ((IData)(1U) + (IData)(((
                                                   (((QData)((IData)(
                                                                     vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))) 
                                                   - 0x80000000ULL) 
                                                  >> 2U))));
        __Vdlyvval__TOP__DOT__Main_Memory__DOT__ram__v1 
            = (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_62);
        __Vdlyvset__TOP__DOT__Main_Memory__DOT__ram__v1 = 1U;
        __Vdlyvdim0__TOP__DOT__Main_Memory__DOT__ram__v1 
            = (0xfffffU & (IData)((((((QData)((IData)(
                                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))) 
                                    - 0x80000000ULL) 
                                   >> 2U)));
    }
    vlSelf->TOP__DOT__IF__DOT__pc = (IData)(vlSelf->TOP__DOT__IF__DOT___GEN_0);
    if (__Vdlyvset__TOP__DOT__Main_Memory__DOT__ram__v0) {
        vlSelf->TOP__DOT__Main_Memory__DOT__ram[__Vdlyvdim0__TOP__DOT__Main_Memory__DOT__ram__v0] 
            = __Vdlyvval__TOP__DOT__Main_Memory__DOT__ram__v0;
    }
    if (__Vdlyvset__TOP__DOT__Main_Memory__DOT__ram__v1) {
        vlSelf->TOP__DOT__Main_Memory__DOT__ram[__Vdlyvdim0__TOP__DOT__Main_Memory__DOT__ram__v1] 
            = __Vdlyvval__TOP__DOT__Main_Memory__DOT__ram__v1;
    }
    vlSelf->io_pc_o = (QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc));
    vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
        = vlSelf->TOP__DOT__Main_Memory__DOT__ram[(0xfffffU 
                                                   & (IData)(
                                                             (((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)) 
                                                               - 0x80000000ULL) 
                                                              >> 2U)))];
    vlSelf->io_inst_o = vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data;
    vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_24 
        = ((0x100000U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                         >> 0xbU)) | ((0xff000U & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data) 
                                      | ((0x800U & 
                                          (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                               >> 0x14U)))));
    TOP__DOT__ID__DOT___io_decInfo_o_aluOp_src2_T_16 
        = ((0xfe0U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                      >> 0x14U)) | (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                             >> 7U)));
    vlSelf->TOP__DOT__ID__DOT__immI = (((- (QData)((IData)(
                                                           (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                    >> 0x14U))));
    TOP__DOT__ID__DOT___decRes_T_203 = ((0x501bU == 
                                         (0xfe00707fU 
                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                         ? 0x1cU : 
                                        ((0x4000501bU 
                                          == (0xfe00707fU 
                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                          ? 0x1dU : 
                                         ((0x3bU == 
                                           (0xfe00707fU 
                                            & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                           ? 0x19U : 
                                          ((0x4000003bU 
                                            == (0xfe00707fU 
                                                & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                            ? 0x1aU
                                            : ((0x103bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                ? 0x1bU
                                                : (
                                                   (0x503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                    ? 0x1cU
                                                    : 
                                                   ((0x4000503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                     ? 0x1dU
                                                     : 
                                                    ((0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                      ? 0U
                                                      : 
                                                     ((0x3003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                       ? 0U
                                                       : 
                                                      ((0x3023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                        ? 0U
                                                        : 
                                                       ((0x200003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                         ? 0xbU
                                                         : 
                                                        ((0x200403bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                          ? 0x15U
                                                          : 
                                                         ((0x200503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                           ? 0x16U
                                                           : 
                                                          ((0x200603bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                            ? 0x14U
                                                            : 
                                                           ((0x200703bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                             ? 0x17U
                                                             : 0U)))))))))))))));
    TOP__DOT__Regfile__DOT___GEN_77 = ((0xdU == (0x1fU 
                                                 & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                    >> 0xfU)))
                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_13
                                        : ((0xcU == 
                                            (0x1fU 
                                             & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                >> 0xfU)))
                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_12
                                            : ((0xbU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                    >> 0xfU)))
                                                ? vlSelf->TOP__DOT__Regfile__DOT__registers_11
                                                : (
                                                   (0xaU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_10
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_9
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_8
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                           >> 0xfU)))
                                                       ? vlSelf->TOP__DOT__Regfile__DOT__registers_7
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                            >> 0xfU)))
                                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_6
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                             >> 0xfU)))
                                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_5
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                              >> 0xfU)))
                                                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_4
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                               >> 0xfU)))
                                                           ? vlSelf->TOP__DOT__Regfile__DOT__registers_3
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                >> 0xfU)))
                                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_2
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                 >> 0xfU)))
                                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_1
                                                             : vlSelf->TOP__DOT__Regfile__DOT__registers_0)))))))))))));
    TOP__DOT__Regfile__DOT___GEN_109 = ((0xdU == (0x1fU 
                                                  & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                     >> 0x14U)))
                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_13
                                         : ((0xcU == 
                                             (0x1fU 
                                              & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                 >> 0x14U)))
                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_12
                                             : ((0xbU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                     >> 0x14U)))
                                                 ? vlSelf->TOP__DOT__Regfile__DOT__registers_11
                                                 : 
                                                ((0xaU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlSelf->TOP__DOT__Regfile__DOT__registers_10
                                                  : 
                                                 ((9U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlSelf->TOP__DOT__Regfile__DOT__registers_9
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_8
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_7
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_6
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                           >> 0x14U)))
                                                       ? vlSelf->TOP__DOT__Regfile__DOT__registers_5
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                            >> 0x14U)))
                                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_4
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                             >> 0x14U)))
                                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_3
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                              >> 0x14U)))
                                                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_2
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                               >> 0x14U)))
                                                           ? vlSelf->TOP__DOT__Regfile__DOT__registers_1
                                                           : vlSelf->TOP__DOT__Regfile__DOT__registers_0)))))))))))));
    TOP__DOT__ID__DOT___decRes_T_140 = ((0x4000501bU 
                                         == (0xfe00707fU 
                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                         ? 1U : ((0x3bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                  ? 0U
                                                  : 
                                                 ((0x4000003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                   ? 0U
                                                   : 
                                                  ((0x103bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                    ? 0U
                                                    : 
                                                   ((0x503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                     ? 0U
                                                     : 
                                                    ((0x4000503bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                      ? 0U
                                                      : 
                                                     ((0x6003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                       ? 1U
                                                       : 
                                                      ((0x3003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                        ? 1U
                                                        : 
                                                       ((0x3023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                         ? 5U
                                                         : 
                                                        ((0x200003bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                          ? 0U
                                                          : 
                                                         ((0x200403bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                           ? 0U
                                                           : 
                                                          ((0x200503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                            ? 0U
                                                            : 
                                                           ((0x200603bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                             ? 0U
                                                             : 
                                                            ((0x200703bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                              ? 0U
                                                              : 
                                                             ((0x100073U 
                                                               == 
                                                               (0xfff0007fU 
                                                                & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                               ? 6U
                                                               : 7U)))))))))))))));
    TOP__DOT__ID__DOT___decRes_T_218 = ((0x2006033U 
                                         == (0xfe00707fU 
                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                         ? 0x11U : 
                                        ((0x2007033U 
                                          == (0xfe00707fU 
                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                          ? 0x13U : 
                                         ((0x63U == 
                                           (0x707fU 
                                            & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                           ? 0U : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                    ? 1U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                     ? 4U
                                                     : 
                                                    ((0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                      ? 5U
                                                      : 
                                                     ((0x6063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                       ? 6U
                                                       : 
                                                      ((0x7063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                        ? 7U
                                                        : 
                                                       ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                         ? 0U
                                                         : 
                                                        ((0x67U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                          ? 0xaU
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                           ? 0x1eU
                                                           : 
                                                          ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                            ? 0x1fU
                                                            : 
                                                           ((0x73U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                             ? 0U
                                                             : 
                                                            ((0x1bU 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                              ? 0x19U
                                                              : 
                                                             ((0x101bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                               ? 0x1bU
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_203))))))))))))))));
    TOP__DOT__Regfile__DOT___GEN_90 = ((0x1aU == (0x1fU 
                                                  & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                     >> 0xfU)))
                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_26
                                        : ((0x19U == 
                                            (0x1fU 
                                             & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                >> 0xfU)))
                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_25
                                            : ((0x18U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                    >> 0xfU)))
                                                ? vlSelf->TOP__DOT__Regfile__DOT__registers_24
                                                : (
                                                   (0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                           >> 0xfU)))
                                                       ? vlSelf->TOP__DOT__Regfile__DOT__registers_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                            >> 0xfU)))
                                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                             >> 0xfU)))
                                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                              >> 0xfU)))
                                                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                               >> 0xfU)))
                                                           ? vlSelf->TOP__DOT__Regfile__DOT__registers_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                >> 0xfU)))
                                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                 >> 0xfU)))
                                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_14
                                                             : TOP__DOT__Regfile__DOT___GEN_77)))))))))))));
    TOP__DOT__Regfile__DOT___GEN_122 = ((0x1aU == (0x1fU 
                                                   & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                      >> 0x14U)))
                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_26
                                         : ((0x19U 
                                             == (0x1fU 
                                                 & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                    >> 0x14U)))
                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_25
                                             : ((0x18U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                     >> 0x14U)))
                                                 ? vlSelf->TOP__DOT__Regfile__DOT__registers_24
                                                 : 
                                                ((0x17U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlSelf->TOP__DOT__Regfile__DOT__registers_23
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlSelf->TOP__DOT__Regfile__DOT__registers_22
                                                   : 
                                                  ((0x15U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_21
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_20
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_19
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                           >> 0x14U)))
                                                       ? vlSelf->TOP__DOT__Regfile__DOT__registers_18
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                            >> 0x14U)))
                                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_17
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                             >> 0x14U)))
                                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_16
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                              >> 0x14U)))
                                                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_15
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                               >> 0x14U)))
                                                           ? vlSelf->TOP__DOT__Regfile__DOT__registers_14
                                                           : TOP__DOT__Regfile__DOT___GEN_109)))))))))))));
    TOP__DOT__ID__DOT___decRes_T_155 = ((0x2007033U 
                                         == (0xfe00707fU 
                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                         ? 0U : ((0x63U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                  ? 3U
                                                  : 
                                                 ((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                   ? 3U
                                                   : 
                                                  ((0x4063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                    ? 3U
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                     ? 3U
                                                     : 
                                                    ((0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                      ? 3U
                                                      : 
                                                     ((0x7063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                       ? 3U
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                        ? 4U
                                                        : 
                                                       ((0x67U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                         ? 1U
                                                         : 
                                                        ((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                          ? 2U
                                                          : 
                                                         ((0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                           ? 2U
                                                           : 
                                                          ((0x73U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                            ? 6U
                                                            : 
                                                           ((0x1bU 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                             ? 1U
                                                             : 
                                                            ((0x101bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                              ? 1U
                                                              : 
                                                             ((0x501bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                               ? 1U
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_140))))))))))))))));
    TOP__DOT__ID__DOT___decRes_T_233 = ((0x5013U == 
                                         (0xfc00707fU 
                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                         ? 8U : ((0x40005013U 
                                                  == 
                                                  (0xfc00707fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                  ? 9U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                   ? 0U
                                                   : 
                                                  ((0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                    ? 0U
                                                    : 
                                                   ((0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                     ? 0U
                                                     : 
                                                    ((0x4003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                      ? 0U
                                                      : 
                                                     ((0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                       ? 0U
                                                       : 
                                                      ((0x23U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                        ? 0U
                                                        : 
                                                       ((0x1023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                         ? 0U
                                                         : 
                                                        ((0x2023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                          ? 0U
                                                          : 
                                                         ((0x2000033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                           ? 0xbU
                                                           : 
                                                          ((0x2001033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                            ? 0xcU
                                                            : 
                                                           ((0x2002033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                             ? 0xeU
                                                             : 
                                                            ((0x2004033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                              ? 0x10U
                                                              : 
                                                             ((0x2005033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                               ? 0x12U
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_218))))))))))))))));
    vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val = 
        ((0x1fU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                             >> 0xfU))) ? vlSelf->TOP__DOT__Regfile__DOT__registers_31
          : ((0x1eU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                 >> 0xfU))) ? vlSelf->TOP__DOT__Regfile__DOT__registers_30
              : ((0x1dU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                     >> 0xfU))) ? vlSelf->TOP__DOT__Regfile__DOT__registers_29
                  : ((0x1cU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                         >> 0xfU)))
                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_28
                      : ((0x1bU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                             >> 0xfU)))
                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_27
                          : TOP__DOT__Regfile__DOT___GEN_90)))));
    vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val = 
        ((0x1fU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                             >> 0x14U))) ? vlSelf->TOP__DOT__Regfile__DOT__registers_31
          : ((0x1eU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                 >> 0x14U))) ? vlSelf->TOP__DOT__Regfile__DOT__registers_30
              : ((0x1dU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                     >> 0x14U))) ? vlSelf->TOP__DOT__Regfile__DOT__registers_29
                  : ((0x1cU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                         >> 0x14U)))
                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_28
                      : ((0x1bU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                             >> 0x14U)))
                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_27
                          : TOP__DOT__Regfile__DOT___GEN_122)))));
    TOP__DOT__ID__DOT___decRes_T_170 = ((0x40005013U 
                                         == (0xfc00707fU 
                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                         ? 1U : ((3U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                  ? 1U
                                                  : 
                                                 ((0x1003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                   ? 1U
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                    ? 1U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                     ? 1U
                                                     : 
                                                    ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                      ? 1U
                                                      : 
                                                     ((0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                       ? 5U
                                                       : 
                                                      ((0x1023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                        ? 5U
                                                        : 
                                                       ((0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                         ? 5U
                                                         : 
                                                        ((0x2000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                          ? 0U
                                                          : 
                                                         ((0x2001033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                           ? 0U
                                                           : 
                                                          ((0x2002033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                            ? 0U
                                                            : 
                                                           ((0x2004033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                             ? 0U
                                                             : 
                                                            ((0x2005033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                              ? 0U
                                                              : 
                                                             ((0x2006033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                               ? 0U
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_155))))))))))))))));
    TOP__DOT__ID__DOT___decRes_T_248 = ((0x1033U == 
                                         (0xfe00707fU 
                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                         ? 7U : ((0x2033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                  ? 2U
                                                  : 
                                                 ((0x3033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                   ? 3U
                                                   : 
                                                  ((0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                    ? 4U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                     ? 8U
                                                     : 
                                                    ((0x40005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                      ? 9U
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                       ? 5U
                                                       : 
                                                      ((0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                        ? 6U
                                                        : 
                                                       ((0x13U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                         ? 0U
                                                         : 
                                                        ((0x2013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                          ? 2U
                                                          : 
                                                         ((0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                           ? 3U
                                                           : 
                                                          ((0x4013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                            ? 4U
                                                            : 
                                                           ((0x6013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                             ? 5U
                                                             : 
                                                            ((0x7013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                              ? 6U
                                                              : 
                                                             ((0x1013U 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                               ? 7U
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_233))))))))))))))));
    TOP__DOT__ID__DOT___decRes_T_185 = ((0x2033U == 
                                         (0xfe00707fU 
                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                         ? 0U : ((0x3033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                  ? 0U
                                                  : 
                                                 ((0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                   ? 0U
                                                   : 
                                                  ((0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                    ? 0U
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                     ? 0U
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                       ? 0U
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                        ? 1U
                                                        : 
                                                       ((0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                         ? 1U
                                                         : 
                                                        ((0x3013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                          ? 1U
                                                          : 
                                                         ((0x4013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                           ? 1U
                                                           : 
                                                          ((0x6013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                            ? 1U
                                                            : 
                                                           ((0x7013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                             ? 1U
                                                             : 
                                                            ((0x1013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                              ? 1U
                                                              : 
                                                             ((0x5013U 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                               ? 1U
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_170))))))))))))))));
    if ((0x33U == (0xfe00707fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))) {
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt = 0U;
        vlSelf->TOP__DOT__ID__DOT__decRes_0 = 0U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))) {
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt = 1U;
        vlSelf->TOP__DOT__ID__DOT__decRes_0 = 0U;
    } else {
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt 
            = TOP__DOT__ID__DOT___decRes_T_248;
        vlSelf->TOP__DOT__ID__DOT__decRes_0 = ((0x1033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                ? 0U
                                                : (IData)(TOP__DOT__ID__DOT___decRes_T_185));
    }
    vlSelf->TOP__DOT__ID_io_decInfo_o_writeRfOp_wen 
        = ((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
           & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
              | ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                 | ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                    & ((2U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                       | (4U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))))));
    if (VL_UNLIKELY(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                      ? (0xffffffffU == vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)
                      : ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                         & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                            & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                               & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                  & ((4U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                     & ((5U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                        & (6U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))))))))))) {
        if ((0ULL != vlSelf->TOP__DOT__Regfile__DOT__registers_10)) {
            VL_WRITEF("\n\n hit \033[1;31mbad\033[0m trap at pc = %x, inst = 0x%8x\n",
                      64,(QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)),
                      32,vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data);
        } else {
            VL_WRITEF("\n\n hit \033[1;32mgood\033[0m trap at pc = %x, inst = 0x%8x\n",
                      64,(QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)),
                      32,vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data);
        }
        VL_FINISH_MT("/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/verilator/verilog/DEBUG.v", 16, "");
    }
    vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore 
        = ((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
           & ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
              & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                 & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                    & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                       & ((4U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                          & (5U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))))))));
    vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned 
        = ((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
           & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
              & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                 >> 0xeU)));
    if ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = 0U;
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
            = vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val;
    } else if ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U & 
                                              (3U & 
                                               (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                >> 0xcU)));
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
            = ((0x67U == (0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                ? (QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc))
                : vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val);
    } else if ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U & 0U);
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
            = vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val;
    } else if ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U & 0U);
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
            = vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val;
    } else if ((2U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U & 0U);
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
            = ((0x37U == (0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                ? 0ULL : (QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)));
    } else if ((4U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U & 0U);
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
            = (QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc));
    } else {
        if ((5U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
            vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                = vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val;
            vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U 
                                                  & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                     >> 0xcU));
        } else {
            vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata = 0ULL;
            vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U 
                                                  & 0U);
        }
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
            = vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val;
    }
    VL_EXTEND_WQ(76,64, __Vtemp_h6e016bcf__0, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val);
    VL_EXTEND_WQ(76,64, __Vtemp_h12d5adeb__0, ((0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                ? 4ULL
                                                : vlSelf->TOP__DOT__ID__DOT__immI));
    VL_EXTEND_WQ(76,64, __Vtemp_h6e016bcf__1, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val);
    VL_EXTEND_WQ(76,64, __Vtemp_h6e016bcf__2, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val);
    VL_EXTEND_WQ(76,64, __Vtemp_hb9699ee4__0, ((4U 
                                                == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                ? 4ULL
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(TOP__DOT__ID__DOT___io_decInfo_o_aluOp_src2_T_16) 
                                                                            >> 0xbU))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(TOP__DOT__ID__DOT___io_decInfo_o_aluOp_src2_T_16)))
                                                    : vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)));
    if ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_57[0U] = __Vtemp_h6e016bcf__0[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[1U] = __Vtemp_h6e016bcf__0[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[2U] = __Vtemp_h6e016bcf__0[2U];
    } else if ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_57[0U] = __Vtemp_h12d5adeb__0[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[1U] = __Vtemp_h12d5adeb__0[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[2U] = __Vtemp_h12d5adeb__0[2U];
    } else if ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_57[0U] = __Vtemp_h6e016bcf__1[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[1U] = __Vtemp_h6e016bcf__1[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[2U] = __Vtemp_h6e016bcf__1[2U];
    } else if ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_57[0U] = __Vtemp_h6e016bcf__2[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[1U] = __Vtemp_h6e016bcf__2[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[2U] = __Vtemp_h6e016bcf__2[2U];
    } else if ((2U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_57[0U] = ((IData)(
                                                          (((- (QData)((IData)(
                                                                               (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 0x1fU)))) 
                                                            << 0x14U) 
                                                           | (QData)((IData)(
                                                                             (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                              >> 0xcU))))) 
                                                  << 0xcU);
        vlSelf->TOP__DOT__ID__DOT___GEN_57[1U] = (((IData)(
                                                           (((- (QData)((IData)(
                                                                                (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 0x1fU)))) 
                                                             << 0x14U) 
                                                            | (QData)((IData)(
                                                                              (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                               >> 0xcU))))) 
                                                   >> 0x14U) 
                                                  | ((IData)(
                                                             ((((- (QData)((IData)(
                                                                                (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 0x1fU)))) 
                                                                << 0x14U) 
                                                               | (QData)((IData)(
                                                                                (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 0xcU)))) 
                                                              >> 0x20U)) 
                                                     << 0xcU));
        vlSelf->TOP__DOT__ID__DOT___GEN_57[2U] = ((IData)(
                                                          ((((- (QData)((IData)(
                                                                                (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 0x1fU)))) 
                                                             << 0x14U) 
                                                            | (QData)((IData)(
                                                                              (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                               >> 0xcU)))) 
                                                           >> 0x20U)) 
                                                  >> 0x14U);
    } else {
        vlSelf->TOP__DOT__ID__DOT___GEN_57[0U] = __Vtemp_hb9699ee4__0[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[1U] = __Vtemp_hb9699ee4__0[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[2U] = __Vtemp_hb9699ee4__0[2U];
    }
    vlSelf->TOP__DOT__Main_Memory__DOT__store_en = 
        ((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
          ? 0xffU : ((2U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                      ? 0xfU : ((1U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                 ? 3U : 1U)));
    vlSelf->io_src1 = vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1;
    vlSelf->io_src2 = (((QData)((IData)(vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])));
    TOP__DOT__EX__DOT___aluRes_T_124 = VL_DIV_III(32, (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1), 
                                                  vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]);
    TOP__DOT__EX__DOT___aluRes_T_131 = VL_MODDIV_III(32, (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1), 
                                                     vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]);
    TOP__DOT__EX__DOT___aluRes_T_66 = ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1) 
                                       >> (0x1fU & 
                                           vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]));
    TOP__DOT__EX__DOT___aluRes_T_75 = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1), 
                                                     (0x1fU 
                                                      & vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]));
    TOP__DOT__EX__DOT___aluRes_T_107 = VL_MODDIVS_III(32, (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1), 
                                                      vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]);
    TOP__DOT__EX__DOT___aluRes_T_34 = ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1) 
                                       + vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]);
    TOP__DOT__EX__DOT___aluRes_T_42 = ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1) 
                                       - vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]);
    VL_EXTEND_WQ(128,64, __Vtemp_h599f8521__0, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1);
    VL_EXTEND_WQ(128,64, __Vtemp_ha1b92fdf__0, (((QData)((IData)(
                                                                 vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))));
    VL_MUL_W(4, __Vtemp_h039f9161__0, __Vtemp_h599f8521__0, __Vtemp_ha1b92fdf__0);
    TOP__DOT__EX__DOT___aluRes_T_15[0U] = __Vtemp_h039f9161__0[0U];
    TOP__DOT__EX__DOT___aluRes_T_15[1U] = __Vtemp_h039f9161__0[1U];
    TOP__DOT__EX__DOT___aluRes_T_15[2U] = __Vtemp_h039f9161__0[2U];
    TOP__DOT__EX__DOT___aluRes_T_15[3U] = __Vtemp_h039f9161__0[3U];
    VL_EXTENDS_WQ(128,64, __Vtemp_h59a031f2__0, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1);
    VL_EXTENDS_WQ(128,64, __Vtemp_ha1b95f30__0, (((QData)((IData)(
                                                                  vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))));
    VL_MULS_WWW(128, __Vtemp_h0e1cdfb7__0, __Vtemp_h59a031f2__0, __Vtemp_ha1b95f30__0);
    TOP__DOT__EX__DOT___aluRes_T_13[0U] = __Vtemp_h0e1cdfb7__0[0U];
    TOP__DOT__EX__DOT___aluRes_T_13[1U] = __Vtemp_h0e1cdfb7__0[1U];
    TOP__DOT__EX__DOT___aluRes_T_13[2U] = __Vtemp_h0e1cdfb7__0[2U];
    TOP__DOT__EX__DOT___aluRes_T_13[3U] = __Vtemp_h0e1cdfb7__0[3U];
    VL_EXTEND_WQ(127,64, __Vtemp_h599f8521__1, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h318a8c2e__0, __Vtemp_h599f8521__1, 
                  (0x3fU & vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]));
    __Vtemp_hf331cfa8__0[0U] = __Vtemp_h318a8c2e__0[0U];
    __Vtemp_hf331cfa8__0[1U] = __Vtemp_h318a8c2e__0[1U];
    __Vtemp_hf331cfa8__0[2U] = __Vtemp_h318a8c2e__0[2U];
    __Vtemp_hf331cfa8__0[3U] = (0x7fffffffU & __Vtemp_h318a8c2e__0[3U]);
    VL_EXTEND_WW(128,127, __Vtemp_hca73e840__0, __Vtemp_hf331cfa8__0);
    VL_EXTEND_WQ(128,64, __Vtemp_h0642b548__0, (vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
                                                & (((QData)((IData)(
                                                                    vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))));
    VL_EXTEND_WQ(128,64, __Vtemp_h06ad13c5__0, (vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
                                                | (((QData)((IData)(
                                                                    vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))));
    VL_EXTEND_WQ(128,64, __Vtemp_h0637f069__0, (vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))));
    VL_EXTEND_WQ(128,64, __Vtemp_hf2114ced__0, (((QData)((IData)(
                                                                 TOP__DOT__EX__DOT___aluRes_T_15[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  TOP__DOT__EX__DOT___aluRes_T_15[2U]))));
    VL_EXTEND_WQ(128,64, __Vtemp_h5f19f17b__0, ((0xbU 
                                                 == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))
                                                 ? 
                                                (((QData)((IData)(
                                                                  TOP__DOT__EX__DOT___aluRes_T_13[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   TOP__DOT__EX__DOT___aluRes_T_13[0U])))
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))
                                                  ? (QData)((IData)(
                                                                    (vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
                                                                     < 
                                                                     (((QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))))))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))
                                                   ? (QData)((IData)(
                                                                     VL_LTS_IQQ(64, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1, 
                                                                                (((QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))))))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))
                                                    ? 
                                                   (vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
                                                    - 
                                                    (((QData)((IData)(
                                                                      vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))))
                                                    : 
                                                   (vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
                                                    + 
                                                    (((QData)((IData)(
                                                                      vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))))))));
    if ((7U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_153[0U] = __Vtemp_hca73e840__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_153[1U] = __Vtemp_hca73e840__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_153[2U] = __Vtemp_hca73e840__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_153[3U] = __Vtemp_hca73e840__0[3U];
    } else if ((6U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_153[0U] = __Vtemp_h0642b548__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_153[1U] = __Vtemp_h0642b548__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_153[2U] = __Vtemp_h0642b548__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_153[3U] = __Vtemp_h0642b548__0[3U];
    } else if ((5U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_153[0U] = __Vtemp_h06ad13c5__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_153[1U] = __Vtemp_h06ad13c5__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_153[2U] = __Vtemp_h06ad13c5__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_153[3U] = __Vtemp_h06ad13c5__0[3U];
    } else if ((4U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_153[0U] = __Vtemp_h0637f069__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_153[1U] = __Vtemp_h0637f069__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_153[2U] = __Vtemp_h0637f069__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_153[3U] = __Vtemp_h0637f069__0[3U];
    } else if ((0xcU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_153[0U] = __Vtemp_hf2114ced__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_153[1U] = __Vtemp_hf2114ced__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_153[2U] = __Vtemp_hf2114ced__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_153[3U] = __Vtemp_hf2114ced__0[3U];
    } else if ((0xdU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_153[0U] = TOP__DOT__EX__DOT___aluRes_T_15[0U];
        TOP__DOT__EX__DOT___aluRes_T_153[1U] = TOP__DOT__EX__DOT___aluRes_T_15[1U];
        TOP__DOT__EX__DOT___aluRes_T_153[2U] = TOP__DOT__EX__DOT___aluRes_T_15[2U];
        TOP__DOT__EX__DOT___aluRes_T_153[3U] = TOP__DOT__EX__DOT___aluRes_T_15[3U];
    } else {
        TOP__DOT__EX__DOT___aluRes_T_153[0U] = __Vtemp_h5f19f17b__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_153[1U] = __Vtemp_h5f19f17b__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_153[2U] = __Vtemp_h5f19f17b__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_153[3U] = __Vtemp_h5f19f17b__0[3U];
    }
    VL_EXTEND_WQ(128,64, __Vtemp_hf1fa8384__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (0xffffffffULL 
                                                                                & (((QData)((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1)) 
                                                                                << 
                                                                                (0x1fU 
                                                                                & vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])) 
                                                                                >> 0x1fU)))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (0x7fffffffffffffffULL 
                                                                   & ((QData)((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1)) 
                                                                      << 
                                                                      (0x1fU 
                                                                       & vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))))));
    VL_EXTEND_WQ(128,64, __Vtemp_h3ebbcb83__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (((QData)((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1)) 
                                                                                * (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))) 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((QData)((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1)) 
                                                                   * (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))))));
    VL_EXTEND_WQ(128,64, __Vtemp_h4cd9da6c__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (TOP__DOT__EX__DOT___aluRes_T_42 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(TOP__DOT__EX__DOT___aluRes_T_42))));
    VL_EXTEND_WQ(128,64, __Vtemp_h1b652c57__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (TOP__DOT__EX__DOT___aluRes_T_34 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(TOP__DOT__EX__DOT___aluRes_T_34))));
    VL_EXTEND_WQ(128,64, __Vtemp_hb1b25555__0, VL_SHIFTRS_QQI(64,64,6, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1, 
                                                              (0x3fU 
                                                               & vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])));
    VL_EXTEND_WQ(128,64, __Vtemp_hb1364460__0, (vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
                                                >> 
                                                (0x3fU 
                                                 & vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])));
    if ((0x1bU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_165[0U] = __Vtemp_hf1fa8384__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_165[1U] = __Vtemp_hf1fa8384__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_165[2U] = __Vtemp_hf1fa8384__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_165[3U] = __Vtemp_hf1fa8384__0[3U];
    } else if ((0x18U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_165[0U] = __Vtemp_h3ebbcb83__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_165[1U] = __Vtemp_h3ebbcb83__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_165[2U] = __Vtemp_h3ebbcb83__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_165[3U] = __Vtemp_h3ebbcb83__0[3U];
    } else if ((0x1aU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_165[0U] = __Vtemp_h4cd9da6c__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_165[1U] = __Vtemp_h4cd9da6c__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_165[2U] = __Vtemp_h4cd9da6c__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_165[3U] = __Vtemp_h4cd9da6c__0[3U];
    } else if ((0x19U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_165[0U] = __Vtemp_h1b652c57__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_165[1U] = __Vtemp_h1b652c57__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_165[2U] = __Vtemp_h1b652c57__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_165[3U] = __Vtemp_h1b652c57__0[3U];
    } else if ((9U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_165[0U] = __Vtemp_hb1b25555__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_165[1U] = __Vtemp_hb1b25555__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_165[2U] = __Vtemp_hb1b25555__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_165[3U] = __Vtemp_hb1b25555__0[3U];
    } else if ((8U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_165[0U] = __Vtemp_hb1364460__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_165[1U] = __Vtemp_hb1364460__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_165[2U] = __Vtemp_hb1364460__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_165[3U] = __Vtemp_hb1364460__0[3U];
    } else {
        TOP__DOT__EX__DOT___aluRes_T_165[0U] = TOP__DOT__EX__DOT___aluRes_T_153[0U];
        TOP__DOT__EX__DOT___aluRes_T_165[1U] = TOP__DOT__EX__DOT___aluRes_T_153[1U];
        TOP__DOT__EX__DOT___aluRes_T_165[2U] = TOP__DOT__EX__DOT___aluRes_T_153[2U];
        TOP__DOT__EX__DOT___aluRes_T_165[3U] = TOP__DOT__EX__DOT___aluRes_T_153[3U];
    }
    VL_EXTEND_WQ(128,64, __Vtemp_h02d50b33__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (TOP__DOT__EX__DOT___aluRes_T_107 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(TOP__DOT__EX__DOT___aluRes_T_107))));
    VL_EXTEND_WQ(128,64, __Vtemp_h83a76580__0, VL_MODDIV_QQQ(64, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1, 
                                                             (((QData)((IData)(
                                                                               vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))));
    VL_EXTEND_WQ(128,64, __Vtemp_h0977e4b3__0, VL_MODDIVS_QQQ(64, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1, 
                                                              (((QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))));
    VL_EXTEND_WQ(128,64, __Vtemp_h090619eb__0, VL_DIV_QQQ(64, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1, 
                                                          (((QData)((IData)(
                                                                            vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))));
    VL_EXTENDS_WQ(65,64, __Vtemp_h597d9c60__0, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1);
    __Vtemp_hd6d71b49__0[0U] = __Vtemp_h597d9c60__0[0U];
    __Vtemp_hd6d71b49__0[1U] = __Vtemp_h597d9c60__0[1U];
    __Vtemp_hd6d71b49__0[2U] = (1U & __Vtemp_h597d9c60__0[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp_ha234199e__0, (((QData)((IData)(
                                                                 vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))));
    __Vtemp_h161ad283__0[0U] = __Vtemp_ha234199e__0[0U];
    __Vtemp_h161ad283__0[1U] = __Vtemp_ha234199e__0[1U];
    __Vtemp_h161ad283__0[2U] = (1U & __Vtemp_ha234199e__0[2U]);
    VL_DIVS_WWW(65, __Vtemp_hb01e2c0c__0, __Vtemp_hd6d71b49__0, __Vtemp_h161ad283__0);
    __Vtemp_hb1a7d02f__0[0U] = __Vtemp_hb01e2c0c__0[0U];
    __Vtemp_hb1a7d02f__0[1U] = __Vtemp_hb01e2c0c__0[1U];
    __Vtemp_hb1a7d02f__0[2U] = (1U & __Vtemp_hb01e2c0c__0[2U]);
    VL_EXTEND_WW(128,65, __Vtemp_h241bfdbe__0, __Vtemp_hb1a7d02f__0);
    VL_EXTEND_WQ(128,64, __Vtemp_h103e8c55__0, (((QData)((IData)(
                                                                 TOP__DOT__EX__DOT___aluRes_T_13[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  TOP__DOT__EX__DOT___aluRes_T_13[2U]))));
    VL_EXTENDS_WQ(129,64, __Vtemp_h59a58cdc__0, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1);
    __Vtemp_ha26f5680__0[0U] = __Vtemp_h59a58cdc__0[0U];
    __Vtemp_ha26f5680__0[1U] = __Vtemp_h59a58cdc__0[1U];
    __Vtemp_ha26f5680__0[2U] = __Vtemp_h59a58cdc__0[2U];
    __Vtemp_ha26f5680__0[3U] = __Vtemp_h59a58cdc__0[3U];
    __Vtemp_ha26f5680__0[4U] = (1U & __Vtemp_h59a58cdc__0[4U]);
    VL_EXTEND_WQ(65,64, __Vtemp_ha2349b6d__0, (((QData)((IData)(
                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))));
    VL_EXTENDS_WW(129,65, __Vtemp_hf2a98cfe__0, __Vtemp_ha2349b6d__0);
    __Vtemp_h2e01ceb5__0[0U] = __Vtemp_hf2a98cfe__0[0U];
    __Vtemp_h2e01ceb5__0[1U] = __Vtemp_hf2a98cfe__0[1U];
    __Vtemp_h2e01ceb5__0[2U] = __Vtemp_hf2a98cfe__0[2U];
    __Vtemp_h2e01ceb5__0[3U] = __Vtemp_hf2a98cfe__0[3U];
    __Vtemp_h2e01ceb5__0[4U] = (1U & __Vtemp_hf2a98cfe__0[4U]);
    VL_MULS_WWW(129, __Vtemp_h8c070b57__0, __Vtemp_ha26f5680__0, __Vtemp_h2e01ceb5__0);
    VL_EXTEND_WQ(128,64, __Vtemp_h1671d807__0, (((QData)((IData)(
                                                                 __Vtemp_h8c070b57__0[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  __Vtemp_h8c070b57__0[2U]))));
    VL_EXTEND_WQ(128,64, __Vtemp_h487115af__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (TOP__DOT__EX__DOT___aluRes_T_75 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(TOP__DOT__EX__DOT___aluRes_T_75))));
    VL_EXTEND_WQ(128,64, __Vtemp_h3d38089f__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (TOP__DOT__EX__DOT___aluRes_T_66 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(TOP__DOT__EX__DOT___aluRes_T_66))));
    if ((0x14U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_183[0U] = __Vtemp_h02d50b33__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_183[1U] = __Vtemp_h02d50b33__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_183[2U] = __Vtemp_h02d50b33__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_183[3U] = __Vtemp_h02d50b33__0[3U];
    } else if ((0x13U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_183[0U] = __Vtemp_h83a76580__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_183[1U] = __Vtemp_h83a76580__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_183[2U] = __Vtemp_h83a76580__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_183[3U] = __Vtemp_h83a76580__0[3U];
    } else if ((0x11U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_183[0U] = __Vtemp_h0977e4b3__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_183[1U] = __Vtemp_h0977e4b3__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_183[2U] = __Vtemp_h0977e4b3__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_183[3U] = __Vtemp_h0977e4b3__0[3U];
    } else if ((0x12U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_183[0U] = __Vtemp_h090619eb__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_183[1U] = __Vtemp_h090619eb__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_183[2U] = __Vtemp_h090619eb__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_183[3U] = __Vtemp_h090619eb__0[3U];
    } else if ((0x10U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_183[0U] = __Vtemp_h241bfdbe__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_183[1U] = __Vtemp_h241bfdbe__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_183[2U] = __Vtemp_h241bfdbe__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_183[3U] = __Vtemp_h241bfdbe__0[3U];
    } else if ((0xcU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_183[0U] = __Vtemp_h103e8c55__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_183[1U] = __Vtemp_h103e8c55__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_183[2U] = __Vtemp_h103e8c55__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_183[3U] = __Vtemp_h103e8c55__0[3U];
    } else if ((0xeU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_183[0U] = __Vtemp_h1671d807__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_183[1U] = __Vtemp_h1671d807__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_183[2U] = __Vtemp_h1671d807__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_183[3U] = __Vtemp_h1671d807__0[3U];
    } else if ((0x1dU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_183[0U] = __Vtemp_h487115af__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_183[1U] = __Vtemp_h487115af__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_183[2U] = __Vtemp_h487115af__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_183[3U] = __Vtemp_h487115af__0[3U];
    } else if ((0x1cU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_183[0U] = __Vtemp_h3d38089f__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_183[1U] = __Vtemp_h3d38089f__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_183[2U] = __Vtemp_h3d38089f__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_183[3U] = __Vtemp_h3d38089f__0[3U];
    } else {
        TOP__DOT__EX__DOT___aluRes_T_183[0U] = TOP__DOT__EX__DOT___aluRes_T_165[0U];
        TOP__DOT__EX__DOT___aluRes_T_183[1U] = TOP__DOT__EX__DOT___aluRes_T_165[1U];
        TOP__DOT__EX__DOT___aluRes_T_183[2U] = TOP__DOT__EX__DOT___aluRes_T_165[2U];
        TOP__DOT__EX__DOT___aluRes_T_183[3U] = TOP__DOT__EX__DOT___aluRes_T_165[3U];
    }
    VL_EXTEND_WQ(128,64, __Vtemp_hf9194c46__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (TOP__DOT__EX__DOT___aluRes_T_131 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(TOP__DOT__EX__DOT___aluRes_T_131))));
    VL_EXTEND_WQ(128,64, __Vtemp_h7f1c07f7__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (TOP__DOT__EX__DOT___aluRes_T_124 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(TOP__DOT__EX__DOT___aluRes_T_124))));
    VL_EXTEND_WQ(128,64, __Vtemp_h6752e77f__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (3ULL 
                                                                                & (VL_DIVS_QQQ(33, 
                                                                                (0x1ffffffffULL 
                                                                                & VL_EXTENDS_QI(33,32, (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1))), 
                                                                                (0x1ffffffffULL 
                                                                                & VL_EXTENDS_QI(33,32, 
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))) 
                                                                                >> 0x1fU)))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (0x1ffffffffULL 
                                                                   & VL_DIVS_QQQ(33, 
                                                                                (0x1ffffffffULL 
                                                                                & VL_EXTENDS_QI(33,32, (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1))), 
                                                                                (0x1ffffffffULL 
                                                                                & VL_EXTENDS_QI(33,32, 
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))))))));
    if ((0x17U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U] 
            = __Vtemp_hf9194c46__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U] 
            = __Vtemp_hf9194c46__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[2U] 
            = __Vtemp_hf9194c46__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[3U] 
            = __Vtemp_hf9194c46__0[3U];
    } else if ((0x16U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U] 
            = __Vtemp_h7f1c07f7__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U] 
            = __Vtemp_h7f1c07f7__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[2U] 
            = __Vtemp_h7f1c07f7__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[3U] 
            = __Vtemp_h7f1c07f7__0[3U];
    } else if ((0x15U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U] 
            = __Vtemp_h6752e77f__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U] 
            = __Vtemp_h6752e77f__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[2U] 
            = __Vtemp_h6752e77f__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[3U] 
            = __Vtemp_h6752e77f__0[3U];
    } else {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U] 
            = TOP__DOT__EX__DOT___aluRes_T_183[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U] 
            = TOP__DOT__EX__DOT___aluRes_T_183[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[2U] 
            = TOP__DOT__EX__DOT___aluRes_T_183[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[3U] 
            = TOP__DOT__EX__DOT___aluRes_T_183[3U];
    }
    vlSelf->TOP__DOT__Main_Memory__DOT___T_2 = ((0x80000000ULL 
                                                 <= 
                                                 (((QData)((IData)(
                                                                   vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))) 
                                                & (0x87ffffffULL 
                                                   >= 
                                                   (((QData)((IData)(
                                                                     vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))));
    vlSelf->TOP__DOT__Main_Memory__DOT__dword = (((QData)((IData)(
                                                                  vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                                                  [
                                                                  (0xfffffU 
                                                                   & ((IData)(1U) 
                                                                      + (IData)(
                                                                                (((((QData)((IData)(
                                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))) 
                                                                                - 0x80000000ULL) 
                                                                                >> 2U))))])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                                                   [
                                                                   (0xfffffU 
                                                                    & (IData)(
                                                                              (((((QData)((IData)(
                                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))) 
                                                                                - 0x80000000ULL) 
                                                                               >> 2U)))])));
    VL_EXTEND_WQ(95,64, __Vtemp_hc9c1da9f__0, vlSelf->TOP__DOT__Main_Memory__DOT__dword);
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
    __Vtemp_he1248906__0[0U] = (__Vtemp_hc9c1da9f__0[0U] 
                                & __Vtemp_hd6722311__0[0U]);
    __Vtemp_he1248906__0[1U] = (__Vtemp_hc9c1da9f__0[1U] 
                                & __Vtemp_hd6722311__0[1U]);
    __Vtemp_he1248906__0[2U] = (__Vtemp_hc9c1da9f__0[2U] 
                                & __Vtemp_hd6722311__0[2U]);
    VL_SHIFTR_WWI(95,95,5, __Vtemp_h880a3279__0, __Vtemp_he1248906__0, 
                  (0x18U & (vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U] 
                            << 3U)));
    vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
        = __Vtemp_h880a3279__0[0U];
    vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U] 
        = __Vtemp_h880a3279__0[1U];
    vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U] 
        = (0x7fffffffU & __Vtemp_h880a3279__0[2U]);
    if ((1U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        TOP__DOT__Main_Memory__DOT___GEN_16 = (0xffU 
                                               & (IData)(
                                                         (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                          >> 0x20U)));
        TOP__DOT__Main_Memory__DOT___GEN_17 = (0xffU 
                                               & (IData)(
                                                         (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                          >> 0x28U)));
        TOP__DOT__Main_Memory__DOT___GEN_18 = (0xffU 
                                               & (IData)(
                                                         (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                          >> 0x30U)));
        TOP__DOT__Main_Memory__DOT___GEN_19 = (0xffU 
                                               & (IData)(
                                                         (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                          >> 0x38U)));
        TOP__DOT__Main_Memory__DOT___GEN_12 = (0xffU 
                                               & ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))
                                                   ? (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata)
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__dword)));
        TOP__DOT__Main_Memory__DOT___GEN_13 = (0xffU 
                                               & ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))
                                                   ? (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata)
                                                   : (IData)(
                                                             (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                              >> 8U))));
        TOP__DOT__Main_Memory__DOT___GEN_14 = (0xffU 
                                               & ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))
                                                   ? (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata)
                                                   : (IData)(
                                                             (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                              >> 0x10U))));
        TOP__DOT__Main_Memory__DOT___GEN_15 = (0xffU 
                                               & ((3U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))
                                                   ? (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata)
                                                   : (IData)(
                                                             (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                              >> 0x18U))));
    } else {
        TOP__DOT__Main_Memory__DOT___GEN_16 = (0xffU 
                                               & (IData)(
                                                         (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                          >> 0x20U)));
        TOP__DOT__Main_Memory__DOT___GEN_17 = (0xffU 
                                               & (IData)(
                                                         (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                          >> 0x28U)));
        TOP__DOT__Main_Memory__DOT___GEN_18 = (0xffU 
                                               & (IData)(
                                                         (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                          >> 0x30U)));
        TOP__DOT__Main_Memory__DOT___GEN_19 = (0xffU 
                                               & (IData)(
                                                         (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                          >> 0x38U)));
        TOP__DOT__Main_Memory__DOT___GEN_12 = (0xffU 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__dword));
        TOP__DOT__Main_Memory__DOT___GEN_13 = (0xffU 
                                               & (IData)(
                                                         (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                          >> 8U)));
        TOP__DOT__Main_Memory__DOT___GEN_14 = (0xffU 
                                               & (IData)(
                                                         (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                          >> 0x10U)));
        TOP__DOT__Main_Memory__DOT___GEN_15 = (0xffU 
                                               & (IData)(
                                                         (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                          >> 0x18U)));
    }
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
    vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata = ((
                                                   (7U 
                                                    != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                   & ((1U 
                                                       == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                      & (3U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2)
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
                                                                        __Vtemp_h45976053__1[1U])
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
                                                                         __Vtemp_hbd746cff__1[1U])
                                                                         : 
                                                                        ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                                          ? 
                                                                         vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U]
                                                                          : 
                                                                         __Vtemp_h9b56c48b__1[1U]))))
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
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
                                                                         __Vtemp_h45976053__1[0U])
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
                                                                          __Vtemp_hbd746cff__1[0U])
                                                                          : 
                                                                         ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                                           ? 
                                                                          vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]
                                                                           : 
                                                                          __Vtemp_h9b56c48b__1[0U]))))
                                                                       : 0U))))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))));
    if ((0x10U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        TOP__DOT__Main_Memory__DOT___GEN_80 = (0xffU 
                                               & ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(4U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x20U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_16)));
        TOP__DOT__Main_Memory__DOT___GEN_81 = (0xffU 
                                               & ((5U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(4U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x20U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_17)));
        TOP__DOT__Main_Memory__DOT___GEN_82 = (0xffU 
                                               & ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(4U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x20U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_18)));
        TOP__DOT__Main_Memory__DOT___GEN_83 = (0xffU 
                                               & ((7U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(4U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x20U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_19)));
    } else {
        TOP__DOT__Main_Memory__DOT___GEN_80 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_16));
        TOP__DOT__Main_Memory__DOT___GEN_81 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_17));
        TOP__DOT__Main_Memory__DOT___GEN_82 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_18));
        TOP__DOT__Main_Memory__DOT___GEN_83 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_19));
    }
    if ((2U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        TOP__DOT__Main_Memory__DOT___GEN_28 = (0xffU 
                                               & ((0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 8U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_12)));
        TOP__DOT__Main_Memory__DOT___GEN_29 = (0xffU 
                                               & ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 8U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_13)));
        TOP__DOT__Main_Memory__DOT___GEN_30 = (0xffU 
                                               & ((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 8U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_14)));
        TOP__DOT__Main_Memory__DOT___GEN_31 = (0xffU 
                                               & ((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 8U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_15)));
    } else {
        TOP__DOT__Main_Memory__DOT___GEN_28 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_12));
        TOP__DOT__Main_Memory__DOT___GEN_29 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_13));
        TOP__DOT__Main_Memory__DOT___GEN_30 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_14));
        TOP__DOT__Main_Memory__DOT___GEN_31 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_15));
    }
    vlSelf->io_o = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
    if ((0x20U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        TOP__DOT__Main_Memory__DOT___GEN_96 = (0xffU 
                                               & ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(5U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x28U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_80)));
        TOP__DOT__Main_Memory__DOT___GEN_97 = (0xffU 
                                               & ((5U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(5U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x28U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_81)));
        TOP__DOT__Main_Memory__DOT___GEN_98 = (0xffU 
                                               & ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(5U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x28U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_82)));
        TOP__DOT__Main_Memory__DOT___GEN_99 = (0xffU 
                                               & ((7U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(5U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x28U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_83)));
    } else {
        TOP__DOT__Main_Memory__DOT___GEN_96 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_80));
        TOP__DOT__Main_Memory__DOT___GEN_97 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_81));
        TOP__DOT__Main_Memory__DOT___GEN_98 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_82));
        TOP__DOT__Main_Memory__DOT___GEN_99 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_83));
    }
    if ((4U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        TOP__DOT__Main_Memory__DOT___GEN_44 = (0xffU 
                                               & ((0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(2U) 
                                                       + 
                                                       vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x10U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_28)));
        TOP__DOT__Main_Memory__DOT___GEN_45 = (0xffU 
                                               & ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(2U) 
                                                       + 
                                                       vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x10U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_29)));
        TOP__DOT__Main_Memory__DOT___GEN_46 = (0xffU 
                                               & ((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(2U) 
                                                       + 
                                                       vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x10U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_30)));
        TOP__DOT__Main_Memory__DOT___GEN_47 = (0xffU 
                                               & ((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(2U) 
                                                       + 
                                                       vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x10U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_31)));
    } else {
        TOP__DOT__Main_Memory__DOT___GEN_44 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_28));
        TOP__DOT__Main_Memory__DOT___GEN_45 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_29));
        TOP__DOT__Main_Memory__DOT___GEN_46 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_30));
        TOP__DOT__Main_Memory__DOT___GEN_47 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_31));
    }
    if ((0x40U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_112 
            = (0xffU & ((4U == (7U & ((IData)(6U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x30U)) : (IData)(TOP__DOT__Main_Memory__DOT___GEN_96)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_113 
            = (0xffU & ((5U == (7U & ((IData)(6U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x30U)) : (IData)(TOP__DOT__Main_Memory__DOT___GEN_97)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_114 
            = (0xffU & ((6U == (7U & ((IData)(6U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x30U)) : (IData)(TOP__DOT__Main_Memory__DOT___GEN_98)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_115 
            = (0xffU & ((7U == (7U & ((IData)(6U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x30U)) : (IData)(TOP__DOT__Main_Memory__DOT___GEN_99)));
    } else {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_112 
            = (0xffU & (IData)(TOP__DOT__Main_Memory__DOT___GEN_96));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_113 
            = (0xffU & (IData)(TOP__DOT__Main_Memory__DOT___GEN_97));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_114 
            = (0xffU & (IData)(TOP__DOT__Main_Memory__DOT___GEN_98));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_115 
            = (0xffU & (IData)(TOP__DOT__Main_Memory__DOT___GEN_99));
    }
    if ((8U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        TOP__DOT__Main_Memory__DOT___GEN_60 = (0xffU 
                                               & ((0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(3U) 
                                                       + 
                                                       vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x18U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_44)));
        TOP__DOT__Main_Memory__DOT___GEN_61 = (0xffU 
                                               & ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(3U) 
                                                       + 
                                                       vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x18U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_45)));
        TOP__DOT__Main_Memory__DOT___GEN_62 = (0xffU 
                                               & ((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(3U) 
                                                       + 
                                                       vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x18U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_46)));
        TOP__DOT__Main_Memory__DOT___GEN_63 = (0xffU 
                                               & ((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(3U) 
                                                       + 
                                                       vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x18U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_47)));
    } else {
        TOP__DOT__Main_Memory__DOT___GEN_60 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_44));
        TOP__DOT__Main_Memory__DOT___GEN_61 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_45));
        TOP__DOT__Main_Memory__DOT___GEN_62 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_46));
        TOP__DOT__Main_Memory__DOT___GEN_63 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_47));
    }
    if ((0x10U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        TOP__DOT__Main_Memory__DOT___GEN_76 = (0xffU 
                                               & ((0U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(4U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x20U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_60)));
        TOP__DOT__Main_Memory__DOT___GEN_77 = (0xffU 
                                               & ((1U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(4U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x20U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_61)));
        TOP__DOT__Main_Memory__DOT___GEN_78 = (0xffU 
                                               & ((2U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(4U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x20U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_62)));
        TOP__DOT__Main_Memory__DOT___GEN_79 = (0xffU 
                                               & ((3U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(4U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x20U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_63)));
    } else {
        TOP__DOT__Main_Memory__DOT___GEN_76 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_60));
        TOP__DOT__Main_Memory__DOT___GEN_77 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_61));
        TOP__DOT__Main_Memory__DOT___GEN_78 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_62));
        TOP__DOT__Main_Memory__DOT___GEN_79 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_63));
    }
    if ((0x20U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        TOP__DOT__Main_Memory__DOT___GEN_92 = (0xffU 
                                               & ((0U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(5U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x28U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_76)));
        TOP__DOT__Main_Memory__DOT___GEN_93 = (0xffU 
                                               & ((1U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(5U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x28U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_77)));
        TOP__DOT__Main_Memory__DOT___GEN_94 = (0xffU 
                                               & ((2U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(5U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x28U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_78)));
        TOP__DOT__Main_Memory__DOT___GEN_95 = (0xffU 
                                               & ((3U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(5U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x28U))
                                                   : (IData)(TOP__DOT__Main_Memory__DOT___GEN_79)));
    } else {
        TOP__DOT__Main_Memory__DOT___GEN_92 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_76));
        TOP__DOT__Main_Memory__DOT___GEN_93 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_77));
        TOP__DOT__Main_Memory__DOT___GEN_94 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_78));
        TOP__DOT__Main_Memory__DOT___GEN_95 = (0xffU 
                                               & (IData)(TOP__DOT__Main_Memory__DOT___GEN_79));
    }
    if ((0x40U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_108 
            = (0xffU & ((0U == (7U & ((IData)(6U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x30U)) : (IData)(TOP__DOT__Main_Memory__DOT___GEN_92)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_109 
            = (0xffU & ((1U == (7U & ((IData)(6U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x30U)) : (IData)(TOP__DOT__Main_Memory__DOT___GEN_93)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_110 
            = (0xffU & ((2U == (7U & ((IData)(6U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x30U)) : (IData)(TOP__DOT__Main_Memory__DOT___GEN_94)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_111 
            = (0xffU & ((3U == (7U & ((IData)(6U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x30U)) : (IData)(TOP__DOT__Main_Memory__DOT___GEN_95)));
    } else {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_108 
            = (0xffU & (IData)(TOP__DOT__Main_Memory__DOT___GEN_92));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_109 
            = (0xffU & (IData)(TOP__DOT__Main_Memory__DOT___GEN_93));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_110 
            = (0xffU & (IData)(TOP__DOT__Main_Memory__DOT___GEN_94));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_111 
            = (0xffU & (IData)(TOP__DOT__Main_Memory__DOT___GEN_95));
    }
    vlSelf->TOP__DOT__Main_Memory__DOT___T_62 = (((QData)((IData)(
                                                                  ((((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                                                      ? 
                                                                     ((0x80U 
                                                                       & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                                       ? 
                                                                      ((7U 
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
                                                                                >> 0x38U))) 
                                                                    << 0x18U) 
                                                                   | ((0xff0000U 
                                                                       & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                                                            ? 
                                                                           ((0x80U 
                                                                             & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                                             ? 
                                                                            ((6U 
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
                                                                                >> 0x30U))) 
                                                                          << 0x10U)) 
                                                                      | ((0xff00U 
                                                                          & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                                                               ? 
                                                                              ((0x80U 
                                                                                & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                                                ? 
                                                                               ((5U 
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
                                                                                >> 0x28U))) 
                                                                             << 8U)) 
                                                                         | (0xffU 
                                                                            & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                                                                ? 
                                                                               ((0x80U 
                                                                                & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                                                 ? 
                                                                                ((4U 
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
                                                                                >> 0x20U))))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                                                       ? 
                                                                      ((0x80U 
                                                                        & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                                        ? 
                                                                       ((3U 
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
                                                                                >> 0x18U))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                                                             ? 
                                                                            ((0x80U 
                                                                              & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                                              ? 
                                                                             ((2U 
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
                                                                                >> 0x10U))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                                                                ? 
                                                                               ((0x80U 
                                                                                & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                                                 ? 
                                                                                ((1U 
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
                                                                                >> 8U))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                                                 ? 
                                                                                ((0U 
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
                                                                                 : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__dword)))))))));
}

VL_INLINE_OPT void VTOP___024root___combo__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->TOP__DOT__IF__DOT___GEN_0 = ((IData)(vlSelf->reset)
                                          ? 0x80000000ULL
                                          : (((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                              & ((1U 
                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                  ? 
                                                 (0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                  : 
                                                 ((0U 
                                                   != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                  & ((3U 
                                                      == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                      ? 
                                                     ((7U 
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
                                                      : 
                                                     ((2U 
                                                       != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                      & (4U 
                                                         == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))))))
                                              ? ((7U 
                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
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
                                                                 + vlSelf->TOP__DOT__IF__DOT__pc)))));
}

void VTOP___024root___eval(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VTOP___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    VTOP___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VTOP___024root___eval_debug_assertions(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
