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
  input         clock,
  input         reset,
  input  [31:0] io_inst_i,
  input  [63:0] io_pc_i,
  input  [63:0] io_regVal_i_rs1Val,
  input  [63:0] io_regVal_i_rs2Val,
  input  [63:0] io_regVal_i_a0,
  output [4:0]  io_readRfOp_o_rs1,
  output [4:0]  io_readRfOp_o_rs2,
  output        io_decInfo_o_writeRfOp_wen,
  output [4:0]  io_decInfo_o_writeRfOp_rd,
  output [63:0] io_decInfo_o_aluOp_src1,
  output [63:0] io_decInfo_o_aluOp_src2,
  output [4:0]  io_decInfo_o_aluOp_opt,
  output        io_decInfo_o_branchOp_happen,
  output [63:0] io_decInfo_o_branchOp_newPC,
  output        io_decInfo_o_memOp_isLoad,
  output        io_decInfo_o_memOp_isStore,
  output        io_decInfo_o_memOp_unsigned,
  output [1:0]  io_decInfo_o_memOp_length,
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
  wire [4:0] _decRes_T_193 = _decRes_T_115 ? 5'hb : _decRes_T_192; // @[Lookup.scala 34:39]
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
  wire [6:0] opcode = io_inst_i[6:0]; // @[ID.scala 34:25]
  wire [2:0] fct3 = io_inst_i[14:12]; // @[ID.scala 35:25]
  wire [11:0] _immI_T_2 = io_inst_i[31:20]; // @[HELPERS.scala 15:65]
  wire [63:0] immI = {{52{_immI_T_2[11]}},_immI_T_2}; // @[HELPERS.scala 15:80]
  wire  is_jalr = opcode == 7'h67; // @[ID.scala 63:37]
  wire [63:0] _io_decInfo_o_aluOp_src1_T = is_jalr ? io_pc_i : io_regVal_i_rs1Val; // @[ID.scala 65:46]
  wire [63:0] _io_decInfo_o_aluOp_src2_T_5 = is_jalr ? 64'h4 : immI; // @[ID.scala 66:46]
  wire [63:0] _io_decInfo_o_branchOp_newPC_T_6 = io_regVal_i_rs1Val + immI; // @[ID.scala 68:54]
  wire [12:0] _io_decInfo_o_branchOp_newPC_T_11 = {io_inst_i[31],io_inst_i[7],io_inst_i[30:25],io_inst_i[11:8],1'h0}; // @[Cat.scala 31:58]
  wire [11:0] _io_decInfo_o_branchOp_newPC_T_13 = _io_decInfo_o_branchOp_newPC_T_11[11:0]; // @[HELPERS.scala 15:65]
  wire [63:0] _io_decInfo_o_branchOp_newPC_T_15 = {{52{_io_decInfo_o_branchOp_newPC_T_13[11]}},
    _io_decInfo_o_branchOp_newPC_T_13}; // @[HELPERS.scala 15:80]
  wire [63:0] _io_decInfo_o_branchOp_newPC_T_17 = io_pc_i + _io_decInfo_o_branchOp_newPC_T_15; // @[ID.scala 84:50]
  wire  _io_decInfo_o_branchOp_happen_T_1 = io_regVal_i_rs1Val == io_regVal_i_rs2Val; // @[ID.scala 86:43]
  wire  _io_decInfo_o_branchOp_happen_T_2 = io_regVal_i_rs1Val != io_regVal_i_rs2Val; // @[ID.scala 87:43]
  wire  _io_decInfo_o_branchOp_happen_T_5 = $signed(io_regVal_i_rs1Val) < $signed(io_regVal_i_rs2Val); // @[ID.scala 88:51]
  wire  _io_decInfo_o_branchOp_happen_T_8 = $signed(io_regVal_i_rs1Val) >= $signed(io_regVal_i_rs2Val); // @[ID.scala 89:51]
  wire  _io_decInfo_o_branchOp_happen_T_9 = io_regVal_i_rs1Val < io_regVal_i_rs2Val; // @[ID.scala 90:44]
  wire  _io_decInfo_o_branchOp_happen_T_10 = io_regVal_i_rs1Val >= io_regVal_i_rs2Val; // @[ID.scala 91:44]
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
  wire [63:0] _io_decInfo_o_aluOp_src1_T_2 = opcode == 7'h37 ? 64'h0 : io_pc_i; // @[ID.scala 95:50]
  wire [19:0] _io_decInfo_o_aluOp_src2_T_8 = io_inst_i[31:12]; // @[HELPERS.scala 15:65]
  wire [63:0] _io_decInfo_o_aluOp_src2_T_10 = {{44{_io_decInfo_o_aluOp_src2_T_8[19]}},_io_decInfo_o_aluOp_src2_T_8}; // @[HELPERS.scala 15:80]
  wire [75:0] _io_decInfo_o_aluOp_src2_T_11 = {_io_decInfo_o_aluOp_src2_T_10, 12'h0}; // @[ID.scala 96:59]
  wire [20:0] _io_decInfo_o_branchOp_newPC_T_22 = {io_inst_i[31],io_inst_i[19:12],io_inst_i[20],io_inst_i[30:21],1'h0}; // @[Cat.scala 31:58]
  wire [11:0] _io_decInfo_o_branchOp_newPC_T_24 = _io_decInfo_o_branchOp_newPC_T_22[11:0]; // @[HELPERS.scala 15:65]
  wire [63:0] _io_decInfo_o_branchOp_newPC_T_26 = {{52{_io_decInfo_o_branchOp_newPC_T_24[11]}},
    _io_decInfo_o_branchOp_newPC_T_24}; // @[HELPERS.scala 15:80]
  wire [63:0] _io_decInfo_o_branchOp_newPC_T_28 = io_pc_i + _io_decInfo_o_branchOp_newPC_T_26; // @[ID.scala 102:50]
  wire [11:0] _io_decInfo_o_aluOp_src2_T_16 = {io_inst_i[31:25],io_inst_i[11:7]}; // @[HELPERS.scala 15:65]
  wire [63:0] _io_decInfo_o_aluOp_src2_T_18 = {{52{_io_decInfo_o_aluOp_src2_T_16[11]}},_io_decInfo_o_aluOp_src2_T_16}; // @[HELPERS.scala 15:80]
  wire [2:0] _GEN_2 = 5'h5 == decRes_0 ? fct3 : 3'h0; // @[ID.scala 57:21 109:43 38:35]
  wire [63:0] _GEN_3 = 5'h5 == decRes_0 ? io_regVal_i_rs2Val : 64'h0; // @[ID.scala 57:21 110:43 38:35]
  wire [63:0] _GEN_5 = 5'h5 == decRes_0 ? _io_decInfo_o_aluOp_src2_T_18 : io_regVal_i_rs2Val; // @[ID.scala 57:21 122:43 40:35]
  wire  _GEN_6 = 5'h5 == decRes_0 ? 1'h0 : 5'h6 == decRes_0; // @[ID.scala 57:21 52:25]
  wire [63:0] _GEN_9 = 5'h4 == decRes_0 ? _io_decInfo_o_branchOp_newPC_T_28 : 64'h0; // @[ID.scala 57:21 102:43 38:35]
  wire [63:0] _GEN_10 = 5'h4 == decRes_0 ? io_pc_i : io_regVal_i_rs1Val; // @[ID.scala 57:21 104:43]
  wire [63:0] _GEN_11 = 5'h4 == decRes_0 ? 64'h4 : _GEN_5; // @[ID.scala 57:21 105:43]
  wire  _GEN_12 = 5'h4 == decRes_0 ? 1'h0 : 5'h5 == decRes_0; // @[ID.scala 57:21 38:35]
  wire [2:0] _GEN_13 = 5'h4 == decRes_0 ? 3'h0 : _GEN_2; // @[ID.scala 57:21 38:35]
  wire [63:0] _GEN_14 = 5'h4 == decRes_0 ? 64'h0 : _GEN_3; // @[ID.scala 57:21 38:35]
  wire  _GEN_15 = 5'h4 == decRes_0 ? 1'h0 : _GEN_6; // @[ID.scala 57:21 52:25]
  wire [63:0] _GEN_16 = 5'h2 == decRes_0 ? _io_decInfo_o_aluOp_src1_T_2 : _GEN_10; // @[ID.scala 57:21 95:43]
  wire [75:0] _GEN_17 = 5'h2 == decRes_0 ? _io_decInfo_o_aluOp_src2_T_11 : {{12'd0}, _GEN_11}; // @[ID.scala 57:21 96:43]
  wire  _GEN_18 = 5'h2 == decRes_0 | 5'h4 == decRes_0; // @[ID.scala 57:21 97:43]
  wire  _GEN_19 = 5'h2 == decRes_0 ? 1'h0 : 5'h4 == decRes_0; // @[ID.scala 57:21 38:35]
  wire [63:0] _GEN_20 = 5'h2 == decRes_0 ? 64'h0 : _GEN_9; // @[ID.scala 57:21 38:35]
  wire  _GEN_21 = 5'h2 == decRes_0 ? 1'h0 : _GEN_12; // @[ID.scala 57:21 38:35]
  wire [2:0] _GEN_22 = 5'h2 == decRes_0 ? 3'h0 : _GEN_13; // @[ID.scala 57:21 38:35]
  wire [63:0] _GEN_23 = 5'h2 == decRes_0 ? 64'h0 : _GEN_14; // @[ID.scala 57:21 38:35]
  wire  _GEN_24 = 5'h2 == decRes_0 ? 1'h0 : _GEN_15; // @[ID.scala 57:21 52:25]
  wire [63:0] _GEN_25 = 5'h3 == decRes_0 ? _io_decInfo_o_branchOp_newPC_T_17 : _GEN_20; // @[ID.scala 57:21 84:43]
  wire  _GEN_26 = 5'h3 == decRes_0 ? _io_decInfo_o_branchOp_happen_T_22 : _GEN_19; // @[ID.scala 57:21 85:43]
  wire [63:0] _GEN_27 = 5'h3 == decRes_0 ? io_regVal_i_rs1Val : _GEN_16; // @[ID.scala 57:21 39:35]
  wire [75:0] _GEN_28 = 5'h3 == decRes_0 ? {{12'd0}, io_regVal_i_rs2Val} : _GEN_17; // @[ID.scala 57:21 40:35]
  wire  _GEN_29 = 5'h3 == decRes_0 ? 1'h0 : _GEN_18; // @[ID.scala 57:21 38:35]
  wire  _GEN_30 = 5'h3 == decRes_0 ? 1'h0 : _GEN_21; // @[ID.scala 57:21 38:35]
  wire [2:0] _GEN_31 = 5'h3 == decRes_0 ? 3'h0 : _GEN_22; // @[ID.scala 57:21 38:35]
  wire [63:0] _GEN_32 = 5'h3 == decRes_0 ? 64'h0 : _GEN_23; // @[ID.scala 57:21 38:35]
  wire  _GEN_33 = 5'h3 == decRes_0 ? 1'h0 : _GEN_24; // @[ID.scala 57:21 52:25]
  wire [63:0] _GEN_34 = 5'h0 == decRes_0 ? io_regVal_i_rs1Val : _GEN_27; // @[ID.scala 57:21 77:43]
  wire [75:0] _GEN_35 = 5'h0 == decRes_0 ? {{12'd0}, io_regVal_i_rs2Val} : _GEN_28; // @[ID.scala 57:21 78:43]
  wire  _GEN_36 = 5'h0 == decRes_0 | _GEN_29; // @[ID.scala 57:21 79:43]
  wire [63:0] _GEN_37 = 5'h0 == decRes_0 ? 64'h0 : _GEN_25; // @[ID.scala 57:21 38:35]
  wire  _GEN_38 = 5'h0 == decRes_0 ? 1'h0 : _GEN_26; // @[ID.scala 57:21 38:35]
  wire  _GEN_39 = 5'h0 == decRes_0 ? 1'h0 : _GEN_30; // @[ID.scala 57:21 38:35]
  wire [2:0] _GEN_40 = 5'h0 == decRes_0 ? 3'h0 : _GEN_31; // @[ID.scala 57:21 38:35]
  wire [63:0] _GEN_41 = 5'h0 == decRes_0 ? 64'h0 : _GEN_32; // @[ID.scala 57:21 38:35]
  wire  _GEN_42 = 5'h0 == decRes_0 ? 1'h0 : _GEN_33; // @[ID.scala 57:21 52:25]
  wire  _GEN_43 = 5'h1 == decRes_0 | _GEN_36; // @[ID.scala 57:21 62:43]
  wire [63:0] _GEN_44 = 5'h1 == decRes_0 ? _io_decInfo_o_aluOp_src1_T : _GEN_34; // @[ID.scala 57:21 65:39]
  wire [75:0] _GEN_45 = 5'h1 == decRes_0 ? {{12'd0}, _io_decInfo_o_aluOp_src2_T_5} : _GEN_35; // @[ID.scala 57:21 66:39]
  wire  _GEN_46 = 5'h1 == decRes_0 ? is_jalr : _GEN_38; // @[ID.scala 57:21 67:43]
  wire [63:0] _GEN_47 = 5'h1 == decRes_0 ? _io_decInfo_o_branchOp_newPC_T_6 : _GEN_37; // @[ID.scala 57:21 68:43]
  wire  _GEN_48 = 5'h1 == decRes_0 & opcode == 7'h3; // @[ID.scala 57:21 38:35 70:43]
  wire [2:0] _GEN_49 = 5'h1 == decRes_0 ? {{1'd0}, fct3[1:0]} : _GEN_40; // @[ID.scala 57:21 71:43]
  wire  _GEN_50 = 5'h1 == decRes_0 & fct3[2]; // @[ID.scala 57:21 38:35 73:43]
  wire  _GEN_51 = 5'h1 == decRes_0 ? 1'h0 : _GEN_39; // @[ID.scala 57:21 38:35]
  wire [63:0] _GEN_52 = 5'h1 == decRes_0 ? 64'h0 : _GEN_41; // @[ID.scala 57:21 38:35]
  wire  _GEN_53 = 5'h1 == decRes_0 ? 1'h0 : _GEN_42; // @[ID.scala 57:21 52:25]
  wire [75:0] _GEN_57 = 5'h7 == decRes_0 ? {{12'd0}, io_regVal_i_rs2Val} : _GEN_45; // @[ID.scala 57:21 40:35]
  wire [2:0] _GEN_61 = 5'h7 == decRes_0 ? 3'h0 : _GEN_49; // @[ID.scala 57:21 38:35]
  assign io_readRfOp_o_rs1 = io_inst_i[19:15]; // @[ID.scala 45:32]
  assign io_readRfOp_o_rs2 = io_inst_i[24:20]; // @[ID.scala 46:32]
  assign io_decInfo_o_writeRfOp_wen = 5'h7 == decRes_0 ? 1'h0 : _GEN_43; // @[ID.scala 57:21 38:35]
  assign io_decInfo_o_writeRfOp_rd = io_inst_i[11:7]; // @[ID.scala 42:42]
  assign io_decInfo_o_aluOp_src1 = 5'h7 == decRes_0 ? io_regVal_i_rs1Val : _GEN_44; // @[ID.scala 57:21 39:35]
  assign io_decInfo_o_aluOp_src2 = _GEN_57[63:0];
  assign io_decInfo_o_aluOp_opt = _decRes_T_1 ? 5'h0 : _decRes_T_249; // @[Lookup.scala 34:39]
  assign io_decInfo_o_branchOp_happen = 5'h7 == decRes_0 ? 1'h0 : _GEN_46; // @[ID.scala 57:21 38:35]
  assign io_decInfo_o_branchOp_newPC = 5'h7 == decRes_0 ? 64'h0 : _GEN_47; // @[ID.scala 57:21 38:35]
  assign io_decInfo_o_memOp_isLoad = 5'h7 == decRes_0 ? 1'h0 : _GEN_48; // @[ID.scala 57:21 38:35]
  assign io_decInfo_o_memOp_isStore = 5'h7 == decRes_0 ? 1'h0 : _GEN_51; // @[ID.scala 57:21 38:35]
  assign io_decInfo_o_memOp_unsigned = 5'h7 == decRes_0 ? 1'h0 : _GEN_50; // @[ID.scala 57:21 38:35]
  assign io_decInfo_o_memOp_length = _GEN_61[1:0];
  assign io_decInfo_o_memOp_sdata = 5'h7 == decRes_0 ? 64'h0 : _GEN_52; // @[ID.scala 57:21 38:35]
  assign io_debug_o_exit = 5'h7 == decRes_0 ? &io_inst_i : _GEN_53; // @[ID.scala 57:21 59:31]
  assign io_debug_o_a0 = io_regVal_i_a0; // @[ID.scala 51:25]
  assign io_debug_o_pc = io_pc_i; // @[ID.scala 48:25]
  assign io_debug_o_inst = io_inst_i; // @[ID.scala 49:25]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"pc = %x, inst = %x\n\n",io_pc_i,io_inst_i); // @[ID.scala 135:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module EX(
  input         io_decInfo_i_writeRfOp_wen,
  input  [4:0]  io_decInfo_i_writeRfOp_rd,
  input  [63:0] io_decInfo_i_aluOp_src1,
  input  [63:0] io_decInfo_i_aluOp_src2,
  input  [4:0]  io_decInfo_i_aluOp_opt,
  input         io_decInfo_i_memOp_isLoad,
  input         io_decInfo_i_memOp_isStore,
  input         io_decInfo_i_memOp_unsigned,
  input  [1:0]  io_decInfo_i_memOp_length,
  input  [63:0] io_decInfo_i_memOp_sdata,
  output        io_writeRfOp_o_wen,
  output [4:0]  io_writeRfOp_o_rd,
  output [63:0] io_writeRfOp_o_wdata,
  output        io_memOp_o_isLoad,
  output        io_memOp_o_isStore,
  output        io_memOp_o_unsigned,
  output [1:0]  io_memOp_o_length,
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
  wire [31:0] _aluRes_T_34 = io_decInfo_i_aluOp_src1[31:0] + io_decInfo_i_aluOp_src2[31:0]; // @[HELPERS.scala 15:65]
  wire [63:0] _aluRes_T_36 = {{32{_aluRes_T_34[31]}},_aluRes_T_34}; // @[HELPERS.scala 15:80]
  wire [31:0] _aluRes_T_42 = io_decInfo_i_aluOp_src1[31:0] - io_decInfo_i_aluOp_src2[31:0]; // @[HELPERS.scala 15:65]
  wire [63:0] _aluRes_T_44 = {{32{_aluRes_T_42[31]}},_aluRes_T_42}; // @[HELPERS.scala 15:80]
  wire [63:0] _aluRes_T_48 = io_decInfo_i_aluOp_src1[31:0] * io_decInfo_i_aluOp_src2[31:0]; // @[EX.scala 37:37]
  wire [31:0] _aluRes_T_50 = _aluRes_T_48[31:0]; // @[HELPERS.scala 15:65]
  wire [63:0] _aluRes_T_52 = {{32{_aluRes_T_50[31]}},_aluRes_T_50}; // @[HELPERS.scala 15:80]
  wire [62:0] _GEN_1 = {{31'd0}, io_decInfo_i_aluOp_src1[31:0]}; // @[EX.scala 38:39]
  wire [62:0] _aluRes_T_55 = _GEN_1 << io_decInfo_i_aluOp_src2[4:0]; // @[EX.scala 38:39]
  wire [31:0] _aluRes_T_58 = _aluRes_T_55[31:0]; // @[HELPERS.scala 15:65]
  wire [63:0] _aluRes_T_60 = {{32{_aluRes_T_58[31]}},_aluRes_T_58}; // @[HELPERS.scala 15:80]
  wire [31:0] _aluRes_T_66 = io_decInfo_i_aluOp_src1[31:0] >> io_decInfo_i_aluOp_src2[4:0]; // @[HELPERS.scala 15:65]
  wire [63:0] _aluRes_T_68 = {{32{_aluRes_T_66[31]}},_aluRes_T_66}; // @[HELPERS.scala 15:80]
  wire [31:0] _aluRes_T_70 = io_decInfo_i_aluOp_src1[31:0]; // @[EX.scala 40:39]
  wire [31:0] _aluRes_T_75 = $signed(_aluRes_T_70) >>> io_decInfo_i_aluOp_src2[4:0]; // @[HELPERS.scala 15:65]
  wire [63:0] _aluRes_T_77 = {{32{_aluRes_T_75[31]}},_aluRes_T_75}; // @[HELPERS.scala 15:80]
  wire [64:0] _aluRes_T_79 = {1'b0,$signed(io_decInfo_i_aluOp_src2)}; // @[EX.scala 43:35]
  wire [128:0] _aluRes_T_80 = $signed(io_decInfo_i_aluOp_src1) * $signed(_aluRes_T_79); // @[EX.scala 43:35]
  wire [127:0] _aluRes_T_83 = _aluRes_T_80[127:0]; // @[EX.scala 43:43]
  wire [64:0] _aluRes_T_93 = $signed(io_decInfo_i_aluOp_src1) / $signed(io_decInfo_i_aluOp_src2); // @[EX.scala 46:49]
  wire [63:0] _aluRes_T_94 = io_decInfo_i_aluOp_src1 / io_decInfo_i_aluOp_src2; // @[EX.scala 47:27]
  wire [63:0] _aluRes_T_98 = $signed(io_decInfo_i_aluOp_src1) % $signed(io_decInfo_i_aluOp_src2); // @[EX.scala 48:49]
  wire [63:0] _aluRes_T_99 = io_decInfo_i_aluOp_src1 % io_decInfo_i_aluOp_src2; // @[EX.scala 49:27]
  wire [31:0] _aluRes_T_103 = io_decInfo_i_aluOp_src2[31:0]; // @[EX.scala 51:60]
  wire [31:0] _aluRes_T_107 = $signed(_aluRes_T_70) % $signed(_aluRes_T_103); // @[HELPERS.scala 15:65]
  wire [63:0] _aluRes_T_109 = {{32{_aluRes_T_107[31]}},_aluRes_T_107}; // @[HELPERS.scala 15:80]
  wire [32:0] _aluRes_T_115 = $signed(_aluRes_T_70) / $signed(_aluRes_T_103); // @[EX.scala 52:68]
  wire [31:0] _aluRes_T_117 = _aluRes_T_115[31:0]; // @[HELPERS.scala 15:65]
  wire [63:0] _aluRes_T_119 = {{32{_aluRes_T_117[31]}},_aluRes_T_117}; // @[HELPERS.scala 15:80]
  wire [31:0] _aluRes_T_124 = io_decInfo_i_aluOp_src1[31:0] / io_decInfo_i_aluOp_src2[31:0]; // @[HELPERS.scala 15:65]
  wire [63:0] _aluRes_T_126 = {{32{_aluRes_T_124[31]}},_aluRes_T_124}; // @[HELPERS.scala 15:80]
  wire [31:0] _aluRes_T_131 = io_decInfo_i_aluOp_src1[31:0] % io_decInfo_i_aluOp_src2[31:0]; // @[HELPERS.scala 15:65]
  wire [63:0] _aluRes_T_133 = {{32{_aluRes_T_131[31]}},_aluRes_T_131}; // @[HELPERS.scala 15:80]
  wire [63:0] _aluRes_T_135 = 5'h1 == io_decInfo_i_aluOp_opt ? _aluRes_T_3 : _aluRes_T_1; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_137 = 5'h2 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_6} : _aluRes_T_135; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_139 = 5'h3 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_8} : _aluRes_T_137; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_141 = 5'hb == io_decInfo_i_aluOp_opt ? _aluRes_T_13[63:0] : _aluRes_T_139; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_143 = 5'hd == io_decInfo_i_aluOp_opt ? _aluRes_T_15 : {{64'd0}, _aluRes_T_141}; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_145 = 5'hc == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_15[127:64]} : _aluRes_T_143; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_147 = 5'h4 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_18} : _aluRes_T_145; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_149 = 5'h5 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_19} : _aluRes_T_147; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_151 = 5'h6 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_20} : _aluRes_T_149; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_153 = 5'h7 == io_decInfo_i_aluOp_opt ? {{1'd0}, _aluRes_T_22} : _aluRes_T_151; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_155 = 5'h8 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_24} : _aluRes_T_153; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_157 = 5'h9 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_28} : _aluRes_T_155; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_159 = 5'h19 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_36} : _aluRes_T_157; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_161 = 5'h1a == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_44} : _aluRes_T_159; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_163 = 5'h18 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_52} : _aluRes_T_161; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_165 = 5'h1b == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_60} : _aluRes_T_163; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_167 = 5'h1c == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_68} : _aluRes_T_165; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_169 = 5'h1d == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_77} : _aluRes_T_167; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_171 = 5'he == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_83[127:64]} : _aluRes_T_169; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_173 = 5'hc == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_13[127:64]} : _aluRes_T_171; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_175 = 5'h10 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_93} : _aluRes_T_173; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_177 = 5'h12 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_94} : _aluRes_T_175; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_179 = 5'h11 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_98} : _aluRes_T_177; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_181 = 5'h13 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_99} : _aluRes_T_179; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_183 = 5'h14 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_109} : _aluRes_T_181; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_185 = 5'h15 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_119} : _aluRes_T_183; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_187 = 5'h16 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_126} : _aluRes_T_185; // @[Mux.scala 81:58]
  wire [127:0] _aluRes_T_189 = 5'h17 == io_decInfo_i_aluOp_opt ? {{64'd0}, _aluRes_T_133} : _aluRes_T_187; // @[Mux.scala 81:58]
  assign io_writeRfOp_o_wen = io_decInfo_i_writeRfOp_wen; // @[EX.scala 60:27]
  assign io_writeRfOp_o_rd = io_decInfo_i_writeRfOp_rd; // @[EX.scala 60:27]
  assign io_writeRfOp_o_wdata = _aluRes_T_189[63:0]; // @[EX.scala 20:23 21:13]
  assign io_memOp_o_isLoad = io_decInfo_i_memOp_isLoad; // @[EX.scala 63:27]
  assign io_memOp_o_isStore = io_decInfo_i_memOp_isStore; // @[EX.scala 63:27]
  assign io_memOp_o_unsigned = io_decInfo_i_memOp_unsigned; // @[EX.scala 63:27]
  assign io_memOp_o_length = io_decInfo_i_memOp_length; // @[EX.scala 63:27]
  assign io_memOp_o_addr = _aluRes_T_189[63:0]; // @[EX.scala 20:23 21:13]
  assign io_memOp_o_sdata = io_decInfo_i_memOp_sdata; // @[EX.scala 63:27]
  assign io_debug_o_exit = io_debug_i_exit; // @[EX.scala 74:17]
  assign io_debug_o_a0 = io_debug_i_a0; // @[EX.scala 74:17]
  assign io_debug_o_pc = io_debug_i_pc; // @[EX.scala 74:17]
  assign io_debug_o_inst = io_debug_i_inst; // @[EX.scala 74:17]
endmodule
module MEM(
  input         clock,
  input         reset,
  input         io_writeRfOp_i_wen,
  input  [4:0]  io_writeRfOp_i_rd,
  input  [63:0] io_writeRfOp_i_wdata,
  input         io_memOp_i_isLoad,
  input         io_memOp_i_isStore,
  input         io_memOp_i_unsigned,
  input  [1:0]  io_memOp_i_length,
  input  [63:0] io_memOp_i_addr,
  input  [63:0] io_memOp_i_sdata,
  input  [63:0] io_loadVal_i,
  output        io_writeRfOp_o_wen,
  output [4:0]  io_writeRfOp_o_rd,
  output [63:0] io_writeRfOp_o_wdata,
  input         io_debug_i_exit,
  input  [63:0] io_debug_i_a0,
  input  [63:0] io_debug_i_pc,
  input  [31:0] io_debug_i_inst,
  output        io_debug_o_exit,
  output [63:0] io_debug_o_a0,
  output [63:0] io_debug_o_pc,
  output [31:0] io_debug_o_inst
);
  wire  _T = 2'h0 == io_memOp_i_length; // @[MEM.scala 25:34]
  wire  _T_3 = ~reset; // @[MEM.scala 27:23]
  wire  _T_4 = 2'h1 == io_memOp_i_length; // @[MEM.scala 25:34]
  wire  _T_8 = 2'h2 == io_memOp_i_length; // @[MEM.scala 25:34]
  wire  _T_12 = 2'h3 == io_memOp_i_length; // @[MEM.scala 25:34]
  wire  _GEN_2 = io_memOp_i_isStore & ~_T; // @[MEM.scala 30:23]
  wire  _GEN_7 = _GEN_2 & ~_T_4; // @[MEM.scala 33:23]
  assign io_writeRfOp_o_wen = io_writeRfOp_i_wen; // @[MEM.scala 46:29]
  assign io_writeRfOp_o_rd = io_writeRfOp_i_rd; // @[MEM.scala 46:29]
  assign io_writeRfOp_o_wdata = io_memOp_i_isLoad ? io_loadVal_i : io_writeRfOp_i_wdata; // @[MEM.scala 47:36]
  assign io_debug_o_exit = io_debug_i_exit; // @[MEM.scala 55:21]
  assign io_debug_o_a0 = io_debug_i_a0; // @[MEM.scala 55:21]
  assign io_debug_o_pc = io_debug_i_pc; // @[MEM.scala 55:21]
  assign io_debug_o_inst = io_debug_i_inst; // @[MEM.scala 55:21]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_memOp_i_isStore & _T & ~reset) begin
          $fwrite(32'h80000002,"sb: 0x%x    =>  pmem[0x%x]\n",io_memOp_i_sdata[7:0],io_memOp_i_addr); // @[MEM.scala 27:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_memOp_i_isStore & ~_T & _T_4 & _T_3) begin
          $fwrite(32'h80000002,"sh: 0x%x    =>  pmem[0x%x]\n",io_memOp_i_sdata[15:0],io_memOp_i_addr); // @[MEM.scala 30:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_2 & ~_T_4 & _T_8 & _T_3) begin
          $fwrite(32'h80000002,"sw: 0x%x    =>  pmem[0x%x]\n",io_memOp_i_sdata[31:0],io_memOp_i_addr); // @[MEM.scala 33:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_7 & ~_T_8 & _T_12 & _T_3) begin
          $fwrite(32'h80000002,"sd: 0x%x    =>  pmem[0x%x]\n",io_memOp_i_sdata,io_memOp_i_addr); // @[MEM.scala 36:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_memOp_i_isLoad & _T_3) begin
          $fwrite(32'h80000002,"[x%d]   <=  0x%x\n",io_writeRfOp_i_rd,io_loadVal_i); // @[MEM.scala 43:15]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module WB(
  input         clock,
  input         reset,
  input         io_writeRfOp_i_wen,
  input  [4:0]  io_writeRfOp_i_rd,
  input  [63:0] io_writeRfOp_i_wdata,
  output        io_writeRfOp_o_wen,
  output [4:0]  io_writeRfOp_o_rd,
  output [63:0] io_writeRfOp_o_wdata,
  input         io_debug_exit,
  input  [63:0] io_debug_a0,
  input  [63:0] io_debug_pc,
  input  [31:0] io_debug_inst
);
  wire  DEBUG_exit; // @[WB.scala 16:23]
  wire [63:0] DEBUG_pc; // @[WB.scala 16:23]
  wire [31:0] DEBUG_inst; // @[WB.scala 16:23]
  wire [63:0] DEBUG_a0; // @[WB.scala 16:23]
  wire [63:0] foo = io_writeRfOp_i_wen ? io_writeRfOp_i_wdata : 64'h0; // @[WB.scala 20:18]
  DEBUG DEBUG ( // @[WB.scala 16:23]
    .exit(DEBUG_exit),
    .pc(DEBUG_pc),
    .inst(DEBUG_inst),
    .a0(DEBUG_a0)
  );
  assign io_writeRfOp_o_wen = io_writeRfOp_i_wen; // @[WB.scala 13:21]
  assign io_writeRfOp_o_rd = io_writeRfOp_i_rd; // @[WB.scala 13:21]
  assign io_writeRfOp_o_wdata = io_writeRfOp_i_wdata; // @[WB.scala 13:21]
  assign DEBUG_exit = io_debug_exit; // @[WB.scala 24:21]
  assign DEBUG_pc = io_debug_pc; // @[WB.scala 23:21]
  assign DEBUG_inst = io_debug_inst; // @[WB.scala 25:21]
  assign DEBUG_a0 = io_debug_a0; // @[WB.scala 26:21]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset) begin
          $fwrite(32'h80000002,"\nwdata = %x\n",foo); // @[WB.scala 21:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
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
  output [63:0] io_readRes_o_a0
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
  reg [63:0] registers_0; // @[REGFILE.scala 11:31]
  reg [63:0] registers_1; // @[REGFILE.scala 11:31]
  reg [63:0] registers_2; // @[REGFILE.scala 11:31]
  reg [63:0] registers_3; // @[REGFILE.scala 11:31]
  reg [63:0] registers_4; // @[REGFILE.scala 11:31]
  reg [63:0] registers_5; // @[REGFILE.scala 11:31]
  reg [63:0] registers_6; // @[REGFILE.scala 11:31]
  reg [63:0] registers_7; // @[REGFILE.scala 11:31]
  reg [63:0] registers_8; // @[REGFILE.scala 11:31]
  reg [63:0] registers_9; // @[REGFILE.scala 11:31]
  reg [63:0] registers_10; // @[REGFILE.scala 11:31]
  reg [63:0] registers_11; // @[REGFILE.scala 11:31]
  reg [63:0] registers_12; // @[REGFILE.scala 11:31]
  reg [63:0] registers_13; // @[REGFILE.scala 11:31]
  reg [63:0] registers_14; // @[REGFILE.scala 11:31]
  reg [63:0] registers_15; // @[REGFILE.scala 11:31]
  reg [63:0] registers_16; // @[REGFILE.scala 11:31]
  reg [63:0] registers_17; // @[REGFILE.scala 11:31]
  reg [63:0] registers_18; // @[REGFILE.scala 11:31]
  reg [63:0] registers_19; // @[REGFILE.scala 11:31]
  reg [63:0] registers_20; // @[REGFILE.scala 11:31]
  reg [63:0] registers_21; // @[REGFILE.scala 11:31]
  reg [63:0] registers_22; // @[REGFILE.scala 11:31]
  reg [63:0] registers_23; // @[REGFILE.scala 11:31]
  reg [63:0] registers_24; // @[REGFILE.scala 11:31]
  reg [63:0] registers_25; // @[REGFILE.scala 11:31]
  reg [63:0] registers_26; // @[REGFILE.scala 11:31]
  reg [63:0] registers_27; // @[REGFILE.scala 11:31]
  reg [63:0] registers_28; // @[REGFILE.scala 11:31]
  reg [63:0] registers_29; // @[REGFILE.scala 11:31]
  reg [63:0] registers_30; // @[REGFILE.scala 11:31]
  reg [63:0] registers_31; // @[REGFILE.scala 11:31]
  wire [63:0] _GEN_65 = 5'h1 == io_readRfOp_i_rs1 ? registers_1 : registers_0; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_66 = 5'h2 == io_readRfOp_i_rs1 ? registers_2 : _GEN_65; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_67 = 5'h3 == io_readRfOp_i_rs1 ? registers_3 : _GEN_66; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_68 = 5'h4 == io_readRfOp_i_rs1 ? registers_4 : _GEN_67; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_69 = 5'h5 == io_readRfOp_i_rs1 ? registers_5 : _GEN_68; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_70 = 5'h6 == io_readRfOp_i_rs1 ? registers_6 : _GEN_69; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_71 = 5'h7 == io_readRfOp_i_rs1 ? registers_7 : _GEN_70; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_72 = 5'h8 == io_readRfOp_i_rs1 ? registers_8 : _GEN_71; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_73 = 5'h9 == io_readRfOp_i_rs1 ? registers_9 : _GEN_72; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_74 = 5'ha == io_readRfOp_i_rs1 ? registers_10 : _GEN_73; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_75 = 5'hb == io_readRfOp_i_rs1 ? registers_11 : _GEN_74; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_76 = 5'hc == io_readRfOp_i_rs1 ? registers_12 : _GEN_75; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_77 = 5'hd == io_readRfOp_i_rs1 ? registers_13 : _GEN_76; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_78 = 5'he == io_readRfOp_i_rs1 ? registers_14 : _GEN_77; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_79 = 5'hf == io_readRfOp_i_rs1 ? registers_15 : _GEN_78; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_80 = 5'h10 == io_readRfOp_i_rs1 ? registers_16 : _GEN_79; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_81 = 5'h11 == io_readRfOp_i_rs1 ? registers_17 : _GEN_80; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_82 = 5'h12 == io_readRfOp_i_rs1 ? registers_18 : _GEN_81; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_83 = 5'h13 == io_readRfOp_i_rs1 ? registers_19 : _GEN_82; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_84 = 5'h14 == io_readRfOp_i_rs1 ? registers_20 : _GEN_83; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_85 = 5'h15 == io_readRfOp_i_rs1 ? registers_21 : _GEN_84; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_86 = 5'h16 == io_readRfOp_i_rs1 ? registers_22 : _GEN_85; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_87 = 5'h17 == io_readRfOp_i_rs1 ? registers_23 : _GEN_86; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_88 = 5'h18 == io_readRfOp_i_rs1 ? registers_24 : _GEN_87; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_89 = 5'h19 == io_readRfOp_i_rs1 ? registers_25 : _GEN_88; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_90 = 5'h1a == io_readRfOp_i_rs1 ? registers_26 : _GEN_89; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_91 = 5'h1b == io_readRfOp_i_rs1 ? registers_27 : _GEN_90; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_92 = 5'h1c == io_readRfOp_i_rs1 ? registers_28 : _GEN_91; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_93 = 5'h1d == io_readRfOp_i_rs1 ? registers_29 : _GEN_92; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_94 = 5'h1e == io_readRfOp_i_rs1 ? registers_30 : _GEN_93; // @[REGFILE.scala 20:{25,25}]
  wire [63:0] _GEN_97 = 5'h1 == io_readRfOp_i_rs2 ? registers_1 : registers_0; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_98 = 5'h2 == io_readRfOp_i_rs2 ? registers_2 : _GEN_97; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_99 = 5'h3 == io_readRfOp_i_rs2 ? registers_3 : _GEN_98; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_100 = 5'h4 == io_readRfOp_i_rs2 ? registers_4 : _GEN_99; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_101 = 5'h5 == io_readRfOp_i_rs2 ? registers_5 : _GEN_100; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_102 = 5'h6 == io_readRfOp_i_rs2 ? registers_6 : _GEN_101; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_103 = 5'h7 == io_readRfOp_i_rs2 ? registers_7 : _GEN_102; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_104 = 5'h8 == io_readRfOp_i_rs2 ? registers_8 : _GEN_103; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_105 = 5'h9 == io_readRfOp_i_rs2 ? registers_9 : _GEN_104; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_106 = 5'ha == io_readRfOp_i_rs2 ? registers_10 : _GEN_105; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_107 = 5'hb == io_readRfOp_i_rs2 ? registers_11 : _GEN_106; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_108 = 5'hc == io_readRfOp_i_rs2 ? registers_12 : _GEN_107; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_109 = 5'hd == io_readRfOp_i_rs2 ? registers_13 : _GEN_108; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_110 = 5'he == io_readRfOp_i_rs2 ? registers_14 : _GEN_109; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_111 = 5'hf == io_readRfOp_i_rs2 ? registers_15 : _GEN_110; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_112 = 5'h10 == io_readRfOp_i_rs2 ? registers_16 : _GEN_111; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_113 = 5'h11 == io_readRfOp_i_rs2 ? registers_17 : _GEN_112; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_114 = 5'h12 == io_readRfOp_i_rs2 ? registers_18 : _GEN_113; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_115 = 5'h13 == io_readRfOp_i_rs2 ? registers_19 : _GEN_114; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_116 = 5'h14 == io_readRfOp_i_rs2 ? registers_20 : _GEN_115; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_117 = 5'h15 == io_readRfOp_i_rs2 ? registers_21 : _GEN_116; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_118 = 5'h16 == io_readRfOp_i_rs2 ? registers_22 : _GEN_117; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_119 = 5'h17 == io_readRfOp_i_rs2 ? registers_23 : _GEN_118; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_120 = 5'h18 == io_readRfOp_i_rs2 ? registers_24 : _GEN_119; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_121 = 5'h19 == io_readRfOp_i_rs2 ? registers_25 : _GEN_120; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_122 = 5'h1a == io_readRfOp_i_rs2 ? registers_26 : _GEN_121; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_123 = 5'h1b == io_readRfOp_i_rs2 ? registers_27 : _GEN_122; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_124 = 5'h1c == io_readRfOp_i_rs2 ? registers_28 : _GEN_123; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_125 = 5'h1d == io_readRfOp_i_rs2 ? registers_29 : _GEN_124; // @[REGFILE.scala 21:{25,25}]
  wire [63:0] _GEN_126 = 5'h1e == io_readRfOp_i_rs2 ? registers_30 : _GEN_125; // @[REGFILE.scala 21:{25,25}]
  assign io_readRes_o_rs1Val = 5'h1f == io_readRfOp_i_rs1 ? registers_31 : _GEN_94; // @[REGFILE.scala 20:{25,25}]
  assign io_readRes_o_rs2Val = 5'h1f == io_readRfOp_i_rs2 ? registers_31 : _GEN_126; // @[REGFILE.scala 21:{25,25}]
  assign io_readRes_o_a0 = registers_10; // @[REGFILE.scala 23:25]
  always @(posedge clock) begin
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_0 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h0 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_0 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end else begin
        registers_0 <= 64'h0; // @[REGFILE.scala 12:21]
      end
    end else begin
      registers_0 <= 64'h0; // @[REGFILE.scala 12:21]
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_1 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h1 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_1 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_2 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h2 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_2 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_3 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h3 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_3 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_4 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h4 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_4 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_5 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h5 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_5 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_6 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h6 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_6 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_7 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h7 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_7 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_8 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h8 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_8 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_9 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h9 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_9 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_10 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'ha == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_10 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_11 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'hb == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_11 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_12 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'hc == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_12 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_13 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'hd == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_13 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_14 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'he == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_14 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_15 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'hf == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_15 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_16 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h10 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_16 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_17 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h11 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_17 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_18 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h12 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_18 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_19 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h13 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_19 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_20 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h14 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_20 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_21 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h15 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_21 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_22 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h16 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_22 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_23 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h17 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_23 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_24 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h18 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_24 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_25 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h19 == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_25 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_26 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h1a == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_26 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_27 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h1b == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_27 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_28 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h1c == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_28 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_29 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h1d == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_29 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_30 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h1e == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_30 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_31 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_i_wen & io_writeRfOp_i_rd != 5'h0) begin // @[REGFILE.scala 16:42]
      if (5'h1f == io_writeRfOp_i_rd) begin // @[REGFILE.scala 17:23]
        registers_31 <= io_writeRfOp_i_wdata; // @[REGFILE.scala 17:23]
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
module MAIN_MEMORY(
  input         clock,
  input  [63:0] io_pc_i,
  input         io_memOp_i_isStore,
  input         io_memOp_i_unsigned,
  input  [1:0]  io_memOp_i_length,
  input  [63:0] io_memOp_i_addr,
  input  [63:0] io_memOp_i_sdata,
  output [31:0] io_inst_o,
  output [63:0] io_loadVal_o
);
  reg [31:0] ram [0:1048575]; // @[MAIN_MEMORY.scala 17:18]
  wire  ram_io_inst_o_MPORT_en; // @[MAIN_MEMORY.scala 17:18]
  wire [19:0] ram_io_inst_o_MPORT_addr; // @[MAIN_MEMORY.scala 17:18]
  wire [31:0] ram_io_inst_o_MPORT_data; // @[MAIN_MEMORY.scala 17:18]
  wire  ram_dword_MPORT_en; // @[MAIN_MEMORY.scala 17:18]
  wire [19:0] ram_dword_MPORT_addr; // @[MAIN_MEMORY.scala 17:18]
  wire [31:0] ram_dword_MPORT_data; // @[MAIN_MEMORY.scala 17:18]
  wire  ram_dword_MPORT_1_en; // @[MAIN_MEMORY.scala 17:18]
  wire [19:0] ram_dword_MPORT_1_addr; // @[MAIN_MEMORY.scala 17:18]
  wire [31:0] ram_dword_MPORT_1_data; // @[MAIN_MEMORY.scala 17:18]
  wire  ram_test0_MPORT_en; // @[MAIN_MEMORY.scala 17:18]
  wire [19:0] ram_test0_MPORT_addr; // @[MAIN_MEMORY.scala 17:18]
  wire [31:0] ram_test0_MPORT_data; // @[MAIN_MEMORY.scala 17:18]
  wire  ram_test1_MPORT_en; // @[MAIN_MEMORY.scala 17:18]
  wire [19:0] ram_test1_MPORT_addr; // @[MAIN_MEMORY.scala 17:18]
  wire [31:0] ram_test1_MPORT_data; // @[MAIN_MEMORY.scala 17:18]
  wire [31:0] ram_MPORT_data; // @[MAIN_MEMORY.scala 17:18]
  wire [19:0] ram_MPORT_addr; // @[MAIN_MEMORY.scala 17:18]
  wire  ram_MPORT_mask; // @[MAIN_MEMORY.scala 17:18]
  wire  ram_MPORT_en; // @[MAIN_MEMORY.scala 17:18]
  wire [31:0] ram_MPORT_1_data; // @[MAIN_MEMORY.scala 17:18]
  wire [19:0] ram_MPORT_1_addr; // @[MAIN_MEMORY.scala 17:18]
  wire  ram_MPORT_1_mask; // @[MAIN_MEMORY.scala 17:18]
  wire  ram_MPORT_1_en; // @[MAIN_MEMORY.scala 17:18]
  wire [63:0] _io_inst_o_T_1 = io_pc_i - 64'h80000000; // @[MAIN_MEMORY.scala 19:38]
  wire [63:0] _addr_T_1 = io_memOp_i_addr - 64'h80000000; // @[MAIN_MEMORY.scala 21:42]
  wire [61:0] addr = _addr_T_1[63:2]; // @[MAIN_MEMORY.scala 21:63]
  wire [61:0] _dword_T_1 = addr + 62'h1; // @[MAIN_MEMORY.scala 27:38]
  wire [63:0] dword = {ram_dword_MPORT_data,ram_dword_MPORT_1_data}; // @[Cat.scala 31:58]
  wire [1:0] offset = io_memOp_i_addr[1:0]; // @[MAIN_MEMORY.scala 29:36]
  wire [15:0] _loadMask_T_1 = 2'h1 == io_memOp_i_length ? 16'hffff : 16'hff; // @[Mux.scala 81:58]
  wire [31:0] _loadMask_T_3 = 2'h2 == io_memOp_i_length ? 32'hffffffff : {{16'd0}, _loadMask_T_1}; // @[Mux.scala 81:58]
  wire [63:0] loadMask = 2'h3 == io_memOp_i_length ? 64'hffffffffffffffff : {{32'd0}, _loadMask_T_3}; // @[Mux.scala 81:58]
  wire [4:0] _mask_T = {offset, 3'h0}; // @[MAIN_MEMORY.scala 50:42]
  wire [94:0] _GEN_168 = {{31'd0}, loadMask}; // @[MAIN_MEMORY.scala 50:31]
  wire [94:0] mask = _GEN_168 << _mask_T; // @[MAIN_MEMORY.scala 50:31]
  wire [94:0] _GEN_147 = {{31'd0}, dword}; // @[MAIN_MEMORY.scala 59:36]
  wire [94:0] _loadVal_temp_T = _GEN_147 & mask; // @[MAIN_MEMORY.scala 59:36]
  wire [94:0] loadVal_temp = _loadVal_temp_T >> _mask_T; // @[MAIN_MEMORY.scala 59:44]
  wire [7:0] _loadVal_T_1 = loadVal_temp[7:0]; // @[HELPERS.scala 15:65]
  wire [63:0] _loadVal_T_3 = {{56{_loadVal_T_1[7]}},_loadVal_T_1}; // @[HELPERS.scala 15:80]
  wire [94:0] _loadVal_T_4 = io_memOp_i_unsigned ? loadVal_temp : {{31'd0}, _loadVal_T_3}; // @[MAIN_MEMORY.scala 61:20]
  wire [15:0] _loadVal_T_6 = loadVal_temp[15:0]; // @[HELPERS.scala 15:65]
  wire [63:0] _loadVal_T_8 = {{48{_loadVal_T_6[15]}},_loadVal_T_6}; // @[HELPERS.scala 15:80]
  wire [94:0] _loadVal_T_9 = io_memOp_i_unsigned ? loadVal_temp : {{31'd0}, _loadVal_T_8}; // @[MAIN_MEMORY.scala 62:20]
  wire [31:0] _loadVal_T_11 = loadVal_temp[31:0]; // @[HELPERS.scala 15:65]
  wire [63:0] _loadVal_T_13 = {{32{_loadVal_T_11[31]}},_loadVal_T_11}; // @[HELPERS.scala 15:80]
  wire [94:0] _loadVal_T_14 = io_memOp_i_unsigned ? loadVal_temp : {{31'd0}, _loadVal_T_13}; // @[MAIN_MEMORY.scala 63:20]
  wire [94:0] _loadVal_T_16 = 2'h1 == io_memOp_i_length ? _loadVal_T_9 : _loadVal_T_4; // @[Mux.scala 81:58]
  wire [94:0] _loadVal_T_18 = 2'h2 == io_memOp_i_length ? _loadVal_T_14 : _loadVal_T_16; // @[Mux.scala 81:58]
  wire [94:0] loadVal = 2'h3 == io_memOp_i_length ? loadVal_temp : _loadVal_T_18; // @[Mux.scala 81:58]
  wire [7:0] _GEN_1 = 2'h1 == io_memOp_i_length ? 8'h3 : 8'h1; // @[MAIN_MEMORY.scala 77:{23,23}]
  wire [7:0] _GEN_2 = 2'h2 == io_memOp_i_length ? 8'hf : _GEN_1; // @[MAIN_MEMORY.scala 77:{23,23}]
  wire [7:0] _store_en_lut_io_memOp_i_length = 2'h3 == io_memOp_i_length ? 8'hff : _GEN_2; // @[MAIN_MEMORY.scala 77:{23,23}]
  wire [7:0] store_en = 2'h3 == io_memOp_i_length ? 8'hff : _GEN_2; // @[MAIN_MEMORY.scala 77:{23,23}]
  wire [2:0] _T_1 = {{1'd0}, offset}; // @[MAIN_MEMORY.scala 94:37]
  wire [7:0] _GEN_4 = 2'h0 == _T_1[1:0] ? io_memOp_i_sdata[7:0] : dword[7:0]; // @[MAIN_MEMORY.scala 32:35 94:{47,47}]
  wire [7:0] _GEN_5 = 2'h1 == _T_1[1:0] ? io_memOp_i_sdata[7:0] : dword[15:8]; // @[MAIN_MEMORY.scala 32:35 94:{47,47}]
  wire [7:0] _GEN_6 = 2'h2 == _T_1[1:0] ? io_memOp_i_sdata[7:0] : dword[23:16]; // @[MAIN_MEMORY.scala 32:35 94:{47,47}]
  wire [7:0] _GEN_7 = 2'h3 == _T_1[1:0] ? io_memOp_i_sdata[7:0] : dword[31:24]; // @[MAIN_MEMORY.scala 32:35 94:{47,47}]
  wire [2:0] _GEN_148 = {{1'd0}, _T_1[1:0]}; // @[MAIN_MEMORY.scala 32:35 94:{47,47}]
  wire [7:0] _GEN_8 = 3'h4 == _GEN_148 ? io_memOp_i_sdata[7:0] : dword[39:32]; // @[MAIN_MEMORY.scala 32:35 94:{47,47}]
  wire [7:0] _GEN_9 = 3'h5 == _GEN_148 ? io_memOp_i_sdata[7:0] : dword[47:40]; // @[MAIN_MEMORY.scala 32:35 94:{47,47}]
  wire [7:0] _GEN_10 = 3'h6 == _GEN_148 ? io_memOp_i_sdata[7:0] : dword[55:48]; // @[MAIN_MEMORY.scala 32:35 94:{47,47}]
  wire [7:0] _GEN_11 = 3'h7 == _GEN_148 ? io_memOp_i_sdata[7:0] : dword[63:56]; // @[MAIN_MEMORY.scala 32:35 94:{47,47}]
  wire [7:0] _GEN_12 = _store_en_lut_io_memOp_i_length[0] ? _GEN_4 : dword[7:0]; // @[MAIN_MEMORY.scala 94:26 32:35]
  wire [7:0] _GEN_13 = _store_en_lut_io_memOp_i_length[0] ? _GEN_5 : dword[15:8]; // @[MAIN_MEMORY.scala 94:26 32:35]
  wire [7:0] _GEN_14 = _store_en_lut_io_memOp_i_length[0] ? _GEN_6 : dword[23:16]; // @[MAIN_MEMORY.scala 94:26 32:35]
  wire [7:0] _GEN_15 = _store_en_lut_io_memOp_i_length[0] ? _GEN_7 : dword[31:24]; // @[MAIN_MEMORY.scala 94:26 32:35]
  wire [7:0] _GEN_16 = _store_en_lut_io_memOp_i_length[0] ? _GEN_8 : dword[39:32]; // @[MAIN_MEMORY.scala 94:26 32:35]
  wire [7:0] _GEN_17 = _store_en_lut_io_memOp_i_length[0] ? _GEN_9 : dword[47:40]; // @[MAIN_MEMORY.scala 94:26 32:35]
  wire [7:0] _GEN_18 = _store_en_lut_io_memOp_i_length[0] ? _GEN_10 : dword[55:48]; // @[MAIN_MEMORY.scala 94:26 32:35]
  wire [7:0] _GEN_19 = _store_en_lut_io_memOp_i_length[0] ? _GEN_11 : dword[63:56]; // @[MAIN_MEMORY.scala 94:26 32:35]
  wire [1:0] _T_5 = 2'h1 + offset; // @[MAIN_MEMORY.scala 95:37]
  wire [7:0] _GEN_20 = 2'h0 == _T_5 ? io_memOp_i_sdata[15:8] : _GEN_12; // @[MAIN_MEMORY.scala 95:{47,47}]
  wire [7:0] _GEN_21 = 2'h1 == _T_5 ? io_memOp_i_sdata[15:8] : _GEN_13; // @[MAIN_MEMORY.scala 95:{47,47}]
  wire [7:0] _GEN_22 = 2'h2 == _T_5 ? io_memOp_i_sdata[15:8] : _GEN_14; // @[MAIN_MEMORY.scala 95:{47,47}]
  wire [7:0] _GEN_23 = 2'h3 == _T_5 ? io_memOp_i_sdata[15:8] : _GEN_15; // @[MAIN_MEMORY.scala 95:{47,47}]
  wire [2:0] _GEN_152 = {{1'd0}, _T_5}; // @[MAIN_MEMORY.scala 95:{47,47}]
  wire [7:0] _GEN_24 = 3'h4 == _GEN_152 ? io_memOp_i_sdata[15:8] : _GEN_16; // @[MAIN_MEMORY.scala 95:{47,47}]
  wire [7:0] _GEN_25 = 3'h5 == _GEN_152 ? io_memOp_i_sdata[15:8] : _GEN_17; // @[MAIN_MEMORY.scala 95:{47,47}]
  wire [7:0] _GEN_26 = 3'h6 == _GEN_152 ? io_memOp_i_sdata[15:8] : _GEN_18; // @[MAIN_MEMORY.scala 95:{47,47}]
  wire [7:0] _GEN_27 = 3'h7 == _GEN_152 ? io_memOp_i_sdata[15:8] : _GEN_19; // @[MAIN_MEMORY.scala 95:{47,47}]
  wire [7:0] _GEN_28 = _store_en_lut_io_memOp_i_length[1] ? _GEN_20 : _GEN_12; // @[MAIN_MEMORY.scala 95:26]
  wire [7:0] _GEN_29 = _store_en_lut_io_memOp_i_length[1] ? _GEN_21 : _GEN_13; // @[MAIN_MEMORY.scala 95:26]
  wire [7:0] _GEN_30 = _store_en_lut_io_memOp_i_length[1] ? _GEN_22 : _GEN_14; // @[MAIN_MEMORY.scala 95:26]
  wire [7:0] _GEN_31 = _store_en_lut_io_memOp_i_length[1] ? _GEN_23 : _GEN_15; // @[MAIN_MEMORY.scala 95:26]
  wire [7:0] _GEN_32 = _store_en_lut_io_memOp_i_length[1] ? _GEN_24 : _GEN_16; // @[MAIN_MEMORY.scala 95:26]
  wire [7:0] _GEN_33 = _store_en_lut_io_memOp_i_length[1] ? _GEN_25 : _GEN_17; // @[MAIN_MEMORY.scala 95:26]
  wire [7:0] _GEN_34 = _store_en_lut_io_memOp_i_length[1] ? _GEN_26 : _GEN_18; // @[MAIN_MEMORY.scala 95:26]
  wire [7:0] _GEN_35 = _store_en_lut_io_memOp_i_length[1] ? _GEN_27 : _GEN_19; // @[MAIN_MEMORY.scala 95:26]
  wire [1:0] _T_8 = 2'h2 + offset; // @[MAIN_MEMORY.scala 96:37]
  wire [7:0] _GEN_36 = 2'h0 == _T_8 ? io_memOp_i_sdata[23:16] : _GEN_28; // @[MAIN_MEMORY.scala 96:{47,47}]
  wire [7:0] _GEN_37 = 2'h1 == _T_8 ? io_memOp_i_sdata[23:16] : _GEN_29; // @[MAIN_MEMORY.scala 96:{47,47}]
  wire [7:0] _GEN_38 = 2'h2 == _T_8 ? io_memOp_i_sdata[23:16] : _GEN_30; // @[MAIN_MEMORY.scala 96:{47,47}]
  wire [7:0] _GEN_39 = 2'h3 == _T_8 ? io_memOp_i_sdata[23:16] : _GEN_31; // @[MAIN_MEMORY.scala 96:{47,47}]
  wire [2:0] _GEN_156 = {{1'd0}, _T_8}; // @[MAIN_MEMORY.scala 96:{47,47}]
  wire [7:0] _GEN_40 = 3'h4 == _GEN_156 ? io_memOp_i_sdata[23:16] : _GEN_32; // @[MAIN_MEMORY.scala 96:{47,47}]
  wire [7:0] _GEN_41 = 3'h5 == _GEN_156 ? io_memOp_i_sdata[23:16] : _GEN_33; // @[MAIN_MEMORY.scala 96:{47,47}]
  wire [7:0] _GEN_42 = 3'h6 == _GEN_156 ? io_memOp_i_sdata[23:16] : _GEN_34; // @[MAIN_MEMORY.scala 96:{47,47}]
  wire [7:0] _GEN_43 = 3'h7 == _GEN_156 ? io_memOp_i_sdata[23:16] : _GEN_35; // @[MAIN_MEMORY.scala 96:{47,47}]
  wire [7:0] _GEN_44 = _store_en_lut_io_memOp_i_length[2] ? _GEN_36 : _GEN_28; // @[MAIN_MEMORY.scala 96:26]
  wire [7:0] _GEN_45 = _store_en_lut_io_memOp_i_length[2] ? _GEN_37 : _GEN_29; // @[MAIN_MEMORY.scala 96:26]
  wire [7:0] _GEN_46 = _store_en_lut_io_memOp_i_length[2] ? _GEN_38 : _GEN_30; // @[MAIN_MEMORY.scala 96:26]
  wire [7:0] _GEN_47 = _store_en_lut_io_memOp_i_length[2] ? _GEN_39 : _GEN_31; // @[MAIN_MEMORY.scala 96:26]
  wire [7:0] _GEN_48 = _store_en_lut_io_memOp_i_length[2] ? _GEN_40 : _GEN_32; // @[MAIN_MEMORY.scala 96:26]
  wire [7:0] _GEN_49 = _store_en_lut_io_memOp_i_length[2] ? _GEN_41 : _GEN_33; // @[MAIN_MEMORY.scala 96:26]
  wire [7:0] _GEN_50 = _store_en_lut_io_memOp_i_length[2] ? _GEN_42 : _GEN_34; // @[MAIN_MEMORY.scala 96:26]
  wire [7:0] _GEN_51 = _store_en_lut_io_memOp_i_length[2] ? _GEN_43 : _GEN_35; // @[MAIN_MEMORY.scala 96:26]
  wire [1:0] _T_11 = 2'h3 + offset; // @[MAIN_MEMORY.scala 97:37]
  wire [7:0] _GEN_52 = 2'h0 == _T_11 ? io_memOp_i_sdata[31:24] : _GEN_44; // @[MAIN_MEMORY.scala 97:{47,47}]
  wire [7:0] _GEN_53 = 2'h1 == _T_11 ? io_memOp_i_sdata[31:24] : _GEN_45; // @[MAIN_MEMORY.scala 97:{47,47}]
  wire [7:0] _GEN_54 = 2'h2 == _T_11 ? io_memOp_i_sdata[31:24] : _GEN_46; // @[MAIN_MEMORY.scala 97:{47,47}]
  wire [7:0] _GEN_55 = 2'h3 == _T_11 ? io_memOp_i_sdata[31:24] : _GEN_47; // @[MAIN_MEMORY.scala 97:{47,47}]
  wire [2:0] _GEN_160 = {{1'd0}, _T_11}; // @[MAIN_MEMORY.scala 97:{47,47}]
  wire [7:0] _GEN_56 = 3'h4 == _GEN_160 ? io_memOp_i_sdata[31:24] : _GEN_48; // @[MAIN_MEMORY.scala 97:{47,47}]
  wire [7:0] _GEN_57 = 3'h5 == _GEN_160 ? io_memOp_i_sdata[31:24] : _GEN_49; // @[MAIN_MEMORY.scala 97:{47,47}]
  wire [7:0] _GEN_58 = 3'h6 == _GEN_160 ? io_memOp_i_sdata[31:24] : _GEN_50; // @[MAIN_MEMORY.scala 97:{47,47}]
  wire [7:0] _GEN_59 = 3'h7 == _GEN_160 ? io_memOp_i_sdata[31:24] : _GEN_51; // @[MAIN_MEMORY.scala 97:{47,47}]
  wire [7:0] _GEN_60 = _store_en_lut_io_memOp_i_length[3] ? _GEN_52 : _GEN_44; // @[MAIN_MEMORY.scala 97:26]
  wire [7:0] _GEN_61 = _store_en_lut_io_memOp_i_length[3] ? _GEN_53 : _GEN_45; // @[MAIN_MEMORY.scala 97:26]
  wire [7:0] _GEN_62 = _store_en_lut_io_memOp_i_length[3] ? _GEN_54 : _GEN_46; // @[MAIN_MEMORY.scala 97:26]
  wire [7:0] _GEN_63 = _store_en_lut_io_memOp_i_length[3] ? _GEN_55 : _GEN_47; // @[MAIN_MEMORY.scala 97:26]
  wire [7:0] _GEN_64 = _store_en_lut_io_memOp_i_length[3] ? _GEN_56 : _GEN_48; // @[MAIN_MEMORY.scala 97:26]
  wire [7:0] _GEN_65 = _store_en_lut_io_memOp_i_length[3] ? _GEN_57 : _GEN_49; // @[MAIN_MEMORY.scala 97:26]
  wire [7:0] _GEN_66 = _store_en_lut_io_memOp_i_length[3] ? _GEN_58 : _GEN_50; // @[MAIN_MEMORY.scala 97:26]
  wire [7:0] _GEN_67 = _store_en_lut_io_memOp_i_length[3] ? _GEN_59 : _GEN_51; // @[MAIN_MEMORY.scala 97:26]
  wire [2:0] _T_14 = 3'h4 + _T_1; // @[MAIN_MEMORY.scala 98:37]
  wire [7:0] _GEN_68 = 3'h0 == _T_14 ? io_memOp_i_sdata[39:32] : _GEN_60; // @[MAIN_MEMORY.scala 98:{47,47}]
  wire [7:0] _GEN_69 = 3'h1 == _T_14 ? io_memOp_i_sdata[39:32] : _GEN_61; // @[MAIN_MEMORY.scala 98:{47,47}]
  wire [7:0] _GEN_70 = 3'h2 == _T_14 ? io_memOp_i_sdata[39:32] : _GEN_62; // @[MAIN_MEMORY.scala 98:{47,47}]
  wire [7:0] _GEN_71 = 3'h3 == _T_14 ? io_memOp_i_sdata[39:32] : _GEN_63; // @[MAIN_MEMORY.scala 98:{47,47}]
  wire [7:0] _GEN_72 = 3'h4 == _T_14 ? io_memOp_i_sdata[39:32] : _GEN_64; // @[MAIN_MEMORY.scala 98:{47,47}]
  wire [7:0] _GEN_73 = 3'h5 == _T_14 ? io_memOp_i_sdata[39:32] : _GEN_65; // @[MAIN_MEMORY.scala 98:{47,47}]
  wire [7:0] _GEN_74 = 3'h6 == _T_14 ? io_memOp_i_sdata[39:32] : _GEN_66; // @[MAIN_MEMORY.scala 98:{47,47}]
  wire [7:0] _GEN_75 = 3'h7 == _T_14 ? io_memOp_i_sdata[39:32] : _GEN_67; // @[MAIN_MEMORY.scala 98:{47,47}]
  wire [7:0] _GEN_76 = _store_en_lut_io_memOp_i_length[4] ? _GEN_68 : _GEN_60; // @[MAIN_MEMORY.scala 98:26]
  wire [7:0] _GEN_77 = _store_en_lut_io_memOp_i_length[4] ? _GEN_69 : _GEN_61; // @[MAIN_MEMORY.scala 98:26]
  wire [7:0] _GEN_78 = _store_en_lut_io_memOp_i_length[4] ? _GEN_70 : _GEN_62; // @[MAIN_MEMORY.scala 98:26]
  wire [7:0] _GEN_79 = _store_en_lut_io_memOp_i_length[4] ? _GEN_71 : _GEN_63; // @[MAIN_MEMORY.scala 98:26]
  wire [7:0] _GEN_80 = _store_en_lut_io_memOp_i_length[4] ? _GEN_72 : _GEN_64; // @[MAIN_MEMORY.scala 98:26]
  wire [7:0] _GEN_81 = _store_en_lut_io_memOp_i_length[4] ? _GEN_73 : _GEN_65; // @[MAIN_MEMORY.scala 98:26]
  wire [7:0] _GEN_82 = _store_en_lut_io_memOp_i_length[4] ? _GEN_74 : _GEN_66; // @[MAIN_MEMORY.scala 98:26]
  wire [7:0] _GEN_83 = _store_en_lut_io_memOp_i_length[4] ? _GEN_75 : _GEN_67; // @[MAIN_MEMORY.scala 98:26]
  wire [2:0] _T_17 = 3'h5 + _T_1; // @[MAIN_MEMORY.scala 99:37]
  wire [7:0] _GEN_84 = 3'h0 == _T_17 ? io_memOp_i_sdata[47:40] : _GEN_76; // @[MAIN_MEMORY.scala 99:{47,47}]
  wire [7:0] _GEN_85 = 3'h1 == _T_17 ? io_memOp_i_sdata[47:40] : _GEN_77; // @[MAIN_MEMORY.scala 99:{47,47}]
  wire [7:0] _GEN_86 = 3'h2 == _T_17 ? io_memOp_i_sdata[47:40] : _GEN_78; // @[MAIN_MEMORY.scala 99:{47,47}]
  wire [7:0] _GEN_87 = 3'h3 == _T_17 ? io_memOp_i_sdata[47:40] : _GEN_79; // @[MAIN_MEMORY.scala 99:{47,47}]
  wire [7:0] _GEN_88 = 3'h4 == _T_17 ? io_memOp_i_sdata[47:40] : _GEN_80; // @[MAIN_MEMORY.scala 99:{47,47}]
  wire [7:0] _GEN_89 = 3'h5 == _T_17 ? io_memOp_i_sdata[47:40] : _GEN_81; // @[MAIN_MEMORY.scala 99:{47,47}]
  wire [7:0] _GEN_90 = 3'h6 == _T_17 ? io_memOp_i_sdata[47:40] : _GEN_82; // @[MAIN_MEMORY.scala 99:{47,47}]
  wire [7:0] _GEN_91 = 3'h7 == _T_17 ? io_memOp_i_sdata[47:40] : _GEN_83; // @[MAIN_MEMORY.scala 99:{47,47}]
  wire [7:0] _GEN_92 = _store_en_lut_io_memOp_i_length[5] ? _GEN_84 : _GEN_76; // @[MAIN_MEMORY.scala 99:26]
  wire [7:0] _GEN_93 = _store_en_lut_io_memOp_i_length[5] ? _GEN_85 : _GEN_77; // @[MAIN_MEMORY.scala 99:26]
  wire [7:0] _GEN_94 = _store_en_lut_io_memOp_i_length[5] ? _GEN_86 : _GEN_78; // @[MAIN_MEMORY.scala 99:26]
  wire [7:0] _GEN_95 = _store_en_lut_io_memOp_i_length[5] ? _GEN_87 : _GEN_79; // @[MAIN_MEMORY.scala 99:26]
  wire [7:0] _GEN_96 = _store_en_lut_io_memOp_i_length[5] ? _GEN_88 : _GEN_80; // @[MAIN_MEMORY.scala 99:26]
  wire [7:0] _GEN_97 = _store_en_lut_io_memOp_i_length[5] ? _GEN_89 : _GEN_81; // @[MAIN_MEMORY.scala 99:26]
  wire [7:0] _GEN_98 = _store_en_lut_io_memOp_i_length[5] ? _GEN_90 : _GEN_82; // @[MAIN_MEMORY.scala 99:26]
  wire [7:0] _GEN_99 = _store_en_lut_io_memOp_i_length[5] ? _GEN_91 : _GEN_83; // @[MAIN_MEMORY.scala 99:26]
  wire [2:0] _T_20 = 3'h6 + _T_1; // @[MAIN_MEMORY.scala 100:37]
  wire [7:0] _GEN_100 = 3'h0 == _T_20 ? io_memOp_i_sdata[55:48] : _GEN_92; // @[MAIN_MEMORY.scala 100:{47,47}]
  wire [7:0] _GEN_101 = 3'h1 == _T_20 ? io_memOp_i_sdata[55:48] : _GEN_93; // @[MAIN_MEMORY.scala 100:{47,47}]
  wire [7:0] _GEN_102 = 3'h2 == _T_20 ? io_memOp_i_sdata[55:48] : _GEN_94; // @[MAIN_MEMORY.scala 100:{47,47}]
  wire [7:0] _GEN_103 = 3'h3 == _T_20 ? io_memOp_i_sdata[55:48] : _GEN_95; // @[MAIN_MEMORY.scala 100:{47,47}]
  wire [7:0] _GEN_104 = 3'h4 == _T_20 ? io_memOp_i_sdata[55:48] : _GEN_96; // @[MAIN_MEMORY.scala 100:{47,47}]
  wire [7:0] _GEN_105 = 3'h5 == _T_20 ? io_memOp_i_sdata[55:48] : _GEN_97; // @[MAIN_MEMORY.scala 100:{47,47}]
  wire [7:0] _GEN_106 = 3'h6 == _T_20 ? io_memOp_i_sdata[55:48] : _GEN_98; // @[MAIN_MEMORY.scala 100:{47,47}]
  wire [7:0] _GEN_107 = 3'h7 == _T_20 ? io_memOp_i_sdata[55:48] : _GEN_99; // @[MAIN_MEMORY.scala 100:{47,47}]
  wire [7:0] _GEN_108 = _store_en_lut_io_memOp_i_length[6] ? _GEN_100 : _GEN_92; // @[MAIN_MEMORY.scala 100:26]
  wire [7:0] _GEN_109 = _store_en_lut_io_memOp_i_length[6] ? _GEN_101 : _GEN_93; // @[MAIN_MEMORY.scala 100:26]
  wire [7:0] _GEN_110 = _store_en_lut_io_memOp_i_length[6] ? _GEN_102 : _GEN_94; // @[MAIN_MEMORY.scala 100:26]
  wire [7:0] _GEN_111 = _store_en_lut_io_memOp_i_length[6] ? _GEN_103 : _GEN_95; // @[MAIN_MEMORY.scala 100:26]
  wire [7:0] _GEN_112 = _store_en_lut_io_memOp_i_length[6] ? _GEN_104 : _GEN_96; // @[MAIN_MEMORY.scala 100:26]
  wire [7:0] _GEN_113 = _store_en_lut_io_memOp_i_length[6] ? _GEN_105 : _GEN_97; // @[MAIN_MEMORY.scala 100:26]
  wire [7:0] _GEN_114 = _store_en_lut_io_memOp_i_length[6] ? _GEN_106 : _GEN_98; // @[MAIN_MEMORY.scala 100:26]
  wire [7:0] _GEN_115 = _store_en_lut_io_memOp_i_length[6] ? _GEN_107 : _GEN_99; // @[MAIN_MEMORY.scala 100:26]
  wire [2:0] _T_23 = 3'h7 + _T_1; // @[MAIN_MEMORY.scala 101:37]
  wire [7:0] _GEN_116 = 3'h0 == _T_23 ? io_memOp_i_sdata[63:56] : _GEN_108; // @[MAIN_MEMORY.scala 101:{47,47}]
  wire [7:0] _GEN_117 = 3'h1 == _T_23 ? io_memOp_i_sdata[63:56] : _GEN_109; // @[MAIN_MEMORY.scala 101:{47,47}]
  wire [7:0] _GEN_118 = 3'h2 == _T_23 ? io_memOp_i_sdata[63:56] : _GEN_110; // @[MAIN_MEMORY.scala 101:{47,47}]
  wire [7:0] _GEN_119 = 3'h3 == _T_23 ? io_memOp_i_sdata[63:56] : _GEN_111; // @[MAIN_MEMORY.scala 101:{47,47}]
  wire [7:0] _GEN_120 = 3'h4 == _T_23 ? io_memOp_i_sdata[63:56] : _GEN_112; // @[MAIN_MEMORY.scala 101:{47,47}]
  wire [7:0] _GEN_121 = 3'h5 == _T_23 ? io_memOp_i_sdata[63:56] : _GEN_113; // @[MAIN_MEMORY.scala 101:{47,47}]
  wire [7:0] _GEN_122 = 3'h6 == _T_23 ? io_memOp_i_sdata[63:56] : _GEN_114; // @[MAIN_MEMORY.scala 101:{47,47}]
  wire [7:0] _GEN_123 = 3'h7 == _T_23 ? io_memOp_i_sdata[63:56] : _GEN_115; // @[MAIN_MEMORY.scala 101:{47,47}]
  wire [7:0] _GEN_124 = _store_en_lut_io_memOp_i_length[7] ? _GEN_116 : _GEN_108; // @[MAIN_MEMORY.scala 101:26]
  wire [7:0] _GEN_125 = _store_en_lut_io_memOp_i_length[7] ? _GEN_117 : _GEN_109; // @[MAIN_MEMORY.scala 101:26]
  wire [7:0] _GEN_126 = _store_en_lut_io_memOp_i_length[7] ? _GEN_118 : _GEN_110; // @[MAIN_MEMORY.scala 101:26]
  wire [7:0] _GEN_127 = _store_en_lut_io_memOp_i_length[7] ? _GEN_119 : _GEN_111; // @[MAIN_MEMORY.scala 101:26]
  wire [7:0] _GEN_128 = _store_en_lut_io_memOp_i_length[7] ? _GEN_120 : _GEN_112; // @[MAIN_MEMORY.scala 101:26]
  wire [7:0] _GEN_129 = _store_en_lut_io_memOp_i_length[7] ? _GEN_121 : _GEN_113; // @[MAIN_MEMORY.scala 101:26]
  wire [7:0] _GEN_130 = _store_en_lut_io_memOp_i_length[7] ? _GEN_122 : _GEN_114; // @[MAIN_MEMORY.scala 101:26]
  wire [7:0] _GEN_131 = _store_en_lut_io_memOp_i_length[7] ? _GEN_123 : _GEN_115; // @[MAIN_MEMORY.scala 101:26]
  wire [7:0] temp_1 = io_memOp_i_isStore ? _GEN_125 : dword[15:8]; // @[MAIN_MEMORY.scala 93:19 32:35]
  wire [7:0] temp_0 = io_memOp_i_isStore ? _GEN_124 : dword[7:0]; // @[MAIN_MEMORY.scala 93:19 32:35]
  wire [7:0] temp_3 = io_memOp_i_isStore ? _GEN_127 : dword[31:24]; // @[MAIN_MEMORY.scala 93:19 32:35]
  wire [7:0] temp_2 = io_memOp_i_isStore ? _GEN_126 : dword[23:16]; // @[MAIN_MEMORY.scala 93:19 32:35]
  wire [7:0] temp_5 = io_memOp_i_isStore ? _GEN_129 : dword[47:40]; // @[MAIN_MEMORY.scala 93:19 32:35]
  wire [7:0] temp_4 = io_memOp_i_isStore ? _GEN_128 : dword[39:32]; // @[MAIN_MEMORY.scala 93:19 32:35]
  wire [7:0] temp_7 = io_memOp_i_isStore ? _GEN_131 : dword[63:56]; // @[MAIN_MEMORY.scala 93:19 32:35]
  wire [7:0] temp_6 = io_memOp_i_isStore ? _GEN_130 : dword[55:48]; // @[MAIN_MEMORY.scala 93:19 32:35]
  wire [63:0] _T_27 = {temp_7,temp_6,temp_5,temp_4,temp_3,temp_2,temp_1,temp_0}; // @[MAIN_MEMORY.scala 103:46]
  wire [31:0] test0 = ram_test0_MPORT_data; // @[MAIN_MEMORY.scala 81:21 84:13]
  wire [31:0] test1 = ram_test1_MPORT_data; // @[MAIN_MEMORY.scala 82:21 85:13]
  assign ram_io_inst_o_MPORT_en = 1'h1;
  assign ram_io_inst_o_MPORT_addr = _io_inst_o_T_1[21:2];
  assign ram_io_inst_o_MPORT_data = ram[ram_io_inst_o_MPORT_addr]; // @[MAIN_MEMORY.scala 17:18]
  assign ram_dword_MPORT_en = 1'h1;
  assign ram_dword_MPORT_addr = _dword_T_1[19:0];
  assign ram_dword_MPORT_data = ram[ram_dword_MPORT_addr]; // @[MAIN_MEMORY.scala 17:18]
  assign ram_dword_MPORT_1_en = 1'h1;
  assign ram_dword_MPORT_1_addr = addr[19:0];
  assign ram_dword_MPORT_1_data = ram[ram_dword_MPORT_1_addr]; // @[MAIN_MEMORY.scala 17:18]
  assign ram_test0_MPORT_en = 1'h1;
  assign ram_test0_MPORT_addr = 20'h0;
  assign ram_test0_MPORT_data = ram[ram_test0_MPORT_addr]; // @[MAIN_MEMORY.scala 17:18]
  assign ram_test1_MPORT_en = 1'h1;
  assign ram_test1_MPORT_addr = 20'h1;
  assign ram_test1_MPORT_data = ram[ram_test1_MPORT_addr]; // @[MAIN_MEMORY.scala 17:18]
  assign ram_MPORT_data = _T_27[63:32];
  assign ram_MPORT_addr = _dword_T_1[19:0];
  assign ram_MPORT_mask = 1'h1;
  assign ram_MPORT_en = io_memOp_i_isStore;
  assign ram_MPORT_1_data = _T_27[31:0];
  assign ram_MPORT_1_addr = addr[19:0];
  assign ram_MPORT_1_mask = 1'h1;
  assign ram_MPORT_1_en = io_memOp_i_isStore;
  assign io_inst_o = ram_io_inst_o_MPORT_data; // @[MAIN_MEMORY.scala 19:21]
  assign io_loadVal_o = loadVal[63:0]; // @[MAIN_MEMORY.scala 74:23]
  always @(posedge clock) begin
    if (ram_MPORT_en & ram_MPORT_mask) begin
      ram[ram_MPORT_addr] <= ram_MPORT_data; // @[MAIN_MEMORY.scala 17:18]
    end
    if (ram_MPORT_1_en & ram_MPORT_1_mask) begin
      ram[ram_MPORT_1_addr] <= ram_MPORT_1_data; // @[MAIN_MEMORY.scala 17:18]
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
  output [63:0] io_pc_o,
  output [31:0] io_inst_o,
  output [63:0] io_o,
  output [63:0] io_src1,
  output [63:0] io_src2
);
  wire  IF_clock; // @[TOP.scala 25:31]
  wire  IF_reset; // @[TOP.scala 25:31]
  wire  IF_io_branchOp_i_happen; // @[TOP.scala 25:31]
  wire [63:0] IF_io_branchOp_i_newPC; // @[TOP.scala 25:31]
  wire [31:0] IF_io_inst_i; // @[TOP.scala 25:31]
  wire [63:0] IF_io_pc_o; // @[TOP.scala 25:31]
  wire [31:0] IF_io_inst_o; // @[TOP.scala 25:31]
  wire  ID_clock; // @[TOP.scala 26:31]
  wire  ID_reset; // @[TOP.scala 26:31]
  wire [31:0] ID_io_inst_i; // @[TOP.scala 26:31]
  wire [63:0] ID_io_pc_i; // @[TOP.scala 26:31]
  wire [63:0] ID_io_regVal_i_rs1Val; // @[TOP.scala 26:31]
  wire [63:0] ID_io_regVal_i_rs2Val; // @[TOP.scala 26:31]
  wire [63:0] ID_io_regVal_i_a0; // @[TOP.scala 26:31]
  wire [4:0] ID_io_readRfOp_o_rs1; // @[TOP.scala 26:31]
  wire [4:0] ID_io_readRfOp_o_rs2; // @[TOP.scala 26:31]
  wire  ID_io_decInfo_o_writeRfOp_wen; // @[TOP.scala 26:31]
  wire [4:0] ID_io_decInfo_o_writeRfOp_rd; // @[TOP.scala 26:31]
  wire [63:0] ID_io_decInfo_o_aluOp_src1; // @[TOP.scala 26:31]
  wire [63:0] ID_io_decInfo_o_aluOp_src2; // @[TOP.scala 26:31]
  wire [4:0] ID_io_decInfo_o_aluOp_opt; // @[TOP.scala 26:31]
  wire  ID_io_decInfo_o_branchOp_happen; // @[TOP.scala 26:31]
  wire [63:0] ID_io_decInfo_o_branchOp_newPC; // @[TOP.scala 26:31]
  wire  ID_io_decInfo_o_memOp_isLoad; // @[TOP.scala 26:31]
  wire  ID_io_decInfo_o_memOp_isStore; // @[TOP.scala 26:31]
  wire  ID_io_decInfo_o_memOp_unsigned; // @[TOP.scala 26:31]
  wire [1:0] ID_io_decInfo_o_memOp_length; // @[TOP.scala 26:31]
  wire [63:0] ID_io_decInfo_o_memOp_sdata; // @[TOP.scala 26:31]
  wire  ID_io_debug_o_exit; // @[TOP.scala 26:31]
  wire [63:0] ID_io_debug_o_a0; // @[TOP.scala 26:31]
  wire [63:0] ID_io_debug_o_pc; // @[TOP.scala 26:31]
  wire [31:0] ID_io_debug_o_inst; // @[TOP.scala 26:31]
  wire  EX_io_decInfo_i_writeRfOp_wen; // @[TOP.scala 27:31]
  wire [4:0] EX_io_decInfo_i_writeRfOp_rd; // @[TOP.scala 27:31]
  wire [63:0] EX_io_decInfo_i_aluOp_src1; // @[TOP.scala 27:31]
  wire [63:0] EX_io_decInfo_i_aluOp_src2; // @[TOP.scala 27:31]
  wire [4:0] EX_io_decInfo_i_aluOp_opt; // @[TOP.scala 27:31]
  wire  EX_io_decInfo_i_memOp_isLoad; // @[TOP.scala 27:31]
  wire  EX_io_decInfo_i_memOp_isStore; // @[TOP.scala 27:31]
  wire  EX_io_decInfo_i_memOp_unsigned; // @[TOP.scala 27:31]
  wire [1:0] EX_io_decInfo_i_memOp_length; // @[TOP.scala 27:31]
  wire [63:0] EX_io_decInfo_i_memOp_sdata; // @[TOP.scala 27:31]
  wire  EX_io_writeRfOp_o_wen; // @[TOP.scala 27:31]
  wire [4:0] EX_io_writeRfOp_o_rd; // @[TOP.scala 27:31]
  wire [63:0] EX_io_writeRfOp_o_wdata; // @[TOP.scala 27:31]
  wire  EX_io_memOp_o_isLoad; // @[TOP.scala 27:31]
  wire  EX_io_memOp_o_isStore; // @[TOP.scala 27:31]
  wire  EX_io_memOp_o_unsigned; // @[TOP.scala 27:31]
  wire [1:0] EX_io_memOp_o_length; // @[TOP.scala 27:31]
  wire [63:0] EX_io_memOp_o_addr; // @[TOP.scala 27:31]
  wire [63:0] EX_io_memOp_o_sdata; // @[TOP.scala 27:31]
  wire  EX_io_debug_i_exit; // @[TOP.scala 27:31]
  wire [63:0] EX_io_debug_i_a0; // @[TOP.scala 27:31]
  wire [63:0] EX_io_debug_i_pc; // @[TOP.scala 27:31]
  wire [31:0] EX_io_debug_i_inst; // @[TOP.scala 27:31]
  wire  EX_io_debug_o_exit; // @[TOP.scala 27:31]
  wire [63:0] EX_io_debug_o_a0; // @[TOP.scala 27:31]
  wire [63:0] EX_io_debug_o_pc; // @[TOP.scala 27:31]
  wire [31:0] EX_io_debug_o_inst; // @[TOP.scala 27:31]
  wire  MEM_clock; // @[TOP.scala 28:31]
  wire  MEM_reset; // @[TOP.scala 28:31]
  wire  MEM_io_writeRfOp_i_wen; // @[TOP.scala 28:31]
  wire [4:0] MEM_io_writeRfOp_i_rd; // @[TOP.scala 28:31]
  wire [63:0] MEM_io_writeRfOp_i_wdata; // @[TOP.scala 28:31]
  wire  MEM_io_memOp_i_isLoad; // @[TOP.scala 28:31]
  wire  MEM_io_memOp_i_isStore; // @[TOP.scala 28:31]
  wire  MEM_io_memOp_i_unsigned; // @[TOP.scala 28:31]
  wire [1:0] MEM_io_memOp_i_length; // @[TOP.scala 28:31]
  wire [63:0] MEM_io_memOp_i_addr; // @[TOP.scala 28:31]
  wire [63:0] MEM_io_memOp_i_sdata; // @[TOP.scala 28:31]
  wire [63:0] MEM_io_loadVal_i; // @[TOP.scala 28:31]
  wire  MEM_io_writeRfOp_o_wen; // @[TOP.scala 28:31]
  wire [4:0] MEM_io_writeRfOp_o_rd; // @[TOP.scala 28:31]
  wire [63:0] MEM_io_writeRfOp_o_wdata; // @[TOP.scala 28:31]
  wire  MEM_io_debug_i_exit; // @[TOP.scala 28:31]
  wire [63:0] MEM_io_debug_i_a0; // @[TOP.scala 28:31]
  wire [63:0] MEM_io_debug_i_pc; // @[TOP.scala 28:31]
  wire [31:0] MEM_io_debug_i_inst; // @[TOP.scala 28:31]
  wire  MEM_io_debug_o_exit; // @[TOP.scala 28:31]
  wire [63:0] MEM_io_debug_o_a0; // @[TOP.scala 28:31]
  wire [63:0] MEM_io_debug_o_pc; // @[TOP.scala 28:31]
  wire [31:0] MEM_io_debug_o_inst; // @[TOP.scala 28:31]
  wire  WB_clock; // @[TOP.scala 29:31]
  wire  WB_reset; // @[TOP.scala 29:31]
  wire  WB_io_writeRfOp_i_wen; // @[TOP.scala 29:31]
  wire [4:0] WB_io_writeRfOp_i_rd; // @[TOP.scala 29:31]
  wire [63:0] WB_io_writeRfOp_i_wdata; // @[TOP.scala 29:31]
  wire  WB_io_writeRfOp_o_wen; // @[TOP.scala 29:31]
  wire [4:0] WB_io_writeRfOp_o_rd; // @[TOP.scala 29:31]
  wire [63:0] WB_io_writeRfOp_o_wdata; // @[TOP.scala 29:31]
  wire  WB_io_debug_exit; // @[TOP.scala 29:31]
  wire [63:0] WB_io_debug_a0; // @[TOP.scala 29:31]
  wire [63:0] WB_io_debug_pc; // @[TOP.scala 29:31]
  wire [31:0] WB_io_debug_inst; // @[TOP.scala 29:31]
  wire  Regfile_clock; // @[TOP.scala 30:31]
  wire  Regfile_reset; // @[TOP.scala 30:31]
  wire [4:0] Regfile_io_readRfOp_i_rs1; // @[TOP.scala 30:31]
  wire [4:0] Regfile_io_readRfOp_i_rs2; // @[TOP.scala 30:31]
  wire  Regfile_io_writeRfOp_i_wen; // @[TOP.scala 30:31]
  wire [4:0] Regfile_io_writeRfOp_i_rd; // @[TOP.scala 30:31]
  wire [63:0] Regfile_io_writeRfOp_i_wdata; // @[TOP.scala 30:31]
  wire [63:0] Regfile_io_readRes_o_rs1Val; // @[TOP.scala 30:31]
  wire [63:0] Regfile_io_readRes_o_rs2Val; // @[TOP.scala 30:31]
  wire [63:0] Regfile_io_readRes_o_a0; // @[TOP.scala 30:31]
  wire  Main_Memory_clock; // @[TOP.scala 31:31]
  wire [63:0] Main_Memory_io_pc_i; // @[TOP.scala 31:31]
  wire  Main_Memory_io_memOp_i_isStore; // @[TOP.scala 31:31]
  wire  Main_Memory_io_memOp_i_unsigned; // @[TOP.scala 31:31]
  wire [1:0] Main_Memory_io_memOp_i_length; // @[TOP.scala 31:31]
  wire [63:0] Main_Memory_io_memOp_i_addr; // @[TOP.scala 31:31]
  wire [63:0] Main_Memory_io_memOp_i_sdata; // @[TOP.scala 31:31]
  wire [31:0] Main_Memory_io_inst_o; // @[TOP.scala 31:31]
  wire [63:0] Main_Memory_io_loadVal_o; // @[TOP.scala 31:31]
  IF IF ( // @[TOP.scala 25:31]
    .clock(IF_clock),
    .reset(IF_reset),
    .io_branchOp_i_happen(IF_io_branchOp_i_happen),
    .io_branchOp_i_newPC(IF_io_branchOp_i_newPC),
    .io_inst_i(IF_io_inst_i),
    .io_pc_o(IF_io_pc_o),
    .io_inst_o(IF_io_inst_o)
  );
  ID ID ( // @[TOP.scala 26:31]
    .clock(ID_clock),
    .reset(ID_reset),
    .io_inst_i(ID_io_inst_i),
    .io_pc_i(ID_io_pc_i),
    .io_regVal_i_rs1Val(ID_io_regVal_i_rs1Val),
    .io_regVal_i_rs2Val(ID_io_regVal_i_rs2Val),
    .io_regVal_i_a0(ID_io_regVal_i_a0),
    .io_readRfOp_o_rs1(ID_io_readRfOp_o_rs1),
    .io_readRfOp_o_rs2(ID_io_readRfOp_o_rs2),
    .io_decInfo_o_writeRfOp_wen(ID_io_decInfo_o_writeRfOp_wen),
    .io_decInfo_o_writeRfOp_rd(ID_io_decInfo_o_writeRfOp_rd),
    .io_decInfo_o_aluOp_src1(ID_io_decInfo_o_aluOp_src1),
    .io_decInfo_o_aluOp_src2(ID_io_decInfo_o_aluOp_src2),
    .io_decInfo_o_aluOp_opt(ID_io_decInfo_o_aluOp_opt),
    .io_decInfo_o_branchOp_happen(ID_io_decInfo_o_branchOp_happen),
    .io_decInfo_o_branchOp_newPC(ID_io_decInfo_o_branchOp_newPC),
    .io_decInfo_o_memOp_isLoad(ID_io_decInfo_o_memOp_isLoad),
    .io_decInfo_o_memOp_isStore(ID_io_decInfo_o_memOp_isStore),
    .io_decInfo_o_memOp_unsigned(ID_io_decInfo_o_memOp_unsigned),
    .io_decInfo_o_memOp_length(ID_io_decInfo_o_memOp_length),
    .io_decInfo_o_memOp_sdata(ID_io_decInfo_o_memOp_sdata),
    .io_debug_o_exit(ID_io_debug_o_exit),
    .io_debug_o_a0(ID_io_debug_o_a0),
    .io_debug_o_pc(ID_io_debug_o_pc),
    .io_debug_o_inst(ID_io_debug_o_inst)
  );
  EX EX ( // @[TOP.scala 27:31]
    .io_decInfo_i_writeRfOp_wen(EX_io_decInfo_i_writeRfOp_wen),
    .io_decInfo_i_writeRfOp_rd(EX_io_decInfo_i_writeRfOp_rd),
    .io_decInfo_i_aluOp_src1(EX_io_decInfo_i_aluOp_src1),
    .io_decInfo_i_aluOp_src2(EX_io_decInfo_i_aluOp_src2),
    .io_decInfo_i_aluOp_opt(EX_io_decInfo_i_aluOp_opt),
    .io_decInfo_i_memOp_isLoad(EX_io_decInfo_i_memOp_isLoad),
    .io_decInfo_i_memOp_isStore(EX_io_decInfo_i_memOp_isStore),
    .io_decInfo_i_memOp_unsigned(EX_io_decInfo_i_memOp_unsigned),
    .io_decInfo_i_memOp_length(EX_io_decInfo_i_memOp_length),
    .io_decInfo_i_memOp_sdata(EX_io_decInfo_i_memOp_sdata),
    .io_writeRfOp_o_wen(EX_io_writeRfOp_o_wen),
    .io_writeRfOp_o_rd(EX_io_writeRfOp_o_rd),
    .io_writeRfOp_o_wdata(EX_io_writeRfOp_o_wdata),
    .io_memOp_o_isLoad(EX_io_memOp_o_isLoad),
    .io_memOp_o_isStore(EX_io_memOp_o_isStore),
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
  MEM MEM ( // @[TOP.scala 28:31]
    .clock(MEM_clock),
    .reset(MEM_reset),
    .io_writeRfOp_i_wen(MEM_io_writeRfOp_i_wen),
    .io_writeRfOp_i_rd(MEM_io_writeRfOp_i_rd),
    .io_writeRfOp_i_wdata(MEM_io_writeRfOp_i_wdata),
    .io_memOp_i_isLoad(MEM_io_memOp_i_isLoad),
    .io_memOp_i_isStore(MEM_io_memOp_i_isStore),
    .io_memOp_i_unsigned(MEM_io_memOp_i_unsigned),
    .io_memOp_i_length(MEM_io_memOp_i_length),
    .io_memOp_i_addr(MEM_io_memOp_i_addr),
    .io_memOp_i_sdata(MEM_io_memOp_i_sdata),
    .io_loadVal_i(MEM_io_loadVal_i),
    .io_writeRfOp_o_wen(MEM_io_writeRfOp_o_wen),
    .io_writeRfOp_o_rd(MEM_io_writeRfOp_o_rd),
    .io_writeRfOp_o_wdata(MEM_io_writeRfOp_o_wdata),
    .io_debug_i_exit(MEM_io_debug_i_exit),
    .io_debug_i_a0(MEM_io_debug_i_a0),
    .io_debug_i_pc(MEM_io_debug_i_pc),
    .io_debug_i_inst(MEM_io_debug_i_inst),
    .io_debug_o_exit(MEM_io_debug_o_exit),
    .io_debug_o_a0(MEM_io_debug_o_a0),
    .io_debug_o_pc(MEM_io_debug_o_pc),
    .io_debug_o_inst(MEM_io_debug_o_inst)
  );
  WB WB ( // @[TOP.scala 29:31]
    .clock(WB_clock),
    .reset(WB_reset),
    .io_writeRfOp_i_wen(WB_io_writeRfOp_i_wen),
    .io_writeRfOp_i_rd(WB_io_writeRfOp_i_rd),
    .io_writeRfOp_i_wdata(WB_io_writeRfOp_i_wdata),
    .io_writeRfOp_o_wen(WB_io_writeRfOp_o_wen),
    .io_writeRfOp_o_rd(WB_io_writeRfOp_o_rd),
    .io_writeRfOp_o_wdata(WB_io_writeRfOp_o_wdata),
    .io_debug_exit(WB_io_debug_exit),
    .io_debug_a0(WB_io_debug_a0),
    .io_debug_pc(WB_io_debug_pc),
    .io_debug_inst(WB_io_debug_inst)
  );
  Regfile Regfile ( // @[TOP.scala 30:31]
    .clock(Regfile_clock),
    .reset(Regfile_reset),
    .io_readRfOp_i_rs1(Regfile_io_readRfOp_i_rs1),
    .io_readRfOp_i_rs2(Regfile_io_readRfOp_i_rs2),
    .io_writeRfOp_i_wen(Regfile_io_writeRfOp_i_wen),
    .io_writeRfOp_i_rd(Regfile_io_writeRfOp_i_rd),
    .io_writeRfOp_i_wdata(Regfile_io_writeRfOp_i_wdata),
    .io_readRes_o_rs1Val(Regfile_io_readRes_o_rs1Val),
    .io_readRes_o_rs2Val(Regfile_io_readRes_o_rs2Val),
    .io_readRes_o_a0(Regfile_io_readRes_o_a0)
  );
  MAIN_MEMORY Main_Memory ( // @[TOP.scala 31:31]
    .clock(Main_Memory_clock),
    .io_pc_i(Main_Memory_io_pc_i),
    .io_memOp_i_isStore(Main_Memory_io_memOp_i_isStore),
    .io_memOp_i_unsigned(Main_Memory_io_memOp_i_unsigned),
    .io_memOp_i_length(Main_Memory_io_memOp_i_length),
    .io_memOp_i_addr(Main_Memory_io_memOp_i_addr),
    .io_memOp_i_sdata(Main_Memory_io_memOp_i_sdata),
    .io_inst_o(Main_Memory_io_inst_o),
    .io_loadVal_o(Main_Memory_io_loadVal_o)
  );
  assign io_pc_o = IF_io_pc_o; // @[TOP.scala 59:17]
  assign io_inst_o = IF_io_inst_o; // @[TOP.scala 58:17]
  assign io_o = WB_io_writeRfOp_o_wdata; // @[TOP.scala 55:17]
  assign io_src1 = ID_io_decInfo_o_aluOp_src1; // @[TOP.scala 56:17]
  assign io_src2 = ID_io_decInfo_o_aluOp_src2; // @[TOP.scala 57:17]
  assign IF_clock = clock;
  assign IF_reset = reset;
  assign IF_io_branchOp_i_happen = ID_io_decInfo_o_branchOp_happen; // @[TOP.scala 33:25]
  assign IF_io_branchOp_i_newPC = ID_io_decInfo_o_branchOp_newPC; // @[TOP.scala 33:25]
  assign IF_io_inst_i = Main_Memory_io_inst_o; // @[TOP.scala 34:25]
  assign ID_clock = clock;
  assign ID_reset = reset;
  assign ID_io_inst_i = IF_io_inst_o; // @[TOP.scala 39:23]
  assign ID_io_pc_i = IF_io_pc_o; // @[TOP.scala 40:23]
  assign ID_io_regVal_i_rs1Val = Regfile_io_readRes_o_rs1Val; // @[TOP.scala 41:23]
  assign ID_io_regVal_i_rs2Val = Regfile_io_readRes_o_rs2Val; // @[TOP.scala 41:23]
  assign ID_io_regVal_i_a0 = Regfile_io_readRes_o_a0; // @[TOP.scala 41:23]
  assign EX_io_decInfo_i_writeRfOp_wen = ID_io_decInfo_o_writeRfOp_wen; // @[TOP.scala 46:27]
  assign EX_io_decInfo_i_writeRfOp_rd = ID_io_decInfo_o_writeRfOp_rd; // @[TOP.scala 46:27]
  assign EX_io_decInfo_i_aluOp_src1 = ID_io_decInfo_o_aluOp_src1; // @[TOP.scala 46:27]
  assign EX_io_decInfo_i_aluOp_src2 = ID_io_decInfo_o_aluOp_src2; // @[TOP.scala 46:27]
  assign EX_io_decInfo_i_aluOp_opt = ID_io_decInfo_o_aluOp_opt; // @[TOP.scala 46:27]
  assign EX_io_decInfo_i_memOp_isLoad = ID_io_decInfo_o_memOp_isLoad; // @[TOP.scala 46:27]
  assign EX_io_decInfo_i_memOp_isStore = ID_io_decInfo_o_memOp_isStore; // @[TOP.scala 46:27]
  assign EX_io_decInfo_i_memOp_unsigned = ID_io_decInfo_o_memOp_unsigned; // @[TOP.scala 46:27]
  assign EX_io_decInfo_i_memOp_length = ID_io_decInfo_o_memOp_length; // @[TOP.scala 46:27]
  assign EX_io_decInfo_i_memOp_sdata = ID_io_decInfo_o_memOp_sdata; // @[TOP.scala 46:27]
  assign EX_io_debug_i_exit = ID_io_debug_o_exit; // @[TOP.scala 62:21]
  assign EX_io_debug_i_a0 = ID_io_debug_o_a0; // @[TOP.scala 62:21]
  assign EX_io_debug_i_pc = ID_io_debug_o_pc; // @[TOP.scala 62:21]
  assign EX_io_debug_i_inst = ID_io_debug_o_inst; // @[TOP.scala 62:21]
  assign MEM_clock = clock;
  assign MEM_reset = reset;
  assign MEM_io_writeRfOp_i_wen = EX_io_writeRfOp_o_wen; // @[TOP.scala 48:25]
  assign MEM_io_writeRfOp_i_rd = EX_io_writeRfOp_o_rd; // @[TOP.scala 48:25]
  assign MEM_io_writeRfOp_i_wdata = EX_io_writeRfOp_o_wdata; // @[TOP.scala 48:25]
  assign MEM_io_memOp_i_isLoad = EX_io_memOp_o_isLoad; // @[TOP.scala 49:25]
  assign MEM_io_memOp_i_isStore = EX_io_memOp_o_isStore; // @[TOP.scala 49:25]
  assign MEM_io_memOp_i_unsigned = EX_io_memOp_o_unsigned; // @[TOP.scala 49:25]
  assign MEM_io_memOp_i_length = EX_io_memOp_o_length; // @[TOP.scala 49:25]
  assign MEM_io_memOp_i_addr = EX_io_memOp_o_addr; // @[TOP.scala 49:25]
  assign MEM_io_memOp_i_sdata = EX_io_memOp_o_sdata; // @[TOP.scala 49:25]
  assign MEM_io_loadVal_i = Main_Memory_io_loadVal_o; // @[TOP.scala 50:25]
  assign MEM_io_debug_i_exit = EX_io_debug_o_exit; // @[TOP.scala 63:21]
  assign MEM_io_debug_i_a0 = EX_io_debug_o_a0; // @[TOP.scala 63:21]
  assign MEM_io_debug_i_pc = EX_io_debug_o_pc; // @[TOP.scala 63:21]
  assign MEM_io_debug_i_inst = EX_io_debug_o_inst; // @[TOP.scala 63:21]
  assign WB_clock = clock;
  assign WB_reset = reset;
  assign WB_io_writeRfOp_i_wen = MEM_io_writeRfOp_o_wen; // @[TOP.scala 52:25]
  assign WB_io_writeRfOp_i_rd = MEM_io_writeRfOp_o_rd; // @[TOP.scala 52:25]
  assign WB_io_writeRfOp_i_wdata = MEM_io_writeRfOp_o_wdata; // @[TOP.scala 52:25]
  assign WB_io_debug_exit = MEM_io_debug_o_exit; // @[TOP.scala 64:21]
  assign WB_io_debug_a0 = MEM_io_debug_o_a0; // @[TOP.scala 64:21]
  assign WB_io_debug_pc = MEM_io_debug_o_pc; // @[TOP.scala 64:21]
  assign WB_io_debug_inst = MEM_io_debug_o_inst; // @[TOP.scala 64:21]
  assign Regfile_clock = clock;
  assign Regfile_reset = reset;
  assign Regfile_io_readRfOp_i_rs1 = ID_io_readRfOp_o_rs1; // @[TOP.scala 43:31]
  assign Regfile_io_readRfOp_i_rs2 = ID_io_readRfOp_o_rs2; // @[TOP.scala 43:31]
  assign Regfile_io_writeRfOp_i_wen = WB_io_writeRfOp_o_wen; // @[TOP.scala 44:31]
  assign Regfile_io_writeRfOp_i_rd = WB_io_writeRfOp_o_rd; // @[TOP.scala 44:31]
  assign Regfile_io_writeRfOp_i_wdata = WB_io_writeRfOp_o_wdata; // @[TOP.scala 44:31]
  assign Main_Memory_clock = clock;
  assign Main_Memory_io_pc_i = IF_io_pc_o; // @[TOP.scala 36:29]
  assign Main_Memory_io_memOp_i_isStore = MEM_io_memOp_i_isStore; // @[TOP.scala 37:29]
  assign Main_Memory_io_memOp_i_unsigned = MEM_io_memOp_i_unsigned; // @[TOP.scala 37:29]
  assign Main_Memory_io_memOp_i_length = MEM_io_memOp_i_length; // @[TOP.scala 37:29]
  assign Main_Memory_io_memOp_i_addr = MEM_io_memOp_i_addr; // @[TOP.scala 37:29]
  assign Main_Memory_io_memOp_i_sdata = MEM_io_memOp_i_sdata; // @[TOP.scala 37:29]
endmodule
