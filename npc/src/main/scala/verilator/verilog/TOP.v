module IF(
  input  [63:0] io_pc_i,
  input  [31:0] io_inst_i,
  output [63:0] io_pc_o,
  output [31:0] io_inst_o,
  output [63:0] io_debug_pc,
  output [31:0] io_debug_inst
);
  assign io_pc_o = io_pc_i; // @[IF.scala 20:17]
  assign io_inst_o = io_inst_i; // @[IF.scala 21:17]
  assign io_debug_pc = io_pc_i; // @[IF.scala 23:21]
  assign io_debug_inst = io_inst_i; // @[IF.scala 24:21]
endmodule
module ID(
  input  [31:0] io_inst,
  input  [63:0] io_regSrc_rs1Val,
  input  [63:0] io_regSrc_rs2Val,
  input  [63:0] io_regSrc_a0,
  output [4:0]  io_readRfOp_rs1,
  output [4:0]  io_decInfo_rd,
  output [63:0] io_decInfo_src1,
  output [63:0] io_decInfo_src2,
  output [4:0]  io_decInfo_wen,
  output [4:0]  io_decInfo_aluop,
  input  [63:0] io_debug_i_pc,
  input  [31:0] io_debug_i_inst,
  output        io_debug_o_exit,
  output [63:0] io_debug_o_a0,
  output [63:0] io_debug_o_pc,
  output [31:0] io_debug_o_inst
);
  wire [11:0] _imm_I_T_1 = io_inst[31:20]; // @[HELPERS.scala 15:41]
  wire [63:0] imm_I = {{52{_imm_I_T_1[11]}},_imm_I_T_1}; // @[HELPERS.scala 15:56]
  wire [31:0] _decRes_T = io_inst & 32'hfe00707f; // @[Lookup.scala 31:38]
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
  wire [31:0] _decRes_T_20 = io_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _decRes_T_21 = 32'h13 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_23 = 32'h2013 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_25 = 32'h3013 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_27 = 32'h4013 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_29 = 32'h6013 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire  _decRes_T_31 = 32'h7013 == _decRes_T_20; // @[Lookup.scala 31:38]
  wire [31:0] _decRes_T_32 = io_inst & 32'hfc00707f; // @[Lookup.scala 31:38]
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
  wire [31:0] _decRes_T_80 = io_inst & 32'h7f; // @[Lookup.scala 31:38]
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
  wire [31:0] _decRes_T_124 = io_inst & 32'hfff0007f; // @[Lookup.scala 31:38]
  wire  _decRes_T_125 = 32'h100073 == _decRes_T_124; // @[Lookup.scala 31:38]
  wire [3:0] _decRes_T_126 = _decRes_T_125 ? 4'h6 : 4'h7; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_127 = _decRes_T_123 ? 4'h0 : _decRes_T_126; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_128 = _decRes_T_121 ? 4'h0 : _decRes_T_127; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_129 = _decRes_T_119 ? 4'h0 : _decRes_T_128; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_130 = _decRes_T_117 ? 4'h0 : _decRes_T_129; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_131 = _decRes_T_115 ? 4'h0 : _decRes_T_130; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_132 = _decRes_T_113 ? 4'h5 : _decRes_T_131; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_133 = _decRes_T_111 ? 4'h1 : _decRes_T_132; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_134 = _decRes_T_109 ? 4'h1 : _decRes_T_133; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_135 = _decRes_T_107 ? 4'h0 : _decRes_T_134; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_136 = _decRes_T_105 ? 4'h0 : _decRes_T_135; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_137 = _decRes_T_103 ? 4'h0 : _decRes_T_136; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_138 = _decRes_T_101 ? 4'h0 : _decRes_T_137; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_139 = _decRes_T_99 ? 4'h0 : _decRes_T_138; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_140 = _decRes_T_97 ? 4'h1 : _decRes_T_139; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_141 = _decRes_T_95 ? 4'h1 : _decRes_T_140; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_142 = _decRes_T_93 ? 4'h1 : _decRes_T_141; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_143 = _decRes_T_91 ? 4'h1 : _decRes_T_142; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_144 = _decRes_T_89 ? 4'h6 : _decRes_T_143; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_145 = _decRes_T_87 ? 4'h2 : _decRes_T_144; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_146 = _decRes_T_85 ? 4'h2 : _decRes_T_145; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_147 = _decRes_T_83 ? 4'h1 : _decRes_T_146; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_148 = _decRes_T_81 ? 4'h4 : _decRes_T_147; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_149 = _decRes_T_79 ? 4'h3 : _decRes_T_148; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_150 = _decRes_T_77 ? 4'h3 : _decRes_T_149; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_151 = _decRes_T_75 ? 4'h3 : _decRes_T_150; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_152 = _decRes_T_73 ? 4'h3 : _decRes_T_151; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_153 = _decRes_T_71 ? 4'h3 : _decRes_T_152; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_154 = _decRes_T_69 ? 4'h3 : _decRes_T_153; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_155 = _decRes_T_67 ? 4'h0 : _decRes_T_154; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_156 = _decRes_T_65 ? 4'h0 : _decRes_T_155; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_157 = _decRes_T_63 ? 4'h0 : _decRes_T_156; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_158 = _decRes_T_61 ? 4'h0 : _decRes_T_157; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_159 = _decRes_T_59 ? 4'h0 : _decRes_T_158; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_160 = _decRes_T_57 ? 4'h0 : _decRes_T_159; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_161 = _decRes_T_55 ? 4'h0 : _decRes_T_160; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_162 = _decRes_T_53 ? 4'h5 : _decRes_T_161; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_163 = _decRes_T_51 ? 4'h5 : _decRes_T_162; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_164 = _decRes_T_49 ? 4'h5 : _decRes_T_163; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_165 = _decRes_T_47 ? 4'h1 : _decRes_T_164; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_166 = _decRes_T_45 ? 4'h1 : _decRes_T_165; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_167 = _decRes_T_43 ? 4'h1 : _decRes_T_166; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_168 = _decRes_T_41 ? 4'h1 : _decRes_T_167; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_169 = _decRes_T_39 ? 4'h1 : _decRes_T_168; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_170 = _decRes_T_37 ? 4'h1 : _decRes_T_169; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_171 = _decRes_T_35 ? 4'h1 : _decRes_T_170; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_172 = _decRes_T_33 ? 4'h1 : _decRes_T_171; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_173 = _decRes_T_31 ? 4'h1 : _decRes_T_172; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_174 = _decRes_T_29 ? 4'h1 : _decRes_T_173; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_175 = _decRes_T_27 ? 4'h1 : _decRes_T_174; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_176 = _decRes_T_25 ? 4'h1 : _decRes_T_175; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_177 = _decRes_T_23 ? 4'h1 : _decRes_T_176; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_178 = _decRes_T_21 ? 4'h1 : _decRes_T_177; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_179 = _decRes_T_19 ? 4'h0 : _decRes_T_178; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_180 = _decRes_T_17 ? 4'h0 : _decRes_T_179; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_181 = _decRes_T_15 ? 4'h0 : _decRes_T_180; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_182 = _decRes_T_13 ? 4'h0 : _decRes_T_181; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_183 = _decRes_T_11 ? 4'h0 : _decRes_T_182; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_184 = _decRes_T_9 ? 4'h0 : _decRes_T_183; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_185 = _decRes_T_7 ? 4'h0 : _decRes_T_184; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_186 = _decRes_T_5 ? 4'h0 : _decRes_T_185; // @[Lookup.scala 34:39]
  wire [3:0] _decRes_T_187 = _decRes_T_3 ? 4'h0 : _decRes_T_186; // @[Lookup.scala 34:39]
  wire [3:0] decRes_0 = _decRes_T_1 ? 4'h0 : _decRes_T_187; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_193 = _decRes_T_115 ? 5'hb : 5'h0; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_194 = _decRes_T_113 ? 5'h0 : _decRes_T_193; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_195 = _decRes_T_111 ? 5'h0 : _decRes_T_194; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_196 = _decRes_T_109 ? 5'h0 : _decRes_T_195; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_197 = _decRes_T_107 ? 5'h14 : _decRes_T_196; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_198 = _decRes_T_105 ? 5'h13 : _decRes_T_197; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_199 = _decRes_T_103 ? 5'h12 : _decRes_T_198; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_200 = _decRes_T_101 ? 5'h11 : _decRes_T_199; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_201 = _decRes_T_99 ? 5'h10 : _decRes_T_200; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_202 = _decRes_T_97 ? 5'h14 : _decRes_T_201; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_203 = _decRes_T_95 ? 5'h13 : _decRes_T_202; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_204 = _decRes_T_93 ? 5'h12 : _decRes_T_203; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_205 = _decRes_T_91 ? 5'h10 : _decRes_T_204; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_206 = _decRes_T_89 ? 5'h0 : _decRes_T_205; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_207 = _decRes_T_87 ? 5'h19 : _decRes_T_206; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_208 = _decRes_T_85 ? 5'h18 : _decRes_T_207; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_209 = _decRes_T_83 ? 5'ha : _decRes_T_208; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_210 = _decRes_T_81 ? 5'h0 : _decRes_T_209; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_211 = _decRes_T_79 ? 5'h7 : _decRes_T_210; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_212 = _decRes_T_77 ? 5'h6 : _decRes_T_211; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_213 = _decRes_T_75 ? 5'h5 : _decRes_T_212; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_214 = _decRes_T_73 ? 5'h4 : _decRes_T_213; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_215 = _decRes_T_71 ? 5'h1 : _decRes_T_214; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_216 = _decRes_T_69 ? 5'h0 : _decRes_T_215; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_217 = _decRes_T_67 ? 5'h1d : _decRes_T_216; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_218 = _decRes_T_65 ? 5'h1c : _decRes_T_217; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_219 = _decRes_T_63 ? 5'h1b : _decRes_T_218; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_220 = _decRes_T_61 ? 5'h1a : _decRes_T_219; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_221 = _decRes_T_59 ? 5'hd : _decRes_T_220; // @[Lookup.scala 34:39]
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
  wire  _T = 4'h1 == decRes_0; // @[ID.scala 45:21]
  assign io_readRfOp_rs1 = io_inst[19:15]; // @[ID.scala 42:35]
  assign io_decInfo_rd = io_inst[11:7]; // @[ID.scala 38:32]
  assign io_decInfo_src1 = io_regSrc_rs1Val; // @[ID.scala 45:21 35:25 47:29]
  assign io_decInfo_src2 = 4'h1 == decRes_0 ? imm_I : io_regSrc_rs2Val; // @[ID.scala 45:21 36:25 48:29]
  assign io_decInfo_wen = {{4'd0}, _T};
  assign io_decInfo_aluop = _decRes_T_1 ? 5'h0 : _decRes_T_249; // @[Lookup.scala 34:39]
  assign io_debug_o_exit = decRes_0 == 4'h6; // @[ID.scala 63:37]
  assign io_debug_o_a0 = io_regSrc_a0; // @[ID.scala 62:21]
  assign io_debug_o_pc = io_debug_i_pc; // @[ID.scala 61:21]
  assign io_debug_o_inst = io_debug_i_inst; // @[ID.scala 61:21]
endmodule
module EX(
  input  [4:0]  io_decInfo_rd,
  input  [63:0] io_decInfo_src1,
  input  [63:0] io_decInfo_src2,
  input  [4:0]  io_decInfo_wen,
  input  [4:0]  io_decInfo_aluop,
  output        io_writeRfOp_wen,
  output [4:0]  io_writeRfOp_rd,
  output [63:0] io_writeRfOp_wdata,
  input         io_debug_i_exit,
  input  [63:0] io_debug_i_a0,
  input  [63:0] io_debug_i_pc,
  input  [31:0] io_debug_i_inst,
  output        io_debug_o_exit,
  output [63:0] io_debug_o_a0,
  output [63:0] io_debug_o_pc,
  output [31:0] io_debug_o_inst
);
  wire [63:0] _aluRes_T_1 = io_decInfo_src1 + io_decInfo_src2; // @[EX.scala 20:51]
  wire [63:0] _aluRes_T_5 = io_decInfo_src1 - io_decInfo_src2; // @[EX.scala 22:26]
  wire  _aluRes_T_8 = $signed(io_decInfo_src1) < $signed(io_decInfo_src2); // @[EX.scala 23:36]
  wire  _aluRes_T_10 = io_decInfo_src1 < io_decInfo_src2; // @[EX.scala 24:29]
  wire [127:0] _aluRes_T_12 = io_decInfo_src1 * io_decInfo_src2; // @[EX.scala 25:26]
  wire [63:0] _aluRes_T_16 = io_decInfo_src1 ^ io_decInfo_src2; // @[EX.scala 27:26]
  wire [63:0] _aluRes_T_17 = io_decInfo_src1 | io_decInfo_src2; // @[EX.scala 28:26]
  wire [63:0] _aluRes_T_18 = io_decInfo_src1 & io_decInfo_src2; // @[EX.scala 29:26]
  wire [126:0] _GEN_0 = {{63'd0}, io_decInfo_src1}; // @[EX.scala 30:26]
  wire [126:0] _aluRes_T_20 = _GEN_0 << io_decInfo_src2[5:0]; // @[EX.scala 30:26]
  wire [63:0] _aluRes_T_22 = io_decInfo_src1 >> io_decInfo_src2[5:0]; // @[EX.scala 31:26]
  wire [63:0] _aluRes_T_26 = $signed(io_decInfo_src1) >>> io_decInfo_src2[5:0]; // @[EX.scala 32:47]
  wire [31:0] _aluRes_T_31 = io_decInfo_src1[31:0] + io_decInfo_src2[31:0]; // @[HELPERS.scala 15:41]
  wire [63:0] _aluRes_T_33 = {{32{_aluRes_T_31[31]}},_aluRes_T_31}; // @[HELPERS.scala 15:56]
  wire [31:0] _aluRes_T_38 = io_decInfo_src1[31:0] - io_decInfo_src2[31:0]; // @[HELPERS.scala 15:41]
  wire [63:0] _aluRes_T_40 = {{32{_aluRes_T_38[31]}},_aluRes_T_38}; // @[HELPERS.scala 15:56]
  wire [63:0] _aluRes_T_46 = io_decInfo_src1[31:0] * io_decInfo_src2[31:0]; // @[HELPERS.scala 15:56]
  wire [94:0] _GEN_1 = {{31'd0}, io_decInfo_src1}; // @[EX.scala 37:31]
  wire [94:0] _aluRes_T_48 = _GEN_1 << io_decInfo_src2[4:0]; // @[EX.scala 37:31]
  wire [31:0] _aluRes_T_50 = _aluRes_T_48[31:0]; // @[HELPERS.scala 15:41]
  wire [63:0] _aluRes_T_52 = {{32{_aluRes_T_50[31]}},_aluRes_T_50}; // @[HELPERS.scala 15:56]
  wire [31:0] _aluRes_T_60 = io_decInfo_src1[31:0]; // @[EX.scala 39:37]
  wire [31:0] _aluRes_T_64 = $signed(_aluRes_T_60) >>> io_decInfo_src2[4:0]; // @[HELPERS.scala 15:41]
  wire [63:0] _aluRes_T_66 = {{32{_aluRes_T_64[31]}},_aluRes_T_64}; // @[HELPERS.scala 15:56]
  wire [63:0] _aluRes_T_68 = 5'h0 == io_decInfo_aluop ? _aluRes_T_1 : _aluRes_T_1; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_70 = 5'h1 == io_decInfo_aluop ? _aluRes_T_5 : _aluRes_T_68; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_72 = 5'h2 == io_decInfo_aluop ? {{63'd0}, _aluRes_T_8} : _aluRes_T_70; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_74 = 5'h3 == io_decInfo_aluop ? {{63'd0}, _aluRes_T_10} : _aluRes_T_72; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_76 = 5'hb == io_decInfo_aluop ? _aluRes_T_12[63:0] : _aluRes_T_74; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_78 = 5'hc == io_decInfo_aluop ? _aluRes_T_12[127:64] : _aluRes_T_76; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_80 = 5'h4 == io_decInfo_aluop ? _aluRes_T_16 : _aluRes_T_78; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_82 = 5'h5 == io_decInfo_aluop ? _aluRes_T_17 : _aluRes_T_80; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_84 = 5'h6 == io_decInfo_aluop ? _aluRes_T_18 : _aluRes_T_82; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_86 = 5'h7 == io_decInfo_aluop ? _aluRes_T_20 : {{63'd0}, _aluRes_T_84}; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_88 = 5'h8 == io_decInfo_aluop ? {{63'd0}, _aluRes_T_22} : _aluRes_T_86; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_90 = 5'h9 == io_decInfo_aluop ? {{63'd0}, _aluRes_T_26} : _aluRes_T_88; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_92 = 5'h10 == io_decInfo_aluop ? {{63'd0}, _aluRes_T_33} : _aluRes_T_90; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_94 = 5'h11 == io_decInfo_aluop ? {{63'd0}, _aluRes_T_40} : _aluRes_T_92; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_96 = 5'hf == io_decInfo_aluop ? {{63'd0}, _aluRes_T_46} : _aluRes_T_94; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_98 = 5'h12 == io_decInfo_aluop ? {{63'd0}, _aluRes_T_52} : _aluRes_T_96; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_100 = 5'h13 == io_decInfo_aluop ? {{63'd0}, _aluRes_T_52} : _aluRes_T_98; // @[Mux.scala 81:58]
  wire [126:0] aluRes = 5'h14 == io_decInfo_aluop ? {{63'd0}, _aluRes_T_66} : _aluRes_T_100; // @[Mux.scala 81:58]
  assign io_writeRfOp_wen = io_decInfo_wen[0]; // @[EX.scala 46:25]
  assign io_writeRfOp_rd = io_decInfo_rd; // @[EX.scala 47:25]
  assign io_writeRfOp_wdata = aluRes[63:0]; // @[EX.scala 45:25]
  assign io_debug_o_exit = io_debug_i_exit; // @[EX.scala 56:17]
  assign io_debug_o_a0 = io_debug_i_a0; // @[EX.scala 56:17]
  assign io_debug_o_pc = io_debug_i_pc; // @[EX.scala 56:17]
  assign io_debug_o_inst = io_debug_i_inst; // @[EX.scala 56:17]
endmodule
module MEM(
  input         io_writeRfOp_i_wen,
  input  [4:0]  io_writeRfOp_i_rd,
  input  [63:0] io_writeRfOp_i_wdata,
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
  assign io_writeRfOp_o_wen = io_writeRfOp_i_wen; // @[MEM.scala 14:21]
  assign io_writeRfOp_o_rd = io_writeRfOp_i_rd; // @[MEM.scala 14:21]
  assign io_writeRfOp_o_wdata = io_writeRfOp_i_wdata; // @[MEM.scala 14:21]
  assign io_debug_o_exit = io_debug_i_exit; // @[MEM.scala 15:21]
  assign io_debug_o_a0 = io_debug_i_a0; // @[MEM.scala 15:21]
  assign io_debug_o_pc = io_debug_i_pc; // @[MEM.scala 15:21]
  assign io_debug_o_inst = io_debug_i_inst; // @[MEM.scala 15:21]
endmodule
module WB(
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
  wire  DEBUG_exit; // @[WB.scala 15:23]
  wire [63:0] DEBUG_pc; // @[WB.scala 15:23]
  wire [31:0] DEBUG_inst; // @[WB.scala 15:23]
  wire [63:0] DEBUG_a0; // @[WB.scala 15:23]
  DEBUG DEBUG ( // @[WB.scala 15:23]
    .exit(DEBUG_exit),
    .pc(DEBUG_pc),
    .inst(DEBUG_inst),
    .a0(DEBUG_a0)
  );
  assign io_writeRfOp_o_wen = io_writeRfOp_i_wen; // @[WB.scala 13:21]
  assign io_writeRfOp_o_rd = io_writeRfOp_i_rd; // @[WB.scala 13:21]
  assign io_writeRfOp_o_wdata = io_writeRfOp_i_wdata; // @[WB.scala 13:21]
  assign DEBUG_exit = io_debug_exit; // @[WB.scala 17:21]
  assign DEBUG_pc = io_debug_pc; // @[WB.scala 16:21]
  assign DEBUG_inst = io_debug_inst; // @[WB.scala 18:21]
  assign DEBUG_a0 = io_debug_a0; // @[WB.scala 19:21]
endmodule
module Regfile(
  input         clock,
  input         reset,
  input  [4:0]  io_readRfOp_rs1,
  input         io_writeRfOp_wen,
  input  [4:0]  io_writeRfOp_rd,
  input  [63:0] io_writeRfOp_wdata,
  output [63:0] io_readRes_rs1Val,
  output [63:0] io_readRes_rs2Val,
  output [63:0] io_readRes_a0
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
  wire [63:0] _GEN_63 = 5'h1 == io_readRfOp_rs1 ? registers_1 : registers_0; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_64 = 5'h2 == io_readRfOp_rs1 ? registers_2 : _GEN_63; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_65 = 5'h3 == io_readRfOp_rs1 ? registers_3 : _GEN_64; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_66 = 5'h4 == io_readRfOp_rs1 ? registers_4 : _GEN_65; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_67 = 5'h5 == io_readRfOp_rs1 ? registers_5 : _GEN_66; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_68 = 5'h6 == io_readRfOp_rs1 ? registers_6 : _GEN_67; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_69 = 5'h7 == io_readRfOp_rs1 ? registers_7 : _GEN_68; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_70 = 5'h8 == io_readRfOp_rs1 ? registers_8 : _GEN_69; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_71 = 5'h9 == io_readRfOp_rs1 ? registers_9 : _GEN_70; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_72 = 5'ha == io_readRfOp_rs1 ? registers_10 : _GEN_71; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_73 = 5'hb == io_readRfOp_rs1 ? registers_11 : _GEN_72; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_74 = 5'hc == io_readRfOp_rs1 ? registers_12 : _GEN_73; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_75 = 5'hd == io_readRfOp_rs1 ? registers_13 : _GEN_74; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_76 = 5'he == io_readRfOp_rs1 ? registers_14 : _GEN_75; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_77 = 5'hf == io_readRfOp_rs1 ? registers_15 : _GEN_76; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_78 = 5'h10 == io_readRfOp_rs1 ? registers_16 : _GEN_77; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_79 = 5'h11 == io_readRfOp_rs1 ? registers_17 : _GEN_78; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_80 = 5'h12 == io_readRfOp_rs1 ? registers_18 : _GEN_79; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_81 = 5'h13 == io_readRfOp_rs1 ? registers_19 : _GEN_80; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_82 = 5'h14 == io_readRfOp_rs1 ? registers_20 : _GEN_81; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_83 = 5'h15 == io_readRfOp_rs1 ? registers_21 : _GEN_82; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_84 = 5'h16 == io_readRfOp_rs1 ? registers_22 : _GEN_83; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_85 = 5'h17 == io_readRfOp_rs1 ? registers_23 : _GEN_84; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_86 = 5'h18 == io_readRfOp_rs1 ? registers_24 : _GEN_85; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_87 = 5'h19 == io_readRfOp_rs1 ? registers_25 : _GEN_86; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_88 = 5'h1a == io_readRfOp_rs1 ? registers_26 : _GEN_87; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_89 = 5'h1b == io_readRfOp_rs1 ? registers_27 : _GEN_88; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_90 = 5'h1c == io_readRfOp_rs1 ? registers_28 : _GEN_89; // @[REGFILE.scala 19:{23,23}]
  wire [63:0] _GEN_91 = 5'h1d == io_readRfOp_rs1 ? registers_29 : _GEN_90; // @[REGFILE.scala 19:{23,23}]
  assign io_readRes_rs1Val = 5'h1e == io_readRfOp_rs1 ? registers_30 : _GEN_91; // @[REGFILE.scala 19:{23,23}]
  assign io_readRes_rs2Val = 5'h1e == io_readRfOp_rs1 ? registers_30 : _GEN_91; // @[REGFILE.scala 19:{23,23}]
  assign io_readRes_a0 = registers_10; // @[REGFILE.scala 22:23]
  always @(posedge clock) begin
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_0 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h0 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_0 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end else begin
        registers_0 <= 64'h0; // @[REGFILE.scala 12:21]
      end
    end else begin
      registers_0 <= 64'h0; // @[REGFILE.scala 12:21]
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_1 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h1 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_1 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_2 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h2 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_2 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_3 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h3 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_3 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_4 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h4 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_4 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_5 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h5 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_5 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_6 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h6 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_6 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_7 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h7 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_7 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_8 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h8 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_8 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_9 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h9 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_9 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_10 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'ha == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_10 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_11 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'hb == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_11 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_12 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'hc == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_12 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_13 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'hd == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_13 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_14 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'he == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_14 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_15 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'hf == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_15 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_16 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h10 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_16 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_17 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h11 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_17 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_18 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h12 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_18 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_19 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h13 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_19 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_20 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h14 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_20 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_21 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h15 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_21 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_22 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h16 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_22 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_23 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h17 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_23 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_24 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h18 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_24 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_25 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h19 == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_25 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_26 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h1a == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_26 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_27 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h1b == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_27 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_28 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h1c == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_28 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_29 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h1d == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_29 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
      end
    end
    if (reset) begin // @[REGFILE.scala 11:31]
      registers_30 <= 64'h0; // @[REGFILE.scala 11:31]
    end else if (io_writeRfOp_wen) begin // @[REGFILE.scala 14:27]
      if (5'h1e == io_writeRfOp_rd) begin // @[REGFILE.scala 16:40]
        registers_30 <= io_writeRfOp_wdata; // @[REGFILE.scala 16:40]
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
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module TOP(
  input         clock,
  input         reset,
  input  [63:0] io_pc_i,
  input  [31:0] io_inst_i,
  output [63:0] io_pc_o,
  output [31:0] io_inst_o,
  output [63:0] io_o,
  output [63:0] io_src1,
  output [63:0] io_src2
);
  wire [63:0] IF_io_pc_i; // @[TOP.scala 25:27]
  wire [31:0] IF_io_inst_i; // @[TOP.scala 25:27]
  wire [63:0] IF_io_pc_o; // @[TOP.scala 25:27]
  wire [31:0] IF_io_inst_o; // @[TOP.scala 25:27]
  wire [63:0] IF_io_debug_pc; // @[TOP.scala 25:27]
  wire [31:0] IF_io_debug_inst; // @[TOP.scala 25:27]
  wire [31:0] ID_io_inst; // @[TOP.scala 26:27]
  wire [63:0] ID_io_regSrc_rs1Val; // @[TOP.scala 26:27]
  wire [63:0] ID_io_regSrc_rs2Val; // @[TOP.scala 26:27]
  wire [63:0] ID_io_regSrc_a0; // @[TOP.scala 26:27]
  wire [4:0] ID_io_readRfOp_rs1; // @[TOP.scala 26:27]
  wire [4:0] ID_io_decInfo_rd; // @[TOP.scala 26:27]
  wire [63:0] ID_io_decInfo_src1; // @[TOP.scala 26:27]
  wire [63:0] ID_io_decInfo_src2; // @[TOP.scala 26:27]
  wire [4:0] ID_io_decInfo_wen; // @[TOP.scala 26:27]
  wire [4:0] ID_io_decInfo_aluop; // @[TOP.scala 26:27]
  wire [63:0] ID_io_debug_i_pc; // @[TOP.scala 26:27]
  wire [31:0] ID_io_debug_i_inst; // @[TOP.scala 26:27]
  wire  ID_io_debug_o_exit; // @[TOP.scala 26:27]
  wire [63:0] ID_io_debug_o_a0; // @[TOP.scala 26:27]
  wire [63:0] ID_io_debug_o_pc; // @[TOP.scala 26:27]
  wire [31:0] ID_io_debug_o_inst; // @[TOP.scala 26:27]
  wire [4:0] EX_io_decInfo_rd; // @[TOP.scala 27:27]
  wire [63:0] EX_io_decInfo_src1; // @[TOP.scala 27:27]
  wire [63:0] EX_io_decInfo_src2; // @[TOP.scala 27:27]
  wire [4:0] EX_io_decInfo_wen; // @[TOP.scala 27:27]
  wire [4:0] EX_io_decInfo_aluop; // @[TOP.scala 27:27]
  wire  EX_io_writeRfOp_wen; // @[TOP.scala 27:27]
  wire [4:0] EX_io_writeRfOp_rd; // @[TOP.scala 27:27]
  wire [63:0] EX_io_writeRfOp_wdata; // @[TOP.scala 27:27]
  wire  EX_io_debug_i_exit; // @[TOP.scala 27:27]
  wire [63:0] EX_io_debug_i_a0; // @[TOP.scala 27:27]
  wire [63:0] EX_io_debug_i_pc; // @[TOP.scala 27:27]
  wire [31:0] EX_io_debug_i_inst; // @[TOP.scala 27:27]
  wire  EX_io_debug_o_exit; // @[TOP.scala 27:27]
  wire [63:0] EX_io_debug_o_a0; // @[TOP.scala 27:27]
  wire [63:0] EX_io_debug_o_pc; // @[TOP.scala 27:27]
  wire [31:0] EX_io_debug_o_inst; // @[TOP.scala 27:27]
  wire  MEM_io_writeRfOp_i_wen; // @[TOP.scala 28:27]
  wire [4:0] MEM_io_writeRfOp_i_rd; // @[TOP.scala 28:27]
  wire [63:0] MEM_io_writeRfOp_i_wdata; // @[TOP.scala 28:27]
  wire  MEM_io_writeRfOp_o_wen; // @[TOP.scala 28:27]
  wire [4:0] MEM_io_writeRfOp_o_rd; // @[TOP.scala 28:27]
  wire [63:0] MEM_io_writeRfOp_o_wdata; // @[TOP.scala 28:27]
  wire  MEM_io_debug_i_exit; // @[TOP.scala 28:27]
  wire [63:0] MEM_io_debug_i_a0; // @[TOP.scala 28:27]
  wire [63:0] MEM_io_debug_i_pc; // @[TOP.scala 28:27]
  wire [31:0] MEM_io_debug_i_inst; // @[TOP.scala 28:27]
  wire  MEM_io_debug_o_exit; // @[TOP.scala 28:27]
  wire [63:0] MEM_io_debug_o_a0; // @[TOP.scala 28:27]
  wire [63:0] MEM_io_debug_o_pc; // @[TOP.scala 28:27]
  wire [31:0] MEM_io_debug_o_inst; // @[TOP.scala 28:27]
  wire  WB_io_writeRfOp_i_wen; // @[TOP.scala 29:27]
  wire [4:0] WB_io_writeRfOp_i_rd; // @[TOP.scala 29:27]
  wire [63:0] WB_io_writeRfOp_i_wdata; // @[TOP.scala 29:27]
  wire  WB_io_writeRfOp_o_wen; // @[TOP.scala 29:27]
  wire [4:0] WB_io_writeRfOp_o_rd; // @[TOP.scala 29:27]
  wire [63:0] WB_io_writeRfOp_o_wdata; // @[TOP.scala 29:27]
  wire  WB_io_debug_exit; // @[TOP.scala 29:27]
  wire [63:0] WB_io_debug_a0; // @[TOP.scala 29:27]
  wire [63:0] WB_io_debug_pc; // @[TOP.scala 29:27]
  wire [31:0] WB_io_debug_inst; // @[TOP.scala 29:27]
  wire  Regfile_clock; // @[TOP.scala 30:27]
  wire  Regfile_reset; // @[TOP.scala 30:27]
  wire [4:0] Regfile_io_readRfOp_rs1; // @[TOP.scala 30:27]
  wire  Regfile_io_writeRfOp_wen; // @[TOP.scala 30:27]
  wire [4:0] Regfile_io_writeRfOp_rd; // @[TOP.scala 30:27]
  wire [63:0] Regfile_io_writeRfOp_wdata; // @[TOP.scala 30:27]
  wire [63:0] Regfile_io_readRes_rs1Val; // @[TOP.scala 30:27]
  wire [63:0] Regfile_io_readRes_rs2Val; // @[TOP.scala 30:27]
  wire [63:0] Regfile_io_readRes_a0; // @[TOP.scala 30:27]
  IF IF ( // @[TOP.scala 25:27]
    .io_pc_i(IF_io_pc_i),
    .io_inst_i(IF_io_inst_i),
    .io_pc_o(IF_io_pc_o),
    .io_inst_o(IF_io_inst_o),
    .io_debug_pc(IF_io_debug_pc),
    .io_debug_inst(IF_io_debug_inst)
  );
  ID ID ( // @[TOP.scala 26:27]
    .io_inst(ID_io_inst),
    .io_regSrc_rs1Val(ID_io_regSrc_rs1Val),
    .io_regSrc_rs2Val(ID_io_regSrc_rs2Val),
    .io_regSrc_a0(ID_io_regSrc_a0),
    .io_readRfOp_rs1(ID_io_readRfOp_rs1),
    .io_decInfo_rd(ID_io_decInfo_rd),
    .io_decInfo_src1(ID_io_decInfo_src1),
    .io_decInfo_src2(ID_io_decInfo_src2),
    .io_decInfo_wen(ID_io_decInfo_wen),
    .io_decInfo_aluop(ID_io_decInfo_aluop),
    .io_debug_i_pc(ID_io_debug_i_pc),
    .io_debug_i_inst(ID_io_debug_i_inst),
    .io_debug_o_exit(ID_io_debug_o_exit),
    .io_debug_o_a0(ID_io_debug_o_a0),
    .io_debug_o_pc(ID_io_debug_o_pc),
    .io_debug_o_inst(ID_io_debug_o_inst)
  );
  EX EX ( // @[TOP.scala 27:27]
    .io_decInfo_rd(EX_io_decInfo_rd),
    .io_decInfo_src1(EX_io_decInfo_src1),
    .io_decInfo_src2(EX_io_decInfo_src2),
    .io_decInfo_wen(EX_io_decInfo_wen),
    .io_decInfo_aluop(EX_io_decInfo_aluop),
    .io_writeRfOp_wen(EX_io_writeRfOp_wen),
    .io_writeRfOp_rd(EX_io_writeRfOp_rd),
    .io_writeRfOp_wdata(EX_io_writeRfOp_wdata),
    .io_debug_i_exit(EX_io_debug_i_exit),
    .io_debug_i_a0(EX_io_debug_i_a0),
    .io_debug_i_pc(EX_io_debug_i_pc),
    .io_debug_i_inst(EX_io_debug_i_inst),
    .io_debug_o_exit(EX_io_debug_o_exit),
    .io_debug_o_a0(EX_io_debug_o_a0),
    .io_debug_o_pc(EX_io_debug_o_pc),
    .io_debug_o_inst(EX_io_debug_o_inst)
  );
  MEM MEM ( // @[TOP.scala 28:27]
    .io_writeRfOp_i_wen(MEM_io_writeRfOp_i_wen),
    .io_writeRfOp_i_rd(MEM_io_writeRfOp_i_rd),
    .io_writeRfOp_i_wdata(MEM_io_writeRfOp_i_wdata),
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
  WB WB ( // @[TOP.scala 29:27]
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
  Regfile Regfile ( // @[TOP.scala 30:27]
    .clock(Regfile_clock),
    .reset(Regfile_reset),
    .io_readRfOp_rs1(Regfile_io_readRfOp_rs1),
    .io_writeRfOp_wen(Regfile_io_writeRfOp_wen),
    .io_writeRfOp_rd(Regfile_io_writeRfOp_rd),
    .io_writeRfOp_wdata(Regfile_io_writeRfOp_wdata),
    .io_readRes_rs1Val(Regfile_io_readRes_rs1Val),
    .io_readRes_rs2Val(Regfile_io_readRes_rs2Val),
    .io_readRes_a0(Regfile_io_readRes_a0)
  );
  assign io_pc_o = io_pc_i; // @[TOP.scala 51:17]
  assign io_inst_o = io_inst_i; // @[TOP.scala 50:17]
  assign io_o = WB_io_writeRfOp_o_wdata; // @[TOP.scala 49:17]
  assign io_src1 = ID_io_decInfo_src1; // @[TOP.scala 52:17]
  assign io_src2 = ID_io_decInfo_src2; // @[TOP.scala 53:17]
  assign IF_io_pc_i = io_pc_o; // @[TOP.scala 32:21]
  assign IF_io_inst_i = io_inst_o; // @[TOP.scala 33:21]
  assign ID_io_inst = IF_io_inst_o; // @[TOP.scala 35:21]
  assign ID_io_regSrc_rs1Val = Regfile_io_readRes_rs1Val; // @[TOP.scala 37:21]
  assign ID_io_regSrc_rs2Val = Regfile_io_readRes_rs2Val; // @[TOP.scala 37:21]
  assign ID_io_regSrc_a0 = Regfile_io_readRes_a0; // @[TOP.scala 37:21]
  assign ID_io_debug_i_pc = IF_io_debug_pc; // @[TOP.scala 55:21]
  assign ID_io_debug_i_inst = IF_io_debug_inst; // @[TOP.scala 55:21]
  assign EX_io_decInfo_rd = ID_io_decInfo_rd; // @[TOP.scala 42:25]
  assign EX_io_decInfo_src1 = ID_io_decInfo_src1; // @[TOP.scala 42:25]
  assign EX_io_decInfo_src2 = ID_io_decInfo_src2; // @[TOP.scala 42:25]
  assign EX_io_decInfo_wen = ID_io_decInfo_wen; // @[TOP.scala 42:25]
  assign EX_io_decInfo_aluop = ID_io_decInfo_aluop; // @[TOP.scala 42:25]
  assign EX_io_debug_i_exit = ID_io_debug_o_exit; // @[TOP.scala 56:21]
  assign EX_io_debug_i_a0 = ID_io_debug_o_a0; // @[TOP.scala 56:21]
  assign EX_io_debug_i_pc = ID_io_debug_o_pc; // @[TOP.scala 56:21]
  assign EX_io_debug_i_inst = ID_io_debug_o_inst; // @[TOP.scala 56:21]
  assign MEM_io_writeRfOp_i_wen = EX_io_writeRfOp_wen; // @[TOP.scala 44:25]
  assign MEM_io_writeRfOp_i_rd = EX_io_writeRfOp_rd; // @[TOP.scala 44:25]
  assign MEM_io_writeRfOp_i_wdata = EX_io_writeRfOp_wdata; // @[TOP.scala 44:25]
  assign MEM_io_debug_i_exit = EX_io_debug_o_exit; // @[TOP.scala 57:21]
  assign MEM_io_debug_i_a0 = EX_io_debug_o_a0; // @[TOP.scala 57:21]
  assign MEM_io_debug_i_pc = EX_io_debug_o_pc; // @[TOP.scala 57:21]
  assign MEM_io_debug_i_inst = EX_io_debug_o_inst; // @[TOP.scala 57:21]
  assign WB_io_writeRfOp_i_wen = MEM_io_writeRfOp_o_wen; // @[TOP.scala 46:25]
  assign WB_io_writeRfOp_i_rd = MEM_io_writeRfOp_o_rd; // @[TOP.scala 46:25]
  assign WB_io_writeRfOp_i_wdata = MEM_io_writeRfOp_o_wdata; // @[TOP.scala 46:25]
  assign WB_io_debug_exit = MEM_io_debug_o_exit; // @[TOP.scala 58:21]
  assign WB_io_debug_a0 = MEM_io_debug_o_a0; // @[TOP.scala 58:21]
  assign WB_io_debug_pc = MEM_io_debug_o_pc; // @[TOP.scala 58:21]
  assign WB_io_debug_inst = MEM_io_debug_o_inst; // @[TOP.scala 58:21]
  assign Regfile_clock = clock;
  assign Regfile_reset = reset;
  assign Regfile_io_readRfOp_rs1 = ID_io_readRfOp_rs1; // @[TOP.scala 39:29]
  assign Regfile_io_writeRfOp_wen = WB_io_writeRfOp_o_wen; // @[TOP.scala 40:29]
  assign Regfile_io_writeRfOp_rd = WB_io_writeRfOp_o_rd; // @[TOP.scala 40:29]
  assign Regfile_io_writeRfOp_wdata = WB_io_writeRfOp_o_wdata; // @[TOP.scala 40:29]
endmodule
