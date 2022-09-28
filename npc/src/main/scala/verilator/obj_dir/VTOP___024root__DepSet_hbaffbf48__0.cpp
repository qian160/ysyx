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
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_207;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_222;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_237;
    SData/*11:0*/ TOP__DOT__ID__DOT___io_decInfo_aluOp_src2_T_16;
    VlWide<4>/*127:0*/ TOP__DOT__EX__DOT___aluRes_T_10;
    IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_30;
    IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_38;
    QData/*63:0*/ TOP__DOT__EX__DOT___aluRes_T_55;
    IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_69;
    VlWide<4>/*126:0*/ TOP__DOT__EX__DOT___aluRes_T_91;
    QData/*63:0*/ TOP__DOT__Regfile__DOT___GEN_77;
    QData/*63:0*/ TOP__DOT__Regfile__DOT___GEN_90;
    QData/*63:0*/ TOP__DOT__Regfile__DOT___GEN_94;
    CData/*3:0*/ __Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v0;
    CData/*7:0*/ __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v0;
    CData/*0:0*/ __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v0;
    CData/*3:0*/ __Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v1;
    CData/*7:0*/ __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v1;
    CData/*0:0*/ __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v1;
    CData/*3:0*/ __Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v2;
    CData/*7:0*/ __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v2;
    CData/*0:0*/ __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v2;
    CData/*3:0*/ __Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v3;
    CData/*7:0*/ __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v3;
    CData/*0:0*/ __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v3;
    CData/*3:0*/ __Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v4;
    CData/*7:0*/ __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v4;
    CData/*0:0*/ __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v4;
    CData/*3:0*/ __Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v5;
    CData/*7:0*/ __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v5;
    CData/*0:0*/ __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v5;
    CData/*3:0*/ __Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v6;
    CData/*7:0*/ __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v6;
    CData/*0:0*/ __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v6;
    CData/*3:0*/ __Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v7;
    CData/*7:0*/ __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v7;
    CData/*0:0*/ __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v7;
    VlWide<3>/*95:0*/ __Vtemp_h5f65369a__0;
    VlWide<3>/*95:0*/ __Vtemp_h3703b819__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f65369a__1;
    VlWide<3>/*95:0*/ __Vtemp_h5f65369a__2;
    VlWide<3>/*95:0*/ __Vtemp_h2398d8f7__0;
    VlWide<3>/*95:0*/ __Vtemp_hcf491a8e__0;
    VlWide<3>/*95:0*/ __Vtemp_h59d0471c__0;
    VlWide<3>/*95:0*/ __Vtemp_hcf491a8e__1;
    VlWide<3>/*95:0*/ __Vtemp_h9a6e1f03__0;
    VlWide<4>/*127:0*/ __Vtemp_hcf74b300__0;
    VlWide<4>/*127:0*/ __Vtemp_ha1b92fdf__0;
    VlWide<4>/*127:0*/ __Vtemp_he4e2805c__0;
    VlWide<4>/*127:0*/ __Vtemp_h76d3e020__0;
    VlWide<4>/*127:0*/ __Vtemp_hcf74b300__1;
    VlWide<4>/*127:0*/ __Vtemp_h50d33f4b__0;
    VlWide<4>/*127:0*/ __Vtemp_haff70034__0;
    VlWide<4>/*127:0*/ __Vtemp_h27371b3d__0;
    VlWide<4>/*127:0*/ __Vtemp_h8d15b800__0;
    VlWide<4>/*127:0*/ __Vtemp_h8d15b800__1;
    VlWide<4>/*127:0*/ __Vtemp_he0adbe15__0;
    VlWide<4>/*127:0*/ __Vtemp_h709a6ac4__0;
    VlWide<4>/*127:0*/ __Vtemp_h9a75dcf3__0;
    VlWide<4>/*127:0*/ __Vtemp_h76bf409d__0;
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"wdata = %x\n",64,vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata);
    }
    __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v0 = 0U;
    __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v1 = 0U;
    __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v2 = 0U;
    __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v3 = 0U;
    __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v4 = 0U;
    __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v5 = 0U;
    __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v6 = 0U;
    __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v7 = 0U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"rd = %2#, aluRes = 0x%x\n",
                   5,(0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                               >> 7U)),127,vlSelf->TOP__DOT__EX__DOT__aluRes.data());
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"pc = %x, inst = %x, src1 = %x, src2 = %x\n\n",
                   64,(QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)),
                   32,vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data,
                   64,vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1,
                   64,(((QData)((IData)(vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))));
    }
    if (vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore) {
        __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v0 = 
            (0xffU & (IData)(vlSelf->TOP__DOT__MEM__DOT__mask));
        __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v0 = 1U;
        __Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v0 = 
            (0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                     >> 3U));
        __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v1 = 
            (0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                              >> 8U)));
        __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v1 = 1U;
        __Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v1 = 
            (0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                     >> 3U));
        __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v2 = 
            (0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                              >> 0x10U)));
        __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v2 = 1U;
        __Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v2 = 
            (0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                     >> 3U));
        __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v3 = 
            (0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                              >> 0x18U)));
        __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v3 = 1U;
        __Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v3 = 
            (0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                     >> 3U));
        __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v4 = 
            (0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                              >> 0x20U)));
        __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v4 = 1U;
        __Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v4 = 
            (0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                     >> 3U));
        __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v5 = 
            (0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                              >> 0x28U)));
        __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v5 = 1U;
        __Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v5 = 
            (0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                     >> 3U));
        __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v6 = 
            (0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                              >> 0x30U)));
        __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v6 = 1U;
        __Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v6 = 
            (0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                     >> 3U));
        __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v7 = 
            (0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                              >> 0x38U)));
        __Vdlyvset__TOP__DOT__MEM__DOT__ram1__v7 = 1U;
        __Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v7 = 
            (0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                     >> 3U));
    }
    if (vlSelf->reset) {
        vlSelf->TOP__DOT__Regfile__DOT__registers_31 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_29 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_28 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_27 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_30 = 0ULL;
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
    } else if (vlSelf->TOP__DOT__ID_io_decInfo_writeRfOp_wen) {
        if ((0x1fU == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_31 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x1dU == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_29 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x1cU == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_28 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x1bU == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_27 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x1eU == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_30 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x1aU == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_26 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x19U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_25 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0xeU == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                               >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_14 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0xfU == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                               >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_15 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x10U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_16 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x11U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_17 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x12U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_18 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x13U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_19 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x14U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_20 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x15U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_21 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x16U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_22 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x17U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_23 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0x18U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_24 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0xcU == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                               >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_12 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0xbU == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                               >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_11 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((9U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                             >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_9 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((8U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                             >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_8 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((7U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                             >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_7 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((2U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                             >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_2 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((1U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                             >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_1 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((3U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                             >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_3 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        vlSelf->TOP__DOT__Regfile__DOT__registers_0 
            = ((0U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                >> 7U))) ? vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata
                : 0ULL);
        if ((4U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                             >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_4 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((5U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                             >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_5 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((6U == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                             >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_6 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0xdU == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                               >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_13 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
        if ((0xaU == (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                               >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_10 
                = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
        }
    } else {
        vlSelf->TOP__DOT__Regfile__DOT__registers_0 = 0ULL;
    }
    if (__Vdlyvset__TOP__DOT__MEM__DOT__ram1__v0) {
        vlSelf->TOP__DOT__MEM__DOT__ram1[__Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v0] 
            = __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v0;
    }
    if (__Vdlyvset__TOP__DOT__MEM__DOT__ram1__v1) {
        vlSelf->TOP__DOT__MEM__DOT__ram1[__Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v1] 
            = __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v1;
    }
    if (__Vdlyvset__TOP__DOT__MEM__DOT__ram1__v2) {
        vlSelf->TOP__DOT__MEM__DOT__ram1[__Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v2] 
            = __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v2;
    }
    if (__Vdlyvset__TOP__DOT__MEM__DOT__ram1__v3) {
        vlSelf->TOP__DOT__MEM__DOT__ram1[__Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v3] 
            = __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v3;
    }
    if (__Vdlyvset__TOP__DOT__MEM__DOT__ram1__v4) {
        vlSelf->TOP__DOT__MEM__DOT__ram1[__Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v4] 
            = __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v4;
    }
    if (__Vdlyvset__TOP__DOT__MEM__DOT__ram1__v5) {
        vlSelf->TOP__DOT__MEM__DOT__ram1[__Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v5] 
            = __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v5;
    }
    if (__Vdlyvset__TOP__DOT__MEM__DOT__ram1__v6) {
        vlSelf->TOP__DOT__MEM__DOT__ram1[__Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v6] 
            = __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v6;
    }
    if (__Vdlyvset__TOP__DOT__MEM__DOT__ram1__v7) {
        vlSelf->TOP__DOT__MEM__DOT__ram1[__Vdlyvdim0__TOP__DOT__MEM__DOT__ram1__v7] 
            = __Vdlyvval__TOP__DOT__MEM__DOT__ram1__v7;
    }
    vlSelf->TOP__DOT__IF__DOT__pc = (IData)(vlSelf->TOP__DOT__IF__DOT___GEN_0);
    vlSelf->io_pc_o = (QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc));
    vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
        = vlSelf->TOP__DOT__IF__DOT__inst_rom[(0x7fffU 
                                               & (vlSelf->TOP__DOT__IF__DOT__pc 
                                                  >> 2U))];
    vlSelf->io_inst_o = vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data;
    vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_newPC_T_11 
        = ((0x1000U & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                       >> 0x13U)) | ((0x800U & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                            >> 7U)))));
    TOP__DOT__ID__DOT___decRes_T_207 = ((0x17U == (0x7fU 
                                                   & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                         ? 0x19U : 
                                        ((0x73U == 
                                          (0x7fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                          ? 0U : ((0x1bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                   ? 0x10U
                                                   : 
                                                  ((0x101bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                    ? 0x12U
                                                    : 
                                                   ((0x501bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                     ? 0x13U
                                                     : 
                                                    ((0x4000501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                      ? 0x14U
                                                      : 
                                                     ((0x3bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                       ? 0x10U
                                                       : 
                                                      ((0x4000003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                        ? 0x11U
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                         ? 0x12U
                                                         : 
                                                        ((0x503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                          ? 0x13U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                           ? 0x14U
                                                           : 
                                                          ((0x6003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                            ? 0U
                                                            : 
                                                           ((0x3003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                             ? 0U
                                                             : 
                                                            ((0x3023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                              ? 0U
                                                              : 
                                                             ((0x200003bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                               ? 0xbU
                                                               : 0U)))))))))))))));
    TOP__DOT__ID__DOT___io_decInfo_aluOp_src2_T_16 
        = ((0xfe0U & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                      >> 0x14U)) | (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                             >> 7U)));
    vlSelf->TOP__DOT__ID__DOT__immI = (((- (QData)((IData)(
                                                           (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                    >> 0x14U))));
    TOP__DOT__Regfile__DOT___GEN_77 = ((0xdU == (0x1fU 
                                                 & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                    >> 0xfU)))
                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_13
                                        : ((0xcU == 
                                            (0x1fU 
                                             & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                >> 0xfU)))
                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_12
                                            : ((0xbU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                    >> 0xfU)))
                                                ? vlSelf->TOP__DOT__Regfile__DOT__registers_11
                                                : (
                                                   (0xaU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_10
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_9
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_8
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                           >> 0xfU)))
                                                       ? vlSelf->TOP__DOT__Regfile__DOT__registers_7
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                            >> 0xfU)))
                                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_6
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                             >> 0xfU)))
                                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_5
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                              >> 0xfU)))
                                                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_4
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                               >> 0xfU)))
                                                           ? vlSelf->TOP__DOT__Regfile__DOT__registers_3
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                >> 0xfU)))
                                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_2
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                 >> 0xfU)))
                                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_1
                                                             : vlSelf->TOP__DOT__Regfile__DOT__registers_0)))))))))))));
    TOP__DOT__ID__DOT___decRes_T_140 = ((0x4000501bU 
                                         == (0xfe00707fU 
                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                         ? 1U : ((0x3bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                  ? 0U
                                                  : 
                                                 ((0x4000003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                   ? 0U
                                                   : 
                                                  ((0x103bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                    ? 0U
                                                    : 
                                                   ((0x503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                     ? 0U
                                                     : 
                                                    ((0x4000503bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                      ? 0U
                                                      : 
                                                     ((0x6003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                       ? 1U
                                                       : 
                                                      ((0x3003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                        ? 1U
                                                        : 
                                                       ((0x3023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                         ? 5U
                                                         : 
                                                        ((0x200003bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                          ? 0U
                                                          : 
                                                         ((0x200403bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                           ? 0U
                                                           : 
                                                          ((0x200503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                            ? 0U
                                                            : 
                                                           ((0x200603bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                             ? 0U
                                                             : 
                                                            ((0x200703bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                              ? 0U
                                                              : 
                                                             ((0x100073U 
                                                               == 
                                                               (0xfff0007fU 
                                                                & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                               ? 6U
                                                               : 7U)))))))))))))));
    TOP__DOT__ID__DOT___decRes_T_222 = ((0x2001033U 
                                         == (0xfe00707fU 
                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                         ? 0xcU : (
                                                   (0x2002033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                    ? 0xdU
                                                    : 
                                                   ((0x2004033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                     ? 0x1aU
                                                     : 
                                                    ((0x2005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                      ? 0x1bU
                                                      : 
                                                     ((0x2006033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                       ? 0x1cU
                                                       : 
                                                      ((0x2007033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                        ? 0x1dU
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                         ? 0U
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                          ? 1U
                                                          : 
                                                         ((0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                           ? 4U
                                                           : 
                                                          ((0x5063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                            ? 5U
                                                            : 
                                                           ((0x6063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                             ? 6U
                                                             : 
                                                            ((0x7063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                              ? 7U
                                                              : 
                                                             ((0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                               ? 0U
                                                               : 
                                                              ((0x67U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                                ? 0xaU
                                                                : 
                                                               ((0x37U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                                 ? 0x18U
                                                                 : (IData)(TOP__DOT__ID__DOT___decRes_T_207))))))))))))))));
    TOP__DOT__Regfile__DOT___GEN_90 = ((0x1aU == (0x1fU 
                                                  & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                     >> 0xfU)))
                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_26
                                        : ((0x19U == 
                                            (0x1fU 
                                             & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                >> 0xfU)))
                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_25
                                            : ((0x18U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                    >> 0xfU)))
                                                ? vlSelf->TOP__DOT__Regfile__DOT__registers_24
                                                : (
                                                   (0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                           >> 0xfU)))
                                                       ? vlSelf->TOP__DOT__Regfile__DOT__registers_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                            >> 0xfU)))
                                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                             >> 0xfU)))
                                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                              >> 0xfU)))
                                                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                               >> 0xfU)))
                                                           ? vlSelf->TOP__DOT__Regfile__DOT__registers_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                >> 0xfU)))
                                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                 >> 0xfU)))
                                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_14
                                                             : TOP__DOT__Regfile__DOT___GEN_77)))))))))))));
    TOP__DOT__ID__DOT___decRes_T_155 = ((0x2007033U 
                                         == (0xfe00707fU 
                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                         ? 0U : ((0x63U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                  ? 3U
                                                  : 
                                                 ((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                   ? 3U
                                                   : 
                                                  ((0x4063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                    ? 3U
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                     ? 3U
                                                     : 
                                                    ((0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                      ? 3U
                                                      : 
                                                     ((0x7063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                       ? 3U
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                        ? 4U
                                                        : 
                                                       ((0x67U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                         ? 1U
                                                         : 
                                                        ((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                          ? 2U
                                                          : 
                                                         ((0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                           ? 2U
                                                           : 
                                                          ((0x73U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                            ? 6U
                                                            : 
                                                           ((0x1bU 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                             ? 1U
                                                             : 
                                                            ((0x101bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                              ? 1U
                                                              : 
                                                             ((0x501bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                               ? 1U
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_140))))))))))))))));
    TOP__DOT__ID__DOT___decRes_T_237 = ((0x4013U == 
                                         (0x707fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                         ? 4U : ((0x6013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                  ? 5U
                                                  : 
                                                 ((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                   ? 6U
                                                   : 
                                                  ((0x1013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                    ? 7U
                                                    : 
                                                   ((0x5013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                     ? 8U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                      ? 9U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                       ? 0U
                                                       : 
                                                      ((0x1003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                        ? 0U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                         ? 0U
                                                         : 
                                                        ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                          ? 0U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                           ? 0U
                                                           : 
                                                          ((0x23U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                            ? 0U
                                                            : 
                                                           ((0x1023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                             ? 0U
                                                             : 
                                                            ((0x2023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                              ? 0U
                                                              : 
                                                             ((0x2000033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                               ? 0xbU
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_222))))))))))))))));
    TOP__DOT__Regfile__DOT___GEN_94 = ((0x1eU == (0x1fU 
                                                  & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                     >> 0xfU)))
                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_30
                                        : ((0x1dU == 
                                            (0x1fU 
                                             & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                >> 0xfU)))
                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_29
                                            : ((0x1cU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                    >> 0xfU)))
                                                ? vlSelf->TOP__DOT__Regfile__DOT__registers_28
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_27
                                                    : TOP__DOT__Regfile__DOT___GEN_90))));
    TOP__DOT__ID__DOT___decRes_T_170 = ((0x40005013U 
                                         == (0xfc00707fU 
                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                         ? 1U : ((3U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                  ? 1U
                                                  : 
                                                 ((0x1003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                   ? 1U
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                    ? 1U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                     ? 1U
                                                     : 
                                                    ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                      ? 1U
                                                      : 
                                                     ((0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                       ? 5U
                                                       : 
                                                      ((0x1023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                        ? 5U
                                                        : 
                                                       ((0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                         ? 5U
                                                         : 
                                                        ((0x2000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                          ? 0U
                                                          : 
                                                         ((0x2001033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                           ? 0U
                                                           : 
                                                          ((0x2002033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                            ? 0U
                                                            : 
                                                           ((0x2004033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                             ? 0U
                                                             : 
                                                            ((0x2005033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                              ? 0U
                                                              : 
                                                             ((0x2006033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                               ? 0U
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_155))))))))))))))));
    vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt = ((0x33U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                  ? 0U
                                                  : 
                                                 ((0x40000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                   ? 1U
                                                   : 
                                                  ((0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                    ? 7U
                                                    : 
                                                   ((0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                     ? 2U
                                                     : 
                                                    ((0x3033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                      ? 3U
                                                      : 
                                                     ((0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                       ? 4U
                                                       : 
                                                      ((0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                        ? 8U
                                                        : 
                                                       ((0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                         ? 9U
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                          ? 5U
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                           ? 6U
                                                           : 
                                                          ((0x13U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                            ? 0U
                                                            : 
                                                           ((0x2013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                             ? 2U
                                                             : 
                                                            ((0x3013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                              ? 3U
                                                              : (IData)(TOP__DOT__ID__DOT___decRes_T_237))))))))))))));
    vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val = (
                                                   (0x1fU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_31
                                                    : TOP__DOT__Regfile__DOT___GEN_94);
    TOP__DOT__ID__DOT___decRes_T_185 = ((0x2033U == 
                                         (0xfe00707fU 
                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                         ? 0U : ((0x3033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                  ? 0U
                                                  : 
                                                 ((0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                   ? 0U
                                                   : 
                                                  ((0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                    ? 0U
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                     ? 0U
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                       ? 0U
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                        ? 1U
                                                        : 
                                                       ((0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                         ? 1U
                                                         : 
                                                        ((0x3013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                          ? 1U
                                                          : 
                                                         ((0x4013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                           ? 1U
                                                           : 
                                                          ((0x6013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                            ? 1U
                                                            : 
                                                           ((0x7013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                             ? 1U
                                                             : 
                                                            ((0x1013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                              ? 1U
                                                              : 
                                                             ((0x5013U 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                               ? 1U
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_170))))))))))))))));
    vlSelf->TOP__DOT__ID__DOT___decRes_T_187 = ((0x40000033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                 ? 0U
                                                 : 
                                                ((0x1033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                  ? 0U
                                                  : (IData)(TOP__DOT__ID__DOT___decRes_T_185)));
    if ((0x33U == (0xfe00707fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))) {
        vlSelf->io_instType = 0U;
        vlSelf->TOP__DOT__ID__DOT__decRes_0 = 0U;
    } else {
        vlSelf->io_instType = vlSelf->TOP__DOT__ID__DOT___decRes_T_187;
        vlSelf->TOP__DOT__ID__DOT__decRes_0 = vlSelf->TOP__DOT__ID__DOT___decRes_T_187;
    }
    vlSelf->TOP__DOT__ID_io_decInfo_writeRfOp_wen = 
        ((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
         & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
            | ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
               | ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                  & ((2U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                     | (4U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))))));
    vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore = 
        ((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
         & ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
            & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
               & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                  & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                     & ((4U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                        & (5U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))))))));
    if (VL_UNLIKELY(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                      ? (0xffffffffU == vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data)
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
                      32,vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data);
        } else {
            VL_WRITEF("\n\n hit \033[1;32mgood\033[0m trap at pc = %x, inst = 0x%8x\n",
                      64,(QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)),
                      32,vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data);
        }
        VL_FINISH_MT("verilog/DEBUG.v", 16, "");
    }
    vlSelf->TOP__DOT__ID__DOT___GEN_58 = ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                           ? 0ULL : 
                                          ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                            ? (QData)((IData)(
                                                              (0x67U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))))
                                            : ((0U 
                                                == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                ? 0ULL
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                    ? 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                         >> 0xcU)))
                                                     ? (QData)((IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_happen_T_1))
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                          >> 0xcU)))
                                                      ? (QData)((IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_happen_T_1))
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                           >> 0xcU)))
                                                       ? 0ULL
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                            >> 0xcU)))
                                                        ? 0ULL
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                             >> 0xcU)))
                                                         ? 0ULL
                                                         : (QData)((IData)(
                                                                           ((0U 
                                                                             == 
                                                                             (0x7000U 
                                                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data)) 
                                                                            & (IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_happen_T_1)))))))))
                                                    : (QData)((IData)(
                                                                      ((2U 
                                                                        != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                                       & (4U 
                                                                          == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))))))));
    vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign = ((7U 
                                                   != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                  & ((1U 
                                                      == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                     & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                        >> 0xeU)));
    if ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = 0U;
        vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
            = vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val;
    } else if ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U & 
                                              (3U & 
                                               (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                >> 0xcU)));
        vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
            = ((0x67U == (0x7fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                ? (QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc))
                : vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val);
    } else if ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U & 0U);
        vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
            = vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val;
    } else if ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U & 0U);
        vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
            = vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val;
    } else if ((2U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U & 0U);
        vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
            = ((0x37U == (0x7fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                ? 0ULL : (QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)));
    } else if ((4U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U & 0U);
        vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
            = (QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc));
    } else {
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U & 
                                              ((5U 
                                                == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                ? (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                   >> 0xcU)
                                                : 0U));
        vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
            = vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val;
    }
    VL_EXTEND_WQ(76,64, __Vtemp_h5f65369a__0, vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val);
    VL_EXTEND_WQ(76,64, __Vtemp_h3703b819__0, ((0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                ? 4ULL
                                                : vlSelf->TOP__DOT__ID__DOT__immI));
    VL_EXTEND_WQ(76,64, __Vtemp_h5f65369a__1, vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val);
    VL_EXTEND_WQ(76,64, __Vtemp_h5f65369a__2, vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val);
    VL_EXTEND_WQ(76,64, __Vtemp_h2398d8f7__0, ((4U 
                                                == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                ? 4ULL
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(TOP__DOT__ID__DOT___io_decInfo_aluOp_src2_T_16) 
                                                                            >> 0xbU))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(TOP__DOT__ID__DOT___io_decInfo_aluOp_src2_T_16)))
                                                    : vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val)));
    if ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_57[0U] = __Vtemp_h5f65369a__0[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[1U] = __Vtemp_h5f65369a__0[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[2U] = __Vtemp_h5f65369a__0[2U];
    } else if ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_57[0U] = __Vtemp_h3703b819__0[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[1U] = __Vtemp_h3703b819__0[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[2U] = __Vtemp_h3703b819__0[2U];
    } else if ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_57[0U] = __Vtemp_h5f65369a__1[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[1U] = __Vtemp_h5f65369a__1[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[2U] = __Vtemp_h5f65369a__1[2U];
    } else if ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_57[0U] = __Vtemp_h5f65369a__2[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[1U] = __Vtemp_h5f65369a__2[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[2U] = __Vtemp_h5f65369a__2[2U];
    } else if ((2U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_57[0U] = ((IData)(
                                                          (((- (QData)((IData)(
                                                                               (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                                >> 0x1fU)))) 
                                                            << 0x14U) 
                                                           | (QData)((IData)(
                                                                             (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                              >> 0xcU))))) 
                                                  << 0xcU);
        vlSelf->TOP__DOT__ID__DOT___GEN_57[1U] = (((IData)(
                                                           (((- (QData)((IData)(
                                                                                (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                                >> 0x1fU)))) 
                                                             << 0x14U) 
                                                            | (QData)((IData)(
                                                                              (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                               >> 0xcU))))) 
                                                   >> 0x14U) 
                                                  | ((IData)(
                                                             ((((- (QData)((IData)(
                                                                                (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                                >> 0x1fU)))) 
                                                                << 0x14U) 
                                                               | (QData)((IData)(
                                                                                (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                                >> 0xcU)))) 
                                                              >> 0x20U)) 
                                                     << 0xcU));
        vlSelf->TOP__DOT__ID__DOT___GEN_57[2U] = ((IData)(
                                                          ((((- (QData)((IData)(
                                                                                (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                                >> 0x1fU)))) 
                                                             << 0x14U) 
                                                            | (QData)((IData)(
                                                                              (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                               >> 0xcU)))) 
                                                           >> 0x20U)) 
                                                  >> 0x14U);
    } else {
        vlSelf->TOP__DOT__ID__DOT___GEN_57[0U] = __Vtemp_h2398d8f7__0[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[1U] = __Vtemp_h2398d8f7__0[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[2U] = __Vtemp_h2398d8f7__0[2U];
    }
    vlSelf->io_branch = (1U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_58));
    vlSelf->TOP__DOT__MEM__DOT__mask = ((3U == (3U 
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
                                                              : 0xffU)))));
    vlSelf->io_src1 = vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1;
    vlSelf->io_src2 = (((QData)((IData)(vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])));
    TOP__DOT__EX__DOT___aluRes_T_30 = ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1) 
                                       + vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]);
    TOP__DOT__EX__DOT___aluRes_T_38 = ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1) 
                                       - vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]);
    VL_EXTEND_WQ(95,64, __Vtemp_hcf491a8e__0, vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1);
    VL_SHIFTL_WWI(95,95,5, __Vtemp_h59d0471c__0, __Vtemp_hcf491a8e__0, 
                  (0x1fU & vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]));
    VL_EXTEND_WQ(95,64, __Vtemp_hcf491a8e__1, vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1);
    VL_SHIFTL_WWI(95,95,5, __Vtemp_h9a6e1f03__0, __Vtemp_hcf491a8e__1, 
                  (0x1fU & vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]));
    TOP__DOT__EX__DOT___aluRes_T_55 = (((QData)((IData)(
                                                        (- (IData)(
                                                                   (__Vtemp_h59d0471c__0[0U] 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp_h9a6e1f03__0[0U])));
    TOP__DOT__EX__DOT___aluRes_T_69 = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1), 
                                                     (0x1fU 
                                                      & vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]));
    VL_EXTEND_WQ(128,64, __Vtemp_hcf74b300__0, vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1);
    VL_EXTEND_WQ(128,64, __Vtemp_ha1b92fdf__0, (((QData)((IData)(
                                                                 vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))));
    VL_MUL_W(4, __Vtemp_he4e2805c__0, __Vtemp_hcf74b300__0, __Vtemp_ha1b92fdf__0);
    TOP__DOT__EX__DOT___aluRes_T_10[0U] = __Vtemp_he4e2805c__0[0U];
    TOP__DOT__EX__DOT___aluRes_T_10[1U] = __Vtemp_he4e2805c__0[1U];
    TOP__DOT__EX__DOT___aluRes_T_10[2U] = __Vtemp_he4e2805c__0[2U];
    TOP__DOT__EX__DOT___aluRes_T_10[3U] = __Vtemp_he4e2805c__0[3U];
    VL_EXTEND_WQ(127,64, __Vtemp_h76d3e020__0, (vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
                                                >> 
                                                (0x3fU 
                                                 & vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])));
    VL_EXTEND_WQ(127,64, __Vtemp_hcf74b300__1, vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h50d33f4b__0, __Vtemp_hcf74b300__1, 
                  (0x3fU & vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]));
    VL_EXTEND_WQ(127,64, __Vtemp_haff70034__0, ((6U 
                                                 == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))
                                                 ? 
                                                (vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
                                                 & (((QData)((IData)(
                                                                     vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))))
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))
                                                  ? 
                                                 (vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
                                                  | (((QData)((IData)(
                                                                      vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))
                                                   ? 
                                                  (vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))))
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     TOP__DOT__EX__DOT___aluRes_T_10[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      TOP__DOT__EX__DOT___aluRes_T_10[2U])))
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      TOP__DOT__EX__DOT___aluRes_T_10[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       TOP__DOT__EX__DOT___aluRes_T_10[0U])))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))
                                                      ? (QData)((IData)(
                                                                        (vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
                                                                         < 
                                                                         (((QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                                           << 0x20U) 
                                                                          | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))))))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))
                                                       ? (QData)((IData)(
                                                                         VL_LTS_IQQ(64, vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1, 
                                                                                (((QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))))))
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))
                                                        ? 
                                                       (vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
                                                        - 
                                                        (((QData)((IData)(
                                                                          vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))))
                                                        : 
                                                       (vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
                                                        + 
                                                        (((QData)((IData)(
                                                                          vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))))))))))));
    if ((8U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_91[0U] = __Vtemp_h76d3e020__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_91[1U] = __Vtemp_h76d3e020__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_91[2U] = __Vtemp_h76d3e020__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_91[3U] = (0x7fffffffU 
                                               & __Vtemp_h76d3e020__0[3U]);
    } else if ((7U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_91[0U] = __Vtemp_h50d33f4b__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_91[1U] = __Vtemp_h50d33f4b__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_91[2U] = __Vtemp_h50d33f4b__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_91[3U] = (0x7fffffffU 
                                               & __Vtemp_h50d33f4b__0[3U]);
    } else {
        TOP__DOT__EX__DOT___aluRes_T_91[0U] = __Vtemp_haff70034__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_91[1U] = __Vtemp_haff70034__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_91[2U] = __Vtemp_haff70034__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_91[3U] = (0x7fffffffU 
                                               & __Vtemp_haff70034__0[3U]);
    }
    VL_EXTEND_WQ(127,64, __Vtemp_h27371b3d__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (TOP__DOT__EX__DOT___aluRes_T_69 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(TOP__DOT__EX__DOT___aluRes_T_69))));
    VL_EXTEND_WQ(127,64, __Vtemp_h8d15b800__0, TOP__DOT__EX__DOT___aluRes_T_55);
    VL_EXTEND_WQ(127,64, __Vtemp_h8d15b800__1, TOP__DOT__EX__DOT___aluRes_T_55);
    VL_EXTEND_WQ(127,64, __Vtemp_he0adbe15__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (((QData)((IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1)) 
                                                                                * (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))) 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((QData)((IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1)) 
                                                                   * (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))))));
    VL_EXTEND_WQ(127,64, __Vtemp_h709a6ac4__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (TOP__DOT__EX__DOT___aluRes_T_38 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(TOP__DOT__EX__DOT___aluRes_T_38))));
    VL_EXTEND_WQ(127,64, __Vtemp_h9a75dcf3__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (TOP__DOT__EX__DOT___aluRes_T_30 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(TOP__DOT__EX__DOT___aluRes_T_30))));
    VL_EXTEND_WQ(127,64, __Vtemp_h76bf409d__0, VL_SHIFTRS_QQI(64,64,6, vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1, 
                                                              (0x3fU 
                                                               & vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])));
    if ((0x14U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_h27371b3d__0[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_h27371b3d__0[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_h27371b3d__0[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_h27371b3d__0[3U];
    } else if ((0x13U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_h8d15b800__0[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_h8d15b800__0[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_h8d15b800__0[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_h8d15b800__0[3U];
    } else if ((0x12U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_h8d15b800__1[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_h8d15b800__1[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_h8d15b800__1[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_h8d15b800__1[3U];
    } else if ((0xfU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_he0adbe15__0[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_he0adbe15__0[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_he0adbe15__0[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_he0adbe15__0[3U];
    } else if ((0x11U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_h709a6ac4__0[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_h709a6ac4__0[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_h709a6ac4__0[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_h709a6ac4__0[3U];
    } else if ((0x10U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_h9a75dcf3__0[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_h9a75dcf3__0[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_h9a75dcf3__0[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_h9a75dcf3__0[3U];
    } else if ((9U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_h76bf409d__0[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_h76bf409d__0[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_h76bf409d__0[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_h76bf409d__0[3U];
    } else {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = TOP__DOT__EX__DOT___aluRes_T_91[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = TOP__DOT__EX__DOT___aluRes_T_91[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = TOP__DOT__EX__DOT___aluRes_T_91[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = TOP__DOT__EX__DOT___aluRes_T_91[3U];
    }
    vlSelf->TOP__DOT__MEM__DOT__loadval = ((((QData)((IData)(
                                                             ((vlSelf->TOP__DOT__MEM__DOT__ram1
                                                               [
                                                               (0xfU 
                                                                & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                                                   >> 3U))] 
                                                               << 0x18U) 
                                                              | ((vlSelf->TOP__DOT__MEM__DOT__ram2
                                                                  [
                                                                  (0xfU 
                                                                   & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                                                      >> 3U))] 
                                                                  << 0x10U) 
                                                                 | ((vlSelf->TOP__DOT__MEM__DOT__ram3
                                                                     [
                                                                     (0xfU 
                                                                      & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                                                         >> 3U))] 
                                                                     << 8U) 
                                                                    | vlSelf->TOP__DOT__MEM__DOT__ram4
                                                                    [
                                                                    (0xfU 
                                                                     & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                                                        >> 3U))]))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((vlSelf->TOP__DOT__MEM__DOT__ram5
                                                                [
                                                                (0xfU 
                                                                 & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                                                    >> 3U))] 
                                                                << 0x18U) 
                                                               | ((vlSelf->TOP__DOT__MEM__DOT__ram6
                                                                   [
                                                                   (0xfU 
                                                                    & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                                                       >> 3U))] 
                                                                   << 0x10U) 
                                                                  | ((vlSelf->TOP__DOT__MEM__DOT__ram7
                                                                      [
                                                                      (0xfU 
                                                                       & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                                                          >> 3U))] 
                                                                      << 8U) 
                                                                     | vlSelf->TOP__DOT__MEM__DOT__ram8
                                                                     [
                                                                     (0xfU 
                                                                      & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                                                         >> 3U))])))))) 
                                           & vlSelf->TOP__DOT__MEM__DOT__mask);
    vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata = ((
                                                   (7U 
                                                    != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                   & ((1U 
                                                       == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                      & (3U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))))
                                                   ? 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                    ? vlSelf->TOP__DOT__MEM__DOT__loadval
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                     ? 
                                                    ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign)
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TOP__DOT__MEM__DOT__loadval 
                                                                                >> 0x1fU))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->TOP__DOT__MEM__DOT__loadval)))
                                                      : vlSelf->TOP__DOT__MEM__DOT__loadval)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                      ? 
                                                     ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign)
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->TOP__DOT__MEM__DOT__loadval 
                                                                                >> 0xfU)))))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         (0xffffU 
                                                                          & (IData)(vlSelf->TOP__DOT__MEM__DOT__loadval)))))
                                                       : vlSelf->TOP__DOT__MEM__DOT__loadval)
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign)
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->TOP__DOT__MEM__DOT__loadval 
                                                                                >> 7U)))))) 
                                                        << 8U) 
                                                       | (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->TOP__DOT__MEM__DOT__loadval)))))
                                                       : vlSelf->TOP__DOT__MEM__DOT__loadval))))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))));
    vlSelf->io_o = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
}

VL_INLINE_OPT void VTOP___024root___combo__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->TOP__DOT__IF__DOT___GEN_0 = ((IData)(vlSelf->reset)
                                          ? 0x80000000ULL
                                          : ((1U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_58))
                                              ? ((7U 
                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                   ? 
                                                  (vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val 
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
                                                                           & ((IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_newPC_T_11) 
                                                                              >> 0xbU))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_newPC_T_11))))))
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
                                                                             & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                                >> 0x14U))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0x800U 
                                                                            & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                               >> 9U)) 
                                                                           | (0x7feU 
                                                                              & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                                >> 0x14U)))))))
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
