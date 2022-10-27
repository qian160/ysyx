module IF(
  input         clock,
  input         reset,
  input         io_branchOp_i_happen,
  input  [63:0] io_branchOp_i_newPC,
  input  [31:0] io_inst_i,
  output [63:0] io_pc_o,
  output [31:0] io_inst_o
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[IF.scala 17:31]
  wire [31:0] _nextPC_T_1 = pc + 32'h4; // @[IF.scala 22:36]
  wire [63:0] nextPC = io_branchOp_i_happen ? io_branchOp_i_newPC : {{32'd0}, _nextPC_T_1}; // @[Mux.scala 47:70]
  wire [63:0] _GEN_0 = reset ? 64'h80000000 : nextPC; // @[IF.scala 17:{31,31} 25:8]
  assign io_pc_o = {{32'd0}, pc}; // @[IF.scala 27:13]
  assign io_inst_o = io_inst_i; // @[IF.scala 29:17]
  always @(posedge clock) begin
    pc <= _GEN_0[31:0]; // @[IF.scala 17:{31,31} 25:8]
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc = _RAND_0[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ID(
  input  [31:0] io_inst_i,
  input  [63:0] io_pc_i,
  input  [63:0] io_rfData_i_rs1Val,
  input  [63:0] io_rfData_i_rs2Val,
  input  [63:0] io_rfData_i_a0,
  input  [63:0] io_csrData_i_csrVal,
  input  [63:0] io_csrData_i_epc,
  input  [63:0] io_csrData_i_tvec,
  output [4:0]  io_readOp_o_rs1,
  output [4:0]  io_readOp_o_rs2,
  output [11:0] io_readOp_o_csrAddr,
  output        io_decInfo_o_writeOp_rf_wen,
  output [4:0]  io_decInfo_o_writeOp_rf_rd,
  output        io_decInfo_o_writeOp_csr_wen,
  output [63:0] io_decInfo_o_writeOp_csr_wdata,
  output [11:0] io_decInfo_o_writeOp_csr_waddr,
  output [63:0] io_decInfo_o_aluOp_src1,
  output [63:0] io_decInfo_o_aluOp_src2,
  output [4:0]  io_decInfo_o_aluOp_opt,
  output        io_decInfo_o_branchOp_happen,
  output [63:0] io_decInfo_o_branchOp_newPC,
  output        io_decInfo_o_memOp_is_load,
  output        io_decInfo_o_memOp_is_store,
  output        io_decInfo_o_memOp_unsigned,
  output [3:0]  io_decInfo_o_memOp_length,
  output [63:0] io_decInfo_o_memOp_sdata,
  output        io_debug_o_exit,
  output [63:0] io_debug_o_a0,
  output [63:0] io_debug_o_pc,
  output [31:0] io_debug_o_inst
);
  wire [31:0] _decRes_T = io_inst_i & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _decRes_T_1 = 32'h33 == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_3 = 32'h40000033 == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_5 = 32'h1033 == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_7 = 32'h2033 == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_9 = 32'h3033 == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_11 = 32'h4033 == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_13 = 32'h5033 == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_15 = 32'h40005033 == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_17 = 32'h6033 == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_19 = 32'h7033 == _decRes_T; // @[Lookup.scala 31:38]
  wire [31:0] _decRes_T_20 = io_inst_i & 32'h707f; // @[Lookup.scala 31:38]
  wire  _decRes_T_21 = 32'h13 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_23 = 32'h2013 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_25 = 32'h3013 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_27 = 32'h4013 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_29 = 32'h6013 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_31 = 32'h7013 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire [31:0] _decRes_T_32 = io_inst_i & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _decRes_T_33 = 32'h1013 == _decRes_T_32; // @[Lookup.scala 31:38]
  wire  _decRes_T_35 = 32'h5013 == _decRes_T_32; // @[Lookup.scala 31:38]
  wire  _decRes_T_37 = 32'h40005013 == _decRes_T_32; // @[Lookup.scala 31:38]
  wire  _decRes_T_39 = 32'h3 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_41 = 32'h1003 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_43 = 32'h2003 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_45 = 32'h4003 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_47 = 32'h5003 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_49 = 32'h23 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_51 = 32'h1023 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_53 = 32'h2023 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_55 = 32'h2000033 == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_57 = 32'h2001033 == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_59 = 32'h2002033 == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_61 = 32'h2004033 == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_63 = 32'h2005033 == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_65 = 32'h2006033 == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_67 = 32'h2007033 == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_69 = 32'h63 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_71 = 32'h1063 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_73 = 32'h4063 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_75 = 32'h5063 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_77 = 32'h6063 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_79 = 32'h7063 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire [31:0] _decRes_T_80 = io_inst_i & 32'h7f; // @[Lookup.scala 31:38]
  wire  _decRes_T_81 = 32'h6f == _decRes_T_80; // @[Lookup.scala 31:38]
  wire  _decRes_T_83 = 32'h67 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_85 = 32'h37 == _decRes_T_80; // @[Lookup.scala 31:38]
  wire  _decRes_T_87 = 32'h17 == _decRes_T_80; // @[Lookup.scala 31:38]
  wire  _decRes_T_89 = 32'h73 == _decRes_T_80; // @[Lookup.scala 31:38]
  wire  _decRes_T_91 = 32'h1b == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_93 = 32'h101b == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_95 = 32'h501b == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_97 = 32'h4000501b == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_99 = 32'h3b == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_101 = 32'h4000003b == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_103 = 32'h103b == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_105 = 32'h503b == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_107 = 32'h4000503b == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_109 = 32'h6003 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_111 = 32'h3003 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_113 = 32'h3023 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_115 = 32'h200003b == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_117 = 32'h200403b == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_119 = 32'h200503b == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_121 = 32'h200603b == _decRes_T; // @[Lookup.scala 31:38]
  wire  _decRes_T_123 = 32'h200703b == _decRes_T; // @[Lookup.scala 31:38]
  wire [31:0] _decRes_T_124 = io_inst_i & 32'hfff0007f; // @[Lookup.scala 31:38]
  wire  _decRes_T_125 = 32'h100073 == _decRes_T_124; // @[Lookup.scala 31:38]
  wire [4:0] _decRes_T_126 = _decRes_T_125 ? 5'h6 : 5'h7; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_127 = _decRes_T_123 ? 5'h0 : _decRes_T_126; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_128 = _decRes_T_121 ? 5'h0 : _decRes_T_127; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_129 = _decRes_T_119 ? 5'h0 : _decRes_T_128; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_130 = _decRes_T_117 ? 5'h0 : _decRes_T_129; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_131 = _decRes_T_115 ? 5'h0 : _decRes_T_130; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_132 = _decRes_T_113 ? 5'h5 : _decRes_T_131; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_133 = _decRes_T_111 ? 5'h1 : _decRes_T_132; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_134 = _decRes_T_109 ? 5'h1 : _decRes_T_133; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_135 = _decRes_T_107 ? 5'h0 : _decRes_T_134; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_136 = _decRes_T_105 ? 5'h0 : _decRes_T_135; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_137 = _decRes_T_103 ? 5'h0 : _decRes_T_136; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_138 = _decRes_T_101 ? 5'h0 : _decRes_T_137; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_139 = _decRes_T_99 ? 5'h0 : _decRes_T_138; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_140 = _decRes_T_97 ? 5'h1 : _decRes_T_139; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_141 = _decRes_T_95 ? 5'h1 : _decRes_T_140; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_142 = _decRes_T_93 ? 5'h1 : _decRes_T_141; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_143 = _decRes_T_91 ? 5'h1 : _decRes_T_142; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_144 = _decRes_T_89 ? 5'h6 : _decRes_T_143; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_145 = _decRes_T_87 ? 5'h2 : _decRes_T_144; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_146 = _decRes_T_85 ? 5'h2 : _decRes_T_145; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_147 = _decRes_T_83 ? 5'h1 : _decRes_T_146; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_148 = _decRes_T_81 ? 5'h4 : _decRes_T_147; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_149 = _decRes_T_79 ? 5'h3 : _decRes_T_148; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_150 = _decRes_T_77 ? 5'h3 : _decRes_T_149; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_151 = _decRes_T_75 ? 5'h3 : _decRes_T_150; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_152 = _decRes_T_73 ? 5'h3 : _decRes_T_151; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_153 = _decRes_T_71 ? 5'h3 : _decRes_T_152; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_154 = _decRes_T_69 ? 5'h3 : _decRes_T_153; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_155 = _decRes_T_67 ? 5'h0 : _decRes_T_154; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_156 = _decRes_T_65 ? 5'h0 : _decRes_T_155; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_157 = _decRes_T_63 ? 5'h0 : _decRes_T_156; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_158 = _decRes_T_61 ? 5'h0 : _decRes_T_157; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_159 = _decRes_T_59 ? 5'h0 : _decRes_T_158; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_160 = _decRes_T_57 ? 5'h0 : _decRes_T_159; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_161 = _decRes_T_55 ? 5'h0 : _decRes_T_160; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_162 = _decRes_T_53 ? 5'h5 : _decRes_T_161; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_163 = _decRes_T_51 ? 5'h5 : _decRes_T_162; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_164 = _decRes_T_49 ? 5'h5 : _decRes_T_163; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_165 = _decRes_T_47 ? 5'h1 : _decRes_T_164; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_166 = _decRes_T_45 ? 5'h1 : _decRes_T_165; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_167 = _decRes_T_43 ? 5'h1 : _decRes_T_166; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_168 = _decRes_T_41 ? 5'h1 : _decRes_T_167; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_169 = _decRes_T_39 ? 5'h1 : _decRes_T_168; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_170 = _decRes_T_37 ? 5'h1 : _decRes_T_169; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_171 = _decRes_T_35 ? 5'h1 : _decRes_T_170; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_172 = _decRes_T_33 ? 5'h1 : _decRes_T_171; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_173 = _decRes_T_31 ? 5'h1 : _decRes_T_172; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_174 = _decRes_T_29 ? 5'h1 : _decRes_T_173; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_175 = _decRes_T_27 ? 5'h1 : _decRes_T_174; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_176 = _decRes_T_25 ? 5'h1 : _decRes_T_175; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_177 = _decRes_T_23 ? 5'h1 : _decRes_T_176; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_178 = _decRes_T_21 ? 5'h1 : _decRes_T_177; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_179 = _decRes_T_19 ? 5'h0 : _decRes_T_178; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_180 = _decRes_T_17 ? 5'h0 : _decRes_T_179; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_181 = _decRes_T_15 ? 5'h0 : _decRes_T_180; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_182 = _decRes_T_13 ? 5'h0 : _decRes_T_181; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_183 = _decRes_T_11 ? 5'h0 : _decRes_T_182; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_184 = _decRes_T_9 ? 5'h0 : _decRes_T_183; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_185 = _decRes_T_7 ? 5'h0 : _decRes_T_184; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_186 = _decRes_T_5 ? 5'h0 : _decRes_T_185; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_187 = _decRes_T_3 ? 5'h0 : _decRes_T_186; // @[Lookup.scala 34:39]
  wire [4:0] decRes_0 = _decRes_T_1 ? 5'h0 : _decRes_T_187; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_189 = _decRes_T_123 ? 5'h17 : 5'h0; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_190 = _decRes_T_121 ? 5'h14 : _decRes_T_189; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_191 = _decRes_T_119 ? 5'h16 : _decRes_T_190; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_192 = _decRes_T_117 ? 5'h15 : _decRes_T_191; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_193 = _decRes_T_115 ? 5'h18 : _decRes_T_192; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_194 = _decRes_T_113 ? 5'h0 : _decRes_T_193; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_195 = _decRes_T_111 ? 5'h0 : _decRes_T_194; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_196 = _decRes_T_109 ? 5'h0 : _decRes_T_195; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_197 = _decRes_T_107 ? 5'h1d : _decRes_T_196; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_198 = _decRes_T_105 ? 5'h1c : _decRes_T_197; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_199 = _decRes_T_103 ? 5'h1b : _decRes_T_198; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_200 = _decRes_T_101 ? 5'h1a : _decRes_T_199; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_201 = _decRes_T_99 ? 5'h19 : _decRes_T_200; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_202 = _decRes_T_97 ? 5'h1d : _decRes_T_201; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_203 = _decRes_T_95 ? 5'h1c : _decRes_T_202; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_204 = _decRes_T_93 ? 5'h1b : _decRes_T_203; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_205 = _decRes_T_91 ? 5'h19 : _decRes_T_204; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_206 = _decRes_T_89 ? 5'h0 : _decRes_T_205; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_207 = _decRes_T_87 ? 5'h1f : _decRes_T_206; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_208 = _decRes_T_85 ? 5'h1e : _decRes_T_207; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_209 = _decRes_T_83 ? 5'ha : _decRes_T_208; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_210 = _decRes_T_81 ? 5'h0 : _decRes_T_209; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_211 = _decRes_T_79 ? 5'h7 : _decRes_T_210; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_212 = _decRes_T_77 ? 5'h6 : _decRes_T_211; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_213 = _decRes_T_75 ? 5'h5 : _decRes_T_212; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_214 = _decRes_T_73 ? 5'h4 : _decRes_T_213; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_215 = _decRes_T_71 ? 5'h1 : _decRes_T_214; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_216 = _decRes_T_69 ? 5'h0 : _decRes_T_215; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_217 = _decRes_T_67 ? 5'h13 : _decRes_T_216; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_218 = _decRes_T_65 ? 5'h11 : _decRes_T_217; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_219 = _decRes_T_63 ? 5'h12 : _decRes_T_218; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_220 = _decRes_T_61 ? 5'h10 : _decRes_T_219; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_221 = _decRes_T_59 ? 5'he : _decRes_T_220; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_222 = _decRes_T_57 ? 5'hc : _decRes_T_221; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_223 = _decRes_T_55 ? 5'hb : _decRes_T_222; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_224 = _decRes_T_53 ? 5'h0 : _decRes_T_223; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_225 = _decRes_T_51 ? 5'h0 : _decRes_T_224; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_226 = _decRes_T_49 ? 5'h0 : _decRes_T_225; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_227 = _decRes_T_47 ? 5'h0 : _decRes_T_226; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_228 = _decRes_T_45 ? 5'h0 : _decRes_T_227; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_229 = _decRes_T_43 ? 5'h0 : _decRes_T_228; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_230 = _decRes_T_41 ? 5'h0 : _decRes_T_229; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_231 = _decRes_T_39 ? 5'h0 : _decRes_T_230; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_232 = _decRes_T_37 ? 5'h9 : _decRes_T_231; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_233 = _decRes_T_35 ? 5'h8 : _decRes_T_232; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_234 = _decRes_T_33 ? 5'h7 : _decRes_T_233; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_235 = _decRes_T_31 ? 5'h6 : _decRes_T_234; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_236 = _decRes_T_29 ? 5'h5 : _decRes_T_235; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_237 = _decRes_T_27 ? 5'h4 : _decRes_T_236; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_238 = _decRes_T_25 ? 5'h3 : _decRes_T_237; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_239 = _decRes_T_23 ? 5'h2 : _decRes_T_238; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_240 = _decRes_T_21 ? 5'h0 : _decRes_T_239; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_241 = _decRes_T_19 ? 5'h6 : _decRes_T_240; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_242 = _decRes_T_17 ? 5'h5 : _decRes_T_241; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_243 = _decRes_T_15 ? 5'h9 : _decRes_T_242; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_244 = _decRes_T_13 ? 5'h8 : _decRes_T_243; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_245 = _decRes_T_11 ? 5'h4 : _decRes_T_244; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_246 = _decRes_T_9 ? 5'h3 : _decRes_T_245; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_247 = _decRes_T_7 ? 5'h2 : _decRes_T_246; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_248 = _decRes_T_5 ? 5'h7 : _decRes_T_247; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_249 = _decRes_T_3 ? 5'h1 : _decRes_T_248; // @[Lookup.scala 34:39]
  wire [6:0] opcode = io_inst_i[6:0]; // @[ID.scala 38:25]
  wire [2:0] fct3 = io_inst_i[14:12]; // @[ID.scala 39:25]
  wire [11:0] csrAddr = io_inst_i[31:20]; // @[ID.scala 40:25]
  wire [11:0] _immI_T_2 = io_inst_i[31:20]; // @[HELPERS.scala 13:65]
  wire [63:0] immI = {{52{_immI_T_2[11]}},_immI_T_2}; // @[HELPERS.scala 13:80]
  wire  is_jalr = opcode == 7'h67; // @[ID.scala 70:37]
  wire [63:0] _io_decInfo_o_aluOp_src1_T = is_jalr ? io_pc_i : io_rfData_i_rs1Val; // @[ID.scala 72:46]
  wire [63:0] _io_decInfo_o_aluOp_src2_T_5 = is_jalr ? 64'h4 : immI; // @[ID.scala 73:46]
  wire [63:0] _io_decInfo_o_branchOp_newPC_T_6 = io_rfData_i_rs1Val + immI; // @[ID.scala 75:54]
  wire [3:0] _io_decInfo_o_memOp_length_T_1 = 4'h1 << fct3[1:0]; // @[OneHot.scala 57:35]
  wire [12:0] _io_decInfo_o_branchOp_newPC_T_13 = {io_inst_i[31],io_inst_i[7],io_inst_i[30:25],io_inst_i[11:8],1'h0}; // @[HELPERS.scala 13:65]
  wire [63:0] _io_decInfo_o_branchOp_newPC_T_15 = {{51{_io_decInfo_o_branchOp_newPC_T_13[12]}},
    _io_decInfo_o_branchOp_newPC_T_13}; // @[HELPERS.scala 13:80]
  wire [63:0] _io_decInfo_o_branchOp_newPC_T_17 = io_pc_i + _io_decInfo_o_branchOp_newPC_T_15; // @[ID.scala 91:50]
  wire  _io_decInfo_o_branchOp_happen_T_1 = io_rfData_i_rs1Val == io_rfData_i_rs2Val; // @[ID.scala 93:43]
  wire  _io_decInfo_o_branchOp_happen_T_2 = io_rfData_i_rs1Val != io_rfData_i_rs2Val; // @[ID.scala 94:43]
  wire  _io_decInfo_o_branchOp_happen_T_5 = $signed(io_rfData_i_rs1Val) < $signed(io_rfData_i_rs2Val); // @[ID.scala 95:51]
  wire  _io_decInfo_o_branchOp_happen_T_8 = $signed(io_rfData_i_rs1Val) >= $signed(io_rfData_i_rs2Val); // @[ID.scala 96:51]
  wire  _io_decInfo_o_branchOp_happen_T_9 = io_rfData_i_rs1Val < io_rfData_i_rs2Val; // @[ID.scala 97:44]
  wire  _io_decInfo_o_branchOp_happen_T_10 = io_rfData_i_rs1Val >= io_rfData_i_rs2Val; // @[ID.scala 98:44]
  wire  _io_decInfo_o_branchOp_happen_T_14 = 3'h1 == fct3 ? _io_decInfo_o_branchOp_happen_T_2 : 3'h0 == fct3 &
    _io_decInfo_o_branchOp_happen_T_1; // @[Mux.scala 81:58]
  wire  _io_decInfo_o_branchOp_happen_T_16 = 3'h4 == fct3 ? _io_decInfo_o_branchOp_happen_T_5 :
    _io_decInfo_o_branchOp_happen_T_14; // @[Mux.scala 81:58]
  wire  _io_decInfo_o_branchOp_happen_T_18 = 3'h5 == fct3 ? _io_decInfo_o_branchOp_happen_T_8 :
    _io_decInfo_o_branchOp_happen_T_16; // @[Mux.scala 81:58]
  wire  _io_decInfo_o_branchOp_happen_T_20 = 3'h6 == fct3 ? _io_decInfo_o_branchOp_happen_T_9 :
    _io_decInfo_o_branchOp_happen_T_18; // @[Mux.scala 81:58]
  wire  _io_decInfo_o_branchOp_happen_T_22 = 3'h7 == fct3 ? _io_decInfo_o_branchOp_happen_T_10 :
    _io_decInfo_o_branchOp_happen_T_20; // @[Mux.scala 81:58]
  wire [63:0] _io_decInfo_o_aluOp_src1_T_2 = opcode == 7'h37 ? 64'h0 : io_pc_i; // @[ID.scala 102:50]
  wire [19:0] _io_decInfo_o_aluOp_src2_T_8 = io_inst_i[31:12]; // @[HELPERS.scala 13:65]
  wire [63:0] _io_decInfo_o_aluOp_src2_T_10 = {{44{_io_decInfo_o_aluOp_src2_T_8[19]}},_io_decInfo_o_aluOp_src2_T_8}; // @[HELPERS.scala 13:80]
  wire [75:0] _io_decInfo_o_aluOp_src2_T_11 = {_io_decInfo_o_aluOp_src2_T_10, 12'h0}; // @[ID.scala 10:55]
  wire [20:0] _io_decInfo_o_branchOp_newPC_T_24 = {io_inst_i[31],io_inst_i[19:12],io_inst_i[20],io_inst_i[30:21],1'h0}; // @[HELPERS.scala 13:65]
  wire [63:0] _io_decInfo_o_branchOp_newPC_T_26 = {{43{_io_decInfo_o_branchOp_newPC_T_24[20]}},
    _io_decInfo_o_branchOp_newPC_T_24}; // @[HELPERS.scala 13:80]
  wire [63:0] _io_decInfo_o_branchOp_newPC_T_28 = io_pc_i + _io_decInfo_o_branchOp_newPC_T_26; // @[ID.scala 109:50]
  wire [7:0] _io_decInfo_o_memOp_length_T_2 = 8'h1 << fct3; // @[OneHot.scala 57:35]
  wire [11:0] _io_decInfo_o_aluOp_src2_T_16 = {io_inst_i[31:25],io_inst_i[11:7]}; // @[HELPERS.scala 13:65]
  wire [63:0] _io_decInfo_o_aluOp_src2_T_18 = {{52{_io_decInfo_o_aluOp_src2_T_16[11]}},_io_decInfo_o_aluOp_src2_T_16}; // @[HELPERS.scala 13:80]
  wire  _T_8 = |fct3; // @[ID.scala 125:23]
  wire [4:0] _rsVal_T_2 = io_inst_i[19:15]; // @[HELPERS.scala 13:65]
  wire [63:0] _rsVal_T_4 = {{59{_rsVal_T_2[4]}},_rsVal_T_2}; // @[HELPERS.scala 13:80]
  wire [63:0] rsVal = fct3[2] ? _rsVal_T_4 : io_rfData_i_rs1Val; // @[ID.scala 133:38]
  wire [63:0] _io_decInfo_o_writeOp_csr_wdata_T = io_csrData_i_csrVal | rsVal; // @[ID.scala 137:41]
  wire [63:0] _io_decInfo_o_writeOp_csr_wdata_T_1 = ~rsVal; // @[ID.scala 138:43]
  wire [63:0] _io_decInfo_o_writeOp_csr_wdata_T_2 = io_csrData_i_csrVal & _io_decInfo_o_writeOp_csr_wdata_T_1; // @[ID.scala 138:41]
  wire [63:0] _io_decInfo_o_writeOp_csr_wdata_T_4 = 3'h1 == fct3 ? io_rfData_i_rs1Val : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _io_decInfo_o_writeOp_csr_wdata_T_6 = 3'h2 == fct3 ? _io_decInfo_o_writeOp_csr_wdata_T :
    _io_decInfo_o_writeOp_csr_wdata_T_4; // @[Mux.scala 81:58]
  wire [63:0] _io_decInfo_o_writeOp_csr_wdata_T_8 = 3'h3 == fct3 ? _io_decInfo_o_writeOp_csr_wdata_T_2 :
    _io_decInfo_o_writeOp_csr_wdata_T_6; // @[Mux.scala 81:58]
  wire [1:0] inst_p2 = io_inst_i[21:20]; // @[ID.scala 142:37]
  wire [63:0] _GEN_2 = 2'h0 == inst_p2 ? io_csrData_i_tvec : 64'h0; // @[ID.scala 143:32 150:57 43:37]
  wire [11:0] _GEN_4 = 2'h0 == inst_p2 ? 12'h305 : csrAddr; // @[ID.scala 143:32 152:57 48:37]
  wire [63:0] _GEN_5 = 2'h0 == inst_p2 ? io_pc_i : 64'h0; // @[ID.scala 143:32 153:57 43:37]
  wire  _GEN_6 = 2'h0 == inst_p2 ? 1'h0 : 2'h1 == inst_p2; // @[ID.scala 143:32 59:25]
  wire  _GEN_7 = 2'h2 == inst_p2 | 2'h0 == inst_p2; // @[ID.scala 143:32 145:57]
  wire [63:0] _GEN_8 = 2'h2 == inst_p2 ? io_csrData_i_epc : _GEN_2; // @[ID.scala 143:32 146:57]
  wire  _GEN_9 = 2'h2 == inst_p2 ? 1'h0 : 2'h0 == inst_p2; // @[ID.scala 143:32 43:37]
  wire [11:0] _GEN_10 = 2'h2 == inst_p2 ? csrAddr : _GEN_4; // @[ID.scala 143:32 48:37]
  wire [63:0] _GEN_11 = 2'h2 == inst_p2 ? 64'h0 : _GEN_5; // @[ID.scala 143:32 43:37]
  wire  _GEN_12 = 2'h2 == inst_p2 ? 1'h0 : _GEN_6; // @[ID.scala 143:32 59:25]
  wire [63:0] _GEN_14 = |fct3 ? io_csrData_i_csrVal : io_rfData_i_rs1Val; // @[ID.scala 125:27 128:45 44:37]
  wire [63:0] _GEN_15 = |fct3 ? 64'h0 : io_rfData_i_rs2Val; // @[ID.scala 125:27 129:45 45:37]
  wire [63:0] _GEN_16 = |fct3 ? _io_decInfo_o_writeOp_csr_wdata_T_8 : _GEN_11; // @[ID.scala 125:27 135:49]
  wire  _GEN_17 = |fct3 | _GEN_9; // @[ID.scala 125:27 140:49]
  wire  _GEN_18 = |fct3 ? 1'h0 : _GEN_7; // @[ID.scala 125:27 43:37]
  wire [63:0] _GEN_19 = |fct3 ? 64'h0 : _GEN_8; // @[ID.scala 125:27 43:37]
  wire [11:0] _GEN_20 = |fct3 ? csrAddr : _GEN_10; // @[ID.scala 125:27 48:37]
  wire  _GEN_21 = |fct3 ? 1'h0 : _GEN_12; // @[ID.scala 125:27 59:25]
  wire [63:0] _GEN_23 = 5'h6 == decRes_0 ? _GEN_14 : io_rfData_i_rs1Val; // @[ID.scala 64:21 44:37]
  wire [63:0] _GEN_24 = 5'h6 == decRes_0 ? _GEN_15 : io_rfData_i_rs2Val; // @[ID.scala 64:21 45:37]
  wire [63:0] _GEN_25 = 5'h6 == decRes_0 ? _GEN_16 : 64'h0; // @[ID.scala 64:21 43:37]
  wire [63:0] _GEN_28 = 5'h6 == decRes_0 ? _GEN_19 : 64'h0; // @[ID.scala 64:21 43:37]
  wire [11:0] _GEN_29 = 5'h6 == decRes_0 ? _GEN_20 : csrAddr; // @[ID.scala 64:21 48:37]
  wire [7:0] _GEN_32 = 5'h5 == decRes_0 ? _io_decInfo_o_memOp_length_T_2 : 8'h0; // @[ID.scala 64:21 116:43 43:37]
  wire [63:0] _GEN_33 = 5'h5 == decRes_0 ? io_rfData_i_rs2Val : 64'h0; // @[ID.scala 64:21 117:43 43:37]
  wire [63:0] _GEN_34 = 5'h5 == decRes_0 ? io_rfData_i_rs1Val : _GEN_23; // @[ID.scala 64:21 120:43]
  wire [63:0] _GEN_35 = 5'h5 == decRes_0 ? _io_decInfo_o_aluOp_src2_T_18 : _GEN_24; // @[ID.scala 64:21 121:43]
  wire  _GEN_36 = 5'h5 == decRes_0 ? 1'h0 : 5'h6 == decRes_0 & _T_8; // @[ID.scala 64:21 43:37]
  wire [63:0] _GEN_37 = 5'h5 == decRes_0 ? 64'h0 : _GEN_25; // @[ID.scala 64:21 43:37]
  wire  _GEN_38 = 5'h5 == decRes_0 ? 1'h0 : 5'h6 == decRes_0 & _GEN_17; // @[ID.scala 64:21 43:37]
  wire  _GEN_39 = 5'h5 == decRes_0 ? 1'h0 : 5'h6 == decRes_0 & _GEN_18; // @[ID.scala 64:21 43:37]
  wire [63:0] _GEN_40 = 5'h5 == decRes_0 ? 64'h0 : _GEN_28; // @[ID.scala 64:21 43:37]
  wire [11:0] _GEN_41 = 5'h5 == decRes_0 ? csrAddr : _GEN_29; // @[ID.scala 64:21 48:37]
  wire  _GEN_42 = 5'h5 == decRes_0 ? 1'h0 : 5'h6 == decRes_0 & _GEN_21; // @[ID.scala 64:21 59:25]
  wire  _GEN_43 = 5'h4 == decRes_0 | _GEN_36; // @[ID.scala 64:21 107:43]
  wire  _GEN_44 = 5'h4 == decRes_0 | _GEN_39; // @[ID.scala 64:21 108:43]
  wire [63:0] _GEN_45 = 5'h4 == decRes_0 ? _io_decInfo_o_branchOp_newPC_T_28 : _GEN_40; // @[ID.scala 64:21 109:43]
  wire [63:0] _GEN_46 = 5'h4 == decRes_0 ? io_pc_i : _GEN_34; // @[ID.scala 64:21 111:43]
  wire [63:0] _GEN_47 = 5'h4 == decRes_0 ? 64'h4 : _GEN_35; // @[ID.scala 64:21 112:43]
  wire  _GEN_48 = 5'h4 == decRes_0 ? 1'h0 : 5'h5 == decRes_0; // @[ID.scala 64:21 43:37]
  wire [7:0] _GEN_49 = 5'h4 == decRes_0 ? 8'h0 : _GEN_32; // @[ID.scala 64:21 43:37]
  wire [63:0] _GEN_50 = 5'h4 == decRes_0 ? 64'h0 : _GEN_33; // @[ID.scala 64:21 43:37]
  wire [63:0] _GEN_51 = 5'h4 == decRes_0 ? 64'h0 : _GEN_37; // @[ID.scala 64:21 43:37]
  wire  _GEN_52 = 5'h4 == decRes_0 ? 1'h0 : _GEN_38; // @[ID.scala 64:21 43:37]
  wire [11:0] _GEN_53 = 5'h4 == decRes_0 ? csrAddr : _GEN_41; // @[ID.scala 64:21 48:37]
  wire  _GEN_54 = 5'h4 == decRes_0 ? 1'h0 : _GEN_42; // @[ID.scala 64:21 59:25]
  wire [63:0] _GEN_55 = 5'h2 == decRes_0 ? _io_decInfo_o_aluOp_src1_T_2 : _GEN_46; // @[ID.scala 64:21 102:43]
  wire [75:0] _GEN_56 = 5'h2 == decRes_0 ? _io_decInfo_o_aluOp_src2_T_11 : {{12'd0}, _GEN_47}; // @[ID.scala 64:21 103:43]
  wire  _GEN_57 = 5'h2 == decRes_0 | _GEN_43; // @[ID.scala 64:21 104:43]
  wire  _GEN_58 = 5'h2 == decRes_0 ? 1'h0 : _GEN_44; // @[ID.scala 64:21 43:37]
  wire [63:0] _GEN_59 = 5'h2 == decRes_0 ? 64'h0 : _GEN_45; // @[ID.scala 64:21 43:37]
  wire  _GEN_60 = 5'h2 == decRes_0 ? 1'h0 : _GEN_48; // @[ID.scala 64:21 43:37]
  wire [7:0] _GEN_61 = 5'h2 == decRes_0 ? 8'h0 : _GEN_49; // @[ID.scala 64:21 43:37]
  wire [63:0] _GEN_62 = 5'h2 == decRes_0 ? 64'h0 : _GEN_50; // @[ID.scala 64:21 43:37]
  wire [63:0] _GEN_63 = 5'h2 == decRes_0 ? 64'h0 : _GEN_51; // @[ID.scala 64:21 43:37]
  wire  _GEN_64 = 5'h2 == decRes_0 ? 1'h0 : _GEN_52; // @[ID.scala 64:21 43:37]
  wire [11:0] _GEN_65 = 5'h2 == decRes_0 ? csrAddr : _GEN_53; // @[ID.scala 64:21 48:37]
  wire  _GEN_66 = 5'h2 == decRes_0 ? 1'h0 : _GEN_54; // @[ID.scala 64:21 59:25]
  wire [63:0] _GEN_67 = 5'h3 == decRes_0 ? _io_decInfo_o_branchOp_newPC_T_17 : _GEN_59; // @[ID.scala 64:21 91:43]
  wire  _GEN_68 = 5'h3 == decRes_0 ? _io_decInfo_o_branchOp_happen_T_22 : _GEN_58; // @[ID.scala 64:21 92:43]
  wire [63:0] _GEN_69 = 5'h3 == decRes_0 ? io_rfData_i_rs1Val : _GEN_55; // @[ID.scala 64:21 44:37]
  wire [75:0] _GEN_70 = 5'h3 == decRes_0 ? {{12'd0}, io_rfData_i_rs2Val} : _GEN_56; // @[ID.scala 64:21 45:37]
  wire  _GEN_71 = 5'h3 == decRes_0 ? 1'h0 : _GEN_57; // @[ID.scala 64:21 43:37]
  wire  _GEN_72 = 5'h3 == decRes_0 ? 1'h0 : _GEN_60; // @[ID.scala 64:21 43:37]
  wire [7:0] _GEN_73 = 5'h3 == decRes_0 ? 8'h0 : _GEN_61; // @[ID.scala 64:21 43:37]
  wire [63:0] _GEN_74 = 5'h3 == decRes_0 ? 64'h0 : _GEN_62; // @[ID.scala 64:21 43:37]
  wire [63:0] _GEN_75 = 5'h3 == decRes_0 ? 64'h0 : _GEN_63; // @[ID.scala 64:21 43:37]
  wire  _GEN_76 = 5'h3 == decRes_0 ? 1'h0 : _GEN_64; // @[ID.scala 64:21 43:37]
  wire [11:0] _GEN_77 = 5'h3 == decRes_0 ? csrAddr : _GEN_65; // @[ID.scala 64:21 48:37]
  wire  _GEN_78 = 5'h3 == decRes_0 ? 1'h0 : _GEN_66; // @[ID.scala 64:21 59:25]
  wire [63:0] _GEN_79 = 5'h0 == decRes_0 ? io_rfData_i_rs1Val : _GEN_69; // @[ID.scala 64:21 84:43]
  wire [75:0] _GEN_80 = 5'h0 == decRes_0 ? {{12'd0}, io_rfData_i_rs2Val} : _GEN_70; // @[ID.scala 64:21 85:43]
  wire  _GEN_81 = 5'h0 == decRes_0 | _GEN_71; // @[ID.scala 64:21 86:43]
  wire [63:0] _GEN_82 = 5'h0 == decRes_0 ? 64'h0 : _GEN_67; // @[ID.scala 64:21 43:37]
  wire  _GEN_83 = 5'h0 == decRes_0 ? 1'h0 : _GEN_68; // @[ID.scala 64:21 43:37]
  wire  _GEN_84 = 5'h0 == decRes_0 ? 1'h0 : _GEN_72; // @[ID.scala 64:21 43:37]
  wire [7:0] _GEN_85 = 5'h0 == decRes_0 ? 8'h0 : _GEN_73; // @[ID.scala 64:21 43:37]
  wire [63:0] _GEN_86 = 5'h0 == decRes_0 ? 64'h0 : _GEN_74; // @[ID.scala 64:21 43:37]
  wire [63:0] _GEN_87 = 5'h0 == decRes_0 ? 64'h0 : _GEN_75; // @[ID.scala 64:21 43:37]
  wire  _GEN_88 = 5'h0 == decRes_0 ? 1'h0 : _GEN_76; // @[ID.scala 64:21 43:37]
  wire [11:0] _GEN_89 = 5'h0 == decRes_0 ? csrAddr : _GEN_77; // @[ID.scala 64:21 48:37]
  wire  _GEN_90 = 5'h0 == decRes_0 ? 1'h0 : _GEN_78; // @[ID.scala 64:21 59:25]
  wire  _GEN_91 = 5'h1 == decRes_0 | _GEN_81; // @[ID.scala 64:21 69:44]
  wire [63:0] _GEN_92 = 5'h1 == decRes_0 ? _io_decInfo_o_aluOp_src1_T : _GEN_79; // @[ID.scala 64:21 72:39]
  wire [75:0] _GEN_93 = 5'h1 == decRes_0 ? {{12'd0}, _io_decInfo_o_aluOp_src2_T_5} : _GEN_80; // @[ID.scala 64:21 73:39]
  wire  _GEN_94 = 5'h1 == decRes_0 ? is_jalr : _GEN_83; // @[ID.scala 64:21 74:43]
  wire [63:0] _GEN_95 = 5'h1 == decRes_0 ? _io_decInfo_o_branchOp_newPC_T_6 : _GEN_82; // @[ID.scala 64:21 75:43]
  wire  _GEN_96 = 5'h1 == decRes_0 & opcode == 7'h3; // @[ID.scala 64:21 43:37 77:43]
  wire [7:0] _GEN_97 = 5'h1 == decRes_0 ? {{4'd0}, _io_decInfo_o_memOp_length_T_1} : _GEN_85; // @[ID.scala 64:21 78:43]
  wire  _GEN_98 = 5'h1 == decRes_0 & fct3[2]; // @[ID.scala 64:21 43:37 80:43]
  wire  _GEN_99 = 5'h1 == decRes_0 ? 1'h0 : _GEN_84; // @[ID.scala 64:21 43:37]
  wire [63:0] _GEN_100 = 5'h1 == decRes_0 ? 64'h0 : _GEN_86; // @[ID.scala 64:21 43:37]
  wire [63:0] _GEN_101 = 5'h1 == decRes_0 ? 64'h0 : _GEN_87; // @[ID.scala 64:21 43:37]
  wire  _GEN_102 = 5'h1 == decRes_0 ? 1'h0 : _GEN_88; // @[ID.scala 64:21 43:37]
  wire [11:0] _GEN_103 = 5'h1 == decRes_0 ? csrAddr : _GEN_89; // @[ID.scala 64:21 48:37]
  wire  _GEN_104 = 5'h1 == decRes_0 ? 1'h0 : _GEN_90; // @[ID.scala 64:21 59:25]
  wire [75:0] _GEN_108 = 5'h7 == decRes_0 ? {{12'd0}, io_rfData_i_rs2Val} : _GEN_93; // @[ID.scala 64:21 45:37]
  wire [7:0] _GEN_112 = 5'h7 == decRes_0 ? 8'h0 : _GEN_97; // @[ID.scala 64:21 43:37]
  assign io_readOp_o_rs1 = io_inst_i[19:15]; // @[ID.scala 51:32]
  assign io_readOp_o_rs2 = io_inst_i[24:20]; // @[ID.scala 52:32]
  assign io_readOp_o_csrAddr = io_inst_i[31:20]; // @[ID.scala 40:25]
  assign io_decInfo_o_writeOp_rf_wen = 5'h7 == decRes_0 ? 1'h0 : _GEN_91; // @[ID.scala 64:21 43:37]
  assign io_decInfo_o_writeOp_rf_rd = io_inst_i[11:7]; // @[ID.scala 47:44]
  assign io_decInfo_o_writeOp_csr_wen = 5'h7 == decRes_0 ? 1'h0 : _GEN_102; // @[ID.scala 64:21 43:37]
  assign io_decInfo_o_writeOp_csr_wdata = 5'h7 == decRes_0 ? 64'h0 : _GEN_101; // @[ID.scala 64:21 43:37]
  assign io_decInfo_o_writeOp_csr_waddr = 5'h7 == decRes_0 ? csrAddr : _GEN_103; // @[ID.scala 64:21 48:37]
  assign io_decInfo_o_aluOp_src1 = 5'h7 == decRes_0 ? io_rfData_i_rs1Val : _GEN_92; // @[ID.scala 64:21 44:37]
  assign io_decInfo_o_aluOp_src2 = _GEN_108[63:0];
  assign io_decInfo_o_aluOp_opt = _decRes_T_1 ? 5'h0 : _decRes_T_249; // @[Lookup.scala 34:39]
  assign io_decInfo_o_branchOp_happen = 5'h7 == decRes_0 ? 1'h0 : _GEN_94; // @[ID.scala 64:21 43:37]
  assign io_decInfo_o_branchOp_newPC = 5'h7 == decRes_0 ? 64'h0 : _GEN_95; // @[ID.scala 64:21 43:37]
  assign io_decInfo_o_memOp_is_load = 5'h7 == decRes_0 ? 1'h0 : _GEN_96; // @[ID.scala 64:21 43:37]
  assign io_decInfo_o_memOp_is_store = 5'h7 == decRes_0 ? 1'h0 : _GEN_99; // @[ID.scala 64:21 43:37]
  assign io_decInfo_o_memOp_unsigned = 5'h7 == decRes_0 ? 1'h0 : _GEN_98; // @[ID.scala 64:21 43:37]
  assign io_decInfo_o_memOp_length = _GEN_112[3:0];
  assign io_decInfo_o_memOp_sdata = 5'h7 == decRes_0 ? 64'h0 : _GEN_100; // @[ID.scala 64:21 43:37]
  assign io_debug_o_exit = 5'h7 == decRes_0 ? &io_inst_i : _GEN_104; // @[ID.scala 64:21 66:31]
  assign io_debug_o_a0 = io_rfData_i_a0; // @[ID.scala 58:25]
  assign io_debug_o_pc = io_pc_i; // @[ID.scala 55:25]
  assign io_debug_o_inst = io_inst_i; // @[ID.scala 56:25]
endmodule
module EX(
  input         io_decInfo_i_writeOp_rf_wen,
  input  [4:0]  io_decInfo_i_writeOp_rf_rd,
  input         io_decInfo_i_writeOp_csr_wen,
  input  [63:0] io_decInfo_i_writeOp_csr_wdata,
  input  [11:0] io_decInfo_i_writeOp_csr_waddr,
  input  [63:0] io_decInfo_i_aluOp_src1,
  input  [63:0] io_decInfo_i_aluOp_src2,
  input  [4:0]  io_decInfo_i_aluOp_opt,
  input         io_decInfo_i_memOp_is_load,
  input         io_decInfo_i_memOp_is_store,
  input         io_decInfo_i_memOp_unsigned,
  input  [3:0]  io_decInfo_i_memOp_length,
  input  [63:0] io_decInfo_i_memOp_sdata,
  output        io_writeOp_o_rf_wen,
  output [4:0]  io_writeOp_o_rf_rd,
  output [63:0] io_writeOp_o_rf_wdata,
  output        io_writeOp_o_csr_wen,
  output [63:0] io_writeOp_o_csr_wdata,
  output [11:0] io_writeOp_o_csr_waddr,
  output        io_memOp_o_is_load,
  output        io_memOp_o_is_store,
  output        io_memOp_o_unsigned,
  output [3:0]  io_memOp_o_length,
  output [63:0] io_memOp_o_addr,
  output [63:0] io_memOp_o_sdata,
  input         io_debug_i_exit,
  input  [63:0] io_debug_i_a0,
  input  [63:0] io_debug_i_pc,
  input  [31:0] io_debug_i_inst,
  output        io_debug_o_exit,
  output [63:0] io_debug_o_a0,
  output [63:0] io_debug_o_pc,
  output [31:0] io_debug_o_inst
);
  wire [63:0] _aluRes_T_1 = io_decInfo_i_aluOp_src1 + io_decInfo_i_aluOp_src2; // @[EX.scala 21:55]
  wire [63:0] _aluRes_T_3 = io_decInfo_i_aluOp_src1 - io_decInfo_i_aluOp_src2; // @[EX.scala 22:27]
  wire [63:0] _aluRes_T_4 = io_decInfo_i_aluOp_src1; // @[EX.scala 23:30]
  wire [63:0] _aluRes_T_5 = io_decInfo_i_aluOp_src2; // @[EX.scala 23:44]
  wire  _aluRes_T_6 = $signed(io_decInfo_i_aluOp_src1) < $signed(io_decInfo_i_aluOp_src2); // @[EX.scala 23:37]
  wire  _aluRes_T_8 = io_decInfo_i_aluOp_src1 < io_decInfo_i_aluOp_src2; // @[EX.scala 24:30]
  wire [127:0] _aluRes_T_13 = $signed(io_decInfo_i_aluOp_src1) * $signed(io_decInfo_i_aluOp_src2); // @[EX.scala 25:49]
  wire [127:0] _aluRes_T_15 = io_decInfo_i_aluOp_src1 * io_decInfo_i_aluOp_src2; // @[EX.scala 26:27]
  wire [63:0] _aluRes_T_18 = io_decInfo_i_aluOp_src1 ^ io_decInfo_i_aluOp_src2; // @[EX.scala 28:27]
  wire [63:0] _aluRes_T_19 = io_decInfo_i_aluOp_src1 | io_decInfo_i_aluOp_src2; // @[EX.scala 29:27]
  wire [63:0] _aluRes_T_20 = io_decInfo_i_aluOp_src1 & io_decInfo_i_aluOp_src2; // @[EX.scala 30:27]
  wire [126:0] _GEN_0 = {{63'd0}, io_decInfo_i_aluOp_src1}; // @[EX.scala 31:27]
  wire [126:0] _aluRes_T_22 = _GEN_0 << io_decInfo_i_aluOp_src2[5:0]; // @[EX.scala 31:27]
  wire [63:0] _aluRes_T_24 = io_decInfo_i_aluOp_src1 >> io_decInfo_i_aluOp_src2[5:0]; // @[EX.scala 32:27]
  wire [63:0] _aluRes_T_28 = $signed(io_decInfo_i_aluOp_src1) >>> io_decInfo_i_aluOp_src2[5:0]; // @[EX.scala 33:48]
  wire [31:0] _aluRes_T_34 = io_decInfo_i_aluOp_src1[31:0] + io_decInfo_i_aluOp_src2[31:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_36 = {{32{_aluRes_T_34[31]}},_aluRes_T_34}; // @[HELPERS.scala 13:80]
  wire [31:0] _aluRes_T_42 = io_decInfo_i_aluOp_src1[31:0] - io_decInfo_i_aluOp_src2[31:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_44 = {{32{_aluRes_T_42[31]}},_aluRes_T_42}; // @[HELPERS.scala 13:80]
  wire [63:0] _aluRes_T_49 = _aluRes_T_4[31:0] * _aluRes_T_5[31:0]; // @[EX.scala 37:45]
  wire [31:0] _aluRes_T_52 = _aluRes_T_49[31:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_54 = {{32{_aluRes_T_52[31]}},_aluRes_T_52}; // @[HELPERS.scala 13:80]
  wire [62:0] _GEN_1 = {{31'd0}, io_decInfo_i_aluOp_src1[31:0]}; // @[EX.scala 38:39]
  wire [62:0] _aluRes_T_57 = _GEN_1 << io_decInfo_i_aluOp_src2[4:0]; // @[EX.scala 38:39]
  wire [31:0] _aluRes_T_60 = _aluRes_T_57[31:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_62 = {{32{_aluRes_T_60[31]}},_aluRes_T_60}; // @[HELPERS.scala 13:80]
  wire [31:0] _aluRes_T_68 = io_decInfo_i_aluOp_src1[31:0] >> io_decInfo_i_aluOp_src2[4:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_70 = {{32{_aluRes_T_68[31]}},_aluRes_T_68}; // @[HELPERS.scala 13:80]
  wire [31:0] _aluRes_T_72 = io_decInfo_i_aluOp_src1[31:0]; // @[EX.scala 40:39]
  wire [31:0] _aluRes_T_77 = $signed(_aluRes_T_72) >>> io_decInfo_i_aluOp_src2[4:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_79 = {{32{_aluRes_T_77[31]}},_aluRes_T_77}; // @[HELPERS.scala 13:80]
  wire [64:0] _aluRes_T_81 = {1'b0,$signed(io_decInfo_i_aluOp_src2)}; // @[EX.scala 43:35]
  wire [128:0] _aluRes_T_82 = $signed(io_decInfo_i_aluOp_src1) * $signed(_aluRes_T_81); // @[EX.scala 43:35]
  wire [127:0] _aluRes_T_85 = _aluRes_T_82[127:0]; // @[EX.scala 43:43]
  wire [64:0] _aluRes_T_95 = $signed(io_decInfo_i_aluOp_src1) / $signed(io_decInfo_i_aluOp_src2); // @[EX.scala 46:49]
  wire [63:0] _aluRes_T_96 = io_decInfo_i_aluOp_src1 / io_decInfo_i_aluOp_src2; // @[EX.scala 47:27]
  wire [63:0] _aluRes_T_100 = $signed(io_decInfo_i_aluOp_src1) % $signed(io_decInfo_i_aluOp_src2); // @[EX.scala 48:49]
  wire [63:0] _aluRes_T_101 = io_decInfo_i_aluOp_src1 % io_decInfo_i_aluOp_src2; // @[EX.scala 49:27]
  wire [31:0] _aluRes_T_105 = io_decInfo_i_aluOp_src2[31:0]; // @[EX.scala 51:60]
  wire [31:0] _aluRes_T_109 = $signed(_aluRes_T_72) % $signed(_aluRes_T_105); // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_111 = {{32{_aluRes_T_109[31]}},_aluRes_T_109}; // @[HELPERS.scala 13:80]
  wire [32:0] _aluRes_T_117 = $signed(_aluRes_T_72) / $signed(_aluRes_T_105); // @[EX.scala 52:68]
  wire [31:0] _aluRes_T_119 = _aluRes_T_117[31:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_121 = {{32{_aluRes_T_119[31]}},_aluRes_T_119}; // @[HELPERS.scala 13:80]
  wire [31:0] _aluRes_T_126 = io_decInfo_i_aluOp_src1[31:0] / io_decInfo_i_aluOp_src2[31:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_128 = {{32{_aluRes_T_126[31]}},_aluRes_T_126}; // @[HELPERS.scala 13:80]
  wire [31:0] _aluRes_T_133 = io_decInfo_i_aluOp_src1[31:0] % io_decInfo_i_aluOp_src2[31:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_135 = {{32{_aluRes_T_133[31]}},_aluRes_T_133}; // @[HELPERS.scala 13:80]
  wire [63:0] _aluRes_T_137 = 5'h1 == io_decInfo_i_aluOp_opt ? _aluRes_T_3 : _aluRes_T_1; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_139 = 5'h2 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_6} : _aluRes_T_137; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_141 = 5'h3 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_8} : _aluRes_T_139; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_143 = 5'hb == io_decInfo_i_aluOp_opt ? _aluRes_T_13[63:0] : _aluRes_T_141; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_145 = 5'hd == io_decInfo_i_aluOp_opt ? _aluRes_T_15 : {{64'd0}, _aluRes_T_143}; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_147 = 5'hc == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_15[127:64]} : _aluRes_T_145; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_149 = 5'h4 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_18} : _aluRes_T_147; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_151 = 5'h5 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_19} : _aluRes_T_149; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_153 = 5'h6 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_20} : _aluRes_T_151; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_155 = 5'h7 == io_decInfo_i_aluOp_opt ? {{1'd0}, _aluRes_T_22} : _aluRes_T_153; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_157 = 5'h8 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_24} : _aluRes_T_155; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_159 = 5'h9 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_28} : _aluRes_T_157; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_161 = 5'h19 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_36} : _aluRes_T_159; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_163 = 5'h1a == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_44} : _aluRes_T_161; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_165 = 5'h18 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_54} : _aluRes_T_163; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_167 = 5'h1b == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_62} : _aluRes_T_165; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_169 = 5'h1c == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_70} : _aluRes_T_167; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_171 = 5'h1d == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_79} : _aluRes_T_169; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_173 = 5'he == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_85[127:64]} : _aluRes_T_171; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_175 = 5'hc == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_13[127:64]} : _aluRes_T_173; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_177 = 5'h10 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_95} : _aluRes_T_175; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_179 = 5'h12 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_96} : _aluRes_T_177; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_181 = 5'h11 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_100} : _aluRes_T_179; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_183 = 5'h13 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_101} : _aluRes_T_181; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_185 = 5'h14 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_111} : _aluRes_T_183; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_187 = 5'h15 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_121} : _aluRes_T_185; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_189 = 5'h16 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_128} : _aluRes_T_187; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_191 = 5'h17 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_135} : _aluRes_T_189; // @[Mux.scala 81:58]
  assign io_writeOp_o_rf_wen = io_decInfo_i_writeOp_rf_wen; // @[EX.scala 60:27]
  assign io_writeOp_o_rf_rd = io_decInfo_i_writeOp_rf_rd; // @[EX.scala 60:27]
  assign io_writeOp_o_rf_wdata = _aluRes_T_191[63:0]; // @[EX.scala 20:23 21:13]
  assign io_writeOp_o_csr_wen = io_decInfo_i_writeOp_csr_wen; // @[EX.scala 60:27]
  assign io_writeOp_o_csr_wdata = io_decInfo_i_writeOp_csr_wdata; // @[EX.scala 60:27]
  assign io_writeOp_o_csr_waddr = io_decInfo_i_writeOp_csr_waddr; // @[EX.scala 60:27]
  assign io_memOp_o_is_load = io_decInfo_i_memOp_is_load; // @[EX.scala 63:27]
  assign io_memOp_o_is_store = io_decInfo_i_memOp_is_store; // @[EX.scala 63:27]
  assign io_memOp_o_unsigned = io_decInfo_i_memOp_unsigned; // @[EX.scala 63:27]
  assign io_memOp_o_length = io_decInfo_i_memOp_length; // @[EX.scala 63:27]
  assign io_memOp_o_addr = _aluRes_T_191[63:0]; // @[EX.scala 20:23 21:13]
  assign io_memOp_o_sdata = io_decInfo_i_memOp_sdata; // @[EX.scala 63:27]
  assign io_debug_o_exit = io_debug_i_exit; // @[EX.scala 75:17]
  assign io_debug_o_a0 = io_debug_i_a0; // @[EX.scala 75:17]
  assign io_debug_o_pc = io_debug_i_pc; // @[EX.scala 75:17]
  assign io_debug_o_inst = io_debug_i_inst; // @[EX.scala 75:17]
endmodule
module MEM(
  input         io_writeOp_i_rf_wen,
  input  [4:0]  io_writeOp_i_rf_rd,
  input  [63:0] io_writeOp_i_rf_wdata,
  input         io_writeOp_i_csr_wen,
  input  [63:0] io_writeOp_i_csr_wdata,
  input  [11:0] io_writeOp_i_csr_waddr,
  input         io_memOp_i_is_load,
  input         io_memOp_i_is_store,
  input         io_memOp_i_unsigned,
  input  [3:0]  io_memOp_i_length,
  input  [63:0] io_memOp_i_addr,
  input  [63:0] io_memOp_i_sdata,
  input  [63:0] io_loadVal_i,
  output        io_writeOp_o_rf_wen,
  output [4:0]  io_writeOp_o_rf_rd,
  output [63:0] io_writeOp_o_rf_wdata,
  output        io_writeOp_o_csr_wen,
  output [63:0] io_writeOp_o_csr_wdata,
  output [11:0] io_writeOp_o_csr_waddr,
  input         io_debug_i_exit,
  input  [63:0] io_debug_i_a0,
  input  [63:0] io_debug_i_pc,
  input  [31:0] io_debug_i_inst,
  output        io_debug_o_exit,
  output [63:0] io_debug_o_a0,
  output [63:0] io_debug_o_pc,
  output [31:0] io_debug_o_inst
);
  assign io_writeOp_o_rf_wen = io_writeOp_i_rf_wen; // @[MEM.scala 46:29]
  assign io_writeOp_o_rf_rd = io_writeOp_i_rf_rd; // @[MEM.scala 46:29]
  assign io_writeOp_o_rf_wdata = io_memOp_i_is_load ? io_loadVal_i : io_writeOp_i_rf_wdata; // @[MEM.scala 47:36]
  assign io_writeOp_o_csr_wen = io_writeOp_i_csr_wen; // @[MEM.scala 46:29]
  assign io_writeOp_o_csr_wdata = io_writeOp_i_csr_wdata; // @[MEM.scala 46:29]
  assign io_writeOp_o_csr_waddr = io_writeOp_i_csr_waddr; // @[MEM.scala 46:29]
  assign io_debug_o_exit = io_debug_i_exit; // @[MEM.scala 56:21]
  assign io_debug_o_a0 = io_debug_i_a0; // @[MEM.scala 56:21]
  assign io_debug_o_pc = io_debug_i_pc; // @[MEM.scala 56:21]
  assign io_debug_o_inst = io_debug_i_inst; // @[MEM.scala 56:21]
endmodule
module WB(
  input         io_writeOp_i_rf_wen,
  input  [4:0]  io_writeOp_i_rf_rd,
  input  [63:0] io_writeOp_i_rf_wdata,
  input         io_writeOp_i_csr_wen,
  input  [63:0] io_writeOp_i_csr_wdata,
  input  [11:0] io_writeOp_i_csr_waddr,
  output        io_writeOp_o_rf_wen,
  output [4:0]  io_writeOp_o_rf_rd,
  output [63:0] io_writeOp_o_rf_wdata,
  output        io_writeOp_o_csr_wen,
  output [63:0] io_writeOp_o_csr_wdata,
  output [11:0] io_writeOp_o_csr_waddr,
  input         io_debug_exit,
  input  [63:0] io_debug_a0,
  input  [63:0] io_debug_pc,
  input  [31:0] io_debug_inst
);
  wire  DEBUG_exit; // @[WB.scala 16:23]
  wire [63:0] DEBUG_pc; // @[WB.scala 16:23]
  wire [31:0] DEBUG_inst; // @[WB.scala 16:23]
  wire [63:0] DEBUG_a0; // @[WB.scala 16:23]
  DEBUG DEBUG ( // @[WB.scala 16:23]
    .exit(DEBUG_exit),
    .pc(DEBUG_pc),
    .inst(DEBUG_inst),
    .a0(DEBUG_a0)
  );
  assign io_writeOp_o_rf_wen = io_writeOp_i_rf_wen; // @[WB.scala 13:19]
  assign io_writeOp_o_rf_rd = io_writeOp_i_rf_rd; // @[WB.scala 13:19]
  assign io_writeOp_o_rf_wdata = io_writeOp_i_rf_wdata; // @[WB.scala 13:19]
  assign io_writeOp_o_csr_wen = io_writeOp_i_csr_wen; // @[WB.scala 13:19]
  assign io_writeOp_o_csr_wdata = io_writeOp_i_csr_wdata; // @[WB.scala 13:19]
  assign io_writeOp_o_csr_waddr = io_writeOp_i_csr_waddr; // @[WB.scala 13:19]
  assign DEBUG_exit = io_debug_exit; // @[WB.scala 21:21]
  assign DEBUG_pc = io_debug_pc; // @[WB.scala 20:21]
  assign DEBUG_inst = io_debug_inst; // @[WB.scala 22:21]
  assign DEBUG_a0 = io_debug_a0; // @[WB.scala 23:21]
endmodule
module Regfile(
  input         clock,
  input         reset,
  input  [4:0]  io_readRfOp_i_rs1,
  input  [4:0]  io_readRfOp_i_rs2,
  input         io_writeRfOp_i_wen,
  input  [4:0]  io_writeRfOp_i_rd,
  input  [63:0] io_writeRfOp_i_wdata,
  output [63:0] io_readRes_o_rs1Val,
  output [63:0] io_readRes_o_rs2Val,
  output [63:0] io_readRes_o_a0,
  output [63:0] io_regs_o_0,
  output [63:0] io_regs_o_1,
  output [63:0] io_regs_o_2,
  output [63:0] io_regs_o_3,
  output [63:0] io_regs_o_4,
  output [63:0] io_regs_o_5,
  output [63:0] io_regs_o_6,
  output [63:0] io_regs_o_7,
  output [63:0] io_regs_o_8,
  output [63:0] io_regs_o_9,
  output [63:0] io_regs_o_10,
  output [63:0] io_regs_o_11,
  output [63:0] io_regs_o_12,
  output [63:0] io_regs_o_13,
  output [63:0] io_regs_o_14,
  output [63:0] io_regs_o_15,
  output [63:0] io_regs_o_16,
  output [63:0] io_regs_o_17,
  output [63:0] io_regs_o_18,
  output [63:0] io_regs_o_19,
  output [63:0] io_regs_o_20,
  output [63:0] io_regs_o_21,
  output [63:0] io_regs_o_22,
  output [63:0] io_regs_o_23,
  output [63:0] io_regs_o_24,
  output [63:0] io_regs_o_25,
  output [63:0] io_regs_o_26,
  output [63:0] io_regs_o_27,
  output [63:0] io_regs_o_28,
  output [63:0] io_regs_o_29,
  output [63:0] io_regs_o_30,
  output [63:0] io_regs_o_31
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [63:0] _RAND_18;
  reg [63:0] _RAND_19;
  reg [63:0] _RAND_20;
  reg [63:0] _RAND_21;
  reg [63:0] _RAND_22;
  reg [63:0] _RAND_23;
  reg [63:0] _RAND_24;
  reg [63:0] _RAND_25;
  reg [63:0] _RAND_26;
  reg [63:0] _RAND_27;
  reg [63:0] _RAND_28;
  reg [63:0] _RAND_29;
  reg [63:0] _RAND_30;
  reg [63:0] _RAND_31;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] registers_0; // @[REGFILE.scala 12:31]
  reg [63:0] registers_1; // @[REGFILE.scala 12:31]
  reg [63:0] registers_2; // @[REGFILE.scala 12:31]
  reg [63:0] registers_3; // @[REGFILE.scala 12:31]
  reg [63:0] registers_4; // @[REGFILE.scala 12:31]
  reg [63:0] registers_5; // @[REGFILE.scala 12:31]
  reg [63:0] registers_6; // @[REGFILE.scala 12:31]
  reg [63:0] registers_7; // @[REGFILE.scala 12:31]
  reg [63:0] registers_8; // @[REGFILE.scala 12:31]
  reg [63:0] registers_9; // @[REGFILE.scala 12:31]
  reg [63:0] registers_10; // @[REGFILE.scala 12:31]
  reg [63:0] registers_11; // @[REGFILE.scala 12:31]
  reg [63:0] registers_12; // @[REGFILE.scala 12:31]
  reg [63:0] registers_13; // @[REGFILE.scala 12:31]
  reg [63:0] registers_14; // @[REGFILE.scala 12:31]
  reg [63:0] registers_15; // @[REGFILE.scala 12:31]
  reg [63:0] registers_16; // @[REGFILE.scala 12:31]
  reg [63:0] registers_17; // @[REGFILE.scala 12:31]
  reg [63:0] registers_18; // @[REGFILE.scala 12:31]
  reg [63:0] registers_19; // @[REGFILE.scala 12:31]
  reg [63:0] registers_20; // @[REGFILE.scala 12:31]
  reg [63:0] registers_21; // @[REGFILE.scala 12:31]
  reg [63:0] registers_22; // @[REGFILE.scala 12:31]
  reg [63:0] registers_23; // @[REGFILE.scala 12:31]
  reg [63:0] registers_24; // @[REGFILE.scala 12:31]
  reg [63:0] registers_25; // @[REGFILE.scala 12:31]
  reg [63:0] registers_26; // @[REGFILE.scala 12:31]
  reg [63:0] registers_27; // @[REGFILE.scala 12:31]
  reg [63:0] registers_28; // @[REGFILE.scala 12:31]
  reg [63:0] registers_29; // @[REGFILE.scala 12:31]
  reg [63:0] registers_30; // @[REGFILE.scala 12:31]
  reg [63:0] registers_31; // @[REGFILE.scala 12:31]
  wire [63:0] _GEN_65 = 5'h1 == io_readRfOp_i_rs1 ? registers_1 : registers_0; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_66 = 5'h2 == io_readRfOp_i_rs1 ? registers_2 : _GEN_65; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_67 = 5'h3 == io_readRfOp_i_rs1 ? registers_3 : _GEN_66; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_68 = 5'h4 == io_readRfOp_i_rs1 ? registers_4 : _GEN_67; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_69 = 5'h5 == io_readRfOp_i_rs1 ? registers_5 : _GEN_68; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_70 = 5'h6 == io_readRfOp_i_rs1 ? registers_6 : _GEN_69; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_71 = 5'h7 == io_readRfOp_i_rs1 ? registers_7 : _GEN_70; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_72 = 5'h8 == io_readRfOp_i_rs1 ? registers_8 : _GEN_71; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_73 = 5'h9 == io_readRfOp_i_rs1 ? registers_9 : _GEN_72; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_74 = 5'ha == io_readRfOp_i_rs1 ? registers_10 : _GEN_73; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_75 = 5'hb == io_readRfOp_i_rs1 ? registers_11 : _GEN_74; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_76 = 5'hc == io_readRfOp_i_rs1 ? registers_12 : _GEN_75; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_77 = 5'hd == io_readRfOp_i_rs1 ? registers_13 : _GEN_76; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_78 = 5'he == io_readRfOp_i_rs1 ? registers_14 : _GEN_77; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_79 = 5'hf == io_readRfOp_i_rs1 ? registers_15 : _GEN_78; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_80 = 5'h10 == io_readRfOp_i_rs1 ? registers_16 : _GEN_79; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_81 = 5'h11 == io_readRfOp_i_rs1 ? registers_17 : _GEN_80; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_82 = 5'h12 == io_readRfOp_i_rs1 ? registers_18 : _GEN_81; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_83 = 5'h13 == io_readRfOp_i_rs1 ? registers_19 : _GEN_82; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_84 = 5'h14 == io_readRfOp_i_rs1 ? registers_20 : _GEN_83; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_85 = 5'h15 == io_readRfOp_i_rs1 ? registers_21 : _GEN_84; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_86 = 5'h16 == io_readRfOp_i_rs1 ? registers_22 : _GEN_85; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_87 = 5'h17 == io_readRfOp_i_rs1 ? registers_23 : _GEN_86; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_88 = 5'h18 == io_readRfOp_i_rs1 ? registers_24 : _GEN_87; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_89 = 5'h19 == io_readRfOp_i_rs1 ? registers_25 : _GEN_88; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_90 = 5'h1a == io_readRfOp_i_rs1 ? registers_26 : _GEN_89; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_91 = 5'h1b == io_readRfOp_i_rs1 ? registers_27 : _GEN_90; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_92 = 5'h1c == io_readRfOp_i_rs1 ? registers_28 : _GEN_91; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_93 = 5'h1d == io_readRfOp_i_rs1 ? registers_29 : _GEN_92; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_94 = 5'h1e == io_readRfOp_i_rs1 ? registers_30 : _GEN_93; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_97 = 5'h1 == io_readRfOp_i_rs2 ? registers_1 : registers_0; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_98 = 5'h2 == io_readRfOp_i_rs2 ? registers_2 : _GEN_97; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_99 = 5'h3 == io_readRfOp_i_rs2 ? registers_3 : _GEN_98; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_100 = 5'h4 == io_readRfOp_i_rs2 ? registers_4 : _GEN_99; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_101 = 5'h5 == io_readRfOp_i_rs2 ? registers_5 : _GEN_100; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_102 = 5'h6 == io_readRfOp_i_rs2 ? registers_6 : _GEN_101; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_103 = 5'h7 == io_readRfOp_i_rs2 ? registers_7 : _GEN_102; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_104 = 5'h8 == io_readRfOp_i_rs2 ? registers_8 : _GEN_103; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_105 = 5'h9 == io_readRfOp_i_rs2 ? registers_9 : _GEN_104; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_106 = 5'ha == io_readRfOp_i_rs2 ? registers_10 : _GEN_105; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_107 = 5'hb == io_readRfOp_i_rs2 ? registers_11 : _GEN_106; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_108 = 5'hc == io_readRfOp_i_rs2 ? registers_12 : _GEN_107; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_109 = 5'hd == io_readRfOp_i_rs2 ? registers_13 : _GEN_108; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_110 = 5'he == io_readRfOp_i_rs2 ? registers_14 : _GEN_109; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_111 = 5'hf == io_readRfOp_i_rs2 ? registers_15 : _GEN_110; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_112 = 5'h10 == io_readRfOp_i_rs2 ? registers_16 : _GEN_111; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_113 = 5'h11 == io_readRfOp_i_rs2 ? registers_17 : _GEN_112; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_114 = 5'h12 == io_readRfOp_i_rs2 ? registers_18 : _GEN_113; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_115 = 5'h13 == io_readRfOp_i_rs2 ? registers_19 : _GEN_114; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_116 = 5'h14 == io_readRfOp_i_rs2 ? registers_20 : _GEN_115; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_117 = 5'h15 == io_readRfOp_i_rs2 ? registers_21 : _GEN_116; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_118 = 5'h16 == io_readRfOp_i_rs2 ? registers_22 : _GEN_117; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_119 = 5'h17 == io_readRfOp_i_rs2 ? registers_23 : _GEN_118; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_120 = 5'h18 == io_readRfOp_i_rs2 ? registers_24 : _GEN_119; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_121 = 5'h19 == io_readRfOp_i_rs2 ? registers_25 : _GEN_120; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_122 = 5'h1a == io_readRfOp_i_rs2 ? registers_26 : _GEN_121; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_123 = 5'h1b == io_readRfOp_i_rs2 ? registers_27 : _GEN_122; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_124 = 5'h1c == io_readRfOp_i_rs2 ? registers_28 : _GEN_123; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_125 = 5'h1d == io_readRfOp_i_rs2 ? registers_29 : _GEN_124; // @[REGFILE.scala 22:{25,25}]
  wire [63:0] _GEN_126 = 5'h1e == io_readRfOp_i_rs2 ? registers_30 : _GEN_125; // @[REGFILE.scala 22:{25,25}]
  assign io_readRes_o_rs1Val = 5'h1f == io_readRfOp_i_rs1 ? registers_31 : _GEN_94; // @[REGFILE.scala 21:{25,25}]
  assign io_readRes_o_rs2Val = 5'h1f == io_readRfOp_i_rs2 ? registers_31 : _GEN_126; // @[REGFILE.scala 22:{25,25}]
  assign io_readRes_o_a0 = registers_10; // @[REGFILE.scala 24:25]
  assign io_regs_o_0 = registers_0; // @[REGFILE.scala 27:17]
  assign io_regs_o_1 = registers_1; // @[REGFILE.scala 27:17]
  assign io_regs_o_2 = registers_2; // @[REGFILE.scala 27:17]
  assign io_regs_o_3 = registers_3; // @[REGFILE.scala 27:17]
  assign io_regs_o_4 = registers_4; // @[REGFILE.scala 27:17]
  assign io_regs_o_5 = registers_5; // @[REGFILE.scala 27:17]
  assign io_regs_o_6 = registers_6; // @[REGFILE.scala 27:17]
  assign io_regs_o_7 = registers_7; // @[REGFILE.scala 27:17]
  assign io_regs_o_8 = registers_8; // @[REGFILE.scala 27:17]
  assign io_regs_o_9 = registers_9; // @[REGFILE.scala 27:17]
  assign io_regs_o_10 = registers_10; // @[REGFILE.scala 27:17]
  assign io_regs_o_11 = registers_11; // @[REGFILE.scala 27:17]
  assign io_regs_o_12 = registers_12; // @[REGFILE.scala 27:17]
  assign io_regs_o_13 = registers_13; // @[REGFILE.scala 27:17]
  assign io_regs_o_14 = registers_14; // @[REGFILE.scala 27:17]
  assign io_regs_o_15 = registers_15; // @[REGFILE.scala 27:17]
  assign io_regs_o_16 = registers_16; // @[REGFILE.scala 27:17]
  assign io_regs_o_17 = registers_17; // @[REGFILE.scala 27:17]
  assign io_regs_o_18 = registers_18; // @[REGFILE.scala 27:17]
  assign io_regs_o_19 = registers_19; // @[REGFILE.scala 27:17]
  assign io_regs_o_20 = registers_20; // @[REGFILE.scala 27:17]
  assign io_regs_o_21 = registers_21; // @[REGFILE.scala 27:17]
  assign io_regs_o_22 = registers_22; // @[REGFILE.scala 27:17]
  assign io_regs_o_23 = registers_23; // @[REGFILE.scala 27:17]
  assign io_regs_o_24 = registers_24; // @[REGFILE.scala 27:17]
  assign io_regs_o_25 = registers_25; // @[REGFILE.scala 27:17]
  assign io_regs_o_26 = registers_26; // @[REGFILE.scala 27:17]
  assign io_regs_o_27 = registers_27; // @[REGFILE.scala 27:17]
  assign io_regs_o_28 = registers_28; // @[REGFILE.scala 27:17]
  assign io_regs_o_29 = registers_29; // @[REGFILE.scala 27:17]
  assign io_regs_o_30 = registers_30; // @[REGFILE.scala 27:17]
  assign io_regs_o_31 = registers_31; // @[REGFILE.scala 27:17]
  always @(posedge clock) begin
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_0 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h0 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_0 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end else begin
        registers_0 <= 64'h0; // @[REGFILE.scala 13:21]
      end
    end else begin
      registers_0 <= 64'h0; // @[REGFILE.scala 13:21]
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_1 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h1 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_1 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_2 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h2 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_2 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_3 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h3 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_3 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_4 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h4 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_4 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_5 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h5 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_5 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_6 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h6 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_6 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_7 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h7 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_7 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_8 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h8 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_8 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_9 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h9 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_9 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_10 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'ha == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_10 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_11 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'hb == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_11 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_12 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'hc == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_12 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_13 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'hd == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_13 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_14 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'he == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_14 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_15 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'hf == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_15 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_16 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h10 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_16 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_17 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h11 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_17 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_18 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h12 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_18 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_19 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h13 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_19 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_20 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h14 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_20 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_21 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h15 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_21 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_22 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h16 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_22 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_23 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h17 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_23 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_24 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h18 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_24 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_25 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h19 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_25 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_26 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h1a == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_26 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_27 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h1b == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_27 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_28 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h1c == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_28 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_29 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h1d == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_29 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_30 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h1e == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_30 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 12:31]
      registers_31 <= 64'h0; // @[REGFILE.scala 12:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 17:42]
      if (5'h1f == io_writeRfOp_i_rd) begin // @[REGFILE.scala 18:23]
        registers_31 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 18:23]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  registers_0 = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  registers_1 = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  registers_2 = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  registers_3 = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  registers_4 = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  registers_5 = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  registers_6 = _RAND_6[63:0];
  _RAND_7 = {2{`RANDOM}};
  registers_7 = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  registers_8 = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  registers_9 = _RAND_9[63:0];
  _RAND_10 = {2{`RANDOM}};
  registers_10 = _RAND_10[63:0];
  _RAND_11 = {2{`RANDOM}};
  registers_11 = _RAND_11[63:0];
  _RAND_12 = {2{`RANDOM}};
  registers_12 = _RAND_12[63:0];
  _RAND_13 = {2{`RANDOM}};
  registers_13 = _RAND_13[63:0];
  _RAND_14 = {2{`RANDOM}};
  registers_14 = _RAND_14[63:0];
  _RAND_15 = {2{`RANDOM}};
  registers_15 = _RAND_15[63:0];
  _RAND_16 = {2{`RANDOM}};
  registers_16 = _RAND_16[63:0];
  _RAND_17 = {2{`RANDOM}};
  registers_17 = _RAND_17[63:0];
  _RAND_18 = {2{`RANDOM}};
  registers_18 = _RAND_18[63:0];
  _RAND_19 = {2{`RANDOM}};
  registers_19 = _RAND_19[63:0];
  _RAND_20 = {2{`RANDOM}};
  registers_20 = _RAND_20[63:0];
  _RAND_21 = {2{`RANDOM}};
  registers_21 = _RAND_21[63:0];
  _RAND_22 = {2{`RANDOM}};
  registers_22 = _RAND_22[63:0];
  _RAND_23 = {2{`RANDOM}};
  registers_23 = _RAND_23[63:0];
  _RAND_24 = {2{`RANDOM}};
  registers_24 = _RAND_24[63:0];
  _RAND_25 = {2{`RANDOM}};
  registers_25 = _RAND_25[63:0];
  _RAND_26 = {2{`RANDOM}};
  registers_26 = _RAND_26[63:0];
  _RAND_27 = {2{`RANDOM}};
  registers_27 = _RAND_27[63:0];
  _RAND_28 = {2{`RANDOM}};
  registers_28 = _RAND_28[63:0];
  _RAND_29 = {2{`RANDOM}};
  registers_29 = _RAND_29[63:0];
  _RAND_30 = {2{`RANDOM}};
  registers_30 = _RAND_30[63:0];
  _RAND_31 = {2{`RANDOM}};
  registers_31 = _RAND_31[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module CSR(
  input         clock,
  input         reset,
  input  [11:0] io_csrAddr_i,
  input         io_writeOp_i_wen,
  input  [63:0] io_writeOp_i_wdata,
  input  [11:0] io_writeOp_i_waddr,
  output [63:0] io_csrData_o_csrVal,
  output [63:0] io_csrData_o_epc,
  output [63:0] io_csrData_o_tvec,
  output [63:0] io_csrData_o_cause,
  output [63:0] io_csrData_o_status
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] mepc; // @[CSR.scala 18:28]
  reg [63:0] mcause; // @[CSR.scala 19:28]
  reg [63:0] mstatus; // @[CSR.scala 20:28]
  reg [63:0] mtvec; // @[CSR.scala 21:28]
  wire [63:0] _io_csrData_o_csrVal_T_1 = 12'h341 == io_csrAddr_i ? mepc : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _io_csrData_o_csrVal_T_3 = 12'h342 == io_csrAddr_i ? mcause : _io_csrData_o_csrVal_T_1; // @[Mux.scala 81:58]
  wire [63:0] _io_csrData_o_csrVal_T_5 = 12'h300 == io_csrAddr_i ? mstatus : _io_csrData_o_csrVal_T_3; // @[Mux.scala 81:58]
  wire [63:0] _GEN_0 = 12'h300 == io_writeOp_i_waddr ? io_writeOp_i_wdata : mstatus; // @[CSR.scala 20:28 33:35 37:41]
  wire [63:0] _GEN_1 = 12'h305 == io_writeOp_i_waddr ? io_writeOp_i_wdata : mtvec; // @[CSR.scala 21:28 33:35 36:41]
  wire [63:0] _GEN_2 = 12'h305 == io_writeOp_i_waddr ? mstatus : _GEN_0; // @[CSR.scala 20:28 33:35]
  assign io_csrData_o_csrVal = 12'h305 == io_csrAddr_i ? mtvec : _io_csrData_o_csrVal_T_5; // @[Mux.scala 81:58]
  assign io_csrData_o_epc = mepc; // @[CSR.scala 41:25]
  assign io_csrData_o_tvec = mtvec; // @[CSR.scala 42:25]
  assign io_csrData_o_cause = mcause; // @[CSR.scala 43:25]
  assign io_csrData_o_status = mstatus; // @[CSR.scala 44:25]
  always @(posedge clock) begin
    if (reset) begin // @[CSR.scala 18:28]
      mepc <= 64'h0; // @[CSR.scala 18:28]
    end else if (io_writeOp_i_wen) begin // @[CSR.scala 32:27]
      if (12'h341 == io_writeOp_i_waddr) begin // @[CSR.scala 33:35]
        mepc <= io_writeOp_i_wdata; // @[CSR.scala 34:41]
      end
    end
    if (reset) begin // @[CSR.scala 19:28]
      mcause <= 64'h0; // @[CSR.scala 19:28]
    end else if (io_writeOp_i_wen) begin // @[CSR.scala 32:27]
      if (!(12'h341 == io_writeOp_i_waddr)) begin // @[CSR.scala 33:35]
        if (12'h342 == io_writeOp_i_waddr) begin // @[CSR.scala 33:35]
          mcause <= io_writeOp_i_wdata; // @[CSR.scala 35:41]
        end
      end
    end
    if (reset) begin // @[CSR.scala 20:28]
      mstatus <= 64'h0; // @[CSR.scala 20:28]
    end else if (io_writeOp_i_wen) begin // @[CSR.scala 32:27]
      if (!(12'h341 == io_writeOp_i_waddr)) begin // @[CSR.scala 33:35]
        if (!(12'h342 == io_writeOp_i_waddr)) begin // @[CSR.scala 33:35]
          mstatus <= _GEN_2;
        end
      end
    end
    if (reset) begin // @[CSR.scala 21:28]
      mtvec <= 64'h800011c0; // @[CSR.scala 21:28]
    end else if (io_writeOp_i_wen) begin // @[CSR.scala 32:27]
      if (!(12'h341 == io_writeOp_i_waddr)) begin // @[CSR.scala 33:35]
        if (!(12'h342 == io_writeOp_i_waddr)) begin // @[CSR.scala 33:35]
          mtvec <= _GEN_1;
        end
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  mepc = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  mcause = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  mstatus = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  mtvec = _RAND_3[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MAIN_MEMORY(
  input         clock,
  input  [63:0] io_pc_i,
  input         io_memOp_i_is_load,
  input         io_memOp_i_is_store,
  input         io_memOp_i_unsigned,
  input  [3:0]  io_memOp_i_length,
  input  [63:0] io_memOp_i_addr,
  input  [63:0] io_memOp_i_sdata,
  output [31:0] io_inst_o,
  output [63:0] io_loadVal_o
);
  reg [31:0] ram [0:1048575]; // @[MAIN_MEMORY.scala 25:18]
  wire  ram_io_inst_o_MPORT_en; // @[MAIN_MEMORY.scala 25:18]
  wire [19:0] ram_io_inst_o_MPORT_addr; // @[MAIN_MEMORY.scala 25:18]
  wire [31:0] ram_io_inst_o_MPORT_data; // @[MAIN_MEMORY.scala 25:18]
  wire  ram_dword_MPORT_en; // @[MAIN_MEMORY.scala 25:18]
  wire [19:0] ram_dword_MPORT_addr; // @[MAIN_MEMORY.scala 25:18]
  wire [31:0] ram_dword_MPORT_data; // @[MAIN_MEMORY.scala 25:18]
  wire  ram_dword_MPORT_1_en; // @[MAIN_MEMORY.scala 25:18]
  wire [19:0] ram_dword_MPORT_1_addr; // @[MAIN_MEMORY.scala 25:18]
  wire [31:0] ram_dword_MPORT_1_data; // @[MAIN_MEMORY.scala 25:18]
  wire [31:0] ram_MPORT_data; // @[MAIN_MEMORY.scala 25:18]
  wire [19:0] ram_MPORT_addr; // @[MAIN_MEMORY.scala 25:18]
  wire  ram_MPORT_mask; // @[MAIN_MEMORY.scala 25:18]
  wire  ram_MPORT_en; // @[MAIN_MEMORY.scala 25:18]
  wire [31:0] ram_MPORT_1_data; // @[MAIN_MEMORY.scala 25:18]
  wire [19:0] ram_MPORT_1_addr; // @[MAIN_MEMORY.scala 25:18]
  wire  ram_MPORT_1_mask; // @[MAIN_MEMORY.scala 25:18]
  wire  ram_MPORT_1_en; // @[MAIN_MEMORY.scala 25:18]
  wire  MMIO_RW_read_en; // @[MAIN_MEMORY.scala 39:25]
  wire  MMIO_RW_write_en; // @[MAIN_MEMORY.scala 39:25]
  wire [63:0] MMIO_RW_addr; // @[MAIN_MEMORY.scala 39:25]
  wire [63:0] MMIO_RW_wdata; // @[MAIN_MEMORY.scala 39:25]
  wire [3:0] MMIO_RW_length; // @[MAIN_MEMORY.scala 39:25]
  wire [63:0] MMIO_RW_rdata; // @[MAIN_MEMORY.scala 39:25]
  wire [63:0] _io_inst_o_T_1 = io_pc_i - 64'h80000000; // @[MAIN_MEMORY.scala 27:38]
  wire  _T = io_memOp_i_addr >= 64'h80000000; // @[MAIN_MEMORY.scala 11:47]
  wire  _T_1 = io_memOp_i_addr <= 64'h87ffffff; // @[MAIN_MEMORY.scala 11:74]
  wire  _T_2 = io_memOp_i_addr >= 64'h80000000 & io_memOp_i_addr <= 64'h87ffffff; // @[MAIN_MEMORY.scala 11:67]
  wire [63:0] _addr_T_1 = io_memOp_i_addr - 64'h80000000; // @[MAIN_MEMORY.scala 53:46]
  wire [61:0] addr = _addr_T_1[63:2]; // @[MAIN_MEMORY.scala 53:67]
  wire [61:0] _dword_T_1 = addr + 62'h1; // @[MAIN_MEMORY.scala 56:42]
  wire [63:0] dword = {ram_dword_MPORT_data,ram_dword_MPORT_1_data}; // @[Cat.scala 31:58]
  wire [1:0] offset = io_memOp_i_addr[1:0]; // @[MAIN_MEMORY.scala 58:40]
  wire [7:0] _byteMask_T_1 = 4'h1 == io_memOp_i_length ? 8'hff : 8'h0; // @[Mux.scala 81:58]
  wire [15:0] _byteMask_T_3 = 4'h2 == io_memOp_i_length ? 16'hffff : {{8'd0}, _byteMask_T_1}; // @[Mux.scala 81:58]
  wire [31:0] _byteMask_T_5 = 4'h4 == io_memOp_i_length ? 32'hffffffff : {{16'd0}, _byteMask_T_3}; // @[Mux.scala 81:58]
  wire [63:0] byteMask = 4'h8 == io_memOp_i_length ? 64'hffffffffffffffff : {{32'd0}, _byteMask_T_5}; // @[Mux.scala 81:58]
  wire [4:0] _mask_T = {offset, 3'h0}; // @[MAIN_MEMORY.scala 80:46]
  wire [94:0] _GEN_186 = {{31'd0}, byteMask}; // @[MAIN_MEMORY.scala 80:35]
  wire [94:0] mask = _GEN_186 << _mask_T; // @[MAIN_MEMORY.scala 80:35]
  wire [94:0] _GEN_161 = {{31'd0}, dword}; // @[MAIN_MEMORY.scala 89:38]
  wire [94:0] _loadVal_temp_T = _GEN_161 & mask; // @[MAIN_MEMORY.scala 89:38]
  wire [94:0] _loadVal_temp_T_2 = _loadVal_temp_T >> _mask_T; // @[MAIN_MEMORY.scala 89:46]
  wire [1:0] store_en_hi = io_memOp_i_length[3:2]; // @[OneHot.scala 30:18]
  wire [1:0] store_en_lo = io_memOp_i_length[1:0]; // @[OneHot.scala 31:18]
  wire  _store_en_T = |store_en_hi; // @[OneHot.scala 32:14]
  wire [1:0] _store_en_T_1 = store_en_hi | store_en_lo; // @[OneHot.scala 32:28]
  wire [1:0] _store_en_T_3 = {_store_en_T,_store_en_T_1[1]}; // @[Cat.scala 31:58]
  wire [7:0] _GEN_1 = 2'h1 == _store_en_T_3 ? 8'h3 : 8'h1; // @[MAIN_MEMORY.scala 93:{27,27}]
  wire [7:0] _GEN_2 = 2'h2 == _store_en_T_3 ? 8'hf : _GEN_1; // @[MAIN_MEMORY.scala 93:{27,27}]
  wire [7:0] store_en = 2'h3 == _store_en_T_3 ? 8'hff : _GEN_2; // @[MAIN_MEMORY.scala 93:{27,27}]
  wire [2:0] _T_4 = {{1'd0}, offset}; // @[MAIN_MEMORY.scala 100:37]
  wire [7:0] _GEN_4 = 2'h0 == _T_4[1:0] ? io_memOp_i_sdata[7:0] : dword[7:0]; // @[MAIN_MEMORY.scala 100:{77,77} 61:39]
  wire [7:0] _GEN_5 = 2'h1 == _T_4[1:0] ? io_memOp_i_sdata[7:0] : dword[15:8]; // @[MAIN_MEMORY.scala 100:{77,77} 61:39]
  wire [7:0] _GEN_6 = 2'h2 == _T_4[1:0] ? io_memOp_i_sdata[7:0] : dword[23:16]; // @[MAIN_MEMORY.scala 100:{77,77} 61:39]
  wire [7:0] _GEN_7 = 2'h3 == _T_4[1:0] ? io_memOp_i_sdata[7:0] : dword[31:24]; // @[MAIN_MEMORY.scala 100:{77,77} 61:39]
  wire [2:0] _GEN_162 = {{1'd0}, _T_4[1:0]}; // @[MAIN_MEMORY.scala 100:{77,77} 61:39]
  wire [7:0] _GEN_8 = 3'h4 == _GEN_162 ? io_memOp_i_sdata[7:0] : dword[39:32]; // @[MAIN_MEMORY.scala 100:{77,77} 61:39]
  wire [7:0] _GEN_9 = 3'h5 == _GEN_162 ? io_memOp_i_sdata[7:0] : dword[47:40]; // @[MAIN_MEMORY.scala 100:{77,77} 61:39]
  wire [7:0] _GEN_10 = 3'h6 == _GEN_162 ? io_memOp_i_sdata[7:0] : dword[55:48]; // @[MAIN_MEMORY.scala 100:{77,77} 61:39]
  wire [7:0] _GEN_11 = 3'h7 == _GEN_162 ? io_memOp_i_sdata[7:0] : dword[63:56]; // @[MAIN_MEMORY.scala 100:{77,77} 61:39]
  wire [7:0] _GEN_12 = store_en[0] ? _GEN_4 : dword[7:0]; // @[MAIN_MEMORY.scala 100:57 61:39]
  wire [7:0] _GEN_13 = store_en[0] ? _GEN_5 : dword[15:8]; // @[MAIN_MEMORY.scala 100:57 61:39]
  wire [7:0] _GEN_14 = store_en[0] ? _GEN_6 : dword[23:16]; // @[MAIN_MEMORY.scala 100:57 61:39]
  wire [7:0] _GEN_15 = store_en[0] ? _GEN_7 : dword[31:24]; // @[MAIN_MEMORY.scala 100:57 61:39]
  wire [7:0] _GEN_16 = store_en[0] ? _GEN_8 : dword[39:32]; // @[MAIN_MEMORY.scala 100:57 61:39]
  wire [7:0] _GEN_17 = store_en[0] ? _GEN_9 : dword[47:40]; // @[MAIN_MEMORY.scala 100:57 61:39]
  wire [7:0] _GEN_18 = store_en[0] ? _GEN_10 : dword[55:48]; // @[MAIN_MEMORY.scala 100:57 61:39]
  wire [7:0] _GEN_19 = store_en[0] ? _GEN_11 : dword[63:56]; // @[MAIN_MEMORY.scala 100:57 61:39]
  wire [1:0] _T_12 = 2'h1 + offset; // @[MAIN_MEMORY.scala 101:37]
  wire [7:0] _GEN_20 = 2'h0 == _T_12 ? io_memOp_i_sdata[15:8] : _GEN_12; // @[MAIN_MEMORY.scala 101:{77,77}]
  wire [7:0] _GEN_21 = 2'h1 == _T_12 ? io_memOp_i_sdata[15:8] : _GEN_13; // @[MAIN_MEMORY.scala 101:{77,77}]
  wire [7:0] _GEN_22 = 2'h2 == _T_12 ? io_memOp_i_sdata[15:8] : _GEN_14; // @[MAIN_MEMORY.scala 101:{77,77}]
  wire [7:0] _GEN_23 = 2'h3 == _T_12 ? io_memOp_i_sdata[15:8] : _GEN_15; // @[MAIN_MEMORY.scala 101:{77,77}]
  wire [2:0] _GEN_166 = {{1'd0}, _T_12}; // @[MAIN_MEMORY.scala 101:{77,77}]
  wire [7:0] _GEN_24 = 3'h4 == _GEN_166 ? io_memOp_i_sdata[15:8] : _GEN_16; // @[MAIN_MEMORY.scala 101:{77,77}]
  wire [7:0] _GEN_25 = 3'h5 == _GEN_166 ? io_memOp_i_sdata[15:8] : _GEN_17; // @[MAIN_MEMORY.scala 101:{77,77}]
  wire [7:0] _GEN_26 = 3'h6 == _GEN_166 ? io_memOp_i_sdata[15:8] : _GEN_18; // @[MAIN_MEMORY.scala 101:{77,77}]
  wire [7:0] _GEN_27 = 3'h7 == _GEN_166 ? io_memOp_i_sdata[15:8] : _GEN_19; // @[MAIN_MEMORY.scala 101:{77,77}]
  wire [7:0] _GEN_28 = store_en[1] ? _GEN_20 : _GEN_12; // @[MAIN_MEMORY.scala 101:57]
  wire [7:0] _GEN_29 = store_en[1] ? _GEN_21 : _GEN_13; // @[MAIN_MEMORY.scala 101:57]
  wire [7:0] _GEN_30 = store_en[1] ? _GEN_22 : _GEN_14; // @[MAIN_MEMORY.scala 101:57]
  wire [7:0] _GEN_31 = store_en[1] ? _GEN_23 : _GEN_15; // @[MAIN_MEMORY.scala 101:57]
  wire [7:0] _GEN_32 = store_en[1] ? _GEN_24 : _GEN_16; // @[MAIN_MEMORY.scala 101:57]
  wire [7:0] _GEN_33 = store_en[1] ? _GEN_25 : _GEN_17; // @[MAIN_MEMORY.scala 101:57]
  wire [7:0] _GEN_34 = store_en[1] ? _GEN_26 : _GEN_18; // @[MAIN_MEMORY.scala 101:57]
  wire [7:0] _GEN_35 = store_en[1] ? _GEN_27 : _GEN_19; // @[MAIN_MEMORY.scala 101:57]
  wire [1:0] _T_19 = 2'h2 + offset; // @[MAIN_MEMORY.scala 102:37]
  wire [7:0] _GEN_36 = 2'h0 == _T_19 ? io_memOp_i_sdata[23:16] : _GEN_28; // @[MAIN_MEMORY.scala 102:{77,77}]
  wire [7:0] _GEN_37 = 2'h1 == _T_19 ? io_memOp_i_sdata[23:16] : _GEN_29; // @[MAIN_MEMORY.scala 102:{77,77}]
  wire [7:0] _GEN_38 = 2'h2 == _T_19 ? io_memOp_i_sdata[23:16] : _GEN_30; // @[MAIN_MEMORY.scala 102:{77,77}]
  wire [7:0] _GEN_39 = 2'h3 == _T_19 ? io_memOp_i_sdata[23:16] : _GEN_31; // @[MAIN_MEMORY.scala 102:{77,77}]
  wire [2:0] _GEN_170 = {{1'd0}, _T_19}; // @[MAIN_MEMORY.scala 102:{77,77}]
  wire [7:0] _GEN_40 = 3'h4 == _GEN_170 ? io_memOp_i_sdata[23:16] : _GEN_32; // @[MAIN_MEMORY.scala 102:{77,77}]
  wire [7:0] _GEN_41 = 3'h5 == _GEN_170 ? io_memOp_i_sdata[23:16] : _GEN_33; // @[MAIN_MEMORY.scala 102:{77,77}]
  wire [7:0] _GEN_42 = 3'h6 == _GEN_170 ? io_memOp_i_sdata[23:16] : _GEN_34; // @[MAIN_MEMORY.scala 102:{77,77}]
  wire [7:0] _GEN_43 = 3'h7 == _GEN_170 ? io_memOp_i_sdata[23:16] : _GEN_35; // @[MAIN_MEMORY.scala 102:{77,77}]
  wire [7:0] _GEN_44 = store_en[2] ? _GEN_36 : _GEN_28; // @[MAIN_MEMORY.scala 102:57]
  wire [7:0] _GEN_45 = store_en[2] ? _GEN_37 : _GEN_29; // @[MAIN_MEMORY.scala 102:57]
  wire [7:0] _GEN_46 = store_en[2] ? _GEN_38 : _GEN_30; // @[MAIN_MEMORY.scala 102:57]
  wire [7:0] _GEN_47 = store_en[2] ? _GEN_39 : _GEN_31; // @[MAIN_MEMORY.scala 102:57]
  wire [7:0] _GEN_48 = store_en[2] ? _GEN_40 : _GEN_32; // @[MAIN_MEMORY.scala 102:57]
  wire [7:0] _GEN_49 = store_en[2] ? _GEN_41 : _GEN_33; // @[MAIN_MEMORY.scala 102:57]
  wire [7:0] _GEN_50 = store_en[2] ? _GEN_42 : _GEN_34; // @[MAIN_MEMORY.scala 102:57]
  wire [7:0] _GEN_51 = store_en[2] ? _GEN_43 : _GEN_35; // @[MAIN_MEMORY.scala 102:57]
  wire [1:0] _T_26 = 2'h3 + offset; // @[MAIN_MEMORY.scala 103:37]
  wire [7:0] _GEN_52 = 2'h0 == _T_26 ? io_memOp_i_sdata[31:24] : _GEN_44; // @[MAIN_MEMORY.scala 103:{77,77}]
  wire [7:0] _GEN_53 = 2'h1 == _T_26 ? io_memOp_i_sdata[31:24] : _GEN_45; // @[MAIN_MEMORY.scala 103:{77,77}]
  wire [7:0] _GEN_54 = 2'h2 == _T_26 ? io_memOp_i_sdata[31:24] : _GEN_46; // @[MAIN_MEMORY.scala 103:{77,77}]
  wire [7:0] _GEN_55 = 2'h3 == _T_26 ? io_memOp_i_sdata[31:24] : _GEN_47; // @[MAIN_MEMORY.scala 103:{77,77}]
  wire [2:0] _GEN_174 = {{1'd0}, _T_26}; // @[MAIN_MEMORY.scala 103:{77,77}]
  wire [7:0] _GEN_56 = 3'h4 == _GEN_174 ? io_memOp_i_sdata[31:24] : _GEN_48; // @[MAIN_MEMORY.scala 103:{77,77}]
  wire [7:0] _GEN_57 = 3'h5 == _GEN_174 ? io_memOp_i_sdata[31:24] : _GEN_49; // @[MAIN_MEMORY.scala 103:{77,77}]
  wire [7:0] _GEN_58 = 3'h6 == _GEN_174 ? io_memOp_i_sdata[31:24] : _GEN_50; // @[MAIN_MEMORY.scala 103:{77,77}]
  wire [7:0] _GEN_59 = 3'h7 == _GEN_174 ? io_memOp_i_sdata[31:24] : _GEN_51; // @[MAIN_MEMORY.scala 103:{77,77}]
  wire [7:0] _GEN_60 = store_en[3] ? _GEN_52 : _GEN_44; // @[MAIN_MEMORY.scala 103:57]
  wire [7:0] _GEN_61 = store_en[3] ? _GEN_53 : _GEN_45; // @[MAIN_MEMORY.scala 103:57]
  wire [7:0] _GEN_62 = store_en[3] ? _GEN_54 : _GEN_46; // @[MAIN_MEMORY.scala 103:57]
  wire [7:0] _GEN_63 = store_en[3] ? _GEN_55 : _GEN_47; // @[MAIN_MEMORY.scala 103:57]
  wire [7:0] _GEN_64 = store_en[3] ? _GEN_56 : _GEN_48; // @[MAIN_MEMORY.scala 103:57]
  wire [7:0] _GEN_65 = store_en[3] ? _GEN_57 : _GEN_49; // @[MAIN_MEMORY.scala 103:57]
  wire [7:0] _GEN_66 = store_en[3] ? _GEN_58 : _GEN_50; // @[MAIN_MEMORY.scala 103:57]
  wire [7:0] _GEN_67 = store_en[3] ? _GEN_59 : _GEN_51; // @[MAIN_MEMORY.scala 103:57]
  wire [2:0] _T_33 = 3'h4 + _T_4; // @[MAIN_MEMORY.scala 104:37]
  wire [7:0] _GEN_68 = 3'h0 == _T_33 ? io_memOp_i_sdata[39:32] : _GEN_60; // @[MAIN_MEMORY.scala 104:{77,77}]
  wire [7:0] _GEN_69 = 3'h1 == _T_33 ? io_memOp_i_sdata[39:32] : _GEN_61; // @[MAIN_MEMORY.scala 104:{77,77}]
  wire [7:0] _GEN_70 = 3'h2 == _T_33 ? io_memOp_i_sdata[39:32] : _GEN_62; // @[MAIN_MEMORY.scala 104:{77,77}]
  wire [7:0] _GEN_71 = 3'h3 == _T_33 ? io_memOp_i_sdata[39:32] : _GEN_63; // @[MAIN_MEMORY.scala 104:{77,77}]
  wire [7:0] _GEN_72 = 3'h4 == _T_33 ? io_memOp_i_sdata[39:32] : _GEN_64; // @[MAIN_MEMORY.scala 104:{77,77}]
  wire [7:0] _GEN_73 = 3'h5 == _T_33 ? io_memOp_i_sdata[39:32] : _GEN_65; // @[MAIN_MEMORY.scala 104:{77,77}]
  wire [7:0] _GEN_74 = 3'h6 == _T_33 ? io_memOp_i_sdata[39:32] : _GEN_66; // @[MAIN_MEMORY.scala 104:{77,77}]
  wire [7:0] _GEN_75 = 3'h7 == _T_33 ? io_memOp_i_sdata[39:32] : _GEN_67; // @[MAIN_MEMORY.scala 104:{77,77}]
  wire [7:0] _GEN_76 = store_en[4] ? _GEN_68 : _GEN_60; // @[MAIN_MEMORY.scala 104:57]
  wire [7:0] _GEN_77 = store_en[4] ? _GEN_69 : _GEN_61; // @[MAIN_MEMORY.scala 104:57]
  wire [7:0] _GEN_78 = store_en[4] ? _GEN_70 : _GEN_62; // @[MAIN_MEMORY.scala 104:57]
  wire [7:0] _GEN_79 = store_en[4] ? _GEN_71 : _GEN_63; // @[MAIN_MEMORY.scala 104:57]
  wire [7:0] _GEN_80 = store_en[4] ? _GEN_72 : _GEN_64; // @[MAIN_MEMORY.scala 104:57]
  wire [7:0] _GEN_81 = store_en[4] ? _GEN_73 : _GEN_65; // @[MAIN_MEMORY.scala 104:57]
  wire [7:0] _GEN_82 = store_en[4] ? _GEN_74 : _GEN_66; // @[MAIN_MEMORY.scala 104:57]
  wire [7:0] _GEN_83 = store_en[4] ? _GEN_75 : _GEN_67; // @[MAIN_MEMORY.scala 104:57]
  wire [2:0] _T_40 = 3'h5 + _T_4; // @[MAIN_MEMORY.scala 105:37]
  wire [7:0] _GEN_84 = 3'h0 == _T_40 ? io_memOp_i_sdata[47:40] : _GEN_76; // @[MAIN_MEMORY.scala 105:{77,77}]
  wire [7:0] _GEN_85 = 3'h1 == _T_40 ? io_memOp_i_sdata[47:40] : _GEN_77; // @[MAIN_MEMORY.scala 105:{77,77}]
  wire [7:0] _GEN_86 = 3'h2 == _T_40 ? io_memOp_i_sdata[47:40] : _GEN_78; // @[MAIN_MEMORY.scala 105:{77,77}]
  wire [7:0] _GEN_87 = 3'h3 == _T_40 ? io_memOp_i_sdata[47:40] : _GEN_79; // @[MAIN_MEMORY.scala 105:{77,77}]
  wire [7:0] _GEN_88 = 3'h4 == _T_40 ? io_memOp_i_sdata[47:40] : _GEN_80; // @[MAIN_MEMORY.scala 105:{77,77}]
  wire [7:0] _GEN_89 = 3'h5 == _T_40 ? io_memOp_i_sdata[47:40] : _GEN_81; // @[MAIN_MEMORY.scala 105:{77,77}]
  wire [7:0] _GEN_90 = 3'h6 == _T_40 ? io_memOp_i_sdata[47:40] : _GEN_82; // @[MAIN_MEMORY.scala 105:{77,77}]
  wire [7:0] _GEN_91 = 3'h7 == _T_40 ? io_memOp_i_sdata[47:40] : _GEN_83; // @[MAIN_MEMORY.scala 105:{77,77}]
  wire [7:0] _GEN_92 = store_en[5] ? _GEN_84 : _GEN_76; // @[MAIN_MEMORY.scala 105:57]
  wire [7:0] _GEN_93 = store_en[5] ? _GEN_85 : _GEN_77; // @[MAIN_MEMORY.scala 105:57]
  wire [7:0] _GEN_94 = store_en[5] ? _GEN_86 : _GEN_78; // @[MAIN_MEMORY.scala 105:57]
  wire [7:0] _GEN_95 = store_en[5] ? _GEN_87 : _GEN_79; // @[MAIN_MEMORY.scala 105:57]
  wire [7:0] _GEN_96 = store_en[5] ? _GEN_88 : _GEN_80; // @[MAIN_MEMORY.scala 105:57]
  wire [7:0] _GEN_97 = store_en[5] ? _GEN_89 : _GEN_81; // @[MAIN_MEMORY.scala 105:57]
  wire [7:0] _GEN_98 = store_en[5] ? _GEN_90 : _GEN_82; // @[MAIN_MEMORY.scala 105:57]
  wire [7:0] _GEN_99 = store_en[5] ? _GEN_91 : _GEN_83; // @[MAIN_MEMORY.scala 105:57]
  wire [2:0] _T_47 = 3'h6 + _T_4; // @[MAIN_MEMORY.scala 106:37]
  wire [7:0] _GEN_100 = 3'h0 == _T_47 ? io_memOp_i_sdata[55:48] : _GEN_92; // @[MAIN_MEMORY.scala 106:{77,77}]
  wire [7:0] _GEN_101 = 3'h1 == _T_47 ? io_memOp_i_sdata[55:48] : _GEN_93; // @[MAIN_MEMORY.scala 106:{77,77}]
  wire [7:0] _GEN_102 = 3'h2 == _T_47 ? io_memOp_i_sdata[55:48] : _GEN_94; // @[MAIN_MEMORY.scala 106:{77,77}]
  wire [7:0] _GEN_103 = 3'h3 == _T_47 ? io_memOp_i_sdata[55:48] : _GEN_95; // @[MAIN_MEMORY.scala 106:{77,77}]
  wire [7:0] _GEN_104 = 3'h4 == _T_47 ? io_memOp_i_sdata[55:48] : _GEN_96; // @[MAIN_MEMORY.scala 106:{77,77}]
  wire [7:0] _GEN_105 = 3'h5 == _T_47 ? io_memOp_i_sdata[55:48] : _GEN_97; // @[MAIN_MEMORY.scala 106:{77,77}]
  wire [7:0] _GEN_106 = 3'h6 == _T_47 ? io_memOp_i_sdata[55:48] : _GEN_98; // @[MAIN_MEMORY.scala 106:{77,77}]
  wire [7:0] _GEN_107 = 3'h7 == _T_47 ? io_memOp_i_sdata[55:48] : _GEN_99; // @[MAIN_MEMORY.scala 106:{77,77}]
  wire [7:0] _GEN_108 = store_en[6] ? _GEN_100 : _GEN_92; // @[MAIN_MEMORY.scala 106:57]
  wire [7:0] _GEN_109 = store_en[6] ? _GEN_101 : _GEN_93; // @[MAIN_MEMORY.scala 106:57]
  wire [7:0] _GEN_110 = store_en[6] ? _GEN_102 : _GEN_94; // @[MAIN_MEMORY.scala 106:57]
  wire [7:0] _GEN_111 = store_en[6] ? _GEN_103 : _GEN_95; // @[MAIN_MEMORY.scala 106:57]
  wire [7:0] _GEN_112 = store_en[6] ? _GEN_104 : _GEN_96; // @[MAIN_MEMORY.scala 106:57]
  wire [7:0] _GEN_113 = store_en[6] ? _GEN_105 : _GEN_97; // @[MAIN_MEMORY.scala 106:57]
  wire [7:0] _GEN_114 = store_en[6] ? _GEN_106 : _GEN_98; // @[MAIN_MEMORY.scala 106:57]
  wire [7:0] _GEN_115 = store_en[6] ? _GEN_107 : _GEN_99; // @[MAIN_MEMORY.scala 106:57]
  wire [2:0] _T_54 = 3'h7 + _T_4; // @[MAIN_MEMORY.scala 107:37]
  wire [7:0] _GEN_116 = 3'h0 == _T_54 ? io_memOp_i_sdata[63:56] : _GEN_108; // @[MAIN_MEMORY.scala 107:{77,77}]
  wire [7:0] _GEN_117 = 3'h1 == _T_54 ? io_memOp_i_sdata[63:56] : _GEN_109; // @[MAIN_MEMORY.scala 107:{77,77}]
  wire [7:0] _GEN_118 = 3'h2 == _T_54 ? io_memOp_i_sdata[63:56] : _GEN_110; // @[MAIN_MEMORY.scala 107:{77,77}]
  wire [7:0] _GEN_119 = 3'h3 == _T_54 ? io_memOp_i_sdata[63:56] : _GEN_111; // @[MAIN_MEMORY.scala 107:{77,77}]
  wire [7:0] _GEN_120 = 3'h4 == _T_54 ? io_memOp_i_sdata[63:56] : _GEN_112; // @[MAIN_MEMORY.scala 107:{77,77}]
  wire [7:0] _GEN_121 = 3'h5 == _T_54 ? io_memOp_i_sdata[63:56] : _GEN_113; // @[MAIN_MEMORY.scala 107:{77,77}]
  wire [7:0] _GEN_122 = 3'h6 == _T_54 ? io_memOp_i_sdata[63:56] : _GEN_114; // @[MAIN_MEMORY.scala 107:{77,77}]
  wire [7:0] _GEN_123 = 3'h7 == _T_54 ? io_memOp_i_sdata[63:56] : _GEN_115; // @[MAIN_MEMORY.scala 107:{77,77}]
  wire [7:0] _GEN_124 = store_en[7] ? _GEN_116 : _GEN_108; // @[MAIN_MEMORY.scala 107:57]
  wire [7:0] _GEN_125 = store_en[7] ? _GEN_117 : _GEN_109; // @[MAIN_MEMORY.scala 107:57]
  wire [7:0] _GEN_126 = store_en[7] ? _GEN_118 : _GEN_110; // @[MAIN_MEMORY.scala 107:57]
  wire [7:0] _GEN_127 = store_en[7] ? _GEN_119 : _GEN_111; // @[MAIN_MEMORY.scala 107:57]
  wire [7:0] _GEN_128 = store_en[7] ? _GEN_120 : _GEN_112; // @[MAIN_MEMORY.scala 107:57]
  wire [7:0] _GEN_129 = store_en[7] ? _GEN_121 : _GEN_113; // @[MAIN_MEMORY.scala 107:57]
  wire [7:0] _GEN_130 = store_en[7] ? _GEN_122 : _GEN_114; // @[MAIN_MEMORY.scala 107:57]
  wire [7:0] _GEN_131 = store_en[7] ? _GEN_123 : _GEN_115; // @[MAIN_MEMORY.scala 107:57]
  wire [7:0] temp_1 = io_memOp_i_is_store ? _GEN_125 : dword[15:8]; // @[MAIN_MEMORY.scala 99:23 61:39]
  wire [7:0] temp_0 = io_memOp_i_is_store ? _GEN_124 : dword[7:0]; // @[MAIN_MEMORY.scala 99:23 61:39]
  wire [7:0] temp_3 = io_memOp_i_is_store ? _GEN_127 : dword[31:24]; // @[MAIN_MEMORY.scala 99:23 61:39]
  wire [7:0] temp_2 = io_memOp_i_is_store ? _GEN_126 : dword[23:16]; // @[MAIN_MEMORY.scala 99:23 61:39]
  wire [7:0] temp_5 = io_memOp_i_is_store ? _GEN_129 : dword[47:40]; // @[MAIN_MEMORY.scala 99:23 61:39]
  wire [7:0] temp_4 = io_memOp_i_is_store ? _GEN_128 : dword[39:32]; // @[MAIN_MEMORY.scala 99:23 61:39]
  wire [7:0] temp_7 = io_memOp_i_is_store ? _GEN_131 : dword[63:56]; // @[MAIN_MEMORY.scala 99:23 61:39]
  wire [7:0] temp_6 = io_memOp_i_is_store ? _GEN_130 : dword[55:48]; // @[MAIN_MEMORY.scala 99:23 61:39]
  wire [63:0] _T_62 = {temp_7,temp_6,temp_5,temp_4,temp_3,temp_2,temp_1,temp_0}; // @[MAIN_MEMORY.scala 109:50]
  wire [94:0] _GEN_151 = _T_2 ? _loadVal_temp_T_2 : {{31'd0}, MMIO_RW_rdata}; // @[MAIN_MEMORY.scala 116:25 48:35 89:25]
  wire [63:0] loadVal_temp = _GEN_151[63:0]; // @[MAIN_MEMORY.scala 46:30]
  wire [7:0] _io_loadVal_o_T_1 = loadVal_temp[7:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _io_loadVal_o_T_3 = {{56{_io_loadVal_o_T_1[7]}},_io_loadVal_o_T_1}; // @[HELPERS.scala 13:80]
  wire [63:0] _io_loadVal_o_T_4 = io_memOp_i_unsigned ? loadVal_temp : _io_loadVal_o_T_3; // @[MAIN_MEMORY.scala 120:20]
  wire [15:0] _io_loadVal_o_T_6 = loadVal_temp[15:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _io_loadVal_o_T_8 = {{48{_io_loadVal_o_T_6[15]}},_io_loadVal_o_T_6}; // @[HELPERS.scala 13:80]
  wire [63:0] _io_loadVal_o_T_9 = io_memOp_i_unsigned ? loadVal_temp : _io_loadVal_o_T_8; // @[MAIN_MEMORY.scala 121:20]
  wire [31:0] _io_loadVal_o_T_11 = loadVal_temp[31:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _io_loadVal_o_T_13 = {{32{_io_loadVal_o_T_11[31]}},_io_loadVal_o_T_11}; // @[HELPERS.scala 13:80]
  wire [63:0] _io_loadVal_o_T_14 = io_memOp_i_unsigned ? loadVal_temp : _io_loadVal_o_T_13; // @[MAIN_MEMORY.scala 122:20]
  wire [63:0] _io_loadVal_o_T_16 = 4'h1 == io_memOp_i_length ? _io_loadVal_o_T_4 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _io_loadVal_o_T_18 = 4'h2 == io_memOp_i_length ? _io_loadVal_o_T_9 : _io_loadVal_o_T_16; // @[Mux.scala 81:58]
  wire [63:0] _io_loadVal_o_T_20 = 4'h4 == io_memOp_i_length ? _io_loadVal_o_T_14 : _io_loadVal_o_T_18; // @[Mux.scala 81:58]
  MMIO_RW MMIO_RW ( // @[MAIN_MEMORY.scala 39:25]
    .read_en(MMIO_RW_read_en),
    .write_en(MMIO_RW_write_en),
    .addr(MMIO_RW_addr),
    .wdata(MMIO_RW_wdata),
    .length(MMIO_RW_length),
    .rdata(MMIO_RW_rdata)
  );
  assign ram_io_inst_o_MPORT_en = 1'h1;
  assign ram_io_inst_o_MPORT_addr = _io_inst_o_T_1[21:2];
  assign ram_io_inst_o_MPORT_data = ram[ram_io_inst_o_MPORT_addr]; // @[MAIN_MEMORY.scala 25:18]
  assign ram_dword_MPORT_en = _T & _T_1;
  assign ram_dword_MPORT_addr = _dword_T_1[19:0];
  assign ram_dword_MPORT_data = ram[ram_dword_MPORT_addr]; // @[MAIN_MEMORY.scala 25:18]
  assign ram_dword_MPORT_1_en = _T & _T_1;
  assign ram_dword_MPORT_1_addr = addr[19:0];
  assign ram_dword_MPORT_1_data = ram[ram_dword_MPORT_1_addr]; // @[MAIN_MEMORY.scala 25:18]
  assign ram_MPORT_data = _T_62[63:32];
  assign ram_MPORT_addr = _dword_T_1[19:0];
  assign ram_MPORT_mask = 1'h1;
  assign ram_MPORT_en = _T_2 & io_memOp_i_is_store;
  assign ram_MPORT_1_data = _T_62[31:0];
  assign ram_MPORT_1_addr = addr[19:0];
  assign ram_MPORT_1_mask = 1'h1;
  assign ram_MPORT_1_en = _T_2 & io_memOp_i_is_store;
  assign io_inst_o = ram_io_inst_o_MPORT_data; // @[MAIN_MEMORY.scala 27:21]
  assign io_loadVal_o = 4'h8 == io_memOp_i_length ? loadVal_temp : _io_loadVal_o_T_20; // @[Mux.scala 81:58]
  assign MMIO_RW_read_en = _T_2 ? 1'h0 : io_memOp_i_is_load; // @[MAIN_MEMORY.scala 43:25 114:29 48:35]
  assign MMIO_RW_write_en = _T_2 ? 1'h0 : io_memOp_i_is_store; // @[MAIN_MEMORY.scala 44:25 115:29 48:35]
  assign MMIO_RW_addr = io_memOp_i_addr; // @[MAIN_MEMORY.scala 40:25]
  assign MMIO_RW_wdata = io_memOp_i_sdata; // @[MAIN_MEMORY.scala 42:25]
  assign MMIO_RW_length = io_memOp_i_length; // @[MAIN_MEMORY.scala 41:25]
  always @(posedge clock) begin
    if (ram_MPORT_en & ram_MPORT_mask) begin
      ram[ram_MPORT_addr] <= ram_MPORT_data; // @[MAIN_MEMORY.scala 25:18]
    end
    if (ram_MPORT_1_en & ram_MPORT_1_mask) begin
      ram[ram_MPORT_1_addr] <= ram_MPORT_1_data; // @[MAIN_MEMORY.scala 25:18]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
  integer initvar;
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  `endif // RANDOMIZE
  $readmemh("/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/img_file", ram);
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module TOP(
  input         clock,
  input         reset,
  input  [63:0] io_timer_i,
  output [63:0] io_csrData_csrVal,
  output [63:0] io_csrData_epc,
  output [63:0] io_csrData_tvec,
  output [63:0] io_csrData_cause,
  output [63:0] io_csrData_status,
  output [63:0] io_regs_0,
  output [63:0] io_regs_1,
  output [63:0] io_regs_2,
  output [63:0] io_regs_3,
  output [63:0] io_regs_4,
  output [63:0] io_regs_5,
  output [63:0] io_regs_6,
  output [63:0] io_regs_7,
  output [63:0] io_regs_8,
  output [63:0] io_regs_9,
  output [63:0] io_regs_10,
  output [63:0] io_regs_11,
  output [63:0] io_regs_12,
  output [63:0] io_regs_13,
  output [63:0] io_regs_14,
  output [63:0] io_regs_15,
  output [63:0] io_regs_16,
  output [63:0] io_regs_17,
  output [63:0] io_regs_18,
  output [63:0] io_regs_19,
  output [63:0] io_regs_20,
  output [63:0] io_regs_21,
  output [63:0] io_regs_22,
  output [63:0] io_regs_23,
  output [63:0] io_regs_24,
  output [63:0] io_regs_25,
  output [63:0] io_regs_26,
  output [63:0] io_regs_27,
  output [63:0] io_regs_28,
  output [63:0] io_regs_29,
  output [63:0] io_regs_30,
  output [63:0] io_regs_31,
  output [63:0] io_pc_o,
  output [31:0] io_inst_o,
  output [63:0] io_o1,
  output [63:0] io_o2,
  output [63:0] io_src1,
  output [63:0] io_src2
);
  wire  IF_clock; // @[TOP.scala 31:31]
  wire  IF_reset; // @[TOP.scala 31:31]
  wire  IF_io_branchOp_i_happen; // @[TOP.scala 31:31]
  wire [63:0] IF_io_branchOp_i_newPC; // @[TOP.scala 31:31]
  wire [31:0] IF_io_inst_i; // @[TOP.scala 31:31]
  wire [63:0] IF_io_pc_o; // @[TOP.scala 31:31]
  wire [31:0] IF_io_inst_o; // @[TOP.scala 31:31]
  wire [31:0] ID_io_inst_i; // @[TOP.scala 32:31]
  wire [63:0] ID_io_pc_i; // @[TOP.scala 32:31]
  wire [63:0] ID_io_rfData_i_rs1Val; // @[TOP.scala 32:31]
  wire [63:0] ID_io_rfData_i_rs2Val; // @[TOP.scala 32:31]
  wire [63:0] ID_io_rfData_i_a0; // @[TOP.scala 32:31]
  wire [63:0] ID_io_csrData_i_csrVal; // @[TOP.scala 32:31]
  wire [63:0] ID_io_csrData_i_epc; // @[TOP.scala 32:31]
  wire [63:0] ID_io_csrData_i_tvec; // @[TOP.scala 32:31]
  wire [4:0] ID_io_readOp_o_rs1; // @[TOP.scala 32:31]
  wire [4:0] ID_io_readOp_o_rs2; // @[TOP.scala 32:31]
  wire [11:0] ID_io_readOp_o_csrAddr; // @[TOP.scala 32:31]
  wire  ID_io_decInfo_o_writeOp_rf_wen; // @[TOP.scala 32:31]
  wire [4:0] ID_io_decInfo_o_writeOp_rf_rd; // @[TOP.scala 32:31]
  wire  ID_io_decInfo_o_writeOp_csr_wen; // @[TOP.scala 32:31]
  wire [63:0] ID_io_decInfo_o_writeOp_csr_wdata; // @[TOP.scala 32:31]
  wire [11:0] ID_io_decInfo_o_writeOp_csr_waddr; // @[TOP.scala 32:31]
  wire [63:0] ID_io_decInfo_o_aluOp_src1; // @[TOP.scala 32:31]
  wire [63:0] ID_io_decInfo_o_aluOp_src2; // @[TOP.scala 32:31]
  wire [4:0] ID_io_decInfo_o_aluOp_opt; // @[TOP.scala 32:31]
  wire  ID_io_decInfo_o_branchOp_happen; // @[TOP.scala 32:31]
  wire [63:0] ID_io_decInfo_o_branchOp_newPC; // @[TOP.scala 32:31]
  wire  ID_io_decInfo_o_memOp_is_load; // @[TOP.scala 32:31]
  wire  ID_io_decInfo_o_memOp_is_store; // @[TOP.scala 32:31]
  wire  ID_io_decInfo_o_memOp_unsigned; // @[TOP.scala 32:31]
  wire [3:0] ID_io_decInfo_o_memOp_length; // @[TOP.scala 32:31]
  wire [63:0] ID_io_decInfo_o_memOp_sdata; // @[TOP.scala 32:31]
  wire  ID_io_debug_o_exit; // @[TOP.scala 32:31]
  wire [63:0] ID_io_debug_o_a0; // @[TOP.scala 32:31]
  wire [63:0] ID_io_debug_o_pc; // @[TOP.scala 32:31]
  wire [31:0] ID_io_debug_o_inst; // @[TOP.scala 32:31]
  wire  EX_io_decInfo_i_writeOp_rf_wen; // @[TOP.scala 33:31]
  wire [4:0] EX_io_decInfo_i_writeOp_rf_rd; // @[TOP.scala 33:31]
  wire  EX_io_decInfo_i_writeOp_csr_wen; // @[TOP.scala 33:31]
  wire [63:0] EX_io_decInfo_i_writeOp_csr_wdata; // @[TOP.scala 33:31]
  wire [11:0] EX_io_decInfo_i_writeOp_csr_waddr; // @[TOP.scala 33:31]
  wire [63:0] EX_io_decInfo_i_aluOp_src1; // @[TOP.scala 33:31]
  wire [63:0] EX_io_decInfo_i_aluOp_src2; // @[TOP.scala 33:31]
  wire [4:0] EX_io_decInfo_i_aluOp_opt; // @[TOP.scala 33:31]
  wire  EX_io_decInfo_i_memOp_is_load; // @[TOP.scala 33:31]
  wire  EX_io_decInfo_i_memOp_is_store; // @[TOP.scala 33:31]
  wire  EX_io_decInfo_i_memOp_unsigned; // @[TOP.scala 33:31]
  wire [3:0] EX_io_decInfo_i_memOp_length; // @[TOP.scala 33:31]
  wire [63:0] EX_io_decInfo_i_memOp_sdata; // @[TOP.scala 33:31]
  wire  EX_io_writeOp_o_rf_wen; // @[TOP.scala 33:31]
  wire [4:0] EX_io_writeOp_o_rf_rd; // @[TOP.scala 33:31]
  wire [63:0] EX_io_writeOp_o_rf_wdata; // @[TOP.scala 33:31]
  wire  EX_io_writeOp_o_csr_wen; // @[TOP.scala 33:31]
  wire [63:0] EX_io_writeOp_o_csr_wdata; // @[TOP.scala 33:31]
  wire [11:0] EX_io_writeOp_o_csr_waddr; // @[TOP.scala 33:31]
  wire  EX_io_memOp_o_is_load; // @[TOP.scala 33:31]
  wire  EX_io_memOp_o_is_store; // @[TOP.scala 33:31]
  wire  EX_io_memOp_o_unsigned; // @[TOP.scala 33:31]
  wire [3:0] EX_io_memOp_o_length; // @[TOP.scala 33:31]
  wire [63:0] EX_io_memOp_o_addr; // @[TOP.scala 33:31]
  wire [63:0] EX_io_memOp_o_sdata; // @[TOP.scala 33:31]
  wire  EX_io_debug_i_exit; // @[TOP.scala 33:31]
  wire [63:0] EX_io_debug_i_a0; // @[TOP.scala 33:31]
  wire [63:0] EX_io_debug_i_pc; // @[TOP.scala 33:31]
  wire [31:0] EX_io_debug_i_inst; // @[TOP.scala 33:31]
  wire  EX_io_debug_o_exit; // @[TOP.scala 33:31]
  wire [63:0] EX_io_debug_o_a0; // @[TOP.scala 33:31]
  wire [63:0] EX_io_debug_o_pc; // @[TOP.scala 33:31]
  wire [31:0] EX_io_debug_o_inst; // @[TOP.scala 33:31]
  wire  MEM_io_writeOp_i_rf_wen; // @[TOP.scala 34:31]
  wire [4:0] MEM_io_writeOp_i_rf_rd; // @[TOP.scala 34:31]
  wire [63:0] MEM_io_writeOp_i_rf_wdata; // @[TOP.scala 34:31]
  wire  MEM_io_writeOp_i_csr_wen; // @[TOP.scala 34:31]
  wire [63:0] MEM_io_writeOp_i_csr_wdata; // @[TOP.scala 34:31]
  wire [11:0] MEM_io_writeOp_i_csr_waddr; // @[TOP.scala 34:31]
  wire  MEM_io_memOp_i_is_load; // @[TOP.scala 34:31]
  wire  MEM_io_memOp_i_is_store; // @[TOP.scala 34:31]
  wire  MEM_io_memOp_i_unsigned; // @[TOP.scala 34:31]
  wire [3:0] MEM_io_memOp_i_length; // @[TOP.scala 34:31]
  wire [63:0] MEM_io_memOp_i_addr; // @[TOP.scala 34:31]
  wire [63:0] MEM_io_memOp_i_sdata; // @[TOP.scala 34:31]
  wire [63:0] MEM_io_loadVal_i; // @[TOP.scala 34:31]
  wire  MEM_io_writeOp_o_rf_wen; // @[TOP.scala 34:31]
  wire [4:0] MEM_io_writeOp_o_rf_rd; // @[TOP.scala 34:31]
  wire [63:0] MEM_io_writeOp_o_rf_wdata; // @[TOP.scala 34:31]
  wire  MEM_io_writeOp_o_csr_wen; // @[TOP.scala 34:31]
  wire [63:0] MEM_io_writeOp_o_csr_wdata; // @[TOP.scala 34:31]
  wire [11:0] MEM_io_writeOp_o_csr_waddr; // @[TOP.scala 34:31]
  wire  MEM_io_debug_i_exit; // @[TOP.scala 34:31]
  wire [63:0] MEM_io_debug_i_a0; // @[TOP.scala 34:31]
  wire [63:0] MEM_io_debug_i_pc; // @[TOP.scala 34:31]
  wire [31:0] MEM_io_debug_i_inst; // @[TOP.scala 34:31]
  wire  MEM_io_debug_o_exit; // @[TOP.scala 34:31]
  wire [63:0] MEM_io_debug_o_a0; // @[TOP.scala 34:31]
  wire [63:0] MEM_io_debug_o_pc; // @[TOP.scala 34:31]
  wire [31:0] MEM_io_debug_o_inst; // @[TOP.scala 34:31]
  wire  WB_io_writeOp_i_rf_wen; // @[TOP.scala 35:31]
  wire [4:0] WB_io_writeOp_i_rf_rd; // @[TOP.scala 35:31]
  wire [63:0] WB_io_writeOp_i_rf_wdata; // @[TOP.scala 35:31]
  wire  WB_io_writeOp_i_csr_wen; // @[TOP.scala 35:31]
  wire [63:0] WB_io_writeOp_i_csr_wdata; // @[TOP.scala 35:31]
  wire [11:0] WB_io_writeOp_i_csr_waddr; // @[TOP.scala 35:31]
  wire  WB_io_writeOp_o_rf_wen; // @[TOP.scala 35:31]
  wire [4:0] WB_io_writeOp_o_rf_rd; // @[TOP.scala 35:31]
  wire [63:0] WB_io_writeOp_o_rf_wdata; // @[TOP.scala 35:31]
  wire  WB_io_writeOp_o_csr_wen; // @[TOP.scala 35:31]
  wire [63:0] WB_io_writeOp_o_csr_wdata; // @[TOP.scala 35:31]
  wire [11:0] WB_io_writeOp_o_csr_waddr; // @[TOP.scala 35:31]
  wire  WB_io_debug_exit; // @[TOP.scala 35:31]
  wire [63:0] WB_io_debug_a0; // @[TOP.scala 35:31]
  wire [63:0] WB_io_debug_pc; // @[TOP.scala 35:31]
  wire [31:0] WB_io_debug_inst; // @[TOP.scala 35:31]
  wire  Regfile_clock; // @[TOP.scala 36:31]
  wire  Regfile_reset; // @[TOP.scala 36:31]
  wire [4:0] Regfile_io_readRfOp_i_rs1; // @[TOP.scala 36:31]
  wire [4:0] Regfile_io_readRfOp_i_rs2; // @[TOP.scala 36:31]
  wire  Regfile_io_writeRfOp_i_wen; // @[TOP.scala 36:31]
  wire [4:0] Regfile_io_writeRfOp_i_rd; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_writeRfOp_i_wdata; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_readRes_o_rs1Val; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_readRes_o_rs2Val; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_readRes_o_a0; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_0; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_1; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_2; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_3; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_4; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_5; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_6; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_7; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_8; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_9; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_10; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_11; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_12; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_13; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_14; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_15; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_16; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_17; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_18; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_19; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_20; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_21; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_22; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_23; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_24; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_25; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_26; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_27; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_28; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_29; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_30; // @[TOP.scala 36:31]
  wire [63:0] Regfile_io_regs_o_31; // @[TOP.scala 36:31]
  wire  Csr_clock; // @[TOP.scala 37:31]
  wire  Csr_reset; // @[TOP.scala 37:31]
  wire [11:0] Csr_io_csrAddr_i; // @[TOP.scala 37:31]
  wire  Csr_io_writeOp_i_wen; // @[TOP.scala 37:31]
  wire [63:0] Csr_io_writeOp_i_wdata; // @[TOP.scala 37:31]
  wire [11:0] Csr_io_writeOp_i_waddr; // @[TOP.scala 37:31]
  wire [63:0] Csr_io_csrData_o_csrVal; // @[TOP.scala 37:31]
  wire [63:0] Csr_io_csrData_o_epc; // @[TOP.scala 37:31]
  wire [63:0] Csr_io_csrData_o_tvec; // @[TOP.scala 37:31]
  wire [63:0] Csr_io_csrData_o_cause; // @[TOP.scala 37:31]
  wire [63:0] Csr_io_csrData_o_status; // @[TOP.scala 37:31]
  wire  Main_Memory_clock; // @[TOP.scala 38:31]
  wire [63:0] Main_Memory_io_pc_i; // @[TOP.scala 38:31]
  wire  Main_Memory_io_memOp_i_is_load; // @[TOP.scala 38:31]
  wire  Main_Memory_io_memOp_i_is_store; // @[TOP.scala 38:31]
  wire  Main_Memory_io_memOp_i_unsigned; // @[TOP.scala 38:31]
  wire [3:0] Main_Memory_io_memOp_i_length; // @[TOP.scala 38:31]
  wire [63:0] Main_Memory_io_memOp_i_addr; // @[TOP.scala 38:31]
  wire [63:0] Main_Memory_io_memOp_i_sdata; // @[TOP.scala 38:31]
  wire [31:0] Main_Memory_io_inst_o; // @[TOP.scala 38:31]
  wire [63:0] Main_Memory_io_loadVal_o; // @[TOP.scala 38:31]
  IF IF ( // @[TOP.scala 31:31]
    .clock(IF_clock),
    .reset(IF_reset),
    .io_branchOp_i_happen(IF_io_branchOp_i_happen),
    .io_branchOp_i_newPC(IF_io_branchOp_i_newPC),
    .io_inst_i(IF_io_inst_i),
    .io_pc_o(IF_io_pc_o),
    .io_inst_o(IF_io_inst_o)
  );
  ID ID ( // @[TOP.scala 32:31]
    .io_inst_i(ID_io_inst_i),
    .io_pc_i(ID_io_pc_i),
    .io_rfData_i_rs1Val(ID_io_rfData_i_rs1Val),
    .io_rfData_i_rs2Val(ID_io_rfData_i_rs2Val),
    .io_rfData_i_a0(ID_io_rfData_i_a0),
    .io_csrData_i_csrVal(ID_io_csrData_i_csrVal),
    .io_csrData_i_epc(ID_io_csrData_i_epc),
    .io_csrData_i_tvec(ID_io_csrData_i_tvec),
    .io_readOp_o_rs1(ID_io_readOp_o_rs1),
    .io_readOp_o_rs2(ID_io_readOp_o_rs2),
    .io_readOp_o_csrAddr(ID_io_readOp_o_csrAddr),
    .io_decInfo_o_writeOp_rf_wen(ID_io_decInfo_o_writeOp_rf_wen),
    .io_decInfo_o_writeOp_rf_rd(ID_io_decInfo_o_writeOp_rf_rd),
    .io_decInfo_o_writeOp_csr_wen(ID_io_decInfo_o_writeOp_csr_wen),
    .io_decInfo_o_writeOp_csr_wdata(ID_io_decInfo_o_writeOp_csr_wdata),
    .io_decInfo_o_writeOp_csr_waddr(ID_io_decInfo_o_writeOp_csr_waddr),
    .io_decInfo_o_aluOp_src1(ID_io_decInfo_o_aluOp_src1),
    .io_decInfo_o_aluOp_src2(ID_io_decInfo_o_aluOp_src2),
    .io_decInfo_o_aluOp_opt(ID_io_decInfo_o_aluOp_opt),
    .io_decInfo_o_branchOp_happen(ID_io_decInfo_o_branchOp_happen),
    .io_decInfo_o_branchOp_newPC(ID_io_decInfo_o_branchOp_newPC),
    .io_decInfo_o_memOp_is_load(ID_io_decInfo_o_memOp_is_load),
    .io_decInfo_o_memOp_is_store(ID_io_decInfo_o_memOp_is_store),
    .io_decInfo_o_memOp_unsigned(ID_io_decInfo_o_memOp_unsigned),
    .io_decInfo_o_memOp_length(ID_io_decInfo_o_memOp_length),
    .io_decInfo_o_memOp_sdata(ID_io_decInfo_o_memOp_sdata),
    .io_debug_o_exit(ID_io_debug_o_exit),
    .io_debug_o_a0(ID_io_debug_o_a0),
    .io_debug_o_pc(ID_io_debug_o_pc),
    .io_debug_o_inst(ID_io_debug_o_inst)
  );
  EX EX ( // @[TOP.scala 33:31]
    .io_decInfo_i_writeOp_rf_wen(EX_io_decInfo_i_writeOp_rf_wen),
    .io_decInfo_i_writeOp_rf_rd(EX_io_decInfo_i_writeOp_rf_rd),
    .io_decInfo_i_writeOp_csr_wen(EX_io_decInfo_i_writeOp_csr_wen),
    .io_decInfo_i_writeOp_csr_wdata(EX_io_decInfo_i_writeOp_csr_wdata),
    .io_decInfo_i_writeOp_csr_waddr(EX_io_decInfo_i_writeOp_csr_waddr),
    .io_decInfo_i_aluOp_src1(EX_io_decInfo_i_aluOp_src1),
    .io_decInfo_i_aluOp_src2(EX_io_decInfo_i_aluOp_src2),
    .io_decInfo_i_aluOp_opt(EX_io_decInfo_i_aluOp_opt),
    .io_decInfo_i_memOp_is_load(EX_io_decInfo_i_memOp_is_load),
    .io_decInfo_i_memOp_is_store(EX_io_decInfo_i_memOp_is_store),
    .io_decInfo_i_memOp_unsigned(EX_io_decInfo_i_memOp_unsigned),
    .io_decInfo_i_memOp_length(EX_io_decInfo_i_memOp_length),
    .io_decInfo_i_memOp_sdata(EX_io_decInfo_i_memOp_sdata),
    .io_writeOp_o_rf_wen(EX_io_writeOp_o_rf_wen),
    .io_writeOp_o_rf_rd(EX_io_writeOp_o_rf_rd),
    .io_writeOp_o_rf_wdata(EX_io_writeOp_o_rf_wdata),
    .io_writeOp_o_csr_wen(EX_io_writeOp_o_csr_wen),
    .io_writeOp_o_csr_wdata(EX_io_writeOp_o_csr_wdata),
    .io_writeOp_o_csr_waddr(EX_io_writeOp_o_csr_waddr),
    .io_memOp_o_is_load(EX_io_memOp_o_is_load),
    .io_memOp_o_is_store(EX_io_memOp_o_is_store),
    .io_memOp_o_unsigned(EX_io_memOp_o_unsigned),
    .io_memOp_o_length(EX_io_memOp_o_length),
    .io_memOp_o_addr(EX_io_memOp_o_addr),
    .io_memOp_o_sdata(EX_io_memOp_o_sdata),
    .io_debug_i_exit(EX_io_debug_i_exit),
    .io_debug_i_a0(EX_io_debug_i_a0),
    .io_debug_i_pc(EX_io_debug_i_pc),
    .io_debug_i_inst(EX_io_debug_i_inst),
    .io_debug_o_exit(EX_io_debug_o_exit),
    .io_debug_o_a0(EX_io_debug_o_a0),
    .io_debug_o_pc(EX_io_debug_o_pc),
    .io_debug_o_inst(EX_io_debug_o_inst)
  );
  MEM MEM ( // @[TOP.scala 34:31]
    .io_writeOp_i_rf_wen(MEM_io_writeOp_i_rf_wen),
    .io_writeOp_i_rf_rd(MEM_io_writeOp_i_rf_rd),
    .io_writeOp_i_rf_wdata(MEM_io_writeOp_i_rf_wdata),
    .io_writeOp_i_csr_wen(MEM_io_writeOp_i_csr_wen),
    .io_writeOp_i_csr_wdata(MEM_io_writeOp_i_csr_wdata),
    .io_writeOp_i_csr_waddr(MEM_io_writeOp_i_csr_waddr),
    .io_memOp_i_is_load(MEM_io_memOp_i_is_load),
    .io_memOp_i_is_store(MEM_io_memOp_i_is_store),
    .io_memOp_i_unsigned(MEM_io_memOp_i_unsigned),
    .io_memOp_i_length(MEM_io_memOp_i_length),
    .io_memOp_i_addr(MEM_io_memOp_i_addr),
    .io_memOp_i_sdata(MEM_io_memOp_i_sdata),
    .io_loadVal_i(MEM_io_loadVal_i),
    .io_writeOp_o_rf_wen(MEM_io_writeOp_o_rf_wen),
    .io_writeOp_o_rf_rd(MEM_io_writeOp_o_rf_rd),
    .io_writeOp_o_rf_wdata(MEM_io_writeOp_o_rf_wdata),
    .io_writeOp_o_csr_wen(MEM_io_writeOp_o_csr_wen),
    .io_writeOp_o_csr_wdata(MEM_io_writeOp_o_csr_wdata),
    .io_writeOp_o_csr_waddr(MEM_io_writeOp_o_csr_waddr),
    .io_debug_i_exit(MEM_io_debug_i_exit),
    .io_debug_i_a0(MEM_io_debug_i_a0),
    .io_debug_i_pc(MEM_io_debug_i_pc),
    .io_debug_i_inst(MEM_io_debug_i_inst),
    .io_debug_o_exit(MEM_io_debug_o_exit),
    .io_debug_o_a0(MEM_io_debug_o_a0),
    .io_debug_o_pc(MEM_io_debug_o_pc),
    .io_debug_o_inst(MEM_io_debug_o_inst)
  );
  WB WB ( // @[TOP.scala 35:31]
    .io_writeOp_i_rf_wen(WB_io_writeOp_i_rf_wen),
    .io_writeOp_i_rf_rd(WB_io_writeOp_i_rf_rd),
    .io_writeOp_i_rf_wdata(WB_io_writeOp_i_rf_wdata),
    .io_writeOp_i_csr_wen(WB_io_writeOp_i_csr_wen),
    .io_writeOp_i_csr_wdata(WB_io_writeOp_i_csr_wdata),
    .io_writeOp_i_csr_waddr(WB_io_writeOp_i_csr_waddr),
    .io_writeOp_o_rf_wen(WB_io_writeOp_o_rf_wen),
    .io_writeOp_o_rf_rd(WB_io_writeOp_o_rf_rd),
    .io_writeOp_o_rf_wdata(WB_io_writeOp_o_rf_wdata),
    .io_writeOp_o_csr_wen(WB_io_writeOp_o_csr_wen),
    .io_writeOp_o_csr_wdata(WB_io_writeOp_o_csr_wdata),
    .io_writeOp_o_csr_waddr(WB_io_writeOp_o_csr_waddr),
    .io_debug_exit(WB_io_debug_exit),
    .io_debug_a0(WB_io_debug_a0),
    .io_debug_pc(WB_io_debug_pc),
    .io_debug_inst(WB_io_debug_inst)
  );
  Regfile Regfile ( // @[TOP.scala 36:31]
    .clock(Regfile_clock),
    .reset(Regfile_reset),
    .io_readRfOp_i_rs1(Regfile_io_readRfOp_i_rs1),
    .io_readRfOp_i_rs2(Regfile_io_readRfOp_i_rs2),
    .io_writeRfOp_i_wen(Regfile_io_writeRfOp_i_wen),
    .io_writeRfOp_i_rd(Regfile_io_writeRfOp_i_rd),
    .io_writeRfOp_i_wdata(Regfile_io_writeRfOp_i_wdata),
    .io_readRes_o_rs1Val(Regfile_io_readRes_o_rs1Val),
    .io_readRes_o_rs2Val(Regfile_io_readRes_o_rs2Val),
    .io_readRes_o_a0(Regfile_io_readRes_o_a0),
    .io_regs_o_0(Regfile_io_regs_o_0),
    .io_regs_o_1(Regfile_io_regs_o_1),
    .io_regs_o_2(Regfile_io_regs_o_2),
    .io_regs_o_3(Regfile_io_regs_o_3),
    .io_regs_o_4(Regfile_io_regs_o_4),
    .io_regs_o_5(Regfile_io_regs_o_5),
    .io_regs_o_6(Regfile_io_regs_o_6),
    .io_regs_o_7(Regfile_io_regs_o_7),
    .io_regs_o_8(Regfile_io_regs_o_8),
    .io_regs_o_9(Regfile_io_regs_o_9),
    .io_regs_o_10(Regfile_io_regs_o_10),
    .io_regs_o_11(Regfile_io_regs_o_11),
    .io_regs_o_12(Regfile_io_regs_o_12),
    .io_regs_o_13(Regfile_io_regs_o_13),
    .io_regs_o_14(Regfile_io_regs_o_14),
    .io_regs_o_15(Regfile_io_regs_o_15),
    .io_regs_o_16(Regfile_io_regs_o_16),
    .io_regs_o_17(Regfile_io_regs_o_17),
    .io_regs_o_18(Regfile_io_regs_o_18),
    .io_regs_o_19(Regfile_io_regs_o_19),
    .io_regs_o_20(Regfile_io_regs_o_20),
    .io_regs_o_21(Regfile_io_regs_o_21),
    .io_regs_o_22(Regfile_io_regs_o_22),
    .io_regs_o_23(Regfile_io_regs_o_23),
    .io_regs_o_24(Regfile_io_regs_o_24),
    .io_regs_o_25(Regfile_io_regs_o_25),
    .io_regs_o_26(Regfile_io_regs_o_26),
    .io_regs_o_27(Regfile_io_regs_o_27),
    .io_regs_o_28(Regfile_io_regs_o_28),
    .io_regs_o_29(Regfile_io_regs_o_29),
    .io_regs_o_30(Regfile_io_regs_o_30),
    .io_regs_o_31(Regfile_io_regs_o_31)
  );
  CSR Csr ( // @[TOP.scala 37:31]
    .clock(Csr_clock),
    .reset(Csr_reset),
    .io_csrAddr_i(Csr_io_csrAddr_i),
    .io_writeOp_i_wen(Csr_io_writeOp_i_wen),
    .io_writeOp_i_wdata(Csr_io_writeOp_i_wdata),
    .io_writeOp_i_waddr(Csr_io_writeOp_i_waddr),
    .io_csrData_o_csrVal(Csr_io_csrData_o_csrVal),
    .io_csrData_o_epc(Csr_io_csrData_o_epc),
    .io_csrData_o_tvec(Csr_io_csrData_o_tvec),
    .io_csrData_o_cause(Csr_io_csrData_o_cause),
    .io_csrData_o_status(Csr_io_csrData_o_status)
  );
  MAIN_MEMORY Main_Memory ( // @[TOP.scala 38:31]
    .clock(Main_Memory_clock),
    .io_pc_i(Main_Memory_io_pc_i),
    .io_memOp_i_is_load(Main_Memory_io_memOp_i_is_load),
    .io_memOp_i_is_store(Main_Memory_io_memOp_i_is_store),
    .io_memOp_i_unsigned(Main_Memory_io_memOp_i_unsigned),
    .io_memOp_i_length(Main_Memory_io_memOp_i_length),
    .io_memOp_i_addr(Main_Memory_io_memOp_i_addr),
    .io_memOp_i_sdata(Main_Memory_io_memOp_i_sdata),
    .io_inst_o(Main_Memory_io_inst_o),
    .io_loadVal_o(Main_Memory_io_loadVal_o)
  );
  assign io_csrData_csrVal = Csr_io_csrData_o_csrVal; // @[TOP.scala 73:17]
  assign io_csrData_epc = Csr_io_csrData_o_epc; // @[TOP.scala 73:17]
  assign io_csrData_tvec = Csr_io_csrData_o_tvec; // @[TOP.scala 73:17]
  assign io_csrData_cause = Csr_io_csrData_o_cause; // @[TOP.scala 73:17]
  assign io_csrData_status = Csr_io_csrData_o_status; // @[TOP.scala 73:17]
  assign io_regs_0 = Regfile_io_regs_o_0; // @[TOP.scala 72:17]
  assign io_regs_1 = Regfile_io_regs_o_1; // @[TOP.scala 72:17]
  assign io_regs_2 = Regfile_io_regs_o_2; // @[TOP.scala 72:17]
  assign io_regs_3 = Regfile_io_regs_o_3; // @[TOP.scala 72:17]
  assign io_regs_4 = Regfile_io_regs_o_4; // @[TOP.scala 72:17]
  assign io_regs_5 = Regfile_io_regs_o_5; // @[TOP.scala 72:17]
  assign io_regs_6 = Regfile_io_regs_o_6; // @[TOP.scala 72:17]
  assign io_regs_7 = Regfile_io_regs_o_7; // @[TOP.scala 72:17]
  assign io_regs_8 = Regfile_io_regs_o_8; // @[TOP.scala 72:17]
  assign io_regs_9 = Regfile_io_regs_o_9; // @[TOP.scala 72:17]
  assign io_regs_10 = Regfile_io_regs_o_10; // @[TOP.scala 72:17]
  assign io_regs_11 = Regfile_io_regs_o_11; // @[TOP.scala 72:17]
  assign io_regs_12 = Regfile_io_regs_o_12; // @[TOP.scala 72:17]
  assign io_regs_13 = Regfile_io_regs_o_13; // @[TOP.scala 72:17]
  assign io_regs_14 = Regfile_io_regs_o_14; // @[TOP.scala 72:17]
  assign io_regs_15 = Regfile_io_regs_o_15; // @[TOP.scala 72:17]
  assign io_regs_16 = Regfile_io_regs_o_16; // @[TOP.scala 72:17]
  assign io_regs_17 = Regfile_io_regs_o_17; // @[TOP.scala 72:17]
  assign io_regs_18 = Regfile_io_regs_o_18; // @[TOP.scala 72:17]
  assign io_regs_19 = Regfile_io_regs_o_19; // @[TOP.scala 72:17]
  assign io_regs_20 = Regfile_io_regs_o_20; // @[TOP.scala 72:17]
  assign io_regs_21 = Regfile_io_regs_o_21; // @[TOP.scala 72:17]
  assign io_regs_22 = Regfile_io_regs_o_22; // @[TOP.scala 72:17]
  assign io_regs_23 = Regfile_io_regs_o_23; // @[TOP.scala 72:17]
  assign io_regs_24 = Regfile_io_regs_o_24; // @[TOP.scala 72:17]
  assign io_regs_25 = Regfile_io_regs_o_25; // @[TOP.scala 72:17]
  assign io_regs_26 = Regfile_io_regs_o_26; // @[TOP.scala 72:17]
  assign io_regs_27 = Regfile_io_regs_o_27; // @[TOP.scala 72:17]
  assign io_regs_28 = Regfile_io_regs_o_28; // @[TOP.scala 72:17]
  assign io_regs_29 = Regfile_io_regs_o_29; // @[TOP.scala 72:17]
  assign io_regs_30 = Regfile_io_regs_o_30; // @[TOP.scala 72:17]
  assign io_regs_31 = Regfile_io_regs_o_31; // @[TOP.scala 72:17]
  assign io_pc_o = IF_io_pc_o; // @[TOP.scala 71:17]
  assign io_inst_o = IF_io_inst_o; // @[TOP.scala 70:17]
  assign io_o1 = WB_io_writeOp_o_rf_wdata; // @[TOP.scala 66:17]
  assign io_o2 = WB_io_writeOp_o_csr_wdata; // @[TOP.scala 67:17]
  assign io_src1 = ID_io_decInfo_o_aluOp_src1; // @[TOP.scala 68:17]
  assign io_src2 = ID_io_decInfo_o_aluOp_src2; // @[TOP.scala 69:17]
  assign IF_clock = clock;
  assign IF_reset = reset;
  assign IF_io_branchOp_i_happen = ID_io_decInfo_o_branchOp_happen; // @[TOP.scala 40:25]
  assign IF_io_branchOp_i_newPC = ID_io_decInfo_o_branchOp_newPC; // @[TOP.scala 40:25]
  assign IF_io_inst_i = Main_Memory_io_inst_o; // @[TOP.scala 41:25]
  assign ID_io_inst_i = IF_io_inst_o; // @[TOP.scala 47:23]
  assign ID_io_pc_i = IF_io_pc_o; // @[TOP.scala 48:23]
  assign ID_io_rfData_i_rs1Val = Regfile_io_readRes_o_rs1Val; // @[TOP.scala 50:23]
  assign ID_io_rfData_i_rs2Val = Regfile_io_readRes_o_rs2Val; // @[TOP.scala 50:23]
  assign ID_io_rfData_i_a0 = Regfile_io_readRes_o_a0; // @[TOP.scala 50:23]
  assign ID_io_csrData_i_csrVal = Csr_io_csrData_o_csrVal; // @[TOP.scala 49:23]
  assign ID_io_csrData_i_epc = Csr_io_csrData_o_epc; // @[TOP.scala 49:23]
  assign ID_io_csrData_i_tvec = Csr_io_csrData_o_tvec; // @[TOP.scala 49:23]
  assign EX_io_decInfo_i_writeOp_rf_wen = ID_io_decInfo_o_writeOp_rf_wen; // @[TOP.scala 57:25]
  assign EX_io_decInfo_i_writeOp_rf_rd = ID_io_decInfo_o_writeOp_rf_rd; // @[TOP.scala 57:25]
  assign EX_io_decInfo_i_writeOp_csr_wen = ID_io_decInfo_o_writeOp_csr_wen; // @[TOP.scala 57:25]
  assign EX_io_decInfo_i_writeOp_csr_wdata = ID_io_decInfo_o_writeOp_csr_wdata; // @[TOP.scala 57:25]
  assign EX_io_decInfo_i_writeOp_csr_waddr = ID_io_decInfo_o_writeOp_csr_waddr; // @[TOP.scala 57:25]
  assign EX_io_decInfo_i_aluOp_src1 = ID_io_decInfo_o_aluOp_src1; // @[TOP.scala 57:25]
  assign EX_io_decInfo_i_aluOp_src2 = ID_io_decInfo_o_aluOp_src2; // @[TOP.scala 57:25]
  assign EX_io_decInfo_i_aluOp_opt = ID_io_decInfo_o_aluOp_opt; // @[TOP.scala 57:25]
  assign EX_io_decInfo_i_memOp_is_load = ID_io_decInfo_o_memOp_is_load; // @[TOP.scala 57:25]
  assign EX_io_decInfo_i_memOp_is_store = ID_io_decInfo_o_memOp_is_store; // @[TOP.scala 57:25]
  assign EX_io_decInfo_i_memOp_unsigned = ID_io_decInfo_o_memOp_unsigned; // @[TOP.scala 57:25]
  assign EX_io_decInfo_i_memOp_length = ID_io_decInfo_o_memOp_length; // @[TOP.scala 57:25]
  assign EX_io_decInfo_i_memOp_sdata = ID_io_decInfo_o_memOp_sdata; // @[TOP.scala 57:25]
  assign EX_io_debug_i_exit = ID_io_debug_o_exit; // @[TOP.scala 79:21]
  assign EX_io_debug_i_a0 = ID_io_debug_o_a0; // @[TOP.scala 79:21]
  assign EX_io_debug_i_pc = ID_io_debug_o_pc; // @[TOP.scala 79:21]
  assign EX_io_debug_i_inst = ID_io_debug_o_inst; // @[TOP.scala 79:21]
  assign MEM_io_writeOp_i_rf_wen = EX_io_writeOp_o_rf_wen; // @[TOP.scala 59:25]
  assign MEM_io_writeOp_i_rf_rd = EX_io_writeOp_o_rf_rd; // @[TOP.scala 59:25]
  assign MEM_io_writeOp_i_rf_wdata = EX_io_writeOp_o_rf_wdata; // @[TOP.scala 59:25]
  assign MEM_io_writeOp_i_csr_wen = EX_io_writeOp_o_csr_wen; // @[TOP.scala 59:25]
  assign MEM_io_writeOp_i_csr_wdata = EX_io_writeOp_o_csr_wdata; // @[TOP.scala 59:25]
  assign MEM_io_writeOp_i_csr_waddr = EX_io_writeOp_o_csr_waddr; // @[TOP.scala 59:25]
  assign MEM_io_memOp_i_is_load = EX_io_memOp_o_is_load; // @[TOP.scala 60:25]
  assign MEM_io_memOp_i_is_store = EX_io_memOp_o_is_store; // @[TOP.scala 60:25]
  assign MEM_io_memOp_i_unsigned = EX_io_memOp_o_unsigned; // @[TOP.scala 60:25]
  assign MEM_io_memOp_i_length = EX_io_memOp_o_length; // @[TOP.scala 60:25]
  assign MEM_io_memOp_i_addr = EX_io_memOp_o_addr; // @[TOP.scala 60:25]
  assign MEM_io_memOp_i_sdata = EX_io_memOp_o_sdata; // @[TOP.scala 60:25]
  assign MEM_io_loadVal_i = Main_Memory_io_loadVal_o; // @[TOP.scala 61:25]
  assign MEM_io_debug_i_exit = EX_io_debug_o_exit; // @[TOP.scala 80:21]
  assign MEM_io_debug_i_a0 = EX_io_debug_o_a0; // @[TOP.scala 80:21]
  assign MEM_io_debug_i_pc = EX_io_debug_o_pc; // @[TOP.scala 80:21]
  assign MEM_io_debug_i_inst = EX_io_debug_o_inst; // @[TOP.scala 80:21]
  assign WB_io_writeOp_i_rf_wen = MEM_io_writeOp_o_rf_wen; // @[TOP.scala 63:25]
  assign WB_io_writeOp_i_rf_rd = MEM_io_writeOp_o_rf_rd; // @[TOP.scala 63:25]
  assign WB_io_writeOp_i_rf_wdata = MEM_io_writeOp_o_rf_wdata; // @[TOP.scala 63:25]
  assign WB_io_writeOp_i_csr_wen = MEM_io_writeOp_o_csr_wen; // @[TOP.scala 63:25]
  assign WB_io_writeOp_i_csr_wdata = MEM_io_writeOp_o_csr_wdata; // @[TOP.scala 63:25]
  assign WB_io_writeOp_i_csr_waddr = MEM_io_writeOp_o_csr_waddr; // @[TOP.scala 63:25]
  assign WB_io_debug_exit = MEM_io_debug_o_exit; // @[TOP.scala 81:21]
  assign WB_io_debug_a0 = MEM_io_debug_o_a0; // @[TOP.scala 81:21]
  assign WB_io_debug_pc = MEM_io_debug_o_pc; // @[TOP.scala 81:21]
  assign WB_io_debug_inst = MEM_io_debug_o_inst; // @[TOP.scala 81:21]
  assign Regfile_clock = clock;
  assign Regfile_reset = reset;
  assign Regfile_io_readRfOp_i_rs1 = ID_io_readOp_o_rs1; // @[TOP.scala 52:31]
  assign Regfile_io_readRfOp_i_rs2 = ID_io_readOp_o_rs2; // @[TOP.scala 52:31]
  assign Regfile_io_writeRfOp_i_wen = WB_io_writeOp_o_rf_wen; // @[TOP.scala 53:31]
  assign Regfile_io_writeRfOp_i_rd = WB_io_writeOp_o_rf_rd; // @[TOP.scala 53:31]
  assign Regfile_io_writeRfOp_i_wdata = WB_io_writeOp_o_rf_wdata; // @[TOP.scala 53:31]
  assign Csr_clock = clock;
  assign Csr_reset = reset;
  assign Csr_io_csrAddr_i = ID_io_readOp_o_csrAddr; // @[TOP.scala 55:25]
  assign Csr_io_writeOp_i_wen = WB_io_writeOp_o_csr_wen; // @[TOP.scala 56:25]
  assign Csr_io_writeOp_i_wdata = WB_io_writeOp_o_csr_wdata; // @[TOP.scala 56:25]
  assign Csr_io_writeOp_i_waddr = WB_io_writeOp_o_csr_waddr; // @[TOP.scala 56:25]
  assign Main_Memory_clock = clock;
  assign Main_Memory_io_pc_i = IF_io_pc_o; // @[TOP.scala 43:29]
  assign Main_Memory_io_memOp_i_is_load = MEM_io_memOp_i_is_load; // @[TOP.scala 45:29]
  assign Main_Memory_io_memOp_i_is_store = MEM_io_memOp_i_is_store; // @[TOP.scala 45:29]
  assign Main_Memory_io_memOp_i_unsigned = MEM_io_memOp_i_unsigned; // @[TOP.scala 45:29]
  assign Main_Memory_io_memOp_i_length = MEM_io_memOp_i_length; // @[TOP.scala 45:29]
  assign Main_Memory_io_memOp_i_addr = MEM_io_memOp_i_addr; // @[TOP.scala 45:29]
  assign Main_Memory_io_memOp_i_sdata = MEM_io_memOp_i_sdata; // @[TOP.scala 45:29]
endmodule
