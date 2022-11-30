module IF(
  input         clock,
  input         reset,
  input         io_ctrl_i_stall,
  output [63:0] io_pc_o,
  output [31:0] io_inst_o,
  input         io_predict_i_is_branch,
  input  [63:0] io_predict_i_pc,
  input  [11:0] io_predict_i_index,
  input  [63:0] io_predict_i_target,
  input         io_predict_i_taken,
  input         io_predict_i_predict_fail,
  output        io_predict_o_is_branch,
  output [63:0] io_predict_o_pc,
  output [11:0] io_predict_o_index,
  output        io_predict_o_predict_taken,
  output [63:0] io_predict_o_predict_target,
  input         io_icache_insert_i_valid,
  input  [31:0] io_icache_insert_i_insts_0,
  input  [31:0] io_icache_insert_i_insts_1,
  input  [31:0] io_icache_insert_i_insts_2,
  input  [31:0] io_icache_insert_i_insts_3,
  input  [7:0]  io_icache_insert_i_index,
  input  [19:0] io_icache_insert_i_tag,
  output        io_icache_miss_o_miss,
  output [63:0] io_icache_miss_o_pc,
  output        io_stall_req_o,
  output [63:0] io_success_cnt_o,
  output [63:0] io_nr_icache_hit_o
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [63:0] _RAND_18;
  reg [63:0] _RAND_19;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] BTB_pc [0:4095]; // @[IF.scala 73:20]
  wire  BTB_pc_btb_valid_MPORT_en; // @[IF.scala 73:20]
  wire [11:0] BTB_pc_btb_valid_MPORT_addr; // @[IF.scala 73:20]
  wire [63:0] BTB_pc_btb_valid_MPORT_data; // @[IF.scala 73:20]
  wire  BTB_pc_predict_target_MPORT_en; // @[IF.scala 73:20]
  wire [11:0] BTB_pc_predict_target_MPORT_addr; // @[IF.scala 73:20]
  wire [63:0] BTB_pc_predict_target_MPORT_data; // @[IF.scala 73:20]
  wire [63:0] BTB_pc_MPORT_data; // @[IF.scala 73:20]
  wire [11:0] BTB_pc_MPORT_addr; // @[IF.scala 73:20]
  wire  BTB_pc_MPORT_mask; // @[IF.scala 73:20]
  wire  BTB_pc_MPORT_en; // @[IF.scala 73:20]
  reg [63:0] BTB_target [0:4095]; // @[IF.scala 73:20]
  wire  BTB_target_btb_valid_MPORT_en; // @[IF.scala 73:20]
  wire [11:0] BTB_target_btb_valid_MPORT_addr; // @[IF.scala 73:20]
  wire [63:0] BTB_target_btb_valid_MPORT_data; // @[IF.scala 73:20]
  wire  BTB_target_predict_target_MPORT_en; // @[IF.scala 73:20]
  wire [11:0] BTB_target_predict_target_MPORT_addr; // @[IF.scala 73:20]
  wire [63:0] BTB_target_predict_target_MPORT_data; // @[IF.scala 73:20]
  wire [63:0] BTB_target_MPORT_data; // @[IF.scala 73:20]
  wire [11:0] BTB_target_MPORT_addr; // @[IF.scala 73:20]
  wire  BTB_target_MPORT_mask; // @[IF.scala 73:20]
  wire  BTB_target_MPORT_en; // @[IF.scala 73:20]
  reg [1:0] BPB [0:4095]; // @[IF.scala 74:20]
  wire  BPB_predict_taken_MPORT_en; // @[IF.scala 74:20]
  wire [11:0] BPB_predict_taken_MPORT_addr; // @[IF.scala 74:20]
  wire [1:0] BPB_predict_taken_MPORT_data; // @[IF.scala 74:20]
  wire  BPB_MPORT_2_en; // @[IF.scala 74:20]
  wire [11:0] BPB_MPORT_2_addr; // @[IF.scala 74:20]
  wire [1:0] BPB_MPORT_2_data; // @[IF.scala 74:20]
  wire  BPB_MPORT_3_en; // @[IF.scala 74:20]
  wire [11:0] BPB_MPORT_3_addr; // @[IF.scala 74:20]
  wire [1:0] BPB_MPORT_3_data; // @[IF.scala 74:20]
  wire  BPB_MPORT_4_en; // @[IF.scala 74:20]
  wire [11:0] BPB_MPORT_4_addr; // @[IF.scala 74:20]
  wire [1:0] BPB_MPORT_4_data; // @[IF.scala 74:20]
  wire  BPB_MPORT_5_en; // @[IF.scala 74:20]
  wire [11:0] BPB_MPORT_5_addr; // @[IF.scala 74:20]
  wire [1:0] BPB_MPORT_5_data; // @[IF.scala 74:20]
  wire  BPB_MPORT_6_en; // @[IF.scala 74:20]
  wire [11:0] BPB_MPORT_6_addr; // @[IF.scala 74:20]
  wire [1:0] BPB_MPORT_6_data; // @[IF.scala 74:20]
  wire  BPB_MPORT_7_en; // @[IF.scala 74:20]
  wire [11:0] BPB_MPORT_7_addr; // @[IF.scala 74:20]
  wire [1:0] BPB_MPORT_7_data; // @[IF.scala 74:20]
  wire [1:0] BPB_MPORT_1_data; // @[IF.scala 74:20]
  wire [11:0] BPB_MPORT_1_addr; // @[IF.scala 74:20]
  wire  BPB_MPORT_1_mask; // @[IF.scala 74:20]
  wire  BPB_MPORT_1_en; // @[IF.scala 74:20]
  reg  ICache_Way1_valid [0:255]; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_set1_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_valid_set1_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_set1_data; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_valid1_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_valid_valid1_MPORT_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_valid1_MPORT_data; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_set1_valid_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_valid_set1_valid_MPORT_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_set1_valid_MPORT_data; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_set1_used_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_valid_set1_used_MPORT_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_set1_used_MPORT_data; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_MPORT_8_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_valid_MPORT_8_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_MPORT_8_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_MPORT_8_en; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_MPORT_11_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_valid_MPORT_11_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_MPORT_11_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_MPORT_11_en; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_MPORT_12_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_valid_MPORT_12_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_MPORT_12_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_MPORT_12_en; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_MPORT_15_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_valid_MPORT_15_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_MPORT_15_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_valid_MPORT_15_en; // @[IF.scala 123:29]
  reg [19:0] ICache_Way1_tag [0:255]; // @[IF.scala 123:29]
  wire  ICache_Way1_tag_set1_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_tag_set1_addr; // @[IF.scala 123:29]
  wire [19:0] ICache_Way1_tag_set1_data; // @[IF.scala 123:29]
  wire  ICache_Way1_tag_valid1_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_tag_valid1_MPORT_addr; // @[IF.scala 123:29]
  wire [19:0] ICache_Way1_tag_valid1_MPORT_data; // @[IF.scala 123:29]
  wire  ICache_Way1_tag_set1_valid_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_tag_set1_valid_MPORT_addr; // @[IF.scala 123:29]
  wire [19:0] ICache_Way1_tag_set1_valid_MPORT_data; // @[IF.scala 123:29]
  wire  ICache_Way1_tag_set1_used_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_tag_set1_used_MPORT_addr; // @[IF.scala 123:29]
  wire [19:0] ICache_Way1_tag_set1_used_MPORT_data; // @[IF.scala 123:29]
  wire [19:0] ICache_Way1_tag_MPORT_8_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_tag_MPORT_8_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_tag_MPORT_8_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_tag_MPORT_8_en; // @[IF.scala 123:29]
  wire [19:0] ICache_Way1_tag_MPORT_11_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_tag_MPORT_11_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_tag_MPORT_11_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_tag_MPORT_11_en; // @[IF.scala 123:29]
  wire [19:0] ICache_Way1_tag_MPORT_12_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_tag_MPORT_12_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_tag_MPORT_12_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_tag_MPORT_12_en; // @[IF.scala 123:29]
  wire [19:0] ICache_Way1_tag_MPORT_15_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_tag_MPORT_15_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_tag_MPORT_15_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_tag_MPORT_15_en; // @[IF.scala 123:29]
  reg [31:0] ICache_Way1_insts_0 [0:255]; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_0_set1_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_0_set1_addr; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_0_set1_data; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_0_valid1_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_0_valid1_MPORT_addr; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_0_valid1_MPORT_data; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_0_set1_valid_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_0_set1_valid_MPORT_addr; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_0_set1_valid_MPORT_data; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_0_set1_used_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_0_set1_used_MPORT_addr; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_0_set1_used_MPORT_data; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_0_MPORT_8_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_0_MPORT_8_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_0_MPORT_8_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_0_MPORT_8_en; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_0_MPORT_11_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_0_MPORT_11_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_0_MPORT_11_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_0_MPORT_11_en; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_0_MPORT_12_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_0_MPORT_12_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_0_MPORT_12_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_0_MPORT_12_en; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_0_MPORT_15_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_0_MPORT_15_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_0_MPORT_15_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_0_MPORT_15_en; // @[IF.scala 123:29]
  reg [31:0] ICache_Way1_insts_1 [0:255]; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_1_set1_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_1_set1_addr; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_1_set1_data; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_1_valid1_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_1_valid1_MPORT_addr; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_1_valid1_MPORT_data; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_1_set1_valid_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_1_set1_valid_MPORT_addr; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_1_set1_valid_MPORT_data; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_1_set1_used_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_1_set1_used_MPORT_addr; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_1_set1_used_MPORT_data; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_1_MPORT_8_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_1_MPORT_8_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_1_MPORT_8_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_1_MPORT_8_en; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_1_MPORT_11_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_1_MPORT_11_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_1_MPORT_11_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_1_MPORT_11_en; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_1_MPORT_12_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_1_MPORT_12_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_1_MPORT_12_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_1_MPORT_12_en; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_1_MPORT_15_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_1_MPORT_15_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_1_MPORT_15_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_1_MPORT_15_en; // @[IF.scala 123:29]
  reg [31:0] ICache_Way1_insts_2 [0:255]; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_2_set1_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_2_set1_addr; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_2_set1_data; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_2_valid1_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_2_valid1_MPORT_addr; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_2_valid1_MPORT_data; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_2_set1_valid_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_2_set1_valid_MPORT_addr; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_2_set1_valid_MPORT_data; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_2_set1_used_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_2_set1_used_MPORT_addr; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_2_set1_used_MPORT_data; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_2_MPORT_8_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_2_MPORT_8_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_2_MPORT_8_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_2_MPORT_8_en; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_2_MPORT_11_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_2_MPORT_11_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_2_MPORT_11_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_2_MPORT_11_en; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_2_MPORT_12_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_2_MPORT_12_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_2_MPORT_12_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_2_MPORT_12_en; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_2_MPORT_15_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_2_MPORT_15_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_2_MPORT_15_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_2_MPORT_15_en; // @[IF.scala 123:29]
  reg [31:0] ICache_Way1_insts_3 [0:255]; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_3_set1_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_3_set1_addr; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_3_set1_data; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_3_valid1_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_3_valid1_MPORT_addr; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_3_valid1_MPORT_data; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_3_set1_valid_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_3_set1_valid_MPORT_addr; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_3_set1_valid_MPORT_data; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_3_set1_used_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_3_set1_used_MPORT_addr; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_3_set1_used_MPORT_data; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_3_MPORT_8_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_3_MPORT_8_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_3_MPORT_8_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_3_MPORT_8_en; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_3_MPORT_11_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_3_MPORT_11_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_3_MPORT_11_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_3_MPORT_11_en; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_3_MPORT_12_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_3_MPORT_12_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_3_MPORT_12_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_3_MPORT_12_en; // @[IF.scala 123:29]
  wire [31:0] ICache_Way1_insts_3_MPORT_15_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_insts_3_MPORT_15_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_3_MPORT_15_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_insts_3_MPORT_15_en; // @[IF.scala 123:29]
  reg  ICache_Way1_used [0:255]; // @[IF.scala 123:29]
  wire  ICache_Way1_used_set1_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_used_set1_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_used_set1_data; // @[IF.scala 123:29]
  wire  ICache_Way1_used_valid1_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_used_valid1_MPORT_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_used_valid1_MPORT_data; // @[IF.scala 123:29]
  wire  ICache_Way1_used_set1_valid_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_used_set1_valid_MPORT_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_used_set1_valid_MPORT_data; // @[IF.scala 123:29]
  wire  ICache_Way1_used_set1_used_MPORT_en; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_used_set1_used_MPORT_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_used_set1_used_MPORT_data; // @[IF.scala 123:29]
  wire  ICache_Way1_used_MPORT_8_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_used_MPORT_8_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_used_MPORT_8_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_used_MPORT_8_en; // @[IF.scala 123:29]
  wire  ICache_Way1_used_MPORT_11_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_used_MPORT_11_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_used_MPORT_11_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_used_MPORT_11_en; // @[IF.scala 123:29]
  wire  ICache_Way1_used_MPORT_12_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_used_MPORT_12_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_used_MPORT_12_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_used_MPORT_12_en; // @[IF.scala 123:29]
  wire  ICache_Way1_used_MPORT_15_data; // @[IF.scala 123:29]
  wire [7:0] ICache_Way1_used_MPORT_15_addr; // @[IF.scala 123:29]
  wire  ICache_Way1_used_MPORT_15_mask; // @[IF.scala 123:29]
  wire  ICache_Way1_used_MPORT_15_en; // @[IF.scala 123:29]
  reg  ICache_Way2_valid [0:255]; // @[IF.scala 124:29]
  wire  ICache_Way2_valid_set2_en; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_valid_set2_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_valid_set2_data; // @[IF.scala 124:29]
  wire  ICache_Way2_valid_valid2_MPORT_en; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_valid_valid2_MPORT_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_valid_valid2_MPORT_data; // @[IF.scala 124:29]
  wire  ICache_Way2_valid_set2_valid_MPORT_en; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_valid_set2_valid_MPORT_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_valid_set2_valid_MPORT_data; // @[IF.scala 124:29]
  wire  ICache_Way2_valid_MPORT_9_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_valid_MPORT_9_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_valid_MPORT_9_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_valid_MPORT_9_en; // @[IF.scala 124:29]
  wire  ICache_Way2_valid_MPORT_10_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_valid_MPORT_10_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_valid_MPORT_10_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_valid_MPORT_10_en; // @[IF.scala 124:29]
  wire  ICache_Way2_valid_MPORT_13_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_valid_MPORT_13_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_valid_MPORT_13_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_valid_MPORT_13_en; // @[IF.scala 124:29]
  wire  ICache_Way2_valid_MPORT_14_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_valid_MPORT_14_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_valid_MPORT_14_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_valid_MPORT_14_en; // @[IF.scala 124:29]
  reg [19:0] ICache_Way2_tag [0:255]; // @[IF.scala 124:29]
  wire  ICache_Way2_tag_set2_en; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_tag_set2_addr; // @[IF.scala 124:29]
  wire [19:0] ICache_Way2_tag_set2_data; // @[IF.scala 124:29]
  wire  ICache_Way2_tag_valid2_MPORT_en; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_tag_valid2_MPORT_addr; // @[IF.scala 124:29]
  wire [19:0] ICache_Way2_tag_valid2_MPORT_data; // @[IF.scala 124:29]
  wire  ICache_Way2_tag_set2_valid_MPORT_en; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_tag_set2_valid_MPORT_addr; // @[IF.scala 124:29]
  wire [19:0] ICache_Way2_tag_set2_valid_MPORT_data; // @[IF.scala 124:29]
  wire [19:0] ICache_Way2_tag_MPORT_9_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_tag_MPORT_9_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_tag_MPORT_9_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_tag_MPORT_9_en; // @[IF.scala 124:29]
  wire [19:0] ICache_Way2_tag_MPORT_10_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_tag_MPORT_10_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_tag_MPORT_10_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_tag_MPORT_10_en; // @[IF.scala 124:29]
  wire [19:0] ICache_Way2_tag_MPORT_13_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_tag_MPORT_13_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_tag_MPORT_13_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_tag_MPORT_13_en; // @[IF.scala 124:29]
  wire [19:0] ICache_Way2_tag_MPORT_14_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_tag_MPORT_14_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_tag_MPORT_14_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_tag_MPORT_14_en; // @[IF.scala 124:29]
  reg [31:0] ICache_Way2_insts_0 [0:255]; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_0_set2_en; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_0_set2_addr; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_0_set2_data; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_0_valid2_MPORT_en; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_0_valid2_MPORT_addr; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_0_valid2_MPORT_data; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_0_set2_valid_MPORT_en; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_0_set2_valid_MPORT_addr; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_0_set2_valid_MPORT_data; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_0_MPORT_9_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_0_MPORT_9_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_0_MPORT_9_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_0_MPORT_9_en; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_0_MPORT_10_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_0_MPORT_10_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_0_MPORT_10_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_0_MPORT_10_en; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_0_MPORT_13_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_0_MPORT_13_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_0_MPORT_13_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_0_MPORT_13_en; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_0_MPORT_14_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_0_MPORT_14_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_0_MPORT_14_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_0_MPORT_14_en; // @[IF.scala 124:29]
  reg [31:0] ICache_Way2_insts_1 [0:255]; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_1_set2_en; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_1_set2_addr; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_1_set2_data; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_1_valid2_MPORT_en; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_1_valid2_MPORT_addr; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_1_valid2_MPORT_data; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_1_set2_valid_MPORT_en; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_1_set2_valid_MPORT_addr; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_1_set2_valid_MPORT_data; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_1_MPORT_9_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_1_MPORT_9_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_1_MPORT_9_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_1_MPORT_9_en; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_1_MPORT_10_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_1_MPORT_10_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_1_MPORT_10_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_1_MPORT_10_en; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_1_MPORT_13_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_1_MPORT_13_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_1_MPORT_13_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_1_MPORT_13_en; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_1_MPORT_14_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_1_MPORT_14_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_1_MPORT_14_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_1_MPORT_14_en; // @[IF.scala 124:29]
  reg [31:0] ICache_Way2_insts_2 [0:255]; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_2_set2_en; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_2_set2_addr; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_2_set2_data; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_2_valid2_MPORT_en; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_2_valid2_MPORT_addr; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_2_valid2_MPORT_data; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_2_set2_valid_MPORT_en; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_2_set2_valid_MPORT_addr; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_2_set2_valid_MPORT_data; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_2_MPORT_9_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_2_MPORT_9_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_2_MPORT_9_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_2_MPORT_9_en; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_2_MPORT_10_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_2_MPORT_10_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_2_MPORT_10_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_2_MPORT_10_en; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_2_MPORT_13_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_2_MPORT_13_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_2_MPORT_13_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_2_MPORT_13_en; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_2_MPORT_14_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_2_MPORT_14_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_2_MPORT_14_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_2_MPORT_14_en; // @[IF.scala 124:29]
  reg [31:0] ICache_Way2_insts_3 [0:255]; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_3_set2_en; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_3_set2_addr; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_3_set2_data; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_3_valid2_MPORT_en; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_3_valid2_MPORT_addr; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_3_valid2_MPORT_data; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_3_set2_valid_MPORT_en; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_3_set2_valid_MPORT_addr; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_3_set2_valid_MPORT_data; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_3_MPORT_9_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_3_MPORT_9_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_3_MPORT_9_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_3_MPORT_9_en; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_3_MPORT_10_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_3_MPORT_10_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_3_MPORT_10_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_3_MPORT_10_en; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_3_MPORT_13_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_3_MPORT_13_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_3_MPORT_13_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_3_MPORT_13_en; // @[IF.scala 124:29]
  wire [31:0] ICache_Way2_insts_3_MPORT_14_data; // @[IF.scala 124:29]
  wire [7:0] ICache_Way2_insts_3_MPORT_14_addr; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_3_MPORT_14_mask; // @[IF.scala 124:29]
  wire  ICache_Way2_insts_3_MPORT_14_en; // @[IF.scala 124:29]
  reg [31:0] pc; // @[IF.scala 50:28]
  reg [11:0] history; // @[IF.scala 51:28]
  wire [19:0] tag = pc[31:12]; // @[CONST.scala 16:31]
  wire  hit1 = tag == ICache_Way1_tag_set1_data & ICache_Way1_valid_valid1_MPORT_data; // @[IF.scala 136:38]
  wire  hit2 = tag == ICache_Way2_tag_set2_data & ICache_Way2_valid_valid2_MPORT_data; // @[IF.scala 137:38]
  wire [7:0] cache_index = pc[11:4]; // @[CONST.scala 17:33]
  wire  hit3 = tag == io_icache_insert_i_tag & cache_index == io_icache_insert_i_index; // @[IF.scala 138:54]
  wire  hit = hit1 | hit2 | hit3; // @[IF.scala 139:33]
  wire  miss = ~hit; // @[IF.scala 140:21]
  wire [1:0] block_offset = pc[3:2]; // @[CONST.scala 19:40]
  wire [31:0] _which_block_T__3 = hit3 ? io_icache_insert_i_insts_3 : 32'h0; // @[Mux.scala 47:70]
  wire [31:0] _which_block_T_1_3 = hit2 ? ICache_Way2_insts_3_set2_data : _which_block_T__3; // @[Mux.scala 47:70]
  wire [31:0] which_block_3 = hit1 ? ICache_Way1_insts_3_set1_data : _which_block_T_1_3; // @[Mux.scala 47:70]
  wire [31:0] _which_block_T__2 = hit3 ? io_icache_insert_i_insts_2 : 32'h0; // @[Mux.scala 47:70]
  wire [31:0] _which_block_T_1_2 = hit2 ? ICache_Way2_insts_2_set2_data : _which_block_T__2; // @[Mux.scala 47:70]
  wire [31:0] which_block_2 = hit1 ? ICache_Way1_insts_2_set1_data : _which_block_T_1_2; // @[Mux.scala 47:70]
  wire [31:0] _which_block_T__1 = hit3 ? io_icache_insert_i_insts_1 : 32'h0; // @[Mux.scala 47:70]
  wire [31:0] _which_block_T_1_1 = hit2 ? ICache_Way2_insts_1_set2_data : _which_block_T__1; // @[Mux.scala 47:70]
  wire [31:0] which_block_1 = hit1 ? ICache_Way1_insts_1_set1_data : _which_block_T_1_1; // @[Mux.scala 47:70]
  wire [31:0] _which_block_T__0 = hit3 ? io_icache_insert_i_insts_0 : 32'h0; // @[Mux.scala 47:70]
  wire [31:0] _which_block_T_1_0 = hit2 ? ICache_Way2_insts_0_set2_data : _which_block_T__0; // @[Mux.scala 47:70]
  wire [31:0] which_block_0 = hit1 ? ICache_Way1_insts_0_set1_data : _which_block_T_1_0; // @[Mux.scala 47:70]
  wire [31:0] _GEN_9 = 2'h1 == block_offset ? which_block_1 : which_block_0; // @[IF.scala 153:{20,20}]
  wire [31:0] _GEN_10 = 2'h2 == block_offset ? which_block_2 : _GEN_9; // @[IF.scala 153:{20,20}]
  wire [31:0] _GEN_11 = 2'h3 == block_offset ? which_block_3 : _GEN_10; // @[IF.scala 153:{20,20}]
  wire [31:0] inst = miss ? 32'h13 : _GEN_11; // @[IF.scala 153:20]
  wire [6:0] opcode = inst[6:0]; // @[HELPERS.scala 16:35]
  wire [11:0] pc_low = pc[11:0]; // @[IF.scala 63:27]
  wire  is_branch = opcode == 7'h63 | opcode == 7'h6f | opcode == 7'h67; // @[IF.scala 68:60]
  wire [63:0] _correct_address_T_1 = io_predict_i_pc + 64'h4; // @[IF.scala 70:74]
  wire [63:0] correct_address = io_predict_i_taken ? io_predict_i_target : _correct_address_T_1; // @[IF.scala 70:36]
  wire [63:0] _GEN_34 = {{32'd0}, pc}; // @[IF.scala 76:49]
  wire  btb_valid = BTB_pc_btb_valid_MPORT_data == _GEN_34; // @[IF.scala 76:49]
  wire  predict_taken = btb_valid & (is_branch & BPB_predict_taken_MPORT_data[1]); // @[IF.scala 79:39]
  wire [31:0] _pc_T_1 = pc + 32'h4; // @[IF.scala 91:36]
  wire [63:0] _pc_T_2 = predict_taken ? BTB_target_predict_target_MPORT_data : {{32'd0}, _pc_T_1}; // @[Mux.scala 47:70]
  wire [63:0] _pc_T_3 = io_ctrl_i_stall ? {{32'd0}, pc} : _pc_T_2; // @[Mux.scala 47:70]
  wire [63:0] _pc_T_4 = io_predict_i_predict_fail ? correct_address : _pc_T_3; // @[Mux.scala 47:70]
  wire  _T = ~io_ctrl_i_stall; // @[IF.scala 112:27]
  wire [12:0] _history_T = {history, 1'h0}; // @[IF.scala 113:30]
  wire [12:0] _GEN_46 = {{12'd0}, io_predict_i_taken}; // @[IF.scala 113:38]
  wire [12:0] _history_T_1 = _history_T | _GEN_46; // @[IF.scala 113:38]
  wire [127:0] _T_2 = {io_predict_i_pc,io_predict_i_target}; // @[Cat.scala 31:58]
  wire [1:0] _T_7 = BPB_MPORT_4_data + 2'h1; // @[IF.scala 117:84]
  wire [1:0] _T_8 = BPB_MPORT_2_data == 2'h3 ? BPB_MPORT_3_data : _T_7; // @[IF.scala 117:16]
  wire [1:0] _T_11 = BPB_MPORT_7_data - 2'h1; // @[IF.scala 118:84]
  wire [1:0] _T_12 = BPB_MPORT_5_data == 2'h0 ? BPB_MPORT_6_data : _T_11; // @[IF.scala 118:16]
  wire [12:0] _GEN_0 = io_predict_i_is_branch & ~io_ctrl_i_stall ? _history_T_1 : {{1'd0}, history}; // @[IF.scala 112:44 113:17 51:28]
  wire [149:0] set_val = {1'h1,io_icache_insert_i_tag,io_icache_insert_i_insts_3,io_icache_insert_i_insts_2,
    io_icache_insert_i_insts_1,io_icache_insert_i_insts_0,1'h1}; // @[Cat.scala 31:58]
  wire  _T_14 = ~ICache_Way1_valid_set1_valid_MPORT_data; // @[IF.scala 174:14]
  wire  _T_15 = ~ICache_Way2_valid_set2_valid_MPORT_data; // @[IF.scala 177:20]
  wire  _T_16 = ~ICache_Way1_used_set1_used_MPORT_data; // @[IF.scala 181:18]
  wire  _GEN_26 = ~ICache_Way1_used_set1_used_MPORT_data ? 1'h0 : 1'h1; // @[IF.scala 124:29 181:29 185:28]
  wire  _GEN_50 = ~ICache_Way2_valid_set2_valid_MPORT_data ? 1'h0 : _T_16; // @[IF.scala 123:29 177:32]
  wire  _GEN_62 = ~ICache_Way2_valid_set2_valid_MPORT_data ? 1'h0 : _GEN_26; // @[IF.scala 124:29 177:32]
  wire  _GEN_86 = ~ICache_Way1_valid_set1_valid_MPORT_data ? 1'h0 : _T_15; // @[IF.scala 174:26 124:29]
  wire  _GEN_98 = ~ICache_Way1_valid_set1_valid_MPORT_data ? 1'h0 : _GEN_50; // @[IF.scala 174:26 123:29]
  wire  _GEN_110 = ~ICache_Way1_valid_set1_valid_MPORT_data ? 1'h0 : _GEN_62; // @[IF.scala 174:26 124:29]
  reg [63:0] success_cnt; // @[IF.scala 191:32]
  wire [63:0] _success_cnt_T_1 = success_cnt + 64'h1; // @[IF.scala 193:36]
  reg [63:0] icache_hit_cnt; // @[IF.scala 197:36]
  wire [63:0] _icache_hit_cnt_T_1 = icache_hit_cnt + 64'h1; // @[IF.scala 199:44]
  wire [63:0] _GEN_70 = reset ? 64'h80000000 : _pc_T_4; // @[IF.scala 50:{28,28} 87:8]
  wire [12:0] _GEN_94 = reset ? 13'h0 : _GEN_0; // @[IF.scala 51:{28,28}]
  assign BTB_pc_btb_valid_MPORT_en = 1'h1;
  assign BTB_pc_btb_valid_MPORT_addr = pc_low & history;
  assign BTB_pc_btb_valid_MPORT_data = BTB_pc[BTB_pc_btb_valid_MPORT_addr]; // @[IF.scala 73:20]
  assign BTB_pc_predict_target_MPORT_en = 1'h1;
  assign BTB_pc_predict_target_MPORT_addr = pc_low & history;
  assign BTB_pc_predict_target_MPORT_data = BTB_pc[BTB_pc_predict_target_MPORT_addr]; // @[IF.scala 73:20]
  assign BTB_pc_MPORT_data = _T_2[127:64];
  assign BTB_pc_MPORT_addr = io_predict_i_index;
  assign BTB_pc_MPORT_mask = 1'h1;
  assign BTB_pc_MPORT_en = io_predict_i_is_branch & _T;
  assign BTB_target_btb_valid_MPORT_en = 1'h1;
  assign BTB_target_btb_valid_MPORT_addr = pc_low & history;
  assign BTB_target_btb_valid_MPORT_data = BTB_target[BTB_target_btb_valid_MPORT_addr]; // @[IF.scala 73:20]
  assign BTB_target_predict_target_MPORT_en = 1'h1;
  assign BTB_target_predict_target_MPORT_addr = pc_low & history;
  assign BTB_target_predict_target_MPORT_data = BTB_target[BTB_target_predict_target_MPORT_addr]; // @[IF.scala 73:20]
  assign BTB_target_MPORT_data = _T_2[63:0];
  assign BTB_target_MPORT_addr = io_predict_i_index;
  assign BTB_target_MPORT_mask = 1'h1;
  assign BTB_target_MPORT_en = io_predict_i_is_branch & _T;
  assign BPB_predict_taken_MPORT_en = 1'h1;
  assign BPB_predict_taken_MPORT_addr = pc_low & history;
  assign BPB_predict_taken_MPORT_data = BPB[BPB_predict_taken_MPORT_addr]; // @[IF.scala 74:20]
  assign BPB_MPORT_2_en = io_predict_i_is_branch & _T;
  assign BPB_MPORT_2_addr = io_predict_i_index;
  assign BPB_MPORT_2_data = BPB[BPB_MPORT_2_addr]; // @[IF.scala 74:20]
  assign BPB_MPORT_3_en = io_predict_i_is_branch & _T;
  assign BPB_MPORT_3_addr = io_predict_i_index;
  assign BPB_MPORT_3_data = BPB[BPB_MPORT_3_addr]; // @[IF.scala 74:20]
  assign BPB_MPORT_4_en = io_predict_i_is_branch & _T;
  assign BPB_MPORT_4_addr = io_predict_i_index;
  assign BPB_MPORT_4_data = BPB[BPB_MPORT_4_addr]; // @[IF.scala 74:20]
  assign BPB_MPORT_5_en = io_predict_i_is_branch & _T;
  assign BPB_MPORT_5_addr = io_predict_i_index;
  assign BPB_MPORT_5_data = BPB[BPB_MPORT_5_addr]; // @[IF.scala 74:20]
  assign BPB_MPORT_6_en = io_predict_i_is_branch & _T;
  assign BPB_MPORT_6_addr = io_predict_i_index;
  assign BPB_MPORT_6_data = BPB[BPB_MPORT_6_addr]; // @[IF.scala 74:20]
  assign BPB_MPORT_7_en = io_predict_i_is_branch & _T;
  assign BPB_MPORT_7_addr = io_predict_i_index;
  assign BPB_MPORT_7_data = BPB[BPB_MPORT_7_addr]; // @[IF.scala 74:20]
  assign BPB_MPORT_1_data = io_predict_i_taken ? _T_8 : _T_12;
  assign BPB_MPORT_1_addr = io_predict_i_index;
  assign BPB_MPORT_1_mask = 1'h1;
  assign BPB_MPORT_1_en = io_predict_i_is_branch & _T;
  assign ICache_Way1_valid_set1_en = 1'h1;
  assign ICache_Way1_valid_set1_addr = pc[11:4];
  assign ICache_Way1_valid_set1_data = ICache_Way1_valid[ICache_Way1_valid_set1_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_valid_valid1_MPORT_en = 1'h1;
  assign ICache_Way1_valid_valid1_MPORT_addr = pc[11:4];
  assign ICache_Way1_valid_valid1_MPORT_data = ICache_Way1_valid[ICache_Way1_valid_valid1_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_valid_set1_valid_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way1_valid_set1_valid_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way1_valid_set1_valid_MPORT_data = ICache_Way1_valid[ICache_Way1_valid_set1_valid_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_valid_set1_used_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way1_valid_set1_used_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way1_valid_set1_used_MPORT_data = ICache_Way1_valid[ICache_Way1_valid_set1_used_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_valid_MPORT_8_data = set_val[149];
  assign ICache_Way1_valid_MPORT_8_addr = io_icache_insert_i_index;
  assign ICache_Way1_valid_MPORT_8_mask = 1'h1;
  assign ICache_Way1_valid_MPORT_8_en = io_icache_insert_i_valid & _T_14;
  assign ICache_Way1_valid_MPORT_11_data = 1'h0;
  assign ICache_Way1_valid_MPORT_11_addr = io_icache_insert_i_index;
  assign ICache_Way1_valid_MPORT_11_mask = 1'h0;
  assign ICache_Way1_valid_MPORT_11_en = io_icache_insert_i_valid & _GEN_86;
  assign ICache_Way1_valid_MPORT_12_data = set_val[149];
  assign ICache_Way1_valid_MPORT_12_addr = io_icache_insert_i_index;
  assign ICache_Way1_valid_MPORT_12_mask = 1'h1;
  assign ICache_Way1_valid_MPORT_12_en = io_icache_insert_i_valid & _GEN_98;
  assign ICache_Way1_valid_MPORT_15_data = 1'h0;
  assign ICache_Way1_valid_MPORT_15_addr = io_icache_insert_i_index;
  assign ICache_Way1_valid_MPORT_15_mask = 1'h0;
  assign ICache_Way1_valid_MPORT_15_en = io_icache_insert_i_valid & _GEN_110;
  assign ICache_Way1_tag_set1_en = 1'h1;
  assign ICache_Way1_tag_set1_addr = pc[11:4];
  assign ICache_Way1_tag_set1_data = ICache_Way1_tag[ICache_Way1_tag_set1_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_tag_valid1_MPORT_en = 1'h1;
  assign ICache_Way1_tag_valid1_MPORT_addr = pc[11:4];
  assign ICache_Way1_tag_valid1_MPORT_data = ICache_Way1_tag[ICache_Way1_tag_valid1_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_tag_set1_valid_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way1_tag_set1_valid_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way1_tag_set1_valid_MPORT_data = ICache_Way1_tag[ICache_Way1_tag_set1_valid_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_tag_set1_used_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way1_tag_set1_used_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way1_tag_set1_used_MPORT_data = ICache_Way1_tag[ICache_Way1_tag_set1_used_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_tag_MPORT_8_data = set_val[148:129];
  assign ICache_Way1_tag_MPORT_8_addr = io_icache_insert_i_index;
  assign ICache_Way1_tag_MPORT_8_mask = 1'h1;
  assign ICache_Way1_tag_MPORT_8_en = io_icache_insert_i_valid & _T_14;
  assign ICache_Way1_tag_MPORT_11_data = 20'h0;
  assign ICache_Way1_tag_MPORT_11_addr = io_icache_insert_i_index;
  assign ICache_Way1_tag_MPORT_11_mask = 1'h0;
  assign ICache_Way1_tag_MPORT_11_en = io_icache_insert_i_valid & _GEN_86;
  assign ICache_Way1_tag_MPORT_12_data = set_val[148:129];
  assign ICache_Way1_tag_MPORT_12_addr = io_icache_insert_i_index;
  assign ICache_Way1_tag_MPORT_12_mask = 1'h1;
  assign ICache_Way1_tag_MPORT_12_en = io_icache_insert_i_valid & _GEN_98;
  assign ICache_Way1_tag_MPORT_15_data = 20'h0;
  assign ICache_Way1_tag_MPORT_15_addr = io_icache_insert_i_index;
  assign ICache_Way1_tag_MPORT_15_mask = 1'h0;
  assign ICache_Way1_tag_MPORT_15_en = io_icache_insert_i_valid & _GEN_110;
  assign ICache_Way1_insts_0_set1_en = 1'h1;
  assign ICache_Way1_insts_0_set1_addr = pc[11:4];
  assign ICache_Way1_insts_0_set1_data = ICache_Way1_insts_0[ICache_Way1_insts_0_set1_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_insts_0_valid1_MPORT_en = 1'h1;
  assign ICache_Way1_insts_0_valid1_MPORT_addr = pc[11:4];
  assign ICache_Way1_insts_0_valid1_MPORT_data = ICache_Way1_insts_0[ICache_Way1_insts_0_valid1_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_insts_0_set1_valid_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way1_insts_0_set1_valid_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_0_set1_valid_MPORT_data = ICache_Way1_insts_0[ICache_Way1_insts_0_set1_valid_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_insts_0_set1_used_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way1_insts_0_set1_used_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_0_set1_used_MPORT_data = ICache_Way1_insts_0[ICache_Way1_insts_0_set1_used_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_insts_0_MPORT_8_data = set_val[32:1];
  assign ICache_Way1_insts_0_MPORT_8_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_0_MPORT_8_mask = 1'h1;
  assign ICache_Way1_insts_0_MPORT_8_en = io_icache_insert_i_valid & _T_14;
  assign ICache_Way1_insts_0_MPORT_11_data = 32'h0;
  assign ICache_Way1_insts_0_MPORT_11_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_0_MPORT_11_mask = 1'h0;
  assign ICache_Way1_insts_0_MPORT_11_en = io_icache_insert_i_valid & _GEN_86;
  assign ICache_Way1_insts_0_MPORT_12_data = set_val[32:1];
  assign ICache_Way1_insts_0_MPORT_12_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_0_MPORT_12_mask = 1'h1;
  assign ICache_Way1_insts_0_MPORT_12_en = io_icache_insert_i_valid & _GEN_98;
  assign ICache_Way1_insts_0_MPORT_15_data = 32'h0;
  assign ICache_Way1_insts_0_MPORT_15_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_0_MPORT_15_mask = 1'h0;
  assign ICache_Way1_insts_0_MPORT_15_en = io_icache_insert_i_valid & _GEN_110;
  assign ICache_Way1_insts_1_set1_en = 1'h1;
  assign ICache_Way1_insts_1_set1_addr = pc[11:4];
  assign ICache_Way1_insts_1_set1_data = ICache_Way1_insts_1[ICache_Way1_insts_1_set1_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_insts_1_valid1_MPORT_en = 1'h1;
  assign ICache_Way1_insts_1_valid1_MPORT_addr = pc[11:4];
  assign ICache_Way1_insts_1_valid1_MPORT_data = ICache_Way1_insts_1[ICache_Way1_insts_1_valid1_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_insts_1_set1_valid_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way1_insts_1_set1_valid_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_1_set1_valid_MPORT_data = ICache_Way1_insts_1[ICache_Way1_insts_1_set1_valid_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_insts_1_set1_used_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way1_insts_1_set1_used_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_1_set1_used_MPORT_data = ICache_Way1_insts_1[ICache_Way1_insts_1_set1_used_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_insts_1_MPORT_8_data = set_val[64:33];
  assign ICache_Way1_insts_1_MPORT_8_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_1_MPORT_8_mask = 1'h1;
  assign ICache_Way1_insts_1_MPORT_8_en = io_icache_insert_i_valid & _T_14;
  assign ICache_Way1_insts_1_MPORT_11_data = 32'h0;
  assign ICache_Way1_insts_1_MPORT_11_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_1_MPORT_11_mask = 1'h0;
  assign ICache_Way1_insts_1_MPORT_11_en = io_icache_insert_i_valid & _GEN_86;
  assign ICache_Way1_insts_1_MPORT_12_data = set_val[64:33];
  assign ICache_Way1_insts_1_MPORT_12_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_1_MPORT_12_mask = 1'h1;
  assign ICache_Way1_insts_1_MPORT_12_en = io_icache_insert_i_valid & _GEN_98;
  assign ICache_Way1_insts_1_MPORT_15_data = 32'h0;
  assign ICache_Way1_insts_1_MPORT_15_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_1_MPORT_15_mask = 1'h0;
  assign ICache_Way1_insts_1_MPORT_15_en = io_icache_insert_i_valid & _GEN_110;
  assign ICache_Way1_insts_2_set1_en = 1'h1;
  assign ICache_Way1_insts_2_set1_addr = pc[11:4];
  assign ICache_Way1_insts_2_set1_data = ICache_Way1_insts_2[ICache_Way1_insts_2_set1_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_insts_2_valid1_MPORT_en = 1'h1;
  assign ICache_Way1_insts_2_valid1_MPORT_addr = pc[11:4];
  assign ICache_Way1_insts_2_valid1_MPORT_data = ICache_Way1_insts_2[ICache_Way1_insts_2_valid1_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_insts_2_set1_valid_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way1_insts_2_set1_valid_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_2_set1_valid_MPORT_data = ICache_Way1_insts_2[ICache_Way1_insts_2_set1_valid_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_insts_2_set1_used_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way1_insts_2_set1_used_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_2_set1_used_MPORT_data = ICache_Way1_insts_2[ICache_Way1_insts_2_set1_used_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_insts_2_MPORT_8_data = set_val[96:65];
  assign ICache_Way1_insts_2_MPORT_8_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_2_MPORT_8_mask = 1'h1;
  assign ICache_Way1_insts_2_MPORT_8_en = io_icache_insert_i_valid & _T_14;
  assign ICache_Way1_insts_2_MPORT_11_data = 32'h0;
  assign ICache_Way1_insts_2_MPORT_11_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_2_MPORT_11_mask = 1'h0;
  assign ICache_Way1_insts_2_MPORT_11_en = io_icache_insert_i_valid & _GEN_86;
  assign ICache_Way1_insts_2_MPORT_12_data = set_val[96:65];
  assign ICache_Way1_insts_2_MPORT_12_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_2_MPORT_12_mask = 1'h1;
  assign ICache_Way1_insts_2_MPORT_12_en = io_icache_insert_i_valid & _GEN_98;
  assign ICache_Way1_insts_2_MPORT_15_data = 32'h0;
  assign ICache_Way1_insts_2_MPORT_15_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_2_MPORT_15_mask = 1'h0;
  assign ICache_Way1_insts_2_MPORT_15_en = io_icache_insert_i_valid & _GEN_110;
  assign ICache_Way1_insts_3_set1_en = 1'h1;
  assign ICache_Way1_insts_3_set1_addr = pc[11:4];
  assign ICache_Way1_insts_3_set1_data = ICache_Way1_insts_3[ICache_Way1_insts_3_set1_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_insts_3_valid1_MPORT_en = 1'h1;
  assign ICache_Way1_insts_3_valid1_MPORT_addr = pc[11:4];
  assign ICache_Way1_insts_3_valid1_MPORT_data = ICache_Way1_insts_3[ICache_Way1_insts_3_valid1_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_insts_3_set1_valid_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way1_insts_3_set1_valid_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_3_set1_valid_MPORT_data = ICache_Way1_insts_3[ICache_Way1_insts_3_set1_valid_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_insts_3_set1_used_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way1_insts_3_set1_used_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_3_set1_used_MPORT_data = ICache_Way1_insts_3[ICache_Way1_insts_3_set1_used_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_insts_3_MPORT_8_data = set_val[128:97];
  assign ICache_Way1_insts_3_MPORT_8_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_3_MPORT_8_mask = 1'h1;
  assign ICache_Way1_insts_3_MPORT_8_en = io_icache_insert_i_valid & _T_14;
  assign ICache_Way1_insts_3_MPORT_11_data = 32'h0;
  assign ICache_Way1_insts_3_MPORT_11_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_3_MPORT_11_mask = 1'h0;
  assign ICache_Way1_insts_3_MPORT_11_en = io_icache_insert_i_valid & _GEN_86;
  assign ICache_Way1_insts_3_MPORT_12_data = set_val[128:97];
  assign ICache_Way1_insts_3_MPORT_12_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_3_MPORT_12_mask = 1'h1;
  assign ICache_Way1_insts_3_MPORT_12_en = io_icache_insert_i_valid & _GEN_98;
  assign ICache_Way1_insts_3_MPORT_15_data = 32'h0;
  assign ICache_Way1_insts_3_MPORT_15_addr = io_icache_insert_i_index;
  assign ICache_Way1_insts_3_MPORT_15_mask = 1'h0;
  assign ICache_Way1_insts_3_MPORT_15_en = io_icache_insert_i_valid & _GEN_110;
  assign ICache_Way1_used_set1_en = 1'h1;
  assign ICache_Way1_used_set1_addr = pc[11:4];
  assign ICache_Way1_used_set1_data = ICache_Way1_used[ICache_Way1_used_set1_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_used_valid1_MPORT_en = 1'h1;
  assign ICache_Way1_used_valid1_MPORT_addr = pc[11:4];
  assign ICache_Way1_used_valid1_MPORT_data = ICache_Way1_used[ICache_Way1_used_valid1_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_used_set1_valid_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way1_used_set1_valid_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way1_used_set1_valid_MPORT_data = ICache_Way1_used[ICache_Way1_used_set1_valid_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_used_set1_used_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way1_used_set1_used_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way1_used_set1_used_MPORT_data = ICache_Way1_used[ICache_Way1_used_set1_used_MPORT_addr]; // @[IF.scala 123:29]
  assign ICache_Way1_used_MPORT_8_data = set_val[0];
  assign ICache_Way1_used_MPORT_8_addr = io_icache_insert_i_index;
  assign ICache_Way1_used_MPORT_8_mask = 1'h1;
  assign ICache_Way1_used_MPORT_8_en = io_icache_insert_i_valid & _T_14;
  assign ICache_Way1_used_MPORT_11_data = 1'h0;
  assign ICache_Way1_used_MPORT_11_addr = io_icache_insert_i_index;
  assign ICache_Way1_used_MPORT_11_mask = 1'h1;
  assign ICache_Way1_used_MPORT_11_en = io_icache_insert_i_valid & _GEN_86;
  assign ICache_Way1_used_MPORT_12_data = set_val[0];
  assign ICache_Way1_used_MPORT_12_addr = io_icache_insert_i_index;
  assign ICache_Way1_used_MPORT_12_mask = 1'h1;
  assign ICache_Way1_used_MPORT_12_en = io_icache_insert_i_valid & _GEN_98;
  assign ICache_Way1_used_MPORT_15_data = 1'h0;
  assign ICache_Way1_used_MPORT_15_addr = io_icache_insert_i_index;
  assign ICache_Way1_used_MPORT_15_mask = 1'h1;
  assign ICache_Way1_used_MPORT_15_en = io_icache_insert_i_valid & _GEN_110;
  assign ICache_Way2_valid_set2_en = 1'h1;
  assign ICache_Way2_valid_set2_addr = pc[11:4];
  assign ICache_Way2_valid_set2_data = ICache_Way2_valid[ICache_Way2_valid_set2_addr]; // @[IF.scala 124:29]
  assign ICache_Way2_valid_valid2_MPORT_en = 1'h1;
  assign ICache_Way2_valid_valid2_MPORT_addr = pc[11:4];
  assign ICache_Way2_valid_valid2_MPORT_data = ICache_Way2_valid[ICache_Way2_valid_valid2_MPORT_addr]; // @[IF.scala 124:29]
  assign ICache_Way2_valid_set2_valid_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way2_valid_set2_valid_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way2_valid_set2_valid_MPORT_data = ICache_Way2_valid[ICache_Way2_valid_set2_valid_MPORT_addr]; // @[IF.scala 124:29]
  assign ICache_Way2_valid_MPORT_9_data = 1'h0;
  assign ICache_Way2_valid_MPORT_9_addr = io_icache_insert_i_index;
  assign ICache_Way2_valid_MPORT_9_mask = 1'h0;
  assign ICache_Way2_valid_MPORT_9_en = io_icache_insert_i_valid & _T_14;
  assign ICache_Way2_valid_MPORT_10_data = set_val[149];
  assign ICache_Way2_valid_MPORT_10_addr = io_icache_insert_i_index;
  assign ICache_Way2_valid_MPORT_10_mask = 1'h1;
  assign ICache_Way2_valid_MPORT_10_en = io_icache_insert_i_valid & _GEN_86;
  assign ICache_Way2_valid_MPORT_13_data = 1'h0;
  assign ICache_Way2_valid_MPORT_13_addr = io_icache_insert_i_index;
  assign ICache_Way2_valid_MPORT_13_mask = 1'h0;
  assign ICache_Way2_valid_MPORT_13_en = io_icache_insert_i_valid & _GEN_98;
  assign ICache_Way2_valid_MPORT_14_data = set_val[149];
  assign ICache_Way2_valid_MPORT_14_addr = io_icache_insert_i_index;
  assign ICache_Way2_valid_MPORT_14_mask = 1'h1;
  assign ICache_Way2_valid_MPORT_14_en = io_icache_insert_i_valid & _GEN_110;
  assign ICache_Way2_tag_set2_en = 1'h1;
  assign ICache_Way2_tag_set2_addr = pc[11:4];
  assign ICache_Way2_tag_set2_data = ICache_Way2_tag[ICache_Way2_tag_set2_addr]; // @[IF.scala 124:29]
  assign ICache_Way2_tag_valid2_MPORT_en = 1'h1;
  assign ICache_Way2_tag_valid2_MPORT_addr = pc[11:4];
  assign ICache_Way2_tag_valid2_MPORT_data = ICache_Way2_tag[ICache_Way2_tag_valid2_MPORT_addr]; // @[IF.scala 124:29]
  assign ICache_Way2_tag_set2_valid_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way2_tag_set2_valid_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way2_tag_set2_valid_MPORT_data = ICache_Way2_tag[ICache_Way2_tag_set2_valid_MPORT_addr]; // @[IF.scala 124:29]
  assign ICache_Way2_tag_MPORT_9_data = 20'h0;
  assign ICache_Way2_tag_MPORT_9_addr = io_icache_insert_i_index;
  assign ICache_Way2_tag_MPORT_9_mask = 1'h0;
  assign ICache_Way2_tag_MPORT_9_en = io_icache_insert_i_valid & _T_14;
  assign ICache_Way2_tag_MPORT_10_data = set_val[148:129];
  assign ICache_Way2_tag_MPORT_10_addr = io_icache_insert_i_index;
  assign ICache_Way2_tag_MPORT_10_mask = 1'h1;
  assign ICache_Way2_tag_MPORT_10_en = io_icache_insert_i_valid & _GEN_86;
  assign ICache_Way2_tag_MPORT_13_data = 20'h0;
  assign ICache_Way2_tag_MPORT_13_addr = io_icache_insert_i_index;
  assign ICache_Way2_tag_MPORT_13_mask = 1'h0;
  assign ICache_Way2_tag_MPORT_13_en = io_icache_insert_i_valid & _GEN_98;
  assign ICache_Way2_tag_MPORT_14_data = set_val[148:129];
  assign ICache_Way2_tag_MPORT_14_addr = io_icache_insert_i_index;
  assign ICache_Way2_tag_MPORT_14_mask = 1'h1;
  assign ICache_Way2_tag_MPORT_14_en = io_icache_insert_i_valid & _GEN_110;
  assign ICache_Way2_insts_0_set2_en = 1'h1;
  assign ICache_Way2_insts_0_set2_addr = pc[11:4];
  assign ICache_Way2_insts_0_set2_data = ICache_Way2_insts_0[ICache_Way2_insts_0_set2_addr]; // @[IF.scala 124:29]
  assign ICache_Way2_insts_0_valid2_MPORT_en = 1'h1;
  assign ICache_Way2_insts_0_valid2_MPORT_addr = pc[11:4];
  assign ICache_Way2_insts_0_valid2_MPORT_data = ICache_Way2_insts_0[ICache_Way2_insts_0_valid2_MPORT_addr]; // @[IF.scala 124:29]
  assign ICache_Way2_insts_0_set2_valid_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way2_insts_0_set2_valid_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_0_set2_valid_MPORT_data = ICache_Way2_insts_0[ICache_Way2_insts_0_set2_valid_MPORT_addr]; // @[IF.scala 124:29]
  assign ICache_Way2_insts_0_MPORT_9_data = 32'h0;
  assign ICache_Way2_insts_0_MPORT_9_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_0_MPORT_9_mask = 1'h0;
  assign ICache_Way2_insts_0_MPORT_9_en = io_icache_insert_i_valid & _T_14;
  assign ICache_Way2_insts_0_MPORT_10_data = set_val[32:1];
  assign ICache_Way2_insts_0_MPORT_10_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_0_MPORT_10_mask = 1'h1;
  assign ICache_Way2_insts_0_MPORT_10_en = io_icache_insert_i_valid & _GEN_86;
  assign ICache_Way2_insts_0_MPORT_13_data = 32'h0;
  assign ICache_Way2_insts_0_MPORT_13_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_0_MPORT_13_mask = 1'h0;
  assign ICache_Way2_insts_0_MPORT_13_en = io_icache_insert_i_valid & _GEN_98;
  assign ICache_Way2_insts_0_MPORT_14_data = set_val[32:1];
  assign ICache_Way2_insts_0_MPORT_14_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_0_MPORT_14_mask = 1'h1;
  assign ICache_Way2_insts_0_MPORT_14_en = io_icache_insert_i_valid & _GEN_110;
  assign ICache_Way2_insts_1_set2_en = 1'h1;
  assign ICache_Way2_insts_1_set2_addr = pc[11:4];
  assign ICache_Way2_insts_1_set2_data = ICache_Way2_insts_1[ICache_Way2_insts_1_set2_addr]; // @[IF.scala 124:29]
  assign ICache_Way2_insts_1_valid2_MPORT_en = 1'h1;
  assign ICache_Way2_insts_1_valid2_MPORT_addr = pc[11:4];
  assign ICache_Way2_insts_1_valid2_MPORT_data = ICache_Way2_insts_1[ICache_Way2_insts_1_valid2_MPORT_addr]; // @[IF.scala 124:29]
  assign ICache_Way2_insts_1_set2_valid_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way2_insts_1_set2_valid_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_1_set2_valid_MPORT_data = ICache_Way2_insts_1[ICache_Way2_insts_1_set2_valid_MPORT_addr]; // @[IF.scala 124:29]
  assign ICache_Way2_insts_1_MPORT_9_data = 32'h0;
  assign ICache_Way2_insts_1_MPORT_9_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_1_MPORT_9_mask = 1'h0;
  assign ICache_Way2_insts_1_MPORT_9_en = io_icache_insert_i_valid & _T_14;
  assign ICache_Way2_insts_1_MPORT_10_data = set_val[64:33];
  assign ICache_Way2_insts_1_MPORT_10_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_1_MPORT_10_mask = 1'h1;
  assign ICache_Way2_insts_1_MPORT_10_en = io_icache_insert_i_valid & _GEN_86;
  assign ICache_Way2_insts_1_MPORT_13_data = 32'h0;
  assign ICache_Way2_insts_1_MPORT_13_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_1_MPORT_13_mask = 1'h0;
  assign ICache_Way2_insts_1_MPORT_13_en = io_icache_insert_i_valid & _GEN_98;
  assign ICache_Way2_insts_1_MPORT_14_data = set_val[64:33];
  assign ICache_Way2_insts_1_MPORT_14_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_1_MPORT_14_mask = 1'h1;
  assign ICache_Way2_insts_1_MPORT_14_en = io_icache_insert_i_valid & _GEN_110;
  assign ICache_Way2_insts_2_set2_en = 1'h1;
  assign ICache_Way2_insts_2_set2_addr = pc[11:4];
  assign ICache_Way2_insts_2_set2_data = ICache_Way2_insts_2[ICache_Way2_insts_2_set2_addr]; // @[IF.scala 124:29]
  assign ICache_Way2_insts_2_valid2_MPORT_en = 1'h1;
  assign ICache_Way2_insts_2_valid2_MPORT_addr = pc[11:4];
  assign ICache_Way2_insts_2_valid2_MPORT_data = ICache_Way2_insts_2[ICache_Way2_insts_2_valid2_MPORT_addr]; // @[IF.scala 124:29]
  assign ICache_Way2_insts_2_set2_valid_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way2_insts_2_set2_valid_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_2_set2_valid_MPORT_data = ICache_Way2_insts_2[ICache_Way2_insts_2_set2_valid_MPORT_addr]; // @[IF.scala 124:29]
  assign ICache_Way2_insts_2_MPORT_9_data = 32'h0;
  assign ICache_Way2_insts_2_MPORT_9_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_2_MPORT_9_mask = 1'h0;
  assign ICache_Way2_insts_2_MPORT_9_en = io_icache_insert_i_valid & _T_14;
  assign ICache_Way2_insts_2_MPORT_10_data = set_val[96:65];
  assign ICache_Way2_insts_2_MPORT_10_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_2_MPORT_10_mask = 1'h1;
  assign ICache_Way2_insts_2_MPORT_10_en = io_icache_insert_i_valid & _GEN_86;
  assign ICache_Way2_insts_2_MPORT_13_data = 32'h0;
  assign ICache_Way2_insts_2_MPORT_13_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_2_MPORT_13_mask = 1'h0;
  assign ICache_Way2_insts_2_MPORT_13_en = io_icache_insert_i_valid & _GEN_98;
  assign ICache_Way2_insts_2_MPORT_14_data = set_val[96:65];
  assign ICache_Way2_insts_2_MPORT_14_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_2_MPORT_14_mask = 1'h1;
  assign ICache_Way2_insts_2_MPORT_14_en = io_icache_insert_i_valid & _GEN_110;
  assign ICache_Way2_insts_3_set2_en = 1'h1;
  assign ICache_Way2_insts_3_set2_addr = pc[11:4];
  assign ICache_Way2_insts_3_set2_data = ICache_Way2_insts_3[ICache_Way2_insts_3_set2_addr]; // @[IF.scala 124:29]
  assign ICache_Way2_insts_3_valid2_MPORT_en = 1'h1;
  assign ICache_Way2_insts_3_valid2_MPORT_addr = pc[11:4];
  assign ICache_Way2_insts_3_valid2_MPORT_data = ICache_Way2_insts_3[ICache_Way2_insts_3_valid2_MPORT_addr]; // @[IF.scala 124:29]
  assign ICache_Way2_insts_3_set2_valid_MPORT_en = io_icache_insert_i_valid;
  assign ICache_Way2_insts_3_set2_valid_MPORT_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_3_set2_valid_MPORT_data = ICache_Way2_insts_3[ICache_Way2_insts_3_set2_valid_MPORT_addr]; // @[IF.scala 124:29]
  assign ICache_Way2_insts_3_MPORT_9_data = 32'h0;
  assign ICache_Way2_insts_3_MPORT_9_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_3_MPORT_9_mask = 1'h0;
  assign ICache_Way2_insts_3_MPORT_9_en = io_icache_insert_i_valid & _T_14;
  assign ICache_Way2_insts_3_MPORT_10_data = set_val[128:97];
  assign ICache_Way2_insts_3_MPORT_10_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_3_MPORT_10_mask = 1'h1;
  assign ICache_Way2_insts_3_MPORT_10_en = io_icache_insert_i_valid & _GEN_86;
  assign ICache_Way2_insts_3_MPORT_13_data = 32'h0;
  assign ICache_Way2_insts_3_MPORT_13_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_3_MPORT_13_mask = 1'h0;
  assign ICache_Way2_insts_3_MPORT_13_en = io_icache_insert_i_valid & _GEN_98;
  assign ICache_Way2_insts_3_MPORT_14_data = set_val[128:97];
  assign ICache_Way2_insts_3_MPORT_14_addr = io_icache_insert_i_index;
  assign ICache_Way2_insts_3_MPORT_14_mask = 1'h1;
  assign ICache_Way2_insts_3_MPORT_14_en = io_icache_insert_i_valid & _GEN_110;
  assign io_pc_o = {{32'd0}, pc}; // @[IF.scala 95:17]
  assign io_inst_o = miss ? 32'h13 : _GEN_11; // @[IF.scala 153:20]
  assign io_predict_o_is_branch = opcode == 7'h63 | opcode == 7'h6f | opcode == 7'h67; // @[IF.scala 68:60]
  assign io_predict_o_pc = {{32'd0}, pc}; // @[IF.scala 100:30]
  assign io_predict_o_index = pc_low & history; // @[IF.scala 66:32]
  assign io_predict_o_predict_taken = btb_valid & (is_branch & BPB_predict_taken_MPORT_data[1]); // @[IF.scala 79:39]
  assign io_predict_o_predict_target = BTB_target_predict_target_MPORT_data; // @[IF.scala 105:34]
  assign io_icache_miss_o_miss = ~hit; // @[IF.scala 140:21]
  assign io_icache_miss_o_pc = {{32'd0}, pc}; // @[IF.scala 151:30]
  assign io_stall_req_o = ~hit; // @[IF.scala 140:21]
  assign io_success_cnt_o = success_cnt; // @[IF.scala 195:25]
  assign io_nr_icache_hit_o = icache_hit_cnt; // @[IF.scala 201:25]
  always @(posedge clock) begin
    if (BTB_pc_MPORT_en & BTB_pc_MPORT_mask) begin
      BTB_pc[BTB_pc_MPORT_addr] <= BTB_pc_MPORT_data; // @[IF.scala 73:20]
    end
    if (BTB_target_MPORT_en & BTB_target_MPORT_mask) begin
      BTB_target[BTB_target_MPORT_addr] <= BTB_target_MPORT_data; // @[IF.scala 73:20]
    end
    if (BPB_MPORT_1_en & BPB_MPORT_1_mask) begin
      BPB[BPB_MPORT_1_addr] <= BPB_MPORT_1_data; // @[IF.scala 74:20]
    end
    if (ICache_Way1_valid_MPORT_8_en & ICache_Way1_valid_MPORT_8_mask) begin
      ICache_Way1_valid[ICache_Way1_valid_MPORT_8_addr] <= ICache_Way1_valid_MPORT_8_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_valid_MPORT_11_en & ICache_Way1_valid_MPORT_11_mask) begin
      ICache_Way1_valid[ICache_Way1_valid_MPORT_11_addr] <= ICache_Way1_valid_MPORT_11_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_valid_MPORT_12_en & ICache_Way1_valid_MPORT_12_mask) begin
      ICache_Way1_valid[ICache_Way1_valid_MPORT_12_addr] <= ICache_Way1_valid_MPORT_12_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_valid_MPORT_15_en & ICache_Way1_valid_MPORT_15_mask) begin
      ICache_Way1_valid[ICache_Way1_valid_MPORT_15_addr] <= ICache_Way1_valid_MPORT_15_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_tag_MPORT_8_en & ICache_Way1_tag_MPORT_8_mask) begin
      ICache_Way1_tag[ICache_Way1_tag_MPORT_8_addr] <= ICache_Way1_tag_MPORT_8_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_tag_MPORT_11_en & ICache_Way1_tag_MPORT_11_mask) begin
      ICache_Way1_tag[ICache_Way1_tag_MPORT_11_addr] <= ICache_Way1_tag_MPORT_11_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_tag_MPORT_12_en & ICache_Way1_tag_MPORT_12_mask) begin
      ICache_Way1_tag[ICache_Way1_tag_MPORT_12_addr] <= ICache_Way1_tag_MPORT_12_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_tag_MPORT_15_en & ICache_Way1_tag_MPORT_15_mask) begin
      ICache_Way1_tag[ICache_Way1_tag_MPORT_15_addr] <= ICache_Way1_tag_MPORT_15_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_insts_0_MPORT_8_en & ICache_Way1_insts_0_MPORT_8_mask) begin
      ICache_Way1_insts_0[ICache_Way1_insts_0_MPORT_8_addr] <= ICache_Way1_insts_0_MPORT_8_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_insts_0_MPORT_11_en & ICache_Way1_insts_0_MPORT_11_mask) begin
      ICache_Way1_insts_0[ICache_Way1_insts_0_MPORT_11_addr] <= ICache_Way1_insts_0_MPORT_11_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_insts_0_MPORT_12_en & ICache_Way1_insts_0_MPORT_12_mask) begin
      ICache_Way1_insts_0[ICache_Way1_insts_0_MPORT_12_addr] <= ICache_Way1_insts_0_MPORT_12_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_insts_0_MPORT_15_en & ICache_Way1_insts_0_MPORT_15_mask) begin
      ICache_Way1_insts_0[ICache_Way1_insts_0_MPORT_15_addr] <= ICache_Way1_insts_0_MPORT_15_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_insts_1_MPORT_8_en & ICache_Way1_insts_1_MPORT_8_mask) begin
      ICache_Way1_insts_1[ICache_Way1_insts_1_MPORT_8_addr] <= ICache_Way1_insts_1_MPORT_8_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_insts_1_MPORT_11_en & ICache_Way1_insts_1_MPORT_11_mask) begin
      ICache_Way1_insts_1[ICache_Way1_insts_1_MPORT_11_addr] <= ICache_Way1_insts_1_MPORT_11_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_insts_1_MPORT_12_en & ICache_Way1_insts_1_MPORT_12_mask) begin
      ICache_Way1_insts_1[ICache_Way1_insts_1_MPORT_12_addr] <= ICache_Way1_insts_1_MPORT_12_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_insts_1_MPORT_15_en & ICache_Way1_insts_1_MPORT_15_mask) begin
      ICache_Way1_insts_1[ICache_Way1_insts_1_MPORT_15_addr] <= ICache_Way1_insts_1_MPORT_15_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_insts_2_MPORT_8_en & ICache_Way1_insts_2_MPORT_8_mask) begin
      ICache_Way1_insts_2[ICache_Way1_insts_2_MPORT_8_addr] <= ICache_Way1_insts_2_MPORT_8_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_insts_2_MPORT_11_en & ICache_Way1_insts_2_MPORT_11_mask) begin
      ICache_Way1_insts_2[ICache_Way1_insts_2_MPORT_11_addr] <= ICache_Way1_insts_2_MPORT_11_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_insts_2_MPORT_12_en & ICache_Way1_insts_2_MPORT_12_mask) begin
      ICache_Way1_insts_2[ICache_Way1_insts_2_MPORT_12_addr] <= ICache_Way1_insts_2_MPORT_12_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_insts_2_MPORT_15_en & ICache_Way1_insts_2_MPORT_15_mask) begin
      ICache_Way1_insts_2[ICache_Way1_insts_2_MPORT_15_addr] <= ICache_Way1_insts_2_MPORT_15_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_insts_3_MPORT_8_en & ICache_Way1_insts_3_MPORT_8_mask) begin
      ICache_Way1_insts_3[ICache_Way1_insts_3_MPORT_8_addr] <= ICache_Way1_insts_3_MPORT_8_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_insts_3_MPORT_11_en & ICache_Way1_insts_3_MPORT_11_mask) begin
      ICache_Way1_insts_3[ICache_Way1_insts_3_MPORT_11_addr] <= ICache_Way1_insts_3_MPORT_11_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_insts_3_MPORT_12_en & ICache_Way1_insts_3_MPORT_12_mask) begin
      ICache_Way1_insts_3[ICache_Way1_insts_3_MPORT_12_addr] <= ICache_Way1_insts_3_MPORT_12_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_insts_3_MPORT_15_en & ICache_Way1_insts_3_MPORT_15_mask) begin
      ICache_Way1_insts_3[ICache_Way1_insts_3_MPORT_15_addr] <= ICache_Way1_insts_3_MPORT_15_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_used_MPORT_8_en & ICache_Way1_used_MPORT_8_mask) begin
      ICache_Way1_used[ICache_Way1_used_MPORT_8_addr] <= ICache_Way1_used_MPORT_8_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_used_MPORT_11_en & ICache_Way1_used_MPORT_11_mask) begin
      ICache_Way1_used[ICache_Way1_used_MPORT_11_addr] <= ICache_Way1_used_MPORT_11_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_used_MPORT_12_en & ICache_Way1_used_MPORT_12_mask) begin
      ICache_Way1_used[ICache_Way1_used_MPORT_12_addr] <= ICache_Way1_used_MPORT_12_data; // @[IF.scala 123:29]
    end
    if (ICache_Way1_used_MPORT_15_en & ICache_Way1_used_MPORT_15_mask) begin
      ICache_Way1_used[ICache_Way1_used_MPORT_15_addr] <= ICache_Way1_used_MPORT_15_data; // @[IF.scala 123:29]
    end
    if (ICache_Way2_valid_MPORT_9_en & ICache_Way2_valid_MPORT_9_mask) begin
      ICache_Way2_valid[ICache_Way2_valid_MPORT_9_addr] <= ICache_Way2_valid_MPORT_9_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_valid_MPORT_10_en & ICache_Way2_valid_MPORT_10_mask) begin
      ICache_Way2_valid[ICache_Way2_valid_MPORT_10_addr] <= ICache_Way2_valid_MPORT_10_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_valid_MPORT_13_en & ICache_Way2_valid_MPORT_13_mask) begin
      ICache_Way2_valid[ICache_Way2_valid_MPORT_13_addr] <= ICache_Way2_valid_MPORT_13_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_valid_MPORT_14_en & ICache_Way2_valid_MPORT_14_mask) begin
      ICache_Way2_valid[ICache_Way2_valid_MPORT_14_addr] <= ICache_Way2_valid_MPORT_14_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_tag_MPORT_9_en & ICache_Way2_tag_MPORT_9_mask) begin
      ICache_Way2_tag[ICache_Way2_tag_MPORT_9_addr] <= ICache_Way2_tag_MPORT_9_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_tag_MPORT_10_en & ICache_Way2_tag_MPORT_10_mask) begin
      ICache_Way2_tag[ICache_Way2_tag_MPORT_10_addr] <= ICache_Way2_tag_MPORT_10_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_tag_MPORT_13_en & ICache_Way2_tag_MPORT_13_mask) begin
      ICache_Way2_tag[ICache_Way2_tag_MPORT_13_addr] <= ICache_Way2_tag_MPORT_13_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_tag_MPORT_14_en & ICache_Way2_tag_MPORT_14_mask) begin
      ICache_Way2_tag[ICache_Way2_tag_MPORT_14_addr] <= ICache_Way2_tag_MPORT_14_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_insts_0_MPORT_9_en & ICache_Way2_insts_0_MPORT_9_mask) begin
      ICache_Way2_insts_0[ICache_Way2_insts_0_MPORT_9_addr] <= ICache_Way2_insts_0_MPORT_9_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_insts_0_MPORT_10_en & ICache_Way2_insts_0_MPORT_10_mask) begin
      ICache_Way2_insts_0[ICache_Way2_insts_0_MPORT_10_addr] <= ICache_Way2_insts_0_MPORT_10_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_insts_0_MPORT_13_en & ICache_Way2_insts_0_MPORT_13_mask) begin
      ICache_Way2_insts_0[ICache_Way2_insts_0_MPORT_13_addr] <= ICache_Way2_insts_0_MPORT_13_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_insts_0_MPORT_14_en & ICache_Way2_insts_0_MPORT_14_mask) begin
      ICache_Way2_insts_0[ICache_Way2_insts_0_MPORT_14_addr] <= ICache_Way2_insts_0_MPORT_14_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_insts_1_MPORT_9_en & ICache_Way2_insts_1_MPORT_9_mask) begin
      ICache_Way2_insts_1[ICache_Way2_insts_1_MPORT_9_addr] <= ICache_Way2_insts_1_MPORT_9_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_insts_1_MPORT_10_en & ICache_Way2_insts_1_MPORT_10_mask) begin
      ICache_Way2_insts_1[ICache_Way2_insts_1_MPORT_10_addr] <= ICache_Way2_insts_1_MPORT_10_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_insts_1_MPORT_13_en & ICache_Way2_insts_1_MPORT_13_mask) begin
      ICache_Way2_insts_1[ICache_Way2_insts_1_MPORT_13_addr] <= ICache_Way2_insts_1_MPORT_13_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_insts_1_MPORT_14_en & ICache_Way2_insts_1_MPORT_14_mask) begin
      ICache_Way2_insts_1[ICache_Way2_insts_1_MPORT_14_addr] <= ICache_Way2_insts_1_MPORT_14_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_insts_2_MPORT_9_en & ICache_Way2_insts_2_MPORT_9_mask) begin
      ICache_Way2_insts_2[ICache_Way2_insts_2_MPORT_9_addr] <= ICache_Way2_insts_2_MPORT_9_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_insts_2_MPORT_10_en & ICache_Way2_insts_2_MPORT_10_mask) begin
      ICache_Way2_insts_2[ICache_Way2_insts_2_MPORT_10_addr] <= ICache_Way2_insts_2_MPORT_10_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_insts_2_MPORT_13_en & ICache_Way2_insts_2_MPORT_13_mask) begin
      ICache_Way2_insts_2[ICache_Way2_insts_2_MPORT_13_addr] <= ICache_Way2_insts_2_MPORT_13_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_insts_2_MPORT_14_en & ICache_Way2_insts_2_MPORT_14_mask) begin
      ICache_Way2_insts_2[ICache_Way2_insts_2_MPORT_14_addr] <= ICache_Way2_insts_2_MPORT_14_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_insts_3_MPORT_9_en & ICache_Way2_insts_3_MPORT_9_mask) begin
      ICache_Way2_insts_3[ICache_Way2_insts_3_MPORT_9_addr] <= ICache_Way2_insts_3_MPORT_9_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_insts_3_MPORT_10_en & ICache_Way2_insts_3_MPORT_10_mask) begin
      ICache_Way2_insts_3[ICache_Way2_insts_3_MPORT_10_addr] <= ICache_Way2_insts_3_MPORT_10_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_insts_3_MPORT_13_en & ICache_Way2_insts_3_MPORT_13_mask) begin
      ICache_Way2_insts_3[ICache_Way2_insts_3_MPORT_13_addr] <= ICache_Way2_insts_3_MPORT_13_data; // @[IF.scala 124:29]
    end
    if (ICache_Way2_insts_3_MPORT_14_en & ICache_Way2_insts_3_MPORT_14_mask) begin
      ICache_Way2_insts_3[ICache_Way2_insts_3_MPORT_14_addr] <= ICache_Way2_insts_3_MPORT_14_data; // @[IF.scala 124:29]
    end
    pc <= _GEN_70[31:0]; // @[IF.scala 50:{28,28} 87:8]
    history <= _GEN_94[11:0]; // @[IF.scala 51:{28,28}]
    if (reset) begin // @[IF.scala 191:32]
      success_cnt <= 64'h0; // @[IF.scala 191:32]
    end else if (~io_predict_i_predict_fail & io_predict_i_is_branch & _T) begin // @[IF.scala 192:65]
      success_cnt <= _success_cnt_T_1; // @[IF.scala 193:21]
    end
    if (reset) begin // @[IF.scala 197:36]
      icache_hit_cnt <= 64'h0; // @[IF.scala 197:36]
    end else if (hit & _T) begin // @[IF.scala 198:33]
      icache_hit_cnt <= _icache_hit_cnt_T_1; // @[IF.scala 199:25]
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
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 4096; initvar = initvar+1)
    BTB_pc[initvar] = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  for (initvar = 0; initvar < 4096; initvar = initvar+1)
    BTB_target[initvar] = _RAND_1[63:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 4096; initvar = initvar+1)
    BPB[initvar] = _RAND_2[1:0];
  _RAND_3 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    ICache_Way1_valid[initvar] = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    ICache_Way1_tag[initvar] = _RAND_4[19:0];
  _RAND_5 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    ICache_Way1_insts_0[initvar] = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    ICache_Way1_insts_1[initvar] = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    ICache_Way1_insts_2[initvar] = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    ICache_Way1_insts_3[initvar] = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    ICache_Way1_used[initvar] = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    ICache_Way2_valid[initvar] = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    ICache_Way2_tag[initvar] = _RAND_11[19:0];
  _RAND_12 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    ICache_Way2_insts_0[initvar] = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    ICache_Way2_insts_1[initvar] = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    ICache_Way2_insts_2[initvar] = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    ICache_Way2_insts_3[initvar] = _RAND_15[31:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  pc = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  history = _RAND_17[11:0];
  _RAND_18 = {2{`RANDOM}};
  success_cnt = _RAND_18[63:0];
  _RAND_19 = {2{`RANDOM}};
  icache_hit_cnt = _RAND_19[63:0];
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
  input         io_mem_need_stall_i,
  input         io_is_stalled_i,
  input  [31:0] io_inst_i,
  input  [11:0] io_fwd_i_ex_csr_addr,
  input  [63:0] io_fwd_i_ex_csr_wdata,
  input  [4:0]  io_fwd_i_ex_rf_rd,
  input  [63:0] io_fwd_i_ex_rf_wdata,
  input  [11:0] io_fwd_i_mem_csr_addr,
  input  [63:0] io_fwd_i_mem_csr_wdata,
  input  [4:0]  io_fwd_i_mem_rf_rd,
  input  [63:0] io_fwd_i_mem_rf_wdata,
  input  [11:0] io_fwd_i_wb_csr_addr,
  input  [63:0] io_fwd_i_wb_csr_wdata,
  input  [4:0]  io_fwd_i_wb_rf_rd,
  input  [63:0] io_fwd_i_wb_rf_wdata,
  input  [4:0]  io_fwd_i_prev_rd,
  input         io_fwd_i_prev_is_load,
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
  output        io_decInfo_o_memOp_is_load,
  output        io_decInfo_o_memOp_is_store,
  output        io_decInfo_o_memOp_unsigned,
  output [3:0]  io_decInfo_o_memOp_length,
  output [63:0] io_decInfo_o_memOp_sdata,
  output        io_stall_req_o,
  output        io_flush_req_o,
  output        io_debug_o_exit,
  output [63:0] io_debug_o_a0,
  output [63:0] io_debug_o_pc,
  output [31:0] io_debug_o_inst,
  output [63:0] io_nr_branch_o,
  output [63:0] io_nr_taken_o,
  input         io_predict_i_is_branch,
  input  [63:0] io_predict_i_pc,
  input  [11:0] io_predict_i_index,
  input         io_predict_i_predict_taken,
  input  [63:0] io_predict_i_predict_target,
  output        io_predict_o_is_branch,
  output [63:0] io_predict_o_pc,
  output [11:0] io_predict_o_index,
  output [63:0] io_predict_o_target,
  output        io_predict_o_taken,
  output        io_predict_o_predict_fail
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire [4:0] rs1 = io_inst_i[19:15]; // @[ID.scala 48:25]
  wire [4:0] rs2 = io_inst_i[24:20]; // @[ID.scala 49:25]
  wire [11:0] csrAddr = io_inst_i[31:20]; // @[ID.scala 50:25]
  reg [63:0] nr_branch; // @[ID.scala 53:32]
  reg [63:0] nr_taken; // @[ID.scala 54:32]
  wire  _rs1Val_T = rs1 == 5'h0; // @[ID.scala 58:14]
  wire  _rs1Val_T_1 = rs1 == io_fwd_i_ex_rf_rd; // @[ID.scala 59:14]
  wire  _rs1Val_T_2 = rs1 == io_fwd_i_mem_rf_rd; // @[ID.scala 60:14]
  wire  _rs1Val_T_3 = rs1 == io_fwd_i_wb_rf_rd; // @[ID.scala 61:14]
  wire [63:0] _rs1Val_T_4 = _rs1Val_T_3 ? io_fwd_i_wb_rf_wdata : io_rfData_i_rs1Val; // @[Mux.scala 47:70]
  wire [63:0] _rs1Val_T_5 = _rs1Val_T_2 ? io_fwd_i_mem_rf_wdata : _rs1Val_T_4; // @[Mux.scala 47:70]
  wire [63:0] _rs1Val_T_6 = _rs1Val_T_1 ? io_fwd_i_ex_rf_wdata : _rs1Val_T_5; // @[Mux.scala 47:70]
  wire [63:0] rs1Val = _rs1Val_T ? 64'h0 : _rs1Val_T_6; // @[Mux.scala 47:70]
  wire  _rs2Val_T = rs2 == 5'h0; // @[ID.scala 65:14]
  wire  _rs2Val_T_1 = rs2 == io_fwd_i_ex_rf_rd; // @[ID.scala 66:14]
  wire  _rs2Val_T_2 = rs2 == io_fwd_i_mem_rf_rd; // @[ID.scala 67:14]
  wire  _rs2Val_T_3 = rs2 == io_fwd_i_wb_rf_rd; // @[ID.scala 68:14]
  wire [63:0] _rs2Val_T_4 = _rs2Val_T_3 ? io_fwd_i_wb_rf_wdata : io_rfData_i_rs2Val; // @[Mux.scala 47:70]
  wire [63:0] _rs2Val_T_5 = _rs2Val_T_2 ? io_fwd_i_mem_rf_wdata : _rs2Val_T_4; // @[Mux.scala 47:70]
  wire [63:0] _rs2Val_T_6 = _rs2Val_T_1 ? io_fwd_i_ex_rf_wdata : _rs2Val_T_5; // @[Mux.scala 47:70]
  wire [63:0] rs2Val = _rs2Val_T ? 64'h0 : _rs2Val_T_6; // @[Mux.scala 47:70]
  wire  _csrVal_T = csrAddr == io_fwd_i_wb_csr_addr; // @[ID.scala 73:18]
  wire  _csrVal_T_1 = csrAddr == io_fwd_i_mem_csr_addr; // @[ID.scala 74:18]
  wire  _csrVal_T_2 = csrAddr == io_fwd_i_ex_csr_addr; // @[ID.scala 75:18]
  wire [63:0] _csrVal_T_3 = _csrVal_T_2 ? io_fwd_i_ex_csr_wdata : io_csrData_i_csrVal; // @[Mux.scala 47:70]
  wire [63:0] _csrVal_T_4 = _csrVal_T_1 ? io_fwd_i_mem_csr_wdata : _csrVal_T_3; // @[Mux.scala 47:70]
  wire [63:0] csrVal = _csrVal_T ? io_fwd_i_wb_csr_wdata : _csrVal_T_4; // @[Mux.scala 47:70]
  wire  data_hazard_exist = _rs1Val_T_2 | _rs2Val_T_2; // @[ID.scala 88:58]
  wire  operands_usable = ~(io_mem_need_stall_i & data_hazard_exist | io_stall_req_o); // @[ID.scala 89:33]
  wire  direction_fail = io_predict_o_taken != io_predict_i_predict_taken; // @[ID.scala 96:42]
  wire  target_fail = io_predict_o_target != io_predict_i_predict_target; // @[ID.scala 97:43]
  wire  predict_fail = io_predict_i_is_branch & (target_fail | direction_fail) & operands_usable; // @[ID.scala 99:75]
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
  wire [4:0] _decRes_T_207 = _decRes_T_87 ? 5'h0 : _decRes_T_206; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_208 = _decRes_T_85 ? 5'h0 : _decRes_T_207; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_209 = _decRes_T_83 ? 5'h0 : _decRes_T_208; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_210 = _decRes_T_81 ? 5'h0 : _decRes_T_209; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_211 = _decRes_T_79 ? 5'h1 : _decRes_T_210; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_212 = _decRes_T_77 ? 5'h1 : _decRes_T_211; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_213 = _decRes_T_75 ? 5'h1 : _decRes_T_212; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_214 = _decRes_T_73 ? 5'h1 : _decRes_T_213; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_215 = _decRes_T_71 ? 5'h1 : _decRes_T_214; // @[Lookup.scala 34:39]
  wire [4:0] _decRes_T_216 = _decRes_T_69 ? 5'h1 : _decRes_T_215; // @[Lookup.scala 34:39]
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
  wire [6:0] opcode = io_inst_i[6:0]; // @[ID.scala 113:25]
  wire [2:0] fct3 = io_inst_i[14:12]; // @[ID.scala 114:25]
  wire [4:0] _io_decInfo_o_writeOp_rf_rd_T_1 = io_stall_req_o ? 5'h0 : io_inst_i[11:7]; // @[ID.scala 121:44]
  wire  _io_debug_o_a0_T = 5'ha == io_fwd_i_ex_rf_rd; // @[ID.scala 137:15]
  wire  _io_debug_o_a0_T_1 = 5'ha == io_fwd_i_mem_rf_rd; // @[ID.scala 138:15]
  wire  _io_debug_o_a0_T_2 = 5'ha == io_fwd_i_wb_rf_rd; // @[ID.scala 139:15]
  wire [63:0] _io_debug_o_a0_T_3 = _io_debug_o_a0_T_2 ? io_fwd_i_wb_rf_wdata : io_rfData_i_a0; // @[Mux.scala 47:70]
  wire [63:0] _io_debug_o_a0_T_4 = _io_debug_o_a0_T_1 ? io_fwd_i_mem_rf_wdata : _io_debug_o_a0_T_3; // @[Mux.scala 47:70]
  wire  _io_decInfo_o_writeOp_rf_wen_T = io_stall_req_o ? 1'h0 : 1'h1; // @[ID.scala 150:51]
  wire [63:0] _io_decInfo_o_aluOp_src1_T = io_predict_i_is_branch ? io_pc_i : rs1Val; // @[ID.scala 154:46]
  wire [11:0] _io_decInfo_o_aluOp_src2_T_2 = io_inst_i[31:20]; // @[HELPERS.scala 13:65]
  wire [63:0] _io_decInfo_o_aluOp_src2_T_4 = {{52{_io_decInfo_o_aluOp_src2_T_2[11]}},_io_decInfo_o_aluOp_src2_T_2}; // @[HELPERS.scala 13:80]
  wire [63:0] _io_decInfo_o_aluOp_src2_T_5 = io_predict_i_is_branch ? 64'h4 : _io_decInfo_o_aluOp_src2_T_4; // @[ID.scala 155:46]
  wire [63:0] _io_predict_o_target_T_6 = rs1Val + _io_decInfo_o_aluOp_src2_T_4; // @[ID.scala 157:45]
  wire  _io_predict_o_taken_T = ~io_stall_req_o; // @[ID.scala 158:38]
  wire [3:0] _io_decInfo_o_memOp_length_T_1 = 4'h1 << fct3[1:0]; // @[OneHot.scala 57:35]
  wire  _T_2 = ~io_is_stalled_i; // @[ID.scala 165:28]
  wire [63:0] _nr_taken_T_1 = nr_taken + 64'h1; // @[ID.scala 166:42]
  wire [63:0] _nr_branch_T_1 = nr_branch + 64'h1; // @[ID.scala 167:43]
  wire  _io_stall_req_o_T = io_fwd_i_prev_rd == rs1; // @[ID.scala 169:58]
  wire  _io_stall_req_o_T_5 = io_fwd_i_prev_is_load & (_io_stall_req_o_T | io_fwd_i_prev_rd == rs2); // @[ID.scala 176:46]
  wire  _branch_T = rs1Val == rs2Val; // @[ID.scala 183:43]
  wire  _branch_T_1 = rs1Val != rs2Val; // @[ID.scala 184:43]
  wire [63:0] _branch_T_2 = _rs1Val_T ? 64'h0 : _rs1Val_T_6; // @[ID.scala 185:42]
  wire [63:0] _branch_T_3 = _rs2Val_T ? 64'h0 : _rs2Val_T_6; // @[ID.scala 185:62]
  wire  _branch_T_4 = $signed(_branch_T_2) < $signed(_branch_T_3); // @[ID.scala 185:51]
  wire  _branch_T_7 = $signed(_branch_T_2) >= $signed(_branch_T_3); // @[ID.scala 186:51]
  wire  _branch_T_8 = rs1Val < rs2Val; // @[ID.scala 187:44]
  wire  _branch_T_9 = rs1Val >= rs2Val; // @[ID.scala 188:44]
  wire  _branch_T_13 = 3'h1 == fct3 ? _branch_T_1 : 3'h0 == fct3 & _branch_T; // @[Mux.scala 81:58]
  wire  _branch_T_15 = 3'h4 == fct3 ? _branch_T_4 : _branch_T_13; // @[Mux.scala 81:58]
  wire  _branch_T_17 = 3'h5 == fct3 ? _branch_T_7 : _branch_T_15; // @[Mux.scala 81:58]
  wire  _branch_T_19 = 3'h6 == fct3 ? _branch_T_8 : _branch_T_17; // @[Mux.scala 81:58]
  wire  _branch_T_21 = 3'h7 == fct3 ? _branch_T_9 : _branch_T_19; // @[Mux.scala 81:58]
  wire  branch = _branch_T_21 & _io_predict_o_taken_T; // @[ID.scala 189:16]
  wire [12:0] _io_predict_o_target_T_13 = {io_inst_i[31],io_inst_i[7],io_inst_i[30:25],io_inst_i[11:8],1'h0}; // @[HELPERS.scala 13:65]
  wire [63:0] _io_predict_o_target_T_15 = {{51{_io_predict_o_target_T_13[12]}},_io_predict_o_target_T_13}; // @[HELPERS.scala 13:80]
  wire [63:0] _io_predict_o_target_T_17 = io_pc_i + _io_predict_o_target_T_15; // @[ID.scala 192:41]
  wire [63:0] _GEN_2 = branch ? _nr_taken_T_1 : nr_taken; // @[ID.scala 196:25 197:29 54:32]
  wire [63:0] _GEN_3 = _T_2 ? _nr_branch_T_1 : nr_branch; // @[ID.scala 199:35 200:29 53:32]
  wire [63:0] _io_decInfo_o_aluOp_src1_T_2 = opcode == 7'h37 ? 64'h0 : io_pc_i; // @[ID.scala 204:50]
  wire [19:0] _io_decInfo_o_aluOp_src2_T_8 = io_inst_i[31:12]; // @[HELPERS.scala 13:65]
  wire [63:0] _io_decInfo_o_aluOp_src2_T_10 = {{44{_io_decInfo_o_aluOp_src2_T_8[19]}},_io_decInfo_o_aluOp_src2_T_8}; // @[HELPERS.scala 13:80]
  wire [75:0] _io_decInfo_o_aluOp_src2_T_11 = {_io_decInfo_o_aluOp_src2_T_10, 12'h0}; // @[HELPERS.scala 24:55]
  wire [20:0] _io_predict_o_target_T_24 = {io_inst_i[31],io_inst_i[19:12],io_inst_i[20],io_inst_i[30:21],1'h0}; // @[HELPERS.scala 13:65]
  wire [63:0] _io_predict_o_target_T_26 = {{43{_io_predict_o_target_T_24[20]}},_io_predict_o_target_T_24}; // @[HELPERS.scala 13:80]
  wire [63:0] _io_predict_o_target_T_28 = io_pc_i + _io_predict_o_target_T_26; // @[ID.scala 210:41]
  wire [7:0] _io_decInfo_o_memOp_length_T_2 = 8'h1 << fct3; // @[OneHot.scala 57:35]
  wire [11:0] _io_decInfo_o_aluOp_src2_T_16 = {io_inst_i[31:25],io_inst_i[11:7]}; // @[HELPERS.scala 13:65]
  wire [63:0] _io_decInfo_o_aluOp_src2_T_18 = {{52{_io_decInfo_o_aluOp_src2_T_16[11]}},_io_decInfo_o_aluOp_src2_T_16}; // @[HELPERS.scala 13:80]
  wire  _T_11 = |fct3; // @[ID.scala 236:23]
  wire [4:0] _rsVal_T_2 = io_inst_i[19:15]; // @[HELPERS.scala 13:65]
  wire [63:0] _rsVal_T_4 = {{59{_rsVal_T_2[4]}},_rsVal_T_2}; // @[HELPERS.scala 13:80]
  wire [63:0] rsVal = fct3[2] ? _rsVal_T_4 : rs1Val; // @[ID.scala 244:38]
  wire [63:0] _io_decInfo_o_writeOp_csr_wdata_T = csrVal | rsVal; // @[ID.scala 248:41]
  wire [63:0] _io_decInfo_o_writeOp_csr_wdata_T_1 = ~rsVal; // @[ID.scala 249:43]
  wire [63:0] _io_decInfo_o_writeOp_csr_wdata_T_2 = csrVal & _io_decInfo_o_writeOp_csr_wdata_T_1; // @[ID.scala 249:41]
  wire [63:0] _io_decInfo_o_writeOp_csr_wdata_T_4 = 3'h1 == fct3 ? rs1Val : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _io_decInfo_o_writeOp_csr_wdata_T_6 = 3'h2 == fct3 ? _io_decInfo_o_writeOp_csr_wdata_T :
    _io_decInfo_o_writeOp_csr_wdata_T_4; // @[Mux.scala 81:58]
  wire [63:0] _io_decInfo_o_writeOp_csr_wdata_T_8 = 3'h3 == fct3 ? _io_decInfo_o_writeOp_csr_wdata_T_2 :
    _io_decInfo_o_writeOp_csr_wdata_T_6; // @[Mux.scala 81:58]
  wire [1:0] inst_p2 = io_inst_i[21:20]; // @[ID.scala 253:37]
  wire [63:0] _GEN_5 = 2'h0 == inst_p2 ? io_csrData_i_tvec : 64'h0; // @[ID.scala 125:26 254:32 264:46]
  wire [11:0] _GEN_8 = 2'h0 == inst_p2 ? 12'h305 : csrAddr; // @[ID.scala 254:32 122:37 267:57]
  wire [63:0] _GEN_9 = 2'h0 == inst_p2 ? io_pc_i : 64'h0; // @[ID.scala 254:32 117:37 268:57]
  wire  _GEN_10 = 2'h0 == inst_p2 ? 1'h0 : 2'h1 == inst_p2; // @[ID.scala 142:25 254:32]
  wire [63:0] _GEN_11 = 2'h2 == inst_p2 ? io_csrData_i_epc : _GEN_5; // @[ID.scala 254:32 258:46]
  wire  _GEN_12 = 2'h2 == inst_p2 | 2'h0 == inst_p2; // @[ID.scala 254:32 259:46]
  wire  _GEN_13 = 2'h2 == inst_p2 ? 1'h0 : 2'h0 == inst_p2; // @[ID.scala 254:32 117:37]
  wire [11:0] _GEN_14 = 2'h2 == inst_p2 ? csrAddr : _GEN_8; // @[ID.scala 254:32 122:37]
  wire [63:0] _GEN_15 = 2'h2 == inst_p2 ? 64'h0 : _GEN_9; // @[ID.scala 254:32 117:37]
  wire  _GEN_16 = 2'h2 == inst_p2 ? 1'h0 : _GEN_10; // @[ID.scala 142:25 254:32]
  wire [63:0] _GEN_18 = |fct3 ? csrVal : rs1Val; // @[ID.scala 236:27 118:37 239:45]
  wire [63:0] _GEN_19 = |fct3 ? 64'h0 : rs2Val; // @[ID.scala 236:27 119:37 240:45]
  wire [63:0] _GEN_20 = |fct3 ? _io_decInfo_o_writeOp_csr_wdata_T_8 : _GEN_15; // @[ID.scala 236:27 246:49]
  wire  _GEN_21 = |fct3 | _GEN_13; // @[ID.scala 236:27 251:49]
  wire [63:0] _GEN_22 = |fct3 ? 64'h0 : _GEN_11; // @[ID.scala 125:26 236:27]
  wire  _GEN_23 = |fct3 ? 1'h0 : _GEN_12; // @[ID.scala 126:26 236:27]
  wire [11:0] _GEN_24 = |fct3 ? csrAddr : _GEN_14; // @[ID.scala 236:27 122:37]
  wire  _GEN_25 = |fct3 ? 1'h0 : _GEN_16; // @[ID.scala 142:25 236:27]
  wire [63:0] _GEN_27 = 5'h6 == decRes_0 ? _GEN_18 : rs1Val; // @[ID.scala 145:21 118:37]
  wire [63:0] _GEN_28 = 5'h6 == decRes_0 ? _GEN_19 : rs2Val; // @[ID.scala 145:21 119:37]
  wire [63:0] _GEN_29 = 5'h6 == decRes_0 ? _GEN_20 : 64'h0; // @[ID.scala 145:21 117:37]
  wire [63:0] _GEN_31 = 5'h6 == decRes_0 ? _GEN_22 : 64'h0; // @[ID.scala 145:21 125:26]
  wire [11:0] _GEN_33 = 5'h6 == decRes_0 ? _GEN_24 : csrAddr; // @[ID.scala 145:21 122:37]
  wire [4:0] _GEN_35 = 5'h5 == decRes_0 ? 5'h0 : _io_decInfo_o_writeOp_rf_rd_T_1; // @[ID.scala 145:21 121:37 222:43]
  wire  _GEN_36 = 5'h5 == decRes_0 & _io_predict_o_taken_T; // @[ID.scala 145:21 117:37 224:43]
  wire [7:0] _GEN_37 = 5'h5 == decRes_0 ? _io_decInfo_o_memOp_length_T_2 : 8'h0; // @[ID.scala 145:21 117:37 225:43]
  wire [63:0] _GEN_38 = 5'h5 == decRes_0 ? rs2Val : 64'h0; // @[ID.scala 145:21 117:37 226:43]
  wire [63:0] _GEN_39 = 5'h5 == decRes_0 ? rs1Val : _GEN_27; // @[ID.scala 145:21 229:43]
  wire [63:0] _GEN_40 = 5'h5 == decRes_0 ? _io_decInfo_o_aluOp_src2_T_18 : _GEN_28; // @[ID.scala 145:21 230:43]
  wire  _GEN_41 = 5'h5 == decRes_0 & _io_stall_req_o_T_5; // @[ID.scala 145:21 105:24 232:29]
  wire  _GEN_42 = 5'h5 == decRes_0 ? 1'h0 : 5'h6 == decRes_0 & _T_11; // @[ID.scala 145:21 117:37]
  wire [63:0] _GEN_43 = 5'h5 == decRes_0 ? 64'h0 : _GEN_29; // @[ID.scala 145:21 117:37]
  wire  _GEN_44 = 5'h5 == decRes_0 ? 1'h0 : 5'h6 == decRes_0 & _GEN_21; // @[ID.scala 145:21 117:37]
  wire [63:0] _GEN_45 = 5'h5 == decRes_0 ? 64'h0 : _GEN_31; // @[ID.scala 145:21 125:26]
  wire  _GEN_46 = 5'h5 == decRes_0 ? 1'h0 : 5'h6 == decRes_0 & _GEN_23; // @[ID.scala 145:21 126:26]
  wire [11:0] _GEN_47 = 5'h5 == decRes_0 ? csrAddr : _GEN_33; // @[ID.scala 145:21 122:37]
  wire  _GEN_48 = 5'h5 == decRes_0 ? 1'h0 : 5'h6 == decRes_0 & _GEN_25; // @[ID.scala 145:21 142:25]
  wire  _GEN_49 = 5'h4 == decRes_0 | _GEN_42; // @[ID.scala 145:21 209:43]
  wire [63:0] _GEN_50 = 5'h4 == decRes_0 ? _io_predict_o_target_T_28 : _GEN_45; // @[ID.scala 145:21 210:34]
  wire  _GEN_51 = 5'h4 == decRes_0 | _GEN_46; // @[ID.scala 145:21 211:34]
  wire [63:0] _GEN_52 = 5'h4 == decRes_0 ? io_pc_i : _GEN_39; // @[ID.scala 145:21 214:43]
  wire [63:0] _GEN_53 = 5'h4 == decRes_0 ? 64'h4 : _GEN_40; // @[ID.scala 145:21 215:43]
  wire [63:0] _GEN_54 = 5'h4 == decRes_0 ? _nr_branch_T_1 : nr_branch; // @[ID.scala 145:21 217:25 53:32]
  wire [63:0] _GEN_55 = 5'h4 == decRes_0 ? _nr_taken_T_1 : nr_taken; // @[ID.scala 145:21 218:25 54:32]
  wire [4:0] _GEN_56 = 5'h4 == decRes_0 ? _io_decInfo_o_writeOp_rf_rd_T_1 : _GEN_35; // @[ID.scala 145:21 121:37]
  wire  _GEN_57 = 5'h4 == decRes_0 ? 1'h0 : _GEN_36; // @[ID.scala 145:21 117:37]
  wire [7:0] _GEN_58 = 5'h4 == decRes_0 ? 8'h0 : _GEN_37; // @[ID.scala 145:21 117:37]
  wire [63:0] _GEN_59 = 5'h4 == decRes_0 ? 64'h0 : _GEN_38; // @[ID.scala 145:21 117:37]
  wire  _GEN_60 = 5'h4 == decRes_0 ? 1'h0 : _GEN_41; // @[ID.scala 145:21 105:24]
  wire [63:0] _GEN_61 = 5'h4 == decRes_0 ? 64'h0 : _GEN_43; // @[ID.scala 145:21 117:37]
  wire  _GEN_62 = 5'h4 == decRes_0 ? 1'h0 : _GEN_44; // @[ID.scala 145:21 117:37]
  wire [11:0] _GEN_63 = 5'h4 == decRes_0 ? csrAddr : _GEN_47; // @[ID.scala 145:21 122:37]
  wire  _GEN_64 = 5'h4 == decRes_0 ? 1'h0 : _GEN_48; // @[ID.scala 145:21 142:25]
  wire [63:0] _GEN_65 = 5'h2 == decRes_0 ? _io_decInfo_o_aluOp_src1_T_2 : _GEN_52; // @[ID.scala 145:21 204:43]
  wire [75:0] _GEN_66 = 5'h2 == decRes_0 ? _io_decInfo_o_aluOp_src2_T_11 : {{12'd0}, _GEN_53}; // @[ID.scala 145:21 205:43]
  wire  _GEN_67 = 5'h2 == decRes_0 | _GEN_49; // @[ID.scala 145:21 206:43]
  wire [63:0] _GEN_68 = 5'h2 == decRes_0 ? 64'h0 : _GEN_50; // @[ID.scala 145:21 125:26]
  wire  _GEN_69 = 5'h2 == decRes_0 ? 1'h0 : _GEN_51; // @[ID.scala 145:21 126:26]
  wire [63:0] _GEN_70 = 5'h2 == decRes_0 ? nr_branch : _GEN_54; // @[ID.scala 145:21 53:32]
  wire [63:0] _GEN_71 = 5'h2 == decRes_0 ? nr_taken : _GEN_55; // @[ID.scala 145:21 54:32]
  wire [4:0] _GEN_72 = 5'h2 == decRes_0 ? _io_decInfo_o_writeOp_rf_rd_T_1 : _GEN_56; // @[ID.scala 145:21 121:37]
  wire  _GEN_73 = 5'h2 == decRes_0 ? 1'h0 : _GEN_57; // @[ID.scala 145:21 117:37]
  wire [7:0] _GEN_74 = 5'h2 == decRes_0 ? 8'h0 : _GEN_58; // @[ID.scala 145:21 117:37]
  wire [63:0] _GEN_75 = 5'h2 == decRes_0 ? 64'h0 : _GEN_59; // @[ID.scala 145:21 117:37]
  wire  _GEN_76 = 5'h2 == decRes_0 ? 1'h0 : _GEN_60; // @[ID.scala 145:21 105:24]
  wire [63:0] _GEN_77 = 5'h2 == decRes_0 ? 64'h0 : _GEN_61; // @[ID.scala 145:21 117:37]
  wire  _GEN_78 = 5'h2 == decRes_0 ? 1'h0 : _GEN_62; // @[ID.scala 145:21 117:37]
  wire [11:0] _GEN_79 = 5'h2 == decRes_0 ? csrAddr : _GEN_63; // @[ID.scala 145:21 122:37]
  wire  _GEN_80 = 5'h2 == decRes_0 ? 1'h0 : _GEN_64; // @[ID.scala 145:21 142:25]
  wire [4:0] _GEN_81 = 5'h3 == decRes_0 ? 5'h0 : _GEN_72; // @[ID.scala 145:21 181:43]
  wire  _GEN_82 = 5'h3 == decRes_0 ? branch : _GEN_69; // @[ID.scala 145:21 191:34]
  wire [63:0] _GEN_83 = 5'h3 == decRes_0 ? _io_predict_o_target_T_17 : _GEN_68; // @[ID.scala 145:21 192:34]
  wire  _GEN_84 = 5'h3 == decRes_0 ? _io_stall_req_o_T_5 : _GEN_76; // @[ID.scala 145:21 193:29]
  wire [63:0] _GEN_85 = 5'h3 == decRes_0 ? _GEN_2 : _GEN_71; // @[ID.scala 145:21]
  wire [63:0] _GEN_86 = 5'h3 == decRes_0 ? _GEN_3 : _GEN_70; // @[ID.scala 145:21]
  wire [63:0] _GEN_87 = 5'h3 == decRes_0 ? rs1Val : _GEN_65; // @[ID.scala 145:21 118:37]
  wire [75:0] _GEN_88 = 5'h3 == decRes_0 ? {{12'd0}, rs2Val} : _GEN_66; // @[ID.scala 145:21 119:37]
  wire  _GEN_89 = 5'h3 == decRes_0 ? 1'h0 : _GEN_67; // @[ID.scala 145:21 117:37]
  wire  _GEN_90 = 5'h3 == decRes_0 ? 1'h0 : _GEN_73; // @[ID.scala 145:21 117:37]
  wire [7:0] _GEN_91 = 5'h3 == decRes_0 ? 8'h0 : _GEN_74; // @[ID.scala 145:21 117:37]
  wire [63:0] _GEN_92 = 5'h3 == decRes_0 ? 64'h0 : _GEN_75; // @[ID.scala 145:21 117:37]
  wire [63:0] _GEN_93 = 5'h3 == decRes_0 ? 64'h0 : _GEN_77; // @[ID.scala 145:21 117:37]
  wire  _GEN_94 = 5'h3 == decRes_0 ? 1'h0 : _GEN_78; // @[ID.scala 145:21 117:37]
  wire [11:0] _GEN_95 = 5'h3 == decRes_0 ? csrAddr : _GEN_79; // @[ID.scala 145:21 122:37]
  wire  _GEN_96 = 5'h3 == decRes_0 ? 1'h0 : _GEN_80; // @[ID.scala 145:21 142:25]
  wire [63:0] _GEN_97 = 5'h0 == decRes_0 ? rs1Val : _GEN_87; // @[ID.scala 145:21 172:43]
  wire [75:0] _GEN_98 = 5'h0 == decRes_0 ? {{12'd0}, rs2Val} : _GEN_88; // @[ID.scala 145:21 173:43]
  wire  _GEN_99 = 5'h0 == decRes_0 ? _io_decInfo_o_writeOp_rf_wen_T : _GEN_89; // @[ID.scala 145:21 174:43]
  wire  _GEN_100 = 5'h0 == decRes_0 ? io_fwd_i_prev_is_load & (_io_stall_req_o_T | io_fwd_i_prev_rd == rs2) : _GEN_84; // @[ID.scala 145:21 176:29]
  wire [4:0] _GEN_101 = 5'h0 == decRes_0 ? _io_decInfo_o_writeOp_rf_rd_T_1 : _GEN_81; // @[ID.scala 145:21 121:37]
  wire  _GEN_102 = 5'h0 == decRes_0 ? 1'h0 : _GEN_82; // @[ID.scala 145:21 126:26]
  wire [63:0] _GEN_103 = 5'h0 == decRes_0 ? 64'h0 : _GEN_83; // @[ID.scala 145:21 125:26]
  wire  _GEN_106 = 5'h0 == decRes_0 ? 1'h0 : _GEN_90; // @[ID.scala 145:21 117:37]
  wire [7:0] _GEN_107 = 5'h0 == decRes_0 ? 8'h0 : _GEN_91; // @[ID.scala 145:21 117:37]
  wire [63:0] _GEN_108 = 5'h0 == decRes_0 ? 64'h0 : _GEN_92; // @[ID.scala 145:21 117:37]
  wire [63:0] _GEN_109 = 5'h0 == decRes_0 ? 64'h0 : _GEN_93; // @[ID.scala 145:21 117:37]
  wire  _GEN_110 = 5'h0 == decRes_0 ? 1'h0 : _GEN_94; // @[ID.scala 145:21 117:37]
  wire [11:0] _GEN_111 = 5'h0 == decRes_0 ? csrAddr : _GEN_95; // @[ID.scala 145:21 122:37]
  wire  _GEN_112 = 5'h0 == decRes_0 ? 1'h0 : _GEN_96; // @[ID.scala 145:21 142:25]
  wire  _GEN_113 = 5'h1 == decRes_0 ? _io_decInfo_o_writeOp_rf_wen_T : _GEN_99; // @[ID.scala 145:21 150:44]
  wire [63:0] _GEN_114 = 5'h1 == decRes_0 ? _io_decInfo_o_aluOp_src1_T : _GEN_97; // @[ID.scala 145:21 154:39]
  wire [75:0] _GEN_115 = 5'h1 == decRes_0 ? {{12'd0}, _io_decInfo_o_aluOp_src2_T_5} : _GEN_98; // @[ID.scala 145:21 155:39]
  wire [63:0] _GEN_116 = 5'h1 == decRes_0 ? _io_predict_o_target_T_6 : _GEN_103; // @[ID.scala 145:21 157:34]
  wire  _GEN_117 = 5'h1 == decRes_0 ? ~io_stall_req_o : _GEN_102; // @[ID.scala 145:21 158:34]
  wire  _GEN_118 = 5'h1 == decRes_0 & (opcode == 7'h3 & _io_predict_o_taken_T); // @[ID.scala 145:21 117:37 160:43]
  wire [7:0] _GEN_119 = 5'h1 == decRes_0 ? {{4'd0}, _io_decInfo_o_memOp_length_T_1} : _GEN_107; // @[ID.scala 145:21 161:43]
  wire  _GEN_120 = 5'h1 == decRes_0 & fct3[2]; // @[ID.scala 145:21 117:37 163:43]
  wire  _GEN_123 = 5'h1 == decRes_0 ? io_fwd_i_prev_is_load & io_fwd_i_prev_rd == rs1 : _GEN_100; // @[ID.scala 145:21 169:29]
  wire [4:0] _GEN_124 = 5'h1 == decRes_0 ? _io_decInfo_o_writeOp_rf_rd_T_1 : _GEN_101; // @[ID.scala 145:21 121:37]
  wire  _GEN_125 = 5'h1 == decRes_0 ? 1'h0 : _GEN_106; // @[ID.scala 145:21 117:37]
  wire [63:0] _GEN_126 = 5'h1 == decRes_0 ? 64'h0 : _GEN_108; // @[ID.scala 145:21 117:37]
  wire [63:0] _GEN_127 = 5'h1 == decRes_0 ? 64'h0 : _GEN_109; // @[ID.scala 145:21 117:37]
  wire  _GEN_128 = 5'h1 == decRes_0 ? 1'h0 : _GEN_110; // @[ID.scala 145:21 117:37]
  wire [11:0] _GEN_129 = 5'h1 == decRes_0 ? csrAddr : _GEN_111; // @[ID.scala 145:21 122:37]
  wire  _GEN_130 = 5'h1 == decRes_0 ? 1'h0 : _GEN_112; // @[ID.scala 145:21 142:25]
  wire [75:0] _GEN_134 = 5'h7 == decRes_0 ? {{12'd0}, rs2Val} : _GEN_115; // @[ID.scala 145:21 119:37]
  wire [7:0] _GEN_138 = 5'h7 == decRes_0 ? 8'h0 : _GEN_119; // @[ID.scala 145:21 117:37]
  assign io_readOp_o_rs1 = io_inst_i[19:15]; // @[ID.scala 130:32]
  assign io_readOp_o_rs2 = io_inst_i[24:20]; // @[ID.scala 131:32]
  assign io_readOp_o_csrAddr = io_inst_i[31:20]; // @[ID.scala 50:25]
  assign io_decInfo_o_writeOp_rf_wen = 5'h7 == decRes_0 ? 1'h0 : _GEN_113; // @[ID.scala 145:21 117:37]
  assign io_decInfo_o_writeOp_rf_rd = 5'h7 == decRes_0 ? _io_decInfo_o_writeOp_rf_rd_T_1 : _GEN_124; // @[ID.scala 145:21 121:37]
  assign io_decInfo_o_writeOp_csr_wen = 5'h7 == decRes_0 ? 1'h0 : _GEN_128; // @[ID.scala 145:21 117:37]
  assign io_decInfo_o_writeOp_csr_wdata = 5'h7 == decRes_0 ? 64'h0 : _GEN_127; // @[ID.scala 145:21 117:37]
  assign io_decInfo_o_writeOp_csr_waddr = 5'h7 == decRes_0 ? csrAddr : _GEN_129; // @[ID.scala 145:21 122:37]
  assign io_decInfo_o_aluOp_src1 = 5'h7 == decRes_0 ? rs1Val : _GEN_114; // @[ID.scala 145:21 118:37]
  assign io_decInfo_o_aluOp_src2 = _GEN_134[63:0];
  assign io_decInfo_o_aluOp_opt = _decRes_T_1 ? 5'h0 : _decRes_T_249; // @[Lookup.scala 34:39]
  assign io_decInfo_o_memOp_is_load = 5'h7 == decRes_0 ? 1'h0 : _GEN_118; // @[ID.scala 145:21 117:37]
  assign io_decInfo_o_memOp_is_store = 5'h7 == decRes_0 ? 1'h0 : _GEN_125; // @[ID.scala 145:21 117:37]
  assign io_decInfo_o_memOp_unsigned = 5'h7 == decRes_0 ? 1'h0 : _GEN_120; // @[ID.scala 145:21 117:37]
  assign io_decInfo_o_memOp_length = _GEN_138[3:0];
  assign io_decInfo_o_memOp_sdata = 5'h7 == decRes_0 ? 64'h0 : _GEN_126; // @[ID.scala 145:21 117:37]
  assign io_stall_req_o = 5'h7 == decRes_0 ? 1'h0 : _GEN_123; // @[ID.scala 145:21 105:24]
  assign io_flush_req_o = predict_fail & ~io_mem_need_stall_i; // @[ID.scala 107:42]
  assign io_debug_o_exit = 5'h7 == decRes_0 ? |io_inst_i : _GEN_130; // @[ID.scala 145:21 147:31]
  assign io_debug_o_a0 = _io_debug_o_a0_T ? io_fwd_i_ex_rf_wdata : _io_debug_o_a0_T_4; // @[Mux.scala 47:70]
  assign io_debug_o_pc = io_pc_i; // @[ID.scala 134:25]
  assign io_debug_o_inst = io_inst_i; // @[ID.scala 135:25]
  assign io_nr_branch_o = nr_branch; // @[ID.scala 278:21]
  assign io_nr_taken_o = nr_taken; // @[ID.scala 279:21]
  assign io_predict_o_is_branch = io_predict_i_is_branch; // @[ID.scala 125:26]
  assign io_predict_o_pc = io_predict_i_pc; // @[ID.scala 125:26]
  assign io_predict_o_index = io_predict_i_index; // @[ID.scala 125:26]
  assign io_predict_o_target = 5'h7 == decRes_0 ? 64'h0 : _GEN_116; // @[ID.scala 145:21 125:26]
  assign io_predict_o_taken = 5'h7 == decRes_0 ? 1'h0 : _GEN_117; // @[ID.scala 145:21 126:26]
  assign io_predict_o_predict_fail = io_predict_i_is_branch & (target_fail | direction_fail) & operands_usable; // @[ID.scala 99:75]
  always @(posedge clock) begin
    if (reset) begin // @[ID.scala 53:32]
      nr_branch <= 64'h0; // @[ID.scala 53:32]
    end else if (!(5'h7 == decRes_0)) begin // @[ID.scala 145:21]
      if (5'h1 == decRes_0) begin // @[ID.scala 145:21]
        if (io_predict_i_is_branch & ~io_is_stalled_i) begin // @[ID.scala 165:45]
          nr_branch <= _nr_branch_T_1; // @[ID.scala 167:29]
        end
      end else if (!(5'h0 == decRes_0)) begin // @[ID.scala 145:21]
        nr_branch <= _GEN_86;
      end
    end
    if (reset) begin // @[ID.scala 54:32]
      nr_taken <= 64'h0; // @[ID.scala 54:32]
    end else if (!(5'h7 == decRes_0)) begin // @[ID.scala 145:21]
      if (5'h1 == decRes_0) begin // @[ID.scala 145:21]
        if (io_predict_i_is_branch & ~io_is_stalled_i) begin // @[ID.scala 165:45]
          nr_taken <= _nr_taken_T_1; // @[ID.scala 166:29]
        end
      end else if (!(5'h0 == decRes_0)) begin // @[ID.scala 145:21]
        nr_taken <= _GEN_85;
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
  nr_branch = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  nr_taken = _RAND_1[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
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
  output [11:0] io_ex_fwd_o_csr_addr,
  output [63:0] io_ex_fwd_o_csr_wdata,
  output [4:0]  io_ex_fwd_o_rf_rd,
  output [63:0] io_ex_fwd_o_rf_wdata,
  input         io_debug_i_exit,
  input  [63:0] io_debug_i_a0,
  input  [63:0] io_debug_i_pc,
  input  [31:0] io_debug_i_inst,
  output        io_debug_o_exit,
  output [63:0] io_debug_o_a0,
  output [63:0] io_debug_o_pc,
  output [31:0] io_debug_o_inst
);
  wire [63:0] _aluRes_T_1 = io_decInfo_i_aluOp_src1 + io_decInfo_i_aluOp_src2; // @[EX.scala 25:55]
  wire [63:0] _aluRes_T_3 = io_decInfo_i_aluOp_src1 - io_decInfo_i_aluOp_src2; // @[EX.scala 26:27]
  wire [63:0] _aluRes_T_4 = io_decInfo_i_aluOp_src1; // @[EX.scala 27:30]
  wire [63:0] _aluRes_T_5 = io_decInfo_i_aluOp_src2; // @[EX.scala 27:44]
  wire  _aluRes_T_6 = $signed(io_decInfo_i_aluOp_src1) < $signed(io_decInfo_i_aluOp_src2); // @[EX.scala 27:37]
  wire  _aluRes_T_8 = io_decInfo_i_aluOp_src1 < io_decInfo_i_aluOp_src2; // @[EX.scala 28:30]
  wire [127:0] _aluRes_T_13 = $signed(io_decInfo_i_aluOp_src1) * $signed(io_decInfo_i_aluOp_src2); // @[EX.scala 29:49]
  wire [127:0] _aluRes_T_15 = io_decInfo_i_aluOp_src1 * io_decInfo_i_aluOp_src2; // @[EX.scala 30:28]
  wire [63:0] _aluRes_T_19 = io_decInfo_i_aluOp_src1 ^ io_decInfo_i_aluOp_src2; // @[EX.scala 32:27]
  wire [63:0] _aluRes_T_20 = io_decInfo_i_aluOp_src1 | io_decInfo_i_aluOp_src2; // @[EX.scala 33:27]
  wire [63:0] _aluRes_T_21 = io_decInfo_i_aluOp_src1 & io_decInfo_i_aluOp_src2; // @[EX.scala 34:27]
  wire [126:0] _GEN_0 = {{63'd0}, io_decInfo_i_aluOp_src1}; // @[EX.scala 35:27]
  wire [126:0] _aluRes_T_23 = _GEN_0 << io_decInfo_i_aluOp_src2[5:0]; // @[EX.scala 35:27]
  wire [63:0] _aluRes_T_25 = io_decInfo_i_aluOp_src1 >> io_decInfo_i_aluOp_src2[5:0]; // @[EX.scala 36:27]
  wire [63:0] _aluRes_T_29 = $signed(io_decInfo_i_aluOp_src1) >>> io_decInfo_i_aluOp_src2[5:0]; // @[EX.scala 37:48]
  wire [31:0] _aluRes_T_35 = io_decInfo_i_aluOp_src1[31:0] + io_decInfo_i_aluOp_src2[31:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_37 = {{32{_aluRes_T_35[31]}},_aluRes_T_35}; // @[HELPERS.scala 13:80]
  wire [31:0] _aluRes_T_43 = io_decInfo_i_aluOp_src1[31:0] - io_decInfo_i_aluOp_src2[31:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_45 = {{32{_aluRes_T_43[31]}},_aluRes_T_43}; // @[HELPERS.scala 13:80]
  wire [63:0] _aluRes_T_50 = _aluRes_T_4[31:0] * _aluRes_T_5[31:0]; // @[EX.scala 41:45]
  wire [31:0] _aluRes_T_53 = _aluRes_T_50[31:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_55 = {{32{_aluRes_T_53[31]}},_aluRes_T_53}; // @[HELPERS.scala 13:80]
  wire [62:0] _GEN_1 = {{31'd0}, io_decInfo_i_aluOp_src1[31:0]}; // @[EX.scala 42:39]
  wire [62:0] _aluRes_T_58 = _GEN_1 << io_decInfo_i_aluOp_src2[4:0]; // @[EX.scala 42:39]
  wire [31:0] _aluRes_T_61 = _aluRes_T_58[31:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_63 = {{32{_aluRes_T_61[31]}},_aluRes_T_61}; // @[HELPERS.scala 13:80]
  wire [31:0] _aluRes_T_69 = io_decInfo_i_aluOp_src1[31:0] >> io_decInfo_i_aluOp_src2[4:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_71 = {{32{_aluRes_T_69[31]}},_aluRes_T_69}; // @[HELPERS.scala 13:80]
  wire [31:0] _aluRes_T_73 = io_decInfo_i_aluOp_src1[31:0]; // @[EX.scala 44:39]
  wire [31:0] _aluRes_T_78 = $signed(_aluRes_T_73) >>> io_decInfo_i_aluOp_src2[4:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_80 = {{32{_aluRes_T_78[31]}},_aluRes_T_78}; // @[HELPERS.scala 13:80]
  wire [64:0] _aluRes_T_82 = {1'b0,$signed(io_decInfo_i_aluOp_src2)}; // @[EX.scala 47:35]
  wire [128:0] _aluRes_T_83 = $signed(io_decInfo_i_aluOp_src1) * $signed(_aluRes_T_82); // @[EX.scala 47:35]
  wire [127:0] _aluRes_T_86 = _aluRes_T_83[127:0]; // @[EX.scala 47:43]
  wire [64:0] _aluRes_T_96 = $signed(io_decInfo_i_aluOp_src1) / $signed(io_decInfo_i_aluOp_src2); // @[EX.scala 49:49]
  wire [63:0] _aluRes_T_97 = io_decInfo_i_aluOp_src1 / io_decInfo_i_aluOp_src2; // @[EX.scala 50:27]
  wire [63:0] _aluRes_T_101 = $signed(io_decInfo_i_aluOp_src1) % $signed(io_decInfo_i_aluOp_src2); // @[EX.scala 51:49]
  wire [63:0] _aluRes_T_102 = io_decInfo_i_aluOp_src1 % io_decInfo_i_aluOp_src2; // @[EX.scala 52:27]
  wire [31:0] _aluRes_T_106 = io_decInfo_i_aluOp_src2[31:0]; // @[EX.scala 54:60]
  wire [31:0] _aluRes_T_110 = $signed(_aluRes_T_73) % $signed(_aluRes_T_106); // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_112 = {{32{_aluRes_T_110[31]}},_aluRes_T_110}; // @[HELPERS.scala 13:80]
  wire [32:0] _aluRes_T_118 = $signed(_aluRes_T_73) / $signed(_aluRes_T_106); // @[EX.scala 55:68]
  wire [31:0] _aluRes_T_120 = _aluRes_T_118[31:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_122 = {{32{_aluRes_T_120[31]}},_aluRes_T_120}; // @[HELPERS.scala 13:80]
  wire [31:0] _aluRes_T_127 = io_decInfo_i_aluOp_src1[31:0] / io_decInfo_i_aluOp_src2[31:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_129 = {{32{_aluRes_T_127[31]}},_aluRes_T_127}; // @[HELPERS.scala 13:80]
  wire [31:0] _aluRes_T_134 = io_decInfo_i_aluOp_src1[31:0] % io_decInfo_i_aluOp_src2[31:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _aluRes_T_136 = {{32{_aluRes_T_134[31]}},_aluRes_T_134}; // @[HELPERS.scala 13:80]
  wire [63:0] _aluRes_T_138 = 5'h1 == io_decInfo_i_aluOp_opt ? _aluRes_T_3 : _aluRes_T_1; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_140 = 5'h2 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_6} : _aluRes_T_138; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_142 = 5'h3 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_8} : _aluRes_T_140; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_144 = 5'hb == io_decInfo_i_aluOp_opt ? _aluRes_T_13[63:0] : _aluRes_T_142; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_146 = 5'hd == io_decInfo_i_aluOp_opt ? _aluRes_T_15[63:0] : _aluRes_T_144; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_148 = 5'hc == io_decInfo_i_aluOp_opt ? _aluRes_T_15[127:64] : _aluRes_T_146; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_150 = 5'h4 == io_decInfo_i_aluOp_opt ? _aluRes_T_19 : _aluRes_T_148; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_152 = 5'h5 == io_decInfo_i_aluOp_opt ? _aluRes_T_20 : _aluRes_T_150; // @[Mux.scala 81:58]
  wire [63:0] _aluRes_T_154 = 5'h6 == io_decInfo_i_aluOp_opt ? _aluRes_T_21 : _aluRes_T_152; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_156 = 5'h7 == io_decInfo_i_aluOp_opt ? _aluRes_T_23 : {{63'd0}, _aluRes_T_154}; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_158 = 5'h8 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_25} : _aluRes_T_156; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_160 = 5'h9 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_29} : _aluRes_T_158; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_162 = 5'h19 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_37} : _aluRes_T_160; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_164 = 5'h1a == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_45} : _aluRes_T_162; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_166 = 5'h18 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_55} : _aluRes_T_164; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_168 = 5'h1b == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_63} : _aluRes_T_166; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_170 = 5'h1c == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_71} : _aluRes_T_168; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_172 = 5'h1d == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_80} : _aluRes_T_170; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_174 = 5'he == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_86[127:64]} : _aluRes_T_172; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_176 = 5'hc == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_13[127:64]} : _aluRes_T_174; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_178 = 5'h10 == io_decInfo_i_aluOp_opt ? {{62'd0}, _aluRes_T_96} : _aluRes_T_176; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_180 = 5'h12 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_97} : _aluRes_T_178; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_182 = 5'h11 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_101} : _aluRes_T_180; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_184 = 5'h13 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_102} : _aluRes_T_182; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_186 = 5'h14 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_112} : _aluRes_T_184; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_188 = 5'h15 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_122} : _aluRes_T_186; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_190 = 5'h16 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_129} : _aluRes_T_188; // @[Mux.scala 81:58]
  wire [126:0] _aluRes_T_192 = 5'h17 == io_decInfo_i_aluOp_opt ? {{63'd0}, _aluRes_T_136} : _aluRes_T_190; // @[Mux.scala 81:58]
  wire [63:0] aluRes = _aluRes_T_192[63:0]; // @[EX.scala 24:23 25:13]
  assign io_writeOp_o_rf_wen = io_decInfo_i_writeOp_rf_wen; // @[EX.scala 68:27]
  assign io_writeOp_o_rf_rd = io_decInfo_i_writeOp_rf_rd; // @[EX.scala 68:27]
  assign io_writeOp_o_rf_wdata = aluRes; // @[EX.scala 69:27]
  assign io_writeOp_o_csr_wen = io_decInfo_i_writeOp_csr_wen; // @[EX.scala 68:27]
  assign io_writeOp_o_csr_wdata = io_decInfo_i_writeOp_csr_wdata; // @[EX.scala 68:27]
  assign io_writeOp_o_csr_waddr = io_decInfo_i_writeOp_csr_waddr; // @[EX.scala 68:27]
  assign io_memOp_o_is_load = io_decInfo_i_memOp_is_load; // @[EX.scala 71:27]
  assign io_memOp_o_is_store = io_decInfo_i_memOp_is_store; // @[EX.scala 71:27]
  assign io_memOp_o_unsigned = io_decInfo_i_memOp_unsigned; // @[EX.scala 71:27]
  assign io_memOp_o_length = io_decInfo_i_memOp_length; // @[EX.scala 71:27]
  assign io_memOp_o_addr = aluRes; // @[EX.scala 72:27]
  assign io_memOp_o_sdata = io_decInfo_i_memOp_sdata; // @[EX.scala 71:27]
  assign io_ex_fwd_o_csr_addr = io_writeOp_o_csr_waddr; // @[EX.scala 96:29]
  assign io_ex_fwd_o_csr_wdata = io_writeOp_o_csr_wdata; // @[EX.scala 97:29]
  assign io_ex_fwd_o_rf_rd = io_memOp_o_is_load ? 5'h0 : io_decInfo_i_writeOp_rf_rd; // @[EX.scala 93:36]
  assign io_ex_fwd_o_rf_wdata = aluRes; // @[EX.scala 94:29]
  assign io_debug_o_exit = io_debug_i_exit; // @[EX.scala 99:17]
  assign io_debug_o_a0 = io_debug_i_a0; // @[EX.scala 99:17]
  assign io_debug_o_pc = io_debug_i_pc; // @[EX.scala 99:17]
  assign io_debug_o_inst = io_debug_i_inst; // @[EX.scala 99:17]
endmodule
module MEM(
  input         clock,
  input         reset,
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
  output        io_writeOp_o_rf_wen,
  output [4:0]  io_writeOp_o_rf_rd,
  output [63:0] io_writeOp_o_rf_wdata,
  output        io_writeOp_o_csr_wen,
  output [63:0] io_writeOp_o_csr_wdata,
  output [11:0] io_writeOp_o_csr_waddr,
  output [11:0] io_mem_fwd_o_csr_addr,
  output [63:0] io_mem_fwd_o_csr_wdata,
  output [4:0]  io_mem_fwd_o_rf_rd,
  output [63:0] io_mem_fwd_o_rf_wdata,
  input  [31:0] io_dcache_insert_i_blocks_0,
  input  [31:0] io_dcache_insert_i_blocks_1,
  input  [31:0] io_dcache_insert_i_blocks_2,
  input  [31:0] io_dcache_insert_i_blocks_3,
  input  [7:0]  io_dcache_insert_i_index,
  input  [19:0] io_dcache_insert_i_tag,
  output        io_dcache_miss_o_miss,
  output [63:0] io_dcache_miss_o_addr,
  output [63:0] io_nr_dcache_hit_o,
  output [63:0] io_nr_load_o,
  output        io_stall_req_o,
  input         io_debug_i_exit,
  input  [63:0] io_debug_i_a0,
  input  [63:0] io_debug_i_pc,
  input  [31:0] io_debug_i_inst,
  output        io_debug_o_exit,
  output [63:0] io_debug_o_a0,
  output [63:0] io_debug_o_pc,
  output [31:0] io_debug_o_inst
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg  DCache_Way1_valid [0:255]; // @[MEM.scala 37:32]
  wire  DCache_Way1_valid_set1_en; // @[MEM.scala 37:32]
  wire [7:0] DCache_Way1_valid_set1_addr; // @[MEM.scala 37:32]
  wire  DCache_Way1_valid_set1_data; // @[MEM.scala 37:32]
  reg [19:0] DCache_Way1_tag [0:255]; // @[MEM.scala 37:32]
  wire  DCache_Way1_tag_set1_en; // @[MEM.scala 37:32]
  wire [7:0] DCache_Way1_tag_set1_addr; // @[MEM.scala 37:32]
  wire [19:0] DCache_Way1_tag_set1_data; // @[MEM.scala 37:32]
  reg  DCache_Way2_valid [0:255]; // @[MEM.scala 38:32]
  wire  DCache_Way2_valid_set2_en; // @[MEM.scala 38:32]
  wire [7:0] DCache_Way2_valid_set2_addr; // @[MEM.scala 38:32]
  wire  DCache_Way2_valid_set2_data; // @[MEM.scala 38:32]
  reg [19:0] DCache_Way2_tag [0:255]; // @[MEM.scala 38:32]
  wire  DCache_Way2_tag_set2_en; // @[MEM.scala 38:32]
  wire [7:0] DCache_Way2_tag_set2_addr; // @[MEM.scala 38:32]
  wire [19:0] DCache_Way2_tag_set2_data; // @[MEM.scala 38:32]
  wire  MMIO_RW_read_en; // @[MEM.scala 88:25]
  wire  MMIO_RW_write_en; // @[MEM.scala 88:25]
  wire [63:0] MMIO_RW_addr; // @[MEM.scala 88:25]
  wire [63:0] MMIO_RW_wdata; // @[MEM.scala 88:25]
  wire [3:0] MMIO_RW_length; // @[MEM.scala 88:25]
  wire [63:0] MMIO_RW_rdata; // @[MEM.scala 88:25]
  reg [63:0] dcache_hit_cnt; // @[MEM.scala 35:36]
  reg [63:0] load_cnt; // @[MEM.scala 36:36]
  wire  in_pmem = io_memOp_i_addr >= 64'h80000000 & io_memOp_i_addr <= 64'h87ffffff; // @[MEM.scala 11:70]
  wire  not_in_pmem = ~in_pmem; // @[MEM.scala 52:26]
  wire  use_cache = io_memOp_i_is_load & in_pmem; // @[MEM.scala 53:34]
  wire [19:0] tag = io_memOp_i_addr[31:12]; // @[CONST.scala 16:31]
  wire [7:0] index = io_memOp_i_addr[11:4]; // @[CONST.scala 17:33]
  wire  hit1 = tag == DCache_Way1_tag_set1_data & DCache_Way1_valid_set1_data; // @[MEM.scala 66:38]
  wire  hit2 = tag == DCache_Way2_tag_set2_data & DCache_Way2_valid_set2_data; // @[MEM.scala 72:38]
  wire  hit3 = tag == io_dcache_insert_i_tag & index == io_dcache_insert_i_index; // @[MEM.scala 74:54]
  wire  hit_at_least_one = hit1 | hit2 | hit3; // @[MEM.scala 75:45]
  wire  hit = use_cache & hit_at_least_one; // @[MEM.scala 76:31]
  wire  miss = use_cache & ~hit_at_least_one; // @[MEM.scala 78:31]
  wire [2:0] offset = io_memOp_i_addr[2:0]; // @[MEM.scala 112:35]
  wire  on_the_right_half = io_memOp_i_addr[3]; // @[MEM.scala 122:47]
  wire [127:0] _dword_from_main_memory_T = {io_dcache_insert_i_blocks_3,io_dcache_insert_i_blocks_2,
    io_dcache_insert_i_blocks_1,io_dcache_insert_i_blocks_0}; // @[MEM.scala 128:43]
  wire [63:0] dword_from_main_memory = on_the_right_half ? _dword_from_main_memory_T[127:64] : _dword_from_main_memory_T
    [63:0]; // @[MEM.scala 127:48]
  wire [63:0] _load_cnt_T_1 = load_cnt + 64'h1; // @[MEM.scala 131:38]
  wire [63:0] _dcache_hit_cnt_T_1 = dcache_hit_cnt + 64'h1; // @[MEM.scala 133:57]
  wire [7:0] _byteMask_T_1 = 4'h1 == io_memOp_i_length ? 8'hff : 8'h0; // @[Mux.scala 81:58]
  wire [15:0] _byteMask_T_3 = 4'h2 == io_memOp_i_length ? 16'hffff : {{8'd0}, _byteMask_T_1}; // @[Mux.scala 81:58]
  wire [31:0] _byteMask_T_5 = 4'h4 == io_memOp_i_length ? 32'hffffffff : {{16'd0}, _byteMask_T_3}; // @[Mux.scala 81:58]
  wire [63:0] byteMask = 4'h8 == io_memOp_i_length ? 64'hffffffffffffffff : {{32'd0}, _byteMask_T_5}; // @[Mux.scala 81:58]
  wire [5:0] _mask_T = {offset, 3'h0}; // @[MEM.scala 152:50]
  wire [126:0] _GEN_12 = {{63'd0}, byteMask}; // @[MEM.scala 152:39]
  wire [126:0] mask = _GEN_12 << _mask_T; // @[MEM.scala 152:39]
  wire [63:0] _GEN_5 = not_in_pmem ? 64'h0 : dword_from_main_memory; // @[MEM.scala 107:26 134:29]
  wire [63:0] dword = io_memOp_i_is_load ? _GEN_5 : 64'h0; // @[MEM.scala 106:18]
  wire [126:0] _GEN_11 = {{63'd0}, dword}; // @[MEM.scala 153:36]
  wire [126:0] _loadVal_T = _GEN_11 & mask; // @[MEM.scala 153:36]
  wire [126:0] _loadVal_T_2 = _loadVal_T >> _mask_T; // @[MEM.scala 153:44]
  wire [126:0] _GEN_2 = not_in_pmem ? {{63'd0}, MMIO_RW_rdata} : _loadVal_T_2; // @[MEM.scala 107:26 109:25 153:24]
  wire [126:0] _GEN_6 = io_memOp_i_is_load ? _GEN_2 : 127'h0; // @[MEM.scala 106:18]
  wire [63:0] loadVal = _GEN_6[63:0];
  wire [7:0] _loadVal_sext_T_1 = loadVal[7:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _loadVal_sext_T_3 = {{56{_loadVal_sext_T_1[7]}},_loadVal_sext_T_1}; // @[HELPERS.scala 13:80]
  wire [63:0] _loadVal_sext_T_4 = io_memOp_i_unsigned ? loadVal : _loadVal_sext_T_3; // @[MEM.scala 156:24]
  wire [15:0] _loadVal_sext_T_6 = loadVal[15:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _loadVal_sext_T_8 = {{48{_loadVal_sext_T_6[15]}},_loadVal_sext_T_6}; // @[HELPERS.scala 13:80]
  wire [63:0] _loadVal_sext_T_9 = io_memOp_i_unsigned ? loadVal : _loadVal_sext_T_8; // @[MEM.scala 157:24]
  wire [31:0] _loadVal_sext_T_11 = loadVal[31:0]; // @[HELPERS.scala 13:65]
  wire [63:0] _loadVal_sext_T_13 = {{32{_loadVal_sext_T_11[31]}},_loadVal_sext_T_11}; // @[HELPERS.scala 13:80]
  wire [63:0] _loadVal_sext_T_14 = io_memOp_i_unsigned ? loadVal : _loadVal_sext_T_13; // @[MEM.scala 158:24]
  wire [63:0] _loadVal_sext_T_16 = 4'h1 == io_memOp_i_length ? _loadVal_sext_T_4 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _loadVal_sext_T_18 = 4'h2 == io_memOp_i_length ? _loadVal_sext_T_9 : _loadVal_sext_T_16; // @[Mux.scala 81:58]
  wire [63:0] _loadVal_sext_T_20 = 4'h4 == io_memOp_i_length ? _loadVal_sext_T_14 : _loadVal_sext_T_18; // @[Mux.scala 81:58]
  wire [63:0] _loadVal_sext_T_22 = 4'h8 == io_memOp_i_length ? loadVal : _loadVal_sext_T_20; // @[Mux.scala 81:58]
  wire [63:0] loadVal_sext = io_memOp_i_is_load ? _loadVal_sext_T_22 : 64'h0; // @[MEM.scala 106:18 155:25]
  MMIO_RW MMIO_RW ( // @[MEM.scala 88:25]
    .read_en(MMIO_RW_read_en),
    .write_en(MMIO_RW_write_en),
    .addr(MMIO_RW_addr),
    .wdata(MMIO_RW_wdata),
    .length(MMIO_RW_length),
    .rdata(MMIO_RW_rdata)
  );
  assign DCache_Way1_valid_set1_en = 1'h1;
  assign DCache_Way1_valid_set1_addr = io_memOp_i_addr[11:4];
  assign DCache_Way1_valid_set1_data = DCache_Way1_valid[DCache_Way1_valid_set1_addr]; // @[MEM.scala 37:32]
  assign DCache_Way1_tag_set1_en = 1'h1;
  assign DCache_Way1_tag_set1_addr = io_memOp_i_addr[11:4];
  assign DCache_Way1_tag_set1_data = DCache_Way1_tag[DCache_Way1_tag_set1_addr]; // @[MEM.scala 37:32]
  assign DCache_Way2_valid_set2_en = 1'h1;
  assign DCache_Way2_valid_set2_addr = io_memOp_i_addr[11:4];
  assign DCache_Way2_valid_set2_data = DCache_Way2_valid[DCache_Way2_valid_set2_addr]; // @[MEM.scala 38:32]
  assign DCache_Way2_tag_set2_en = 1'h1;
  assign DCache_Way2_tag_set2_addr = io_memOp_i_addr[11:4];
  assign DCache_Way2_tag_set2_data = DCache_Way2_tag[DCache_Way2_tag_set2_addr]; // @[MEM.scala 38:32]
  assign io_writeOp_o_rf_wen = io_writeOp_i_rf_wen; // @[MEM.scala 273:29]
  assign io_writeOp_o_rf_rd = io_writeOp_i_rf_rd; // @[MEM.scala 273:29]
  assign io_writeOp_o_rf_wdata = io_memOp_i_is_load ? loadVal_sext : io_writeOp_i_rf_wdata; // @[MEM.scala 274:36]
  assign io_writeOp_o_csr_wen = io_writeOp_i_csr_wen; // @[MEM.scala 273:29]
  assign io_writeOp_o_csr_wdata = io_writeOp_i_csr_wdata; // @[MEM.scala 273:29]
  assign io_writeOp_o_csr_waddr = io_writeOp_i_csr_waddr; // @[MEM.scala 273:29]
  assign io_mem_fwd_o_csr_addr = io_writeOp_o_csr_waddr; // @[MEM.scala 286:29]
  assign io_mem_fwd_o_csr_wdata = io_writeOp_o_csr_wdata; // @[MEM.scala 287:29]
  assign io_mem_fwd_o_rf_rd = io_writeOp_o_rf_rd; // @[MEM.scala 283:29]
  assign io_mem_fwd_o_rf_wdata = io_writeOp_o_rf_wdata; // @[MEM.scala 284:29]
  assign io_dcache_miss_o_miss = use_cache & ~hit_at_least_one; // @[MEM.scala 78:31]
  assign io_dcache_miss_o_addr = miss ? io_memOp_i_addr : 64'h0; // @[MEM.scala 99:15 101:33 96:25]
  assign io_nr_dcache_hit_o = dcache_hit_cnt; // @[MEM.scala 276:25]
  assign io_nr_load_o = load_cnt; // @[MEM.scala 277:25]
  assign io_stall_req_o = use_cache & ~hit_at_least_one; // @[MEM.scala 78:31]
  assign io_debug_o_exit = io_debug_i_exit; // @[MEM.scala 279:21]
  assign io_debug_o_a0 = io_debug_i_a0; // @[MEM.scala 279:21]
  assign io_debug_o_pc = io_debug_i_pc; // @[MEM.scala 279:21]
  assign io_debug_o_inst = io_debug_i_inst; // @[MEM.scala 279:21]
  assign MMIO_RW_read_en = not_in_pmem & io_memOp_i_is_load; // @[MEM.scala 92:41]
  assign MMIO_RW_write_en = not_in_pmem & io_memOp_i_is_store; // @[MEM.scala 93:41]
  assign MMIO_RW_addr = io_memOp_i_addr; // @[MEM.scala 89:25]
  assign MMIO_RW_wdata = io_memOp_i_sdata; // @[MEM.scala 91:25]
  assign MMIO_RW_length = io_memOp_i_length; // @[MEM.scala 90:25]
  always @(posedge clock) begin
    if (reset) begin // @[MEM.scala 35:36]
      dcache_hit_cnt <= 64'h0; // @[MEM.scala 35:36]
    end else if (io_memOp_i_is_load) begin // @[MEM.scala 106:18]
      if (!(not_in_pmem)) begin // @[MEM.scala 107:26]
        if (hit) begin // @[MEM.scala 133:36]
          dcache_hit_cnt <= _dcache_hit_cnt_T_1;
        end
      end
    end
    if (reset) begin // @[MEM.scala 36:36]
      load_cnt <= 64'h0; // @[MEM.scala 36:36]
    end else if (io_memOp_i_is_load) begin // @[MEM.scala 106:18]
      if (!(not_in_pmem)) begin // @[MEM.scala 107:26]
        load_cnt <= _load_cnt_T_1; // @[MEM.scala 131:25]
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
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    DCache_Way1_valid[initvar] = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    DCache_Way1_tag[initvar] = _RAND_1[19:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    DCache_Way2_valid[initvar] = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  for (initvar = 0; initvar < 256; initvar = initvar+1)
    DCache_Way2_tag[initvar] = _RAND_3[19:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {2{`RANDOM}};
  dcache_hit_cnt = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  load_cnt = _RAND_5[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
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
  output [11:0] io_wb_fwd_o_csr_addr,
  output [63:0] io_wb_fwd_o_csr_wdata,
  output [4:0]  io_wb_fwd_o_rf_rd,
  output [63:0] io_wb_fwd_o_rf_wdata,
  input         io_debug_i_exit,
  input  [63:0] io_debug_i_a0,
  input  [63:0] io_debug_i_pc,
  input  [31:0] io_debug_i_inst
);
  wire  DEBUG_exit; // @[WB.scala 22:23]
  wire [63:0] DEBUG_pc; // @[WB.scala 22:23]
  wire [31:0] DEBUG_inst; // @[WB.scala 22:23]
  wire [63:0] DEBUG_a0; // @[WB.scala 22:23]
  DEBUG DEBUG ( // @[WB.scala 22:23]
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
  assign io_wb_fwd_o_csr_addr = io_writeOp_o_csr_waddr; // @[WB.scala 18:29]
  assign io_wb_fwd_o_csr_wdata = io_writeOp_o_csr_wdata; // @[WB.scala 19:29]
  assign io_wb_fwd_o_rf_rd = io_writeOp_o_rf_rd; // @[WB.scala 15:29]
  assign io_wb_fwd_o_rf_wdata = io_writeOp_o_rf_wdata; // @[WB.scala 16:29]
  assign DEBUG_exit = io_debug_i_exit; // @[WB.scala 25:21]
  assign DEBUG_pc = io_debug_i_pc; // @[WB.scala 24:21]
  assign DEBUG_inst = io_debug_i_inst; // @[WB.scala 26:21]
  assign DEBUG_a0 = io_debug_i_a0; // @[WB.scala 27:21]
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
      mtvec <= 64'h114514; // @[CSR.scala 21:28]
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
  input         reset,
  input         io_memOp_i_is_load,
  input         io_memOp_i_is_store,
  input  [3:0]  io_memOp_i_length,
  input  [63:0] io_memOp_i_addr,
  input  [63:0] io_memOp_i_sdata,
  input         io_dcache_miss_i_miss,
  input  [63:0] io_dcache_miss_i_addr,
  input         io_icache_miss_i_miss,
  input  [63:0] io_icache_miss_i_pc,
  output [31:0] io_dcache_insert_o_blocks_0,
  output [31:0] io_dcache_insert_o_blocks_1,
  output [31:0] io_dcache_insert_o_blocks_2,
  output [31:0] io_dcache_insert_o_blocks_3,
  output [7:0]  io_dcache_insert_o_index,
  output [19:0] io_dcache_insert_o_tag,
  output        io_icache_insert_o_valid,
  output [31:0] io_icache_insert_o_insts_0,
  output [31:0] io_icache_insert_o_insts_1,
  output [31:0] io_icache_insert_o_insts_2,
  output [31:0] io_icache_insert_o_insts_3,
  output [7:0]  io_icache_insert_o_index,
  output [19:0] io_icache_insert_o_tag
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] ram1 [0:65535]; // @[MAIN_MEMORY.scala 62:19]
  wire  ram1_qword_MPORT_3_en; // @[MAIN_MEMORY.scala 62:19]
  wire [15:0] ram1_qword_MPORT_3_addr; // @[MAIN_MEMORY.scala 62:19]
  wire [31:0] ram1_qword_MPORT_3_data; // @[MAIN_MEMORY.scala 62:19]
  wire  ram1_new_qword_MPORT_3_en; // @[MAIN_MEMORY.scala 62:19]
  wire [15:0] ram1_new_qword_MPORT_3_addr; // @[MAIN_MEMORY.scala 62:19]
  wire [31:0] ram1_new_qword_MPORT_3_data; // @[MAIN_MEMORY.scala 62:19]
  wire  ram1_icache_set_MPORT_3_en; // @[MAIN_MEMORY.scala 62:19]
  wire [15:0] ram1_icache_set_MPORT_3_addr; // @[MAIN_MEMORY.scala 62:19]
  wire [31:0] ram1_icache_set_MPORT_3_data; // @[MAIN_MEMORY.scala 62:19]
  wire  ram1_dcache_set_MPORT_3_en; // @[MAIN_MEMORY.scala 62:19]
  wire [15:0] ram1_dcache_set_MPORT_3_addr; // @[MAIN_MEMORY.scala 62:19]
  wire [31:0] ram1_dcache_set_MPORT_3_data; // @[MAIN_MEMORY.scala 62:19]
  wire  ram1_row_MPORT_3_en; // @[MAIN_MEMORY.scala 62:19]
  wire [15:0] ram1_row_MPORT_3_addr; // @[MAIN_MEMORY.scala 62:19]
  wire [31:0] ram1_row_MPORT_3_data; // @[MAIN_MEMORY.scala 62:19]
  wire [31:0] ram1_MPORT_data; // @[MAIN_MEMORY.scala 62:19]
  wire [15:0] ram1_MPORT_addr; // @[MAIN_MEMORY.scala 62:19]
  wire  ram1_MPORT_mask; // @[MAIN_MEMORY.scala 62:19]
  wire  ram1_MPORT_en; // @[MAIN_MEMORY.scala 62:19]
  wire [31:0] ram1_MPORT_4_data; // @[MAIN_MEMORY.scala 62:19]
  wire [15:0] ram1_MPORT_4_addr; // @[MAIN_MEMORY.scala 62:19]
  wire  ram1_MPORT_4_mask; // @[MAIN_MEMORY.scala 62:19]
  wire  ram1_MPORT_4_en; // @[MAIN_MEMORY.scala 62:19]
  reg [31:0] ram2 [0:65535]; // @[MAIN_MEMORY.scala 63:19]
  wire  ram2_qword_MPORT_2_en; // @[MAIN_MEMORY.scala 63:19]
  wire [15:0] ram2_qword_MPORT_2_addr; // @[MAIN_MEMORY.scala 63:19]
  wire [31:0] ram2_qword_MPORT_2_data; // @[MAIN_MEMORY.scala 63:19]
  wire  ram2_new_qword_MPORT_2_en; // @[MAIN_MEMORY.scala 63:19]
  wire [15:0] ram2_new_qword_MPORT_2_addr; // @[MAIN_MEMORY.scala 63:19]
  wire [31:0] ram2_new_qword_MPORT_2_data; // @[MAIN_MEMORY.scala 63:19]
  wire  ram2_icache_set_MPORT_2_en; // @[MAIN_MEMORY.scala 63:19]
  wire [15:0] ram2_icache_set_MPORT_2_addr; // @[MAIN_MEMORY.scala 63:19]
  wire [31:0] ram2_icache_set_MPORT_2_data; // @[MAIN_MEMORY.scala 63:19]
  wire  ram2_dcache_set_MPORT_2_en; // @[MAIN_MEMORY.scala 63:19]
  wire [15:0] ram2_dcache_set_MPORT_2_addr; // @[MAIN_MEMORY.scala 63:19]
  wire [31:0] ram2_dcache_set_MPORT_2_data; // @[MAIN_MEMORY.scala 63:19]
  wire  ram2_row_MPORT_2_en; // @[MAIN_MEMORY.scala 63:19]
  wire [15:0] ram2_row_MPORT_2_addr; // @[MAIN_MEMORY.scala 63:19]
  wire [31:0] ram2_row_MPORT_2_data; // @[MAIN_MEMORY.scala 63:19]
  wire [31:0] ram2_MPORT_1_data; // @[MAIN_MEMORY.scala 63:19]
  wire [15:0] ram2_MPORT_1_addr; // @[MAIN_MEMORY.scala 63:19]
  wire  ram2_MPORT_1_mask; // @[MAIN_MEMORY.scala 63:19]
  wire  ram2_MPORT_1_en; // @[MAIN_MEMORY.scala 63:19]
  wire [31:0] ram2_MPORT_5_data; // @[MAIN_MEMORY.scala 63:19]
  wire [15:0] ram2_MPORT_5_addr; // @[MAIN_MEMORY.scala 63:19]
  wire  ram2_MPORT_5_mask; // @[MAIN_MEMORY.scala 63:19]
  wire  ram2_MPORT_5_en; // @[MAIN_MEMORY.scala 63:19]
  reg [31:0] ram3 [0:65535]; // @[MAIN_MEMORY.scala 64:19]
  wire  ram3_qword_MPORT_1_en; // @[MAIN_MEMORY.scala 64:19]
  wire [15:0] ram3_qword_MPORT_1_addr; // @[MAIN_MEMORY.scala 64:19]
  wire [31:0] ram3_qword_MPORT_1_data; // @[MAIN_MEMORY.scala 64:19]
  wire  ram3_new_qword_MPORT_1_en; // @[MAIN_MEMORY.scala 64:19]
  wire [15:0] ram3_new_qword_MPORT_1_addr; // @[MAIN_MEMORY.scala 64:19]
  wire [31:0] ram3_new_qword_MPORT_1_data; // @[MAIN_MEMORY.scala 64:19]
  wire  ram3_icache_set_MPORT_1_en; // @[MAIN_MEMORY.scala 64:19]
  wire [15:0] ram3_icache_set_MPORT_1_addr; // @[MAIN_MEMORY.scala 64:19]
  wire [31:0] ram3_icache_set_MPORT_1_data; // @[MAIN_MEMORY.scala 64:19]
  wire  ram3_dcache_set_MPORT_1_en; // @[MAIN_MEMORY.scala 64:19]
  wire [15:0] ram3_dcache_set_MPORT_1_addr; // @[MAIN_MEMORY.scala 64:19]
  wire [31:0] ram3_dcache_set_MPORT_1_data; // @[MAIN_MEMORY.scala 64:19]
  wire  ram3_row_MPORT_1_en; // @[MAIN_MEMORY.scala 64:19]
  wire [15:0] ram3_row_MPORT_1_addr; // @[MAIN_MEMORY.scala 64:19]
  wire [31:0] ram3_row_MPORT_1_data; // @[MAIN_MEMORY.scala 64:19]
  wire [31:0] ram3_MPORT_2_data; // @[MAIN_MEMORY.scala 64:19]
  wire [15:0] ram3_MPORT_2_addr; // @[MAIN_MEMORY.scala 64:19]
  wire  ram3_MPORT_2_mask; // @[MAIN_MEMORY.scala 64:19]
  wire  ram3_MPORT_2_en; // @[MAIN_MEMORY.scala 64:19]
  wire [31:0] ram3_MPORT_6_data; // @[MAIN_MEMORY.scala 64:19]
  wire [15:0] ram3_MPORT_6_addr; // @[MAIN_MEMORY.scala 64:19]
  wire  ram3_MPORT_6_mask; // @[MAIN_MEMORY.scala 64:19]
  wire  ram3_MPORT_6_en; // @[MAIN_MEMORY.scala 64:19]
  reg [31:0] ram4 [0:65535]; // @[MAIN_MEMORY.scala 65:19]
  wire  ram4_qword_MPORT_en; // @[MAIN_MEMORY.scala 65:19]
  wire [15:0] ram4_qword_MPORT_addr; // @[MAIN_MEMORY.scala 65:19]
  wire [31:0] ram4_qword_MPORT_data; // @[MAIN_MEMORY.scala 65:19]
  wire  ram4_new_qword_MPORT_en; // @[MAIN_MEMORY.scala 65:19]
  wire [15:0] ram4_new_qword_MPORT_addr; // @[MAIN_MEMORY.scala 65:19]
  wire [31:0] ram4_new_qword_MPORT_data; // @[MAIN_MEMORY.scala 65:19]
  wire  ram4_icache_set_MPORT_en; // @[MAIN_MEMORY.scala 65:19]
  wire [15:0] ram4_icache_set_MPORT_addr; // @[MAIN_MEMORY.scala 65:19]
  wire [31:0] ram4_icache_set_MPORT_data; // @[MAIN_MEMORY.scala 65:19]
  wire  ram4_dcache_set_MPORT_en; // @[MAIN_MEMORY.scala 65:19]
  wire [15:0] ram4_dcache_set_MPORT_addr; // @[MAIN_MEMORY.scala 65:19]
  wire [31:0] ram4_dcache_set_MPORT_data; // @[MAIN_MEMORY.scala 65:19]
  wire  ram4_row_MPORT_en; // @[MAIN_MEMORY.scala 65:19]
  wire [15:0] ram4_row_MPORT_addr; // @[MAIN_MEMORY.scala 65:19]
  wire [31:0] ram4_row_MPORT_data; // @[MAIN_MEMORY.scala 65:19]
  wire [31:0] ram4_MPORT_3_data; // @[MAIN_MEMORY.scala 65:19]
  wire [15:0] ram4_MPORT_3_addr; // @[MAIN_MEMORY.scala 65:19]
  wire  ram4_MPORT_3_mask; // @[MAIN_MEMORY.scala 65:19]
  wire  ram4_MPORT_3_en; // @[MAIN_MEMORY.scala 65:19]
  wire [31:0] ram4_MPORT_7_data; // @[MAIN_MEMORY.scala 65:19]
  wire [15:0] ram4_MPORT_7_addr; // @[MAIN_MEMORY.scala 65:19]
  wire  ram4_MPORT_7_mask; // @[MAIN_MEMORY.scala 65:19]
  wire  ram4_MPORT_7_en; // @[MAIN_MEMORY.scala 65:19]
  wire  _T = io_memOp_i_is_load | io_memOp_i_is_store; // @[MAIN_MEMORY.scala 80:18]
  wire  _T_3 = io_memOp_i_addr >= 64'h80000000 & io_memOp_i_addr <= 64'h87ffffff; // @[MAIN_MEMORY.scala 40:67]
  wire [63:0] _row_T_1 = io_memOp_i_addr - 64'h80000000; // @[MAIN_MEMORY.scala 42:48]
  wire [59:0] row = _row_T_1[63:4]; // @[MAIN_MEMORY.scala 42:68]
  wire [127:0] _new_qword_T_4 = {ram4_new_qword_MPORT_data,ram3_new_qword_MPORT_1_data,ram2_new_qword_MPORT_2_data,
    ram1_new_qword_MPORT_3_data}; // @[Cat.scala 31:58]
  wire  new_qword_on_the_right_half = io_memOp_i_addr[3]; // @[MAIN_MEMORY.scala 16:41]
  wire [3:0] new_qword_block_offset = new_qword_on_the_right_half ? 4'h8 : 4'h0; // @[MAIN_MEMORY.scala 18:40]
  wire [2:0] new_qword_offset = io_memOp_i_addr[2:0]; // @[MAIN_MEMORY.scala 20:41]
  wire [1:0] new_qword_store_en_hi = io_memOp_i_length[3:2]; // @[OneHot.scala 30:18]
  wire [1:0] new_qword_store_en_lo = io_memOp_i_length[1:0]; // @[OneHot.scala 31:18]
  wire  _new_qword_store_en_T = |new_qword_store_en_hi; // @[OneHot.scala 32:14]
  wire [1:0] _new_qword_store_en_T_1 = new_qword_store_en_hi | new_qword_store_en_lo; // @[OneHot.scala 32:28]
  wire [1:0] _new_qword_store_en_T_3 = {_new_qword_store_en_T,_new_qword_store_en_T_1[1]}; // @[Cat.scala 31:58]
  wire [7:0] _GEN_1 = 2'h1 == _new_qword_store_en_T_3 ? 8'h3 : 8'h1; // @[MAIN_MEMORY.scala 23:{22,22}]
  wire [7:0] _GEN_2 = 2'h2 == _new_qword_store_en_T_3 ? 8'hf : _GEN_1; // @[MAIN_MEMORY.scala 23:{22,22}]
  wire [7:0] _GEN_3 = 2'h3 == _new_qword_store_en_T_3 ? 8'hff : _GEN_2; // @[MAIN_MEMORY.scala 23:{22,22}]
  wire [3:0] _new_qword_T_6 = {{1'd0}, new_qword_offset}; // @[MAIN_MEMORY.scala 23:46]
  wire [3:0] _GEN_281 = {{1'd0}, _new_qword_T_6[2:0]}; // @[MAIN_MEMORY.scala 23:55]
  wire [3:0] _new_qword_T_9 = _GEN_281 + new_qword_block_offset; // @[MAIN_MEMORY.scala 23:55]
  wire [7:0] _GEN_4 = 4'h0 == _new_qword_T_9 ? io_memOp_i_sdata[7:0] : _new_qword_T_4[7:0]; // @[MAIN_MEMORY.scala 17:55 23:{71,71}]
  wire [7:0] _GEN_5 = 4'h1 == _new_qword_T_9 ? io_memOp_i_sdata[7:0] : _new_qword_T_4[15:8]; // @[MAIN_MEMORY.scala 17:55 23:{71,71}]
  wire [7:0] _GEN_6 = 4'h2 == _new_qword_T_9 ? io_memOp_i_sdata[7:0] : _new_qword_T_4[23:16]; // @[MAIN_MEMORY.scala 17:55 23:{71,71}]
  wire [7:0] _GEN_7 = 4'h3 == _new_qword_T_9 ? io_memOp_i_sdata[7:0] : _new_qword_T_4[31:24]; // @[MAIN_MEMORY.scala 17:55 23:{71,71}]
  wire [7:0] _GEN_8 = 4'h4 == _new_qword_T_9 ? io_memOp_i_sdata[7:0] : _new_qword_T_4[39:32]; // @[MAIN_MEMORY.scala 17:55 23:{71,71}]
  wire [7:0] _GEN_9 = 4'h5 == _new_qword_T_9 ? io_memOp_i_sdata[7:0] : _new_qword_T_4[47:40]; // @[MAIN_MEMORY.scala 17:55 23:{71,71}]
  wire [7:0] _GEN_10 = 4'h6 == _new_qword_T_9 ? io_memOp_i_sdata[7:0] : _new_qword_T_4[55:48]; // @[MAIN_MEMORY.scala 17:55 23:{71,71}]
  wire [7:0] _GEN_11 = 4'h7 == _new_qword_T_9 ? io_memOp_i_sdata[7:0] : _new_qword_T_4[63:56]; // @[MAIN_MEMORY.scala 17:55 23:{71,71}]
  wire [7:0] _GEN_12 = 4'h8 == _new_qword_T_9 ? io_memOp_i_sdata[7:0] : _new_qword_T_4[71:64]; // @[MAIN_MEMORY.scala 17:55 23:{71,71}]
  wire [7:0] _GEN_13 = 4'h9 == _new_qword_T_9 ? io_memOp_i_sdata[7:0] : _new_qword_T_4[79:72]; // @[MAIN_MEMORY.scala 17:55 23:{71,71}]
  wire [7:0] _GEN_14 = 4'ha == _new_qword_T_9 ? io_memOp_i_sdata[7:0] : _new_qword_T_4[87:80]; // @[MAIN_MEMORY.scala 17:55 23:{71,71}]
  wire [7:0] _GEN_15 = 4'hb == _new_qword_T_9 ? io_memOp_i_sdata[7:0] : _new_qword_T_4[95:88]; // @[MAIN_MEMORY.scala 17:55 23:{71,71}]
  wire [7:0] _GEN_16 = 4'hc == _new_qword_T_9 ? io_memOp_i_sdata[7:0] : _new_qword_T_4[103:96]; // @[MAIN_MEMORY.scala 17:55 23:{71,71}]
  wire [7:0] _GEN_17 = 4'hd == _new_qword_T_9 ? io_memOp_i_sdata[7:0] : _new_qword_T_4[111:104]; // @[MAIN_MEMORY.scala 17:55 23:{71,71}]
  wire [7:0] _GEN_18 = 4'he == _new_qword_T_9 ? io_memOp_i_sdata[7:0] : _new_qword_T_4[119:112]; // @[MAIN_MEMORY.scala 17:55 23:{71,71}]
  wire [7:0] _GEN_19 = 4'hf == _new_qword_T_9 ? io_memOp_i_sdata[7:0] : _new_qword_T_4[127:120]; // @[MAIN_MEMORY.scala 17:55 23:{71,71}]
  wire [7:0] _GEN_20 = _GEN_3[0] ? _GEN_4 : _new_qword_T_4[7:0]; // @[MAIN_MEMORY.scala 23:31 17:55]
  wire [7:0] _GEN_21 = _GEN_3[0] ? _GEN_5 : _new_qword_T_4[15:8]; // @[MAIN_MEMORY.scala 23:31 17:55]
  wire [7:0] _GEN_22 = _GEN_3[0] ? _GEN_6 : _new_qword_T_4[23:16]; // @[MAIN_MEMORY.scala 23:31 17:55]
  wire [7:0] _GEN_23 = _GEN_3[0] ? _GEN_7 : _new_qword_T_4[31:24]; // @[MAIN_MEMORY.scala 23:31 17:55]
  wire [7:0] _GEN_24 = _GEN_3[0] ? _GEN_8 : _new_qword_T_4[39:32]; // @[MAIN_MEMORY.scala 23:31 17:55]
  wire [7:0] _GEN_25 = _GEN_3[0] ? _GEN_9 : _new_qword_T_4[47:40]; // @[MAIN_MEMORY.scala 23:31 17:55]
  wire [7:0] _GEN_26 = _GEN_3[0] ? _GEN_10 : _new_qword_T_4[55:48]; // @[MAIN_MEMORY.scala 23:31 17:55]
  wire [7:0] _GEN_27 = _GEN_3[0] ? _GEN_11 : _new_qword_T_4[63:56]; // @[MAIN_MEMORY.scala 23:31 17:55]
  wire [7:0] _GEN_28 = _GEN_3[0] ? _GEN_12 : _new_qword_T_4[71:64]; // @[MAIN_MEMORY.scala 23:31 17:55]
  wire [7:0] _GEN_29 = _GEN_3[0] ? _GEN_13 : _new_qword_T_4[79:72]; // @[MAIN_MEMORY.scala 23:31 17:55]
  wire [7:0] _GEN_30 = _GEN_3[0] ? _GEN_14 : _new_qword_T_4[87:80]; // @[MAIN_MEMORY.scala 23:31 17:55]
  wire [7:0] _GEN_31 = _GEN_3[0] ? _GEN_15 : _new_qword_T_4[95:88]; // @[MAIN_MEMORY.scala 23:31 17:55]
  wire [7:0] _GEN_32 = _GEN_3[0] ? _GEN_16 : _new_qword_T_4[103:96]; // @[MAIN_MEMORY.scala 23:31 17:55]
  wire [7:0] _GEN_33 = _GEN_3[0] ? _GEN_17 : _new_qword_T_4[111:104]; // @[MAIN_MEMORY.scala 23:31 17:55]
  wire [7:0] _GEN_34 = _GEN_3[0] ? _GEN_18 : _new_qword_T_4[119:112]; // @[MAIN_MEMORY.scala 23:31 17:55]
  wire [7:0] _GEN_35 = _GEN_3[0] ? _GEN_19 : _new_qword_T_4[127:120]; // @[MAIN_MEMORY.scala 23:31 17:55]
  wire [2:0] _new_qword_T_12 = 3'h1 + new_qword_offset; // @[MAIN_MEMORY.scala 24:46]
  wire [3:0] _GEN_303 = {{1'd0}, _new_qword_T_12}; // @[MAIN_MEMORY.scala 24:55]
  wire [3:0] _new_qword_T_14 = _GEN_303 + new_qword_block_offset; // @[MAIN_MEMORY.scala 24:55]
  wire [7:0] _GEN_36 = 4'h0 == _new_qword_T_14 ? io_memOp_i_sdata[15:8] : _GEN_20; // @[MAIN_MEMORY.scala 24:{71,71}]
  wire [7:0] _GEN_37 = 4'h1 == _new_qword_T_14 ? io_memOp_i_sdata[15:8] : _GEN_21; // @[MAIN_MEMORY.scala 24:{71,71}]
  wire [7:0] _GEN_38 = 4'h2 == _new_qword_T_14 ? io_memOp_i_sdata[15:8] : _GEN_22; // @[MAIN_MEMORY.scala 24:{71,71}]
  wire [7:0] _GEN_39 = 4'h3 == _new_qword_T_14 ? io_memOp_i_sdata[15:8] : _GEN_23; // @[MAIN_MEMORY.scala 24:{71,71}]
  wire [7:0] _GEN_40 = 4'h4 == _new_qword_T_14 ? io_memOp_i_sdata[15:8] : _GEN_24; // @[MAIN_MEMORY.scala 24:{71,71}]
  wire [7:0] _GEN_41 = 4'h5 == _new_qword_T_14 ? io_memOp_i_sdata[15:8] : _GEN_25; // @[MAIN_MEMORY.scala 24:{71,71}]
  wire [7:0] _GEN_42 = 4'h6 == _new_qword_T_14 ? io_memOp_i_sdata[15:8] : _GEN_26; // @[MAIN_MEMORY.scala 24:{71,71}]
  wire [7:0] _GEN_43 = 4'h7 == _new_qword_T_14 ? io_memOp_i_sdata[15:8] : _GEN_27; // @[MAIN_MEMORY.scala 24:{71,71}]
  wire [7:0] _GEN_44 = 4'h8 == _new_qword_T_14 ? io_memOp_i_sdata[15:8] : _GEN_28; // @[MAIN_MEMORY.scala 24:{71,71}]
  wire [7:0] _GEN_45 = 4'h9 == _new_qword_T_14 ? io_memOp_i_sdata[15:8] : _GEN_29; // @[MAIN_MEMORY.scala 24:{71,71}]
  wire [7:0] _GEN_46 = 4'ha == _new_qword_T_14 ? io_memOp_i_sdata[15:8] : _GEN_30; // @[MAIN_MEMORY.scala 24:{71,71}]
  wire [7:0] _GEN_47 = 4'hb == _new_qword_T_14 ? io_memOp_i_sdata[15:8] : _GEN_31; // @[MAIN_MEMORY.scala 24:{71,71}]
  wire [7:0] _GEN_48 = 4'hc == _new_qword_T_14 ? io_memOp_i_sdata[15:8] : _GEN_32; // @[MAIN_MEMORY.scala 24:{71,71}]
  wire [7:0] _GEN_49 = 4'hd == _new_qword_T_14 ? io_memOp_i_sdata[15:8] : _GEN_33; // @[MAIN_MEMORY.scala 24:{71,71}]
  wire [7:0] _GEN_50 = 4'he == _new_qword_T_14 ? io_memOp_i_sdata[15:8] : _GEN_34; // @[MAIN_MEMORY.scala 24:{71,71}]
  wire [7:0] _GEN_51 = 4'hf == _new_qword_T_14 ? io_memOp_i_sdata[15:8] : _GEN_35; // @[MAIN_MEMORY.scala 24:{71,71}]
  wire [7:0] _GEN_52 = _GEN_3[1] ? _GEN_36 : _GEN_20; // @[MAIN_MEMORY.scala 24:31]
  wire [7:0] _GEN_53 = _GEN_3[1] ? _GEN_37 : _GEN_21; // @[MAIN_MEMORY.scala 24:31]
  wire [7:0] _GEN_54 = _GEN_3[1] ? _GEN_38 : _GEN_22; // @[MAIN_MEMORY.scala 24:31]
  wire [7:0] _GEN_55 = _GEN_3[1] ? _GEN_39 : _GEN_23; // @[MAIN_MEMORY.scala 24:31]
  wire [7:0] _GEN_56 = _GEN_3[1] ? _GEN_40 : _GEN_24; // @[MAIN_MEMORY.scala 24:31]
  wire [7:0] _GEN_57 = _GEN_3[1] ? _GEN_41 : _GEN_25; // @[MAIN_MEMORY.scala 24:31]
  wire [7:0] _GEN_58 = _GEN_3[1] ? _GEN_42 : _GEN_26; // @[MAIN_MEMORY.scala 24:31]
  wire [7:0] _GEN_59 = _GEN_3[1] ? _GEN_43 : _GEN_27; // @[MAIN_MEMORY.scala 24:31]
  wire [7:0] _GEN_60 = _GEN_3[1] ? _GEN_44 : _GEN_28; // @[MAIN_MEMORY.scala 24:31]
  wire [7:0] _GEN_61 = _GEN_3[1] ? _GEN_45 : _GEN_29; // @[MAIN_MEMORY.scala 24:31]
  wire [7:0] _GEN_62 = _GEN_3[1] ? _GEN_46 : _GEN_30; // @[MAIN_MEMORY.scala 24:31]
  wire [7:0] _GEN_63 = _GEN_3[1] ? _GEN_47 : _GEN_31; // @[MAIN_MEMORY.scala 24:31]
  wire [7:0] _GEN_64 = _GEN_3[1] ? _GEN_48 : _GEN_32; // @[MAIN_MEMORY.scala 24:31]
  wire [7:0] _GEN_65 = _GEN_3[1] ? _GEN_49 : _GEN_33; // @[MAIN_MEMORY.scala 24:31]
  wire [7:0] _GEN_66 = _GEN_3[1] ? _GEN_50 : _GEN_34; // @[MAIN_MEMORY.scala 24:31]
  wire [7:0] _GEN_67 = _GEN_3[1] ? _GEN_51 : _GEN_35; // @[MAIN_MEMORY.scala 24:31]
  wire [2:0] _new_qword_T_17 = 3'h2 + new_qword_offset; // @[MAIN_MEMORY.scala 25:46]
  wire [3:0] _GEN_338 = {{1'd0}, _new_qword_T_17}; // @[MAIN_MEMORY.scala 25:55]
  wire [3:0] _new_qword_T_19 = _GEN_338 + new_qword_block_offset; // @[MAIN_MEMORY.scala 25:55]
  wire [7:0] _GEN_68 = 4'h0 == _new_qword_T_19 ? io_memOp_i_sdata[23:16] : _GEN_52; // @[MAIN_MEMORY.scala 25:{71,71}]
  wire [7:0] _GEN_69 = 4'h1 == _new_qword_T_19 ? io_memOp_i_sdata[23:16] : _GEN_53; // @[MAIN_MEMORY.scala 25:{71,71}]
  wire [7:0] _GEN_70 = 4'h2 == _new_qword_T_19 ? io_memOp_i_sdata[23:16] : _GEN_54; // @[MAIN_MEMORY.scala 25:{71,71}]
  wire [7:0] _GEN_71 = 4'h3 == _new_qword_T_19 ? io_memOp_i_sdata[23:16] : _GEN_55; // @[MAIN_MEMORY.scala 25:{71,71}]
  wire [7:0] _GEN_72 = 4'h4 == _new_qword_T_19 ? io_memOp_i_sdata[23:16] : _GEN_56; // @[MAIN_MEMORY.scala 25:{71,71}]
  wire [7:0] _GEN_73 = 4'h5 == _new_qword_T_19 ? io_memOp_i_sdata[23:16] : _GEN_57; // @[MAIN_MEMORY.scala 25:{71,71}]
  wire [7:0] _GEN_74 = 4'h6 == _new_qword_T_19 ? io_memOp_i_sdata[23:16] : _GEN_58; // @[MAIN_MEMORY.scala 25:{71,71}]
  wire [7:0] _GEN_75 = 4'h7 == _new_qword_T_19 ? io_memOp_i_sdata[23:16] : _GEN_59; // @[MAIN_MEMORY.scala 25:{71,71}]
  wire [7:0] _GEN_76 = 4'h8 == _new_qword_T_19 ? io_memOp_i_sdata[23:16] : _GEN_60; // @[MAIN_MEMORY.scala 25:{71,71}]
  wire [7:0] _GEN_77 = 4'h9 == _new_qword_T_19 ? io_memOp_i_sdata[23:16] : _GEN_61; // @[MAIN_MEMORY.scala 25:{71,71}]
  wire [7:0] _GEN_78 = 4'ha == _new_qword_T_19 ? io_memOp_i_sdata[23:16] : _GEN_62; // @[MAIN_MEMORY.scala 25:{71,71}]
  wire [7:0] _GEN_79 = 4'hb == _new_qword_T_19 ? io_memOp_i_sdata[23:16] : _GEN_63; // @[MAIN_MEMORY.scala 25:{71,71}]
  wire [7:0] _GEN_80 = 4'hc == _new_qword_T_19 ? io_memOp_i_sdata[23:16] : _GEN_64; // @[MAIN_MEMORY.scala 25:{71,71}]
  wire [7:0] _GEN_81 = 4'hd == _new_qword_T_19 ? io_memOp_i_sdata[23:16] : _GEN_65; // @[MAIN_MEMORY.scala 25:{71,71}]
  wire [7:0] _GEN_82 = 4'he == _new_qword_T_19 ? io_memOp_i_sdata[23:16] : _GEN_66; // @[MAIN_MEMORY.scala 25:{71,71}]
  wire [7:0] _GEN_83 = 4'hf == _new_qword_T_19 ? io_memOp_i_sdata[23:16] : _GEN_67; // @[MAIN_MEMORY.scala 25:{71,71}]
  wire [7:0] _GEN_84 = _GEN_3[2] ? _GEN_68 : _GEN_52; // @[MAIN_MEMORY.scala 25:31]
  wire [7:0] _GEN_85 = _GEN_3[2] ? _GEN_69 : _GEN_53; // @[MAIN_MEMORY.scala 25:31]
  wire [7:0] _GEN_86 = _GEN_3[2] ? _GEN_70 : _GEN_54; // @[MAIN_MEMORY.scala 25:31]
  wire [7:0] _GEN_87 = _GEN_3[2] ? _GEN_71 : _GEN_55; // @[MAIN_MEMORY.scala 25:31]
  wire [7:0] _GEN_88 = _GEN_3[2] ? _GEN_72 : _GEN_56; // @[MAIN_MEMORY.scala 25:31]
  wire [7:0] _GEN_89 = _GEN_3[2] ? _GEN_73 : _GEN_57; // @[MAIN_MEMORY.scala 25:31]
  wire [7:0] _GEN_90 = _GEN_3[2] ? _GEN_74 : _GEN_58; // @[MAIN_MEMORY.scala 25:31]
  wire [7:0] _GEN_91 = _GEN_3[2] ? _GEN_75 : _GEN_59; // @[MAIN_MEMORY.scala 25:31]
  wire [7:0] _GEN_92 = _GEN_3[2] ? _GEN_76 : _GEN_60; // @[MAIN_MEMORY.scala 25:31]
  wire [7:0] _GEN_93 = _GEN_3[2] ? _GEN_77 : _GEN_61; // @[MAIN_MEMORY.scala 25:31]
  wire [7:0] _GEN_94 = _GEN_3[2] ? _GEN_78 : _GEN_62; // @[MAIN_MEMORY.scala 25:31]
  wire [7:0] _GEN_95 = _GEN_3[2] ? _GEN_79 : _GEN_63; // @[MAIN_MEMORY.scala 25:31]
  wire [7:0] _GEN_96 = _GEN_3[2] ? _GEN_80 : _GEN_64; // @[MAIN_MEMORY.scala 25:31]
  wire [7:0] _GEN_97 = _GEN_3[2] ? _GEN_81 : _GEN_65; // @[MAIN_MEMORY.scala 25:31]
  wire [7:0] _GEN_98 = _GEN_3[2] ? _GEN_82 : _GEN_66; // @[MAIN_MEMORY.scala 25:31]
  wire [7:0] _GEN_99 = _GEN_3[2] ? _GEN_83 : _GEN_67; // @[MAIN_MEMORY.scala 25:31]
  wire [2:0] _new_qword_T_22 = 3'h3 + new_qword_offset; // @[MAIN_MEMORY.scala 26:46]
  wire [3:0] _GEN_360 = {{1'd0}, _new_qword_T_22}; // @[MAIN_MEMORY.scala 26:55]
  wire [3:0] _new_qword_T_24 = _GEN_360 + new_qword_block_offset; // @[MAIN_MEMORY.scala 26:55]
  wire [7:0] _GEN_100 = 4'h0 == _new_qword_T_24 ? io_memOp_i_sdata[31:24] : _GEN_84; // @[MAIN_MEMORY.scala 26:{71,71}]
  wire [7:0] _GEN_101 = 4'h1 == _new_qword_T_24 ? io_memOp_i_sdata[31:24] : _GEN_85; // @[MAIN_MEMORY.scala 26:{71,71}]
  wire [7:0] _GEN_102 = 4'h2 == _new_qword_T_24 ? io_memOp_i_sdata[31:24] : _GEN_86; // @[MAIN_MEMORY.scala 26:{71,71}]
  wire [7:0] _GEN_103 = 4'h3 == _new_qword_T_24 ? io_memOp_i_sdata[31:24] : _GEN_87; // @[MAIN_MEMORY.scala 26:{71,71}]
  wire [7:0] _GEN_104 = 4'h4 == _new_qword_T_24 ? io_memOp_i_sdata[31:24] : _GEN_88; // @[MAIN_MEMORY.scala 26:{71,71}]
  wire [7:0] _GEN_105 = 4'h5 == _new_qword_T_24 ? io_memOp_i_sdata[31:24] : _GEN_89; // @[MAIN_MEMORY.scala 26:{71,71}]
  wire [7:0] _GEN_106 = 4'h6 == _new_qword_T_24 ? io_memOp_i_sdata[31:24] : _GEN_90; // @[MAIN_MEMORY.scala 26:{71,71}]
  wire [7:0] _GEN_107 = 4'h7 == _new_qword_T_24 ? io_memOp_i_sdata[31:24] : _GEN_91; // @[MAIN_MEMORY.scala 26:{71,71}]
  wire [7:0] _GEN_108 = 4'h8 == _new_qword_T_24 ? io_memOp_i_sdata[31:24] : _GEN_92; // @[MAIN_MEMORY.scala 26:{71,71}]
  wire [7:0] _GEN_109 = 4'h9 == _new_qword_T_24 ? io_memOp_i_sdata[31:24] : _GEN_93; // @[MAIN_MEMORY.scala 26:{71,71}]
  wire [7:0] _GEN_110 = 4'ha == _new_qword_T_24 ? io_memOp_i_sdata[31:24] : _GEN_94; // @[MAIN_MEMORY.scala 26:{71,71}]
  wire [7:0] _GEN_111 = 4'hb == _new_qword_T_24 ? io_memOp_i_sdata[31:24] : _GEN_95; // @[MAIN_MEMORY.scala 26:{71,71}]
  wire [7:0] _GEN_112 = 4'hc == _new_qword_T_24 ? io_memOp_i_sdata[31:24] : _GEN_96; // @[MAIN_MEMORY.scala 26:{71,71}]
  wire [7:0] _GEN_113 = 4'hd == _new_qword_T_24 ? io_memOp_i_sdata[31:24] : _GEN_97; // @[MAIN_MEMORY.scala 26:{71,71}]
  wire [7:0] _GEN_114 = 4'he == _new_qword_T_24 ? io_memOp_i_sdata[31:24] : _GEN_98; // @[MAIN_MEMORY.scala 26:{71,71}]
  wire [7:0] _GEN_115 = 4'hf == _new_qword_T_24 ? io_memOp_i_sdata[31:24] : _GEN_99; // @[MAIN_MEMORY.scala 26:{71,71}]
  wire [7:0] _GEN_116 = _GEN_3[3] ? _GEN_100 : _GEN_84; // @[MAIN_MEMORY.scala 26:31]
  wire [7:0] _GEN_117 = _GEN_3[3] ? _GEN_101 : _GEN_85; // @[MAIN_MEMORY.scala 26:31]
  wire [7:0] _GEN_118 = _GEN_3[3] ? _GEN_102 : _GEN_86; // @[MAIN_MEMORY.scala 26:31]
  wire [7:0] _GEN_119 = _GEN_3[3] ? _GEN_103 : _GEN_87; // @[MAIN_MEMORY.scala 26:31]
  wire [7:0] _GEN_120 = _GEN_3[3] ? _GEN_104 : _GEN_88; // @[MAIN_MEMORY.scala 26:31]
  wire [7:0] _GEN_121 = _GEN_3[3] ? _GEN_105 : _GEN_89; // @[MAIN_MEMORY.scala 26:31]
  wire [7:0] _GEN_122 = _GEN_3[3] ? _GEN_106 : _GEN_90; // @[MAIN_MEMORY.scala 26:31]
  wire [7:0] _GEN_123 = _GEN_3[3] ? _GEN_107 : _GEN_91; // @[MAIN_MEMORY.scala 26:31]
  wire [7:0] _GEN_124 = _GEN_3[3] ? _GEN_108 : _GEN_92; // @[MAIN_MEMORY.scala 26:31]
  wire [7:0] _GEN_125 = _GEN_3[3] ? _GEN_109 : _GEN_93; // @[MAIN_MEMORY.scala 26:31]
  wire [7:0] _GEN_126 = _GEN_3[3] ? _GEN_110 : _GEN_94; // @[MAIN_MEMORY.scala 26:31]
  wire [7:0] _GEN_127 = _GEN_3[3] ? _GEN_111 : _GEN_95; // @[MAIN_MEMORY.scala 26:31]
  wire [7:0] _GEN_128 = _GEN_3[3] ? _GEN_112 : _GEN_96; // @[MAIN_MEMORY.scala 26:31]
  wire [7:0] _GEN_129 = _GEN_3[3] ? _GEN_113 : _GEN_97; // @[MAIN_MEMORY.scala 26:31]
  wire [7:0] _GEN_130 = _GEN_3[3] ? _GEN_114 : _GEN_98; // @[MAIN_MEMORY.scala 26:31]
  wire [7:0] _GEN_131 = _GEN_3[3] ? _GEN_115 : _GEN_99; // @[MAIN_MEMORY.scala 26:31]
  wire [2:0] _new_qword_T_27 = 3'h4 + new_qword_offset; // @[MAIN_MEMORY.scala 27:46]
  wire [3:0] _GEN_361 = {{1'd0}, _new_qword_T_27}; // @[MAIN_MEMORY.scala 27:55]
  wire [3:0] _new_qword_T_29 = _GEN_361 + new_qword_block_offset; // @[MAIN_MEMORY.scala 27:55]
  wire [7:0] _GEN_132 = 4'h0 == _new_qword_T_29 ? io_memOp_i_sdata[39:32] : _GEN_116; // @[MAIN_MEMORY.scala 27:{71,71}]
  wire [7:0] _GEN_133 = 4'h1 == _new_qword_T_29 ? io_memOp_i_sdata[39:32] : _GEN_117; // @[MAIN_MEMORY.scala 27:{71,71}]
  wire [7:0] _GEN_134 = 4'h2 == _new_qword_T_29 ? io_memOp_i_sdata[39:32] : _GEN_118; // @[MAIN_MEMORY.scala 27:{71,71}]
  wire [7:0] _GEN_135 = 4'h3 == _new_qword_T_29 ? io_memOp_i_sdata[39:32] : _GEN_119; // @[MAIN_MEMORY.scala 27:{71,71}]
  wire [7:0] _GEN_136 = 4'h4 == _new_qword_T_29 ? io_memOp_i_sdata[39:32] : _GEN_120; // @[MAIN_MEMORY.scala 27:{71,71}]
  wire [7:0] _GEN_137 = 4'h5 == _new_qword_T_29 ? io_memOp_i_sdata[39:32] : _GEN_121; // @[MAIN_MEMORY.scala 27:{71,71}]
  wire [7:0] _GEN_138 = 4'h6 == _new_qword_T_29 ? io_memOp_i_sdata[39:32] : _GEN_122; // @[MAIN_MEMORY.scala 27:{71,71}]
  wire [7:0] _GEN_139 = 4'h7 == _new_qword_T_29 ? io_memOp_i_sdata[39:32] : _GEN_123; // @[MAIN_MEMORY.scala 27:{71,71}]
  wire [7:0] _GEN_140 = 4'h8 == _new_qword_T_29 ? io_memOp_i_sdata[39:32] : _GEN_124; // @[MAIN_MEMORY.scala 27:{71,71}]
  wire [7:0] _GEN_141 = 4'h9 == _new_qword_T_29 ? io_memOp_i_sdata[39:32] : _GEN_125; // @[MAIN_MEMORY.scala 27:{71,71}]
  wire [7:0] _GEN_142 = 4'ha == _new_qword_T_29 ? io_memOp_i_sdata[39:32] : _GEN_126; // @[MAIN_MEMORY.scala 27:{71,71}]
  wire [7:0] _GEN_143 = 4'hb == _new_qword_T_29 ? io_memOp_i_sdata[39:32] : _GEN_127; // @[MAIN_MEMORY.scala 27:{71,71}]
  wire [7:0] _GEN_144 = 4'hc == _new_qword_T_29 ? io_memOp_i_sdata[39:32] : _GEN_128; // @[MAIN_MEMORY.scala 27:{71,71}]
  wire [7:0] _GEN_145 = 4'hd == _new_qword_T_29 ? io_memOp_i_sdata[39:32] : _GEN_129; // @[MAIN_MEMORY.scala 27:{71,71}]
  wire [7:0] _GEN_146 = 4'he == _new_qword_T_29 ? io_memOp_i_sdata[39:32] : _GEN_130; // @[MAIN_MEMORY.scala 27:{71,71}]
  wire [7:0] _GEN_147 = 4'hf == _new_qword_T_29 ? io_memOp_i_sdata[39:32] : _GEN_131; // @[MAIN_MEMORY.scala 27:{71,71}]
  wire [7:0] _GEN_148 = _GEN_3[4] ? _GEN_132 : _GEN_116; // @[MAIN_MEMORY.scala 27:31]
  wire [7:0] _GEN_149 = _GEN_3[4] ? _GEN_133 : _GEN_117; // @[MAIN_MEMORY.scala 27:31]
  wire [7:0] _GEN_150 = _GEN_3[4] ? _GEN_134 : _GEN_118; // @[MAIN_MEMORY.scala 27:31]
  wire [7:0] _GEN_151 = _GEN_3[4] ? _GEN_135 : _GEN_119; // @[MAIN_MEMORY.scala 27:31]
  wire [7:0] _GEN_152 = _GEN_3[4] ? _GEN_136 : _GEN_120; // @[MAIN_MEMORY.scala 27:31]
  wire [7:0] _GEN_153 = _GEN_3[4] ? _GEN_137 : _GEN_121; // @[MAIN_MEMORY.scala 27:31]
  wire [7:0] _GEN_154 = _GEN_3[4] ? _GEN_138 : _GEN_122; // @[MAIN_MEMORY.scala 27:31]
  wire [7:0] _GEN_155 = _GEN_3[4] ? _GEN_139 : _GEN_123; // @[MAIN_MEMORY.scala 27:31]
  wire [7:0] _GEN_156 = _GEN_3[4] ? _GEN_140 : _GEN_124; // @[MAIN_MEMORY.scala 27:31]
  wire [7:0] _GEN_157 = _GEN_3[4] ? _GEN_141 : _GEN_125; // @[MAIN_MEMORY.scala 27:31]
  wire [7:0] _GEN_158 = _GEN_3[4] ? _GEN_142 : _GEN_126; // @[MAIN_MEMORY.scala 27:31]
  wire [7:0] _GEN_159 = _GEN_3[4] ? _GEN_143 : _GEN_127; // @[MAIN_MEMORY.scala 27:31]
  wire [7:0] _GEN_160 = _GEN_3[4] ? _GEN_144 : _GEN_128; // @[MAIN_MEMORY.scala 27:31]
  wire [7:0] _GEN_161 = _GEN_3[4] ? _GEN_145 : _GEN_129; // @[MAIN_MEMORY.scala 27:31]
  wire [7:0] _GEN_162 = _GEN_3[4] ? _GEN_146 : _GEN_130; // @[MAIN_MEMORY.scala 27:31]
  wire [7:0] _GEN_163 = _GEN_3[4] ? _GEN_147 : _GEN_131; // @[MAIN_MEMORY.scala 27:31]
  wire [2:0] _new_qword_T_32 = 3'h5 + new_qword_offset; // @[MAIN_MEMORY.scala 28:46]
  wire [3:0] _GEN_362 = {{1'd0}, _new_qword_T_32}; // @[MAIN_MEMORY.scala 28:55]
  wire [3:0] _new_qword_T_34 = _GEN_362 + new_qword_block_offset; // @[MAIN_MEMORY.scala 28:55]
  wire [7:0] _GEN_164 = 4'h0 == _new_qword_T_34 ? io_memOp_i_sdata[47:40] : _GEN_148; // @[MAIN_MEMORY.scala 28:{71,71}]
  wire [7:0] _GEN_165 = 4'h1 == _new_qword_T_34 ? io_memOp_i_sdata[47:40] : _GEN_149; // @[MAIN_MEMORY.scala 28:{71,71}]
  wire [7:0] _GEN_166 = 4'h2 == _new_qword_T_34 ? io_memOp_i_sdata[47:40] : _GEN_150; // @[MAIN_MEMORY.scala 28:{71,71}]
  wire [7:0] _GEN_167 = 4'h3 == _new_qword_T_34 ? io_memOp_i_sdata[47:40] : _GEN_151; // @[MAIN_MEMORY.scala 28:{71,71}]
  wire [7:0] _GEN_168 = 4'h4 == _new_qword_T_34 ? io_memOp_i_sdata[47:40] : _GEN_152; // @[MAIN_MEMORY.scala 28:{71,71}]
  wire [7:0] _GEN_169 = 4'h5 == _new_qword_T_34 ? io_memOp_i_sdata[47:40] : _GEN_153; // @[MAIN_MEMORY.scala 28:{71,71}]
  wire [7:0] _GEN_170 = 4'h6 == _new_qword_T_34 ? io_memOp_i_sdata[47:40] : _GEN_154; // @[MAIN_MEMORY.scala 28:{71,71}]
  wire [7:0] _GEN_171 = 4'h7 == _new_qword_T_34 ? io_memOp_i_sdata[47:40] : _GEN_155; // @[MAIN_MEMORY.scala 28:{71,71}]
  wire [7:0] _GEN_172 = 4'h8 == _new_qword_T_34 ? io_memOp_i_sdata[47:40] : _GEN_156; // @[MAIN_MEMORY.scala 28:{71,71}]
  wire [7:0] _GEN_173 = 4'h9 == _new_qword_T_34 ? io_memOp_i_sdata[47:40] : _GEN_157; // @[MAIN_MEMORY.scala 28:{71,71}]
  wire [7:0] _GEN_174 = 4'ha == _new_qword_T_34 ? io_memOp_i_sdata[47:40] : _GEN_158; // @[MAIN_MEMORY.scala 28:{71,71}]
  wire [7:0] _GEN_175 = 4'hb == _new_qword_T_34 ? io_memOp_i_sdata[47:40] : _GEN_159; // @[MAIN_MEMORY.scala 28:{71,71}]
  wire [7:0] _GEN_176 = 4'hc == _new_qword_T_34 ? io_memOp_i_sdata[47:40] : _GEN_160; // @[MAIN_MEMORY.scala 28:{71,71}]
  wire [7:0] _GEN_177 = 4'hd == _new_qword_T_34 ? io_memOp_i_sdata[47:40] : _GEN_161; // @[MAIN_MEMORY.scala 28:{71,71}]
  wire [7:0] _GEN_178 = 4'he == _new_qword_T_34 ? io_memOp_i_sdata[47:40] : _GEN_162; // @[MAIN_MEMORY.scala 28:{71,71}]
  wire [7:0] _GEN_179 = 4'hf == _new_qword_T_34 ? io_memOp_i_sdata[47:40] : _GEN_163; // @[MAIN_MEMORY.scala 28:{71,71}]
  wire [7:0] _GEN_180 = _GEN_3[5] ? _GEN_164 : _GEN_148; // @[MAIN_MEMORY.scala 28:31]
  wire [7:0] _GEN_181 = _GEN_3[5] ? _GEN_165 : _GEN_149; // @[MAIN_MEMORY.scala 28:31]
  wire [7:0] _GEN_182 = _GEN_3[5] ? _GEN_166 : _GEN_150; // @[MAIN_MEMORY.scala 28:31]
  wire [7:0] _GEN_183 = _GEN_3[5] ? _GEN_167 : _GEN_151; // @[MAIN_MEMORY.scala 28:31]
  wire [7:0] _GEN_184 = _GEN_3[5] ? _GEN_168 : _GEN_152; // @[MAIN_MEMORY.scala 28:31]
  wire [7:0] _GEN_185 = _GEN_3[5] ? _GEN_169 : _GEN_153; // @[MAIN_MEMORY.scala 28:31]
  wire [7:0] _GEN_186 = _GEN_3[5] ? _GEN_170 : _GEN_154; // @[MAIN_MEMORY.scala 28:31]
  wire [7:0] _GEN_187 = _GEN_3[5] ? _GEN_171 : _GEN_155; // @[MAIN_MEMORY.scala 28:31]
  wire [7:0] _GEN_188 = _GEN_3[5] ? _GEN_172 : _GEN_156; // @[MAIN_MEMORY.scala 28:31]
  wire [7:0] _GEN_189 = _GEN_3[5] ? _GEN_173 : _GEN_157; // @[MAIN_MEMORY.scala 28:31]
  wire [7:0] _GEN_190 = _GEN_3[5] ? _GEN_174 : _GEN_158; // @[MAIN_MEMORY.scala 28:31]
  wire [7:0] _GEN_191 = _GEN_3[5] ? _GEN_175 : _GEN_159; // @[MAIN_MEMORY.scala 28:31]
  wire [7:0] _GEN_192 = _GEN_3[5] ? _GEN_176 : _GEN_160; // @[MAIN_MEMORY.scala 28:31]
  wire [7:0] _GEN_193 = _GEN_3[5] ? _GEN_177 : _GEN_161; // @[MAIN_MEMORY.scala 28:31]
  wire [7:0] _GEN_194 = _GEN_3[5] ? _GEN_178 : _GEN_162; // @[MAIN_MEMORY.scala 28:31]
  wire [7:0] _GEN_195 = _GEN_3[5] ? _GEN_179 : _GEN_163; // @[MAIN_MEMORY.scala 28:31]
  wire [2:0] _new_qword_T_37 = 3'h6 + new_qword_offset; // @[MAIN_MEMORY.scala 29:46]
  wire [3:0] _GEN_363 = {{1'd0}, _new_qword_T_37}; // @[MAIN_MEMORY.scala 29:55]
  wire [3:0] _new_qword_T_39 = _GEN_363 + new_qword_block_offset; // @[MAIN_MEMORY.scala 29:55]
  wire [7:0] _GEN_196 = 4'h0 == _new_qword_T_39 ? io_memOp_i_sdata[55:48] : _GEN_180; // @[MAIN_MEMORY.scala 29:{71,71}]
  wire [7:0] _GEN_197 = 4'h1 == _new_qword_T_39 ? io_memOp_i_sdata[55:48] : _GEN_181; // @[MAIN_MEMORY.scala 29:{71,71}]
  wire [7:0] _GEN_198 = 4'h2 == _new_qword_T_39 ? io_memOp_i_sdata[55:48] : _GEN_182; // @[MAIN_MEMORY.scala 29:{71,71}]
  wire [7:0] _GEN_199 = 4'h3 == _new_qword_T_39 ? io_memOp_i_sdata[55:48] : _GEN_183; // @[MAIN_MEMORY.scala 29:{71,71}]
  wire [7:0] _GEN_200 = 4'h4 == _new_qword_T_39 ? io_memOp_i_sdata[55:48] : _GEN_184; // @[MAIN_MEMORY.scala 29:{71,71}]
  wire [7:0] _GEN_201 = 4'h5 == _new_qword_T_39 ? io_memOp_i_sdata[55:48] : _GEN_185; // @[MAIN_MEMORY.scala 29:{71,71}]
  wire [7:0] _GEN_202 = 4'h6 == _new_qword_T_39 ? io_memOp_i_sdata[55:48] : _GEN_186; // @[MAIN_MEMORY.scala 29:{71,71}]
  wire [7:0] _GEN_203 = 4'h7 == _new_qword_T_39 ? io_memOp_i_sdata[55:48] : _GEN_187; // @[MAIN_MEMORY.scala 29:{71,71}]
  wire [7:0] _GEN_204 = 4'h8 == _new_qword_T_39 ? io_memOp_i_sdata[55:48] : _GEN_188; // @[MAIN_MEMORY.scala 29:{71,71}]
  wire [7:0] _GEN_205 = 4'h9 == _new_qword_T_39 ? io_memOp_i_sdata[55:48] : _GEN_189; // @[MAIN_MEMORY.scala 29:{71,71}]
  wire [7:0] _GEN_206 = 4'ha == _new_qword_T_39 ? io_memOp_i_sdata[55:48] : _GEN_190; // @[MAIN_MEMORY.scala 29:{71,71}]
  wire [7:0] _GEN_207 = 4'hb == _new_qword_T_39 ? io_memOp_i_sdata[55:48] : _GEN_191; // @[MAIN_MEMORY.scala 29:{71,71}]
  wire [7:0] _GEN_208 = 4'hc == _new_qword_T_39 ? io_memOp_i_sdata[55:48] : _GEN_192; // @[MAIN_MEMORY.scala 29:{71,71}]
  wire [7:0] _GEN_209 = 4'hd == _new_qword_T_39 ? io_memOp_i_sdata[55:48] : _GEN_193; // @[MAIN_MEMORY.scala 29:{71,71}]
  wire [7:0] _GEN_210 = 4'he == _new_qword_T_39 ? io_memOp_i_sdata[55:48] : _GEN_194; // @[MAIN_MEMORY.scala 29:{71,71}]
  wire [7:0] _GEN_211 = 4'hf == _new_qword_T_39 ? io_memOp_i_sdata[55:48] : _GEN_195; // @[MAIN_MEMORY.scala 29:{71,71}]
  wire [7:0] _GEN_212 = _GEN_3[6] ? _GEN_196 : _GEN_180; // @[MAIN_MEMORY.scala 29:31]
  wire [7:0] _GEN_213 = _GEN_3[6] ? _GEN_197 : _GEN_181; // @[MAIN_MEMORY.scala 29:31]
  wire [7:0] _GEN_214 = _GEN_3[6] ? _GEN_198 : _GEN_182; // @[MAIN_MEMORY.scala 29:31]
  wire [7:0] _GEN_215 = _GEN_3[6] ? _GEN_199 : _GEN_183; // @[MAIN_MEMORY.scala 29:31]
  wire [7:0] _GEN_216 = _GEN_3[6] ? _GEN_200 : _GEN_184; // @[MAIN_MEMORY.scala 29:31]
  wire [7:0] _GEN_217 = _GEN_3[6] ? _GEN_201 : _GEN_185; // @[MAIN_MEMORY.scala 29:31]
  wire [7:0] _GEN_218 = _GEN_3[6] ? _GEN_202 : _GEN_186; // @[MAIN_MEMORY.scala 29:31]
  wire [7:0] _GEN_219 = _GEN_3[6] ? _GEN_203 : _GEN_187; // @[MAIN_MEMORY.scala 29:31]
  wire [7:0] _GEN_220 = _GEN_3[6] ? _GEN_204 : _GEN_188; // @[MAIN_MEMORY.scala 29:31]
  wire [7:0] _GEN_221 = _GEN_3[6] ? _GEN_205 : _GEN_189; // @[MAIN_MEMORY.scala 29:31]
  wire [7:0] _GEN_222 = _GEN_3[6] ? _GEN_206 : _GEN_190; // @[MAIN_MEMORY.scala 29:31]
  wire [7:0] _GEN_223 = _GEN_3[6] ? _GEN_207 : _GEN_191; // @[MAIN_MEMORY.scala 29:31]
  wire [7:0] _GEN_224 = _GEN_3[6] ? _GEN_208 : _GEN_192; // @[MAIN_MEMORY.scala 29:31]
  wire [7:0] _GEN_225 = _GEN_3[6] ? _GEN_209 : _GEN_193; // @[MAIN_MEMORY.scala 29:31]
  wire [7:0] _GEN_226 = _GEN_3[6] ? _GEN_210 : _GEN_194; // @[MAIN_MEMORY.scala 29:31]
  wire [7:0] _GEN_227 = _GEN_3[6] ? _GEN_211 : _GEN_195; // @[MAIN_MEMORY.scala 29:31]
  wire [2:0] _new_qword_T_42 = 3'h7 + new_qword_offset; // @[MAIN_MEMORY.scala 30:46]
  wire [3:0] _GEN_364 = {{1'd0}, _new_qword_T_42}; // @[MAIN_MEMORY.scala 30:55]
  wire [3:0] _new_qword_T_44 = _GEN_364 + new_qword_block_offset; // @[MAIN_MEMORY.scala 30:55]
  wire [7:0] _GEN_228 = 4'h0 == _new_qword_T_44 ? io_memOp_i_sdata[63:56] : _GEN_212; // @[MAIN_MEMORY.scala 30:{71,71}]
  wire [7:0] _GEN_229 = 4'h1 == _new_qword_T_44 ? io_memOp_i_sdata[63:56] : _GEN_213; // @[MAIN_MEMORY.scala 30:{71,71}]
  wire [7:0] _GEN_230 = 4'h2 == _new_qword_T_44 ? io_memOp_i_sdata[63:56] : _GEN_214; // @[MAIN_MEMORY.scala 30:{71,71}]
  wire [7:0] _GEN_231 = 4'h3 == _new_qword_T_44 ? io_memOp_i_sdata[63:56] : _GEN_215; // @[MAIN_MEMORY.scala 30:{71,71}]
  wire [7:0] _GEN_232 = 4'h4 == _new_qword_T_44 ? io_memOp_i_sdata[63:56] : _GEN_216; // @[MAIN_MEMORY.scala 30:{71,71}]
  wire [7:0] _GEN_233 = 4'h5 == _new_qword_T_44 ? io_memOp_i_sdata[63:56] : _GEN_217; // @[MAIN_MEMORY.scala 30:{71,71}]
  wire [7:0] _GEN_234 = 4'h6 == _new_qword_T_44 ? io_memOp_i_sdata[63:56] : _GEN_218; // @[MAIN_MEMORY.scala 30:{71,71}]
  wire [7:0] _GEN_235 = 4'h7 == _new_qword_T_44 ? io_memOp_i_sdata[63:56] : _GEN_219; // @[MAIN_MEMORY.scala 30:{71,71}]
  wire [7:0] _GEN_236 = 4'h8 == _new_qword_T_44 ? io_memOp_i_sdata[63:56] : _GEN_220; // @[MAIN_MEMORY.scala 30:{71,71}]
  wire [7:0] _GEN_237 = 4'h9 == _new_qword_T_44 ? io_memOp_i_sdata[63:56] : _GEN_221; // @[MAIN_MEMORY.scala 30:{71,71}]
  wire [7:0] _GEN_238 = 4'ha == _new_qword_T_44 ? io_memOp_i_sdata[63:56] : _GEN_222; // @[MAIN_MEMORY.scala 30:{71,71}]
  wire [7:0] _GEN_239 = 4'hb == _new_qword_T_44 ? io_memOp_i_sdata[63:56] : _GEN_223; // @[MAIN_MEMORY.scala 30:{71,71}]
  wire [7:0] _GEN_240 = 4'hc == _new_qword_T_44 ? io_memOp_i_sdata[63:56] : _GEN_224; // @[MAIN_MEMORY.scala 30:{71,71}]
  wire [7:0] _GEN_241 = 4'hd == _new_qword_T_44 ? io_memOp_i_sdata[63:56] : _GEN_225; // @[MAIN_MEMORY.scala 30:{71,71}]
  wire [7:0] _GEN_242 = 4'he == _new_qword_T_44 ? io_memOp_i_sdata[63:56] : _GEN_226; // @[MAIN_MEMORY.scala 30:{71,71}]
  wire [7:0] _GEN_243 = 4'hf == _new_qword_T_44 ? io_memOp_i_sdata[63:56] : _GEN_227; // @[MAIN_MEMORY.scala 30:{71,71}]
  wire [7:0] new_qword_qword_vec_0 = _GEN_3[7] ? _GEN_228 : _GEN_212; // @[MAIN_MEMORY.scala 30:31]
  wire [7:0] new_qword_qword_vec_1 = _GEN_3[7] ? _GEN_229 : _GEN_213; // @[MAIN_MEMORY.scala 30:31]
  wire [7:0] new_qword_qword_vec_2 = _GEN_3[7] ? _GEN_230 : _GEN_214; // @[MAIN_MEMORY.scala 30:31]
  wire [7:0] new_qword_qword_vec_3 = _GEN_3[7] ? _GEN_231 : _GEN_215; // @[MAIN_MEMORY.scala 30:31]
  wire [7:0] new_qword_qword_vec_4 = _GEN_3[7] ? _GEN_232 : _GEN_216; // @[MAIN_MEMORY.scala 30:31]
  wire [7:0] new_qword_qword_vec_5 = _GEN_3[7] ? _GEN_233 : _GEN_217; // @[MAIN_MEMORY.scala 30:31]
  wire [7:0] new_qword_qword_vec_6 = _GEN_3[7] ? _GEN_234 : _GEN_218; // @[MAIN_MEMORY.scala 30:31]
  wire [7:0] new_qword_qword_vec_7 = _GEN_3[7] ? _GEN_235 : _GEN_219; // @[MAIN_MEMORY.scala 30:31]
  wire [7:0] new_qword_qword_vec_8 = _GEN_3[7] ? _GEN_236 : _GEN_220; // @[MAIN_MEMORY.scala 30:31]
  wire [7:0] new_qword_qword_vec_9 = _GEN_3[7] ? _GEN_237 : _GEN_221; // @[MAIN_MEMORY.scala 30:31]
  wire [7:0] new_qword_qword_vec_10 = _GEN_3[7] ? _GEN_238 : _GEN_222; // @[MAIN_MEMORY.scala 30:31]
  wire [7:0] new_qword_qword_vec_11 = _GEN_3[7] ? _GEN_239 : _GEN_223; // @[MAIN_MEMORY.scala 30:31]
  wire [7:0] new_qword_qword_vec_12 = _GEN_3[7] ? _GEN_240 : _GEN_224; // @[MAIN_MEMORY.scala 30:31]
  wire [7:0] new_qword_qword_vec_13 = _GEN_3[7] ? _GEN_241 : _GEN_225; // @[MAIN_MEMORY.scala 30:31]
  wire [7:0] new_qword_qword_vec_14 = _GEN_3[7] ? _GEN_242 : _GEN_226; // @[MAIN_MEMORY.scala 30:31]
  wire [7:0] new_qword_qword_vec_15 = _GEN_3[7] ? _GEN_243 : _GEN_227; // @[MAIN_MEMORY.scala 30:31]
  wire [63:0] new_qword_lo_1 = {new_qword_qword_vec_7,new_qword_qword_vec_6,new_qword_qword_vec_5,new_qword_qword_vec_4,
    new_qword_qword_vec_3,new_qword_qword_vec_2,new_qword_qword_vec_1,new_qword_qword_vec_0}; // @[MAIN_MEMORY.scala 32:27]
  wire [127:0] _new_qword_T_45 = {new_qword_qword_vec_15,new_qword_qword_vec_14,new_qword_qword_vec_13,
    new_qword_qword_vec_12,new_qword_qword_vec_11,new_qword_qword_vec_10,new_qword_qword_vec_9,new_qword_qword_vec_8,
    new_qword_lo_1}; // @[MAIN_MEMORY.scala 32:27]
  wire  _GEN_284 = _T_3 & io_memOp_i_is_store; // @[MAIN_MEMORY.scala 65:19 81:30]
  reg  icache_insert_info_valid; // @[MAIN_MEMORY.scala 101:40]
  reg [31:0] icache_insert_info_insts_0; // @[MAIN_MEMORY.scala 101:40]
  reg [31:0] icache_insert_info_insts_1; // @[MAIN_MEMORY.scala 101:40]
  reg [31:0] icache_insert_info_insts_2; // @[MAIN_MEMORY.scala 101:40]
  reg [31:0] icache_insert_info_insts_3; // @[MAIN_MEMORY.scala 101:40]
  reg [7:0] icache_insert_info_index; // @[MAIN_MEMORY.scala 101:40]
  reg [19:0] icache_insert_info_tag; // @[MAIN_MEMORY.scala 101:40]
  reg [31:0] dcache_insert_info_blocks_0; // @[MAIN_MEMORY.scala 102:40]
  reg [31:0] dcache_insert_info_blocks_1; // @[MAIN_MEMORY.scala 102:40]
  reg [31:0] dcache_insert_info_blocks_2; // @[MAIN_MEMORY.scala 102:40]
  reg [31:0] dcache_insert_info_blocks_3; // @[MAIN_MEMORY.scala 102:40]
  reg [7:0] dcache_insert_info_index; // @[MAIN_MEMORY.scala 102:40]
  reg [19:0] dcache_insert_info_tag; // @[MAIN_MEMORY.scala 102:40]
  wire [63:0] _icache_set_row_T_1 = io_icache_miss_i_pc - 64'h80000000; // @[MAIN_MEMORY.scala 42:48]
  wire [59:0] icache_set_row = _icache_set_row_T_1[63:4]; // @[MAIN_MEMORY.scala 42:68]
  wire [127:0] _icache_set_T_4 = {ram4_icache_set_MPORT_data,ram3_icache_set_MPORT_1_data,ram2_icache_set_MPORT_2_data,
    ram1_icache_set_MPORT_3_data}; // @[Cat.scala 31:58]
  wire [31:0] icache_set_0 = _icache_set_T_4[31:0]; // @[MAIN_MEMORY.scala 112:53]
  wire [31:0] icache_set_1 = _icache_set_T_4[63:32]; // @[MAIN_MEMORY.scala 112:53]
  wire [31:0] icache_set_2 = _icache_set_T_4[95:64]; // @[MAIN_MEMORY.scala 112:53]
  wire [31:0] icache_set_3 = _icache_set_T_4[127:96]; // @[MAIN_MEMORY.scala 112:53]
  wire [63:0] _dcache_set_row_T_1 = io_dcache_miss_i_addr - 64'h80000000; // @[MAIN_MEMORY.scala 42:48]
  wire [59:0] dcache_set_row = _dcache_set_row_T_1[63:4]; // @[MAIN_MEMORY.scala 42:68]
  wire [127:0] _dcache_set_T_4 = {ram4_dcache_set_MPORT_data,ram3_dcache_set_MPORT_1_data,ram2_dcache_set_MPORT_2_data,
    ram1_dcache_set_MPORT_3_data}; // @[Cat.scala 31:58]
  wire [31:0] dcache_set_0 = _dcache_set_T_4[31:0]; // @[MAIN_MEMORY.scala 125:55]
  wire [31:0] dcache_set_1 = _dcache_set_T_4[63:32]; // @[MAIN_MEMORY.scala 125:55]
  wire [31:0] dcache_set_2 = _dcache_set_T_4[95:64]; // @[MAIN_MEMORY.scala 125:55]
  wire [31:0] dcache_set_3 = _dcache_set_T_4[127:96]; // @[MAIN_MEMORY.scala 125:55]
  wire [63:0] _row_row_T_1 = 64'h0 - 64'h80000000; // @[MAIN_MEMORY.scala 42:48]
  wire [59:0] row_row = _row_row_T_1[63:4]; // @[MAIN_MEMORY.scala 42:68]
  wire [127:0] row_1 = {ram4_row_MPORT_data,ram3_row_MPORT_1_data,ram2_row_MPORT_2_data,ram1_row_MPORT_3_data}; // @[Cat.scala 31:58]
  assign ram1_qword_MPORT_3_en = _T & _T_3;
  assign ram1_qword_MPORT_3_addr = row[15:0];
  assign ram1_qword_MPORT_3_data = ram1[ram1_qword_MPORT_3_addr]; // @[MAIN_MEMORY.scala 62:19]
  assign ram1_new_qword_MPORT_3_en = _T & _GEN_284;
  assign ram1_new_qword_MPORT_3_addr = row[15:0];
  assign ram1_new_qword_MPORT_3_data = ram1[ram1_new_qword_MPORT_3_addr]; // @[MAIN_MEMORY.scala 62:19]
  assign ram1_icache_set_MPORT_3_en = io_icache_miss_i_miss;
  assign ram1_icache_set_MPORT_3_addr = icache_set_row[15:0];
  assign ram1_icache_set_MPORT_3_data = ram1[ram1_icache_set_MPORT_3_addr]; // @[MAIN_MEMORY.scala 62:19]
  assign ram1_dcache_set_MPORT_3_en = io_dcache_miss_i_miss;
  assign ram1_dcache_set_MPORT_3_addr = dcache_set_row[15:0];
  assign ram1_dcache_set_MPORT_3_data = ram1[ram1_dcache_set_MPORT_3_addr]; // @[MAIN_MEMORY.scala 62:19]
  assign ram1_row_MPORT_3_en = 1'h0;
  assign ram1_row_MPORT_3_addr = row_row[15:0];
  assign ram1_row_MPORT_3_data = ram1[ram1_row_MPORT_3_addr]; // @[MAIN_MEMORY.scala 62:19]
  assign ram1_MPORT_data = _new_qword_T_45[31:0];
  assign ram1_MPORT_addr = row[15:0];
  assign ram1_MPORT_mask = 1'h1;
  assign ram1_MPORT_en = _T & _GEN_284;
  assign ram1_MPORT_4_data = 32'h0;
  assign ram1_MPORT_4_addr = row_1[15:0];
  assign ram1_MPORT_4_mask = 1'h1;
  assign ram1_MPORT_4_en = 1'h0;
  assign ram2_qword_MPORT_2_en = _T & _T_3;
  assign ram2_qword_MPORT_2_addr = row[15:0];
  assign ram2_qword_MPORT_2_data = ram2[ram2_qword_MPORT_2_addr]; // @[MAIN_MEMORY.scala 63:19]
  assign ram2_new_qword_MPORT_2_en = _T & _GEN_284;
  assign ram2_new_qword_MPORT_2_addr = row[15:0];
  assign ram2_new_qword_MPORT_2_data = ram2[ram2_new_qword_MPORT_2_addr]; // @[MAIN_MEMORY.scala 63:19]
  assign ram2_icache_set_MPORT_2_en = io_icache_miss_i_miss;
  assign ram2_icache_set_MPORT_2_addr = icache_set_row[15:0];
  assign ram2_icache_set_MPORT_2_data = ram2[ram2_icache_set_MPORT_2_addr]; // @[MAIN_MEMORY.scala 63:19]
  assign ram2_dcache_set_MPORT_2_en = io_dcache_miss_i_miss;
  assign ram2_dcache_set_MPORT_2_addr = dcache_set_row[15:0];
  assign ram2_dcache_set_MPORT_2_data = ram2[ram2_dcache_set_MPORT_2_addr]; // @[MAIN_MEMORY.scala 63:19]
  assign ram2_row_MPORT_2_en = 1'h0;
  assign ram2_row_MPORT_2_addr = row_row[15:0];
  assign ram2_row_MPORT_2_data = ram2[ram2_row_MPORT_2_addr]; // @[MAIN_MEMORY.scala 63:19]
  assign ram2_MPORT_1_data = _new_qword_T_45[63:32];
  assign ram2_MPORT_1_addr = row[15:0];
  assign ram2_MPORT_1_mask = 1'h1;
  assign ram2_MPORT_1_en = _T & _GEN_284;
  assign ram2_MPORT_5_data = 32'h0;
  assign ram2_MPORT_5_addr = row_1[15:0];
  assign ram2_MPORT_5_mask = 1'h1;
  assign ram2_MPORT_5_en = 1'h0;
  assign ram3_qword_MPORT_1_en = _T & _T_3;
  assign ram3_qword_MPORT_1_addr = row[15:0];
  assign ram3_qword_MPORT_1_data = ram3[ram3_qword_MPORT_1_addr]; // @[MAIN_MEMORY.scala 64:19]
  assign ram3_new_qword_MPORT_1_en = _T & _GEN_284;
  assign ram3_new_qword_MPORT_1_addr = row[15:0];
  assign ram3_new_qword_MPORT_1_data = ram3[ram3_new_qword_MPORT_1_addr]; // @[MAIN_MEMORY.scala 64:19]
  assign ram3_icache_set_MPORT_1_en = io_icache_miss_i_miss;
  assign ram3_icache_set_MPORT_1_addr = icache_set_row[15:0];
  assign ram3_icache_set_MPORT_1_data = ram3[ram3_icache_set_MPORT_1_addr]; // @[MAIN_MEMORY.scala 64:19]
  assign ram3_dcache_set_MPORT_1_en = io_dcache_miss_i_miss;
  assign ram3_dcache_set_MPORT_1_addr = dcache_set_row[15:0];
  assign ram3_dcache_set_MPORT_1_data = ram3[ram3_dcache_set_MPORT_1_addr]; // @[MAIN_MEMORY.scala 64:19]
  assign ram3_row_MPORT_1_en = 1'h0;
  assign ram3_row_MPORT_1_addr = row_row[15:0];
  assign ram3_row_MPORT_1_data = ram3[ram3_row_MPORT_1_addr]; // @[MAIN_MEMORY.scala 64:19]
  assign ram3_MPORT_2_data = _new_qword_T_45[95:64];
  assign ram3_MPORT_2_addr = row[15:0];
  assign ram3_MPORT_2_mask = 1'h1;
  assign ram3_MPORT_2_en = _T & _GEN_284;
  assign ram3_MPORT_6_data = 32'h0;
  assign ram3_MPORT_6_addr = row_1[15:0];
  assign ram3_MPORT_6_mask = 1'h1;
  assign ram3_MPORT_6_en = 1'h0;
  assign ram4_qword_MPORT_en = _T & _T_3;
  assign ram4_qword_MPORT_addr = row[15:0];
  assign ram4_qword_MPORT_data = ram4[ram4_qword_MPORT_addr]; // @[MAIN_MEMORY.scala 65:19]
  assign ram4_new_qword_MPORT_en = _T & _GEN_284;
  assign ram4_new_qword_MPORT_addr = row[15:0];
  assign ram4_new_qword_MPORT_data = ram4[ram4_new_qword_MPORT_addr]; // @[MAIN_MEMORY.scala 65:19]
  assign ram4_icache_set_MPORT_en = io_icache_miss_i_miss;
  assign ram4_icache_set_MPORT_addr = icache_set_row[15:0];
  assign ram4_icache_set_MPORT_data = ram4[ram4_icache_set_MPORT_addr]; // @[MAIN_MEMORY.scala 65:19]
  assign ram4_dcache_set_MPORT_en = io_dcache_miss_i_miss;
  assign ram4_dcache_set_MPORT_addr = dcache_set_row[15:0];
  assign ram4_dcache_set_MPORT_data = ram4[ram4_dcache_set_MPORT_addr]; // @[MAIN_MEMORY.scala 65:19]
  assign ram4_row_MPORT_en = 1'h0;
  assign ram4_row_MPORT_addr = row_row[15:0];
  assign ram4_row_MPORT_data = ram4[ram4_row_MPORT_addr]; // @[MAIN_MEMORY.scala 65:19]
  assign ram4_MPORT_3_data = _new_qword_T_45[127:96];
  assign ram4_MPORT_3_addr = row[15:0];
  assign ram4_MPORT_3_mask = 1'h1;
  assign ram4_MPORT_3_en = _T & _GEN_284;
  assign ram4_MPORT_7_data = 32'h0;
  assign ram4_MPORT_7_addr = row_1[15:0];
  assign ram4_MPORT_7_mask = 1'h1;
  assign ram4_MPORT_7_en = 1'h0;
  assign io_dcache_insert_o_blocks_0 = dcache_insert_info_blocks_0; // @[MAIN_MEMORY.scala 106:25]
  assign io_dcache_insert_o_blocks_1 = dcache_insert_info_blocks_1; // @[MAIN_MEMORY.scala 106:25]
  assign io_dcache_insert_o_blocks_2 = dcache_insert_info_blocks_2; // @[MAIN_MEMORY.scala 106:25]
  assign io_dcache_insert_o_blocks_3 = dcache_insert_info_blocks_3; // @[MAIN_MEMORY.scala 106:25]
  assign io_dcache_insert_o_index = dcache_insert_info_index; // @[MAIN_MEMORY.scala 106:25]
  assign io_dcache_insert_o_tag = dcache_insert_info_tag; // @[MAIN_MEMORY.scala 106:25]
  assign io_icache_insert_o_valid = icache_insert_info_valid; // @[MAIN_MEMORY.scala 105:25]
  assign io_icache_insert_o_insts_0 = icache_insert_info_insts_0; // @[MAIN_MEMORY.scala 105:25]
  assign io_icache_insert_o_insts_1 = icache_insert_info_insts_1; // @[MAIN_MEMORY.scala 105:25]
  assign io_icache_insert_o_insts_2 = icache_insert_info_insts_2; // @[MAIN_MEMORY.scala 105:25]
  assign io_icache_insert_o_insts_3 = icache_insert_info_insts_3; // @[MAIN_MEMORY.scala 105:25]
  assign io_icache_insert_o_index = icache_insert_info_index; // @[MAIN_MEMORY.scala 105:25]
  assign io_icache_insert_o_tag = icache_insert_info_tag; // @[MAIN_MEMORY.scala 105:25]
  always @(posedge clock) begin
    if (ram1_MPORT_en & ram1_MPORT_mask) begin
      ram1[ram1_MPORT_addr] <= ram1_MPORT_data; // @[MAIN_MEMORY.scala 62:19]
    end
    if (ram1_MPORT_4_en & ram1_MPORT_4_mask) begin
      ram1[ram1_MPORT_4_addr] <= ram1_MPORT_4_data; // @[MAIN_MEMORY.scala 62:19]
    end
    if (ram2_MPORT_1_en & ram2_MPORT_1_mask) begin
      ram2[ram2_MPORT_1_addr] <= ram2_MPORT_1_data; // @[MAIN_MEMORY.scala 63:19]
    end
    if (ram2_MPORT_5_en & ram2_MPORT_5_mask) begin
      ram2[ram2_MPORT_5_addr] <= ram2_MPORT_5_data; // @[MAIN_MEMORY.scala 63:19]
    end
    if (ram3_MPORT_2_en & ram3_MPORT_2_mask) begin
      ram3[ram3_MPORT_2_addr] <= ram3_MPORT_2_data; // @[MAIN_MEMORY.scala 64:19]
    end
    if (ram3_MPORT_6_en & ram3_MPORT_6_mask) begin
      ram3[ram3_MPORT_6_addr] <= ram3_MPORT_6_data; // @[MAIN_MEMORY.scala 64:19]
    end
    if (ram4_MPORT_3_en & ram4_MPORT_3_mask) begin
      ram4[ram4_MPORT_3_addr] <= ram4_MPORT_3_data; // @[MAIN_MEMORY.scala 65:19]
    end
    if (ram4_MPORT_7_en & ram4_MPORT_7_mask) begin
      ram4[ram4_MPORT_7_addr] <= ram4_MPORT_7_data; // @[MAIN_MEMORY.scala 65:19]
    end
    if (reset) begin // @[MAIN_MEMORY.scala 101:40]
      icache_insert_info_valid <= 1'h0; // @[MAIN_MEMORY.scala 101:40]
    end else begin
      icache_insert_info_valid <= io_icache_miss_i_miss;
    end
    if (reset) begin // @[MAIN_MEMORY.scala 101:40]
      icache_insert_info_insts_0 <= 32'h0; // @[MAIN_MEMORY.scala 101:40]
    end else if (io_icache_miss_i_miss) begin // @[MAIN_MEMORY.scala 110:32]
      icache_insert_info_insts_0 <= icache_set_0; // @[MAIN_MEMORY.scala 115:35]
    end else begin
      icache_insert_info_insts_0 <= 32'h0; // @[MAIN_MEMORY.scala 119:29]
    end
    if (reset) begin // @[MAIN_MEMORY.scala 101:40]
      icache_insert_info_insts_1 <= 32'h0; // @[MAIN_MEMORY.scala 101:40]
    end else if (io_icache_miss_i_miss) begin // @[MAIN_MEMORY.scala 110:32]
      icache_insert_info_insts_1 <= icache_set_1; // @[MAIN_MEMORY.scala 115:35]
    end else begin
      icache_insert_info_insts_1 <= 32'h0; // @[MAIN_MEMORY.scala 119:29]
    end
    if (reset) begin // @[MAIN_MEMORY.scala 101:40]
      icache_insert_info_insts_2 <= 32'h0; // @[MAIN_MEMORY.scala 101:40]
    end else if (io_icache_miss_i_miss) begin // @[MAIN_MEMORY.scala 110:32]
      icache_insert_info_insts_2 <= icache_set_2; // @[MAIN_MEMORY.scala 115:35]
    end else begin
      icache_insert_info_insts_2 <= 32'h0; // @[MAIN_MEMORY.scala 119:29]
    end
    if (reset) begin // @[MAIN_MEMORY.scala 101:40]
      icache_insert_info_insts_3 <= 32'h0; // @[MAIN_MEMORY.scala 101:40]
    end else if (io_icache_miss_i_miss) begin // @[MAIN_MEMORY.scala 110:32]
      icache_insert_info_insts_3 <= icache_set_3; // @[MAIN_MEMORY.scala 115:35]
    end else begin
      icache_insert_info_insts_3 <= 32'h0; // @[MAIN_MEMORY.scala 119:29]
    end
    if (reset) begin // @[MAIN_MEMORY.scala 101:40]
      icache_insert_info_index <= 8'h0; // @[MAIN_MEMORY.scala 101:40]
    end else if (io_icache_miss_i_miss) begin // @[MAIN_MEMORY.scala 110:32]
      icache_insert_info_index <= io_icache_miss_i_pc[11:4]; // @[MAIN_MEMORY.scala 116:35]
    end else begin
      icache_insert_info_index <= 8'h0; // @[MAIN_MEMORY.scala 119:29]
    end
    if (reset) begin // @[MAIN_MEMORY.scala 101:40]
      icache_insert_info_tag <= 20'h0; // @[MAIN_MEMORY.scala 101:40]
    end else if (io_icache_miss_i_miss) begin // @[MAIN_MEMORY.scala 110:32]
      icache_insert_info_tag <= io_icache_miss_i_pc[31:12]; // @[MAIN_MEMORY.scala 117:35]
    end else begin
      icache_insert_info_tag <= 20'h0; // @[MAIN_MEMORY.scala 119:29]
    end
    if (reset) begin // @[MAIN_MEMORY.scala 102:40]
      dcache_insert_info_blocks_0 <= 32'h0; // @[MAIN_MEMORY.scala 102:40]
    end else if (io_dcache_miss_i_miss) begin // @[MAIN_MEMORY.scala 123:32]
      dcache_insert_info_blocks_0 <= dcache_set_0; // @[MAIN_MEMORY.scala 127:37]
    end else begin
      dcache_insert_info_blocks_0 <= 32'h0; // @[MAIN_MEMORY.scala 131:29]
    end
    if (reset) begin // @[MAIN_MEMORY.scala 102:40]
      dcache_insert_info_blocks_1 <= 32'h0; // @[MAIN_MEMORY.scala 102:40]
    end else if (io_dcache_miss_i_miss) begin // @[MAIN_MEMORY.scala 123:32]
      dcache_insert_info_blocks_1 <= dcache_set_1; // @[MAIN_MEMORY.scala 127:37]
    end else begin
      dcache_insert_info_blocks_1 <= 32'h0; // @[MAIN_MEMORY.scala 131:29]
    end
    if (reset) begin // @[MAIN_MEMORY.scala 102:40]
      dcache_insert_info_blocks_2 <= 32'h0; // @[MAIN_MEMORY.scala 102:40]
    end else if (io_dcache_miss_i_miss) begin // @[MAIN_MEMORY.scala 123:32]
      dcache_insert_info_blocks_2 <= dcache_set_2; // @[MAIN_MEMORY.scala 127:37]
    end else begin
      dcache_insert_info_blocks_2 <= 32'h0; // @[MAIN_MEMORY.scala 131:29]
    end
    if (reset) begin // @[MAIN_MEMORY.scala 102:40]
      dcache_insert_info_blocks_3 <= 32'h0; // @[MAIN_MEMORY.scala 102:40]
    end else if (io_dcache_miss_i_miss) begin // @[MAIN_MEMORY.scala 123:32]
      dcache_insert_info_blocks_3 <= dcache_set_3; // @[MAIN_MEMORY.scala 127:37]
    end else begin
      dcache_insert_info_blocks_3 <= 32'h0; // @[MAIN_MEMORY.scala 131:29]
    end
    if (reset) begin // @[MAIN_MEMORY.scala 102:40]
      dcache_insert_info_index <= 8'h0; // @[MAIN_MEMORY.scala 102:40]
    end else if (io_dcache_miss_i_miss) begin // @[MAIN_MEMORY.scala 123:32]
      dcache_insert_info_index <= io_dcache_miss_i_addr[11:4]; // @[MAIN_MEMORY.scala 128:37]
    end else begin
      dcache_insert_info_index <= 8'h0; // @[MAIN_MEMORY.scala 131:29]
    end
    if (reset) begin // @[MAIN_MEMORY.scala 102:40]
      dcache_insert_info_tag <= 20'h0; // @[MAIN_MEMORY.scala 102:40]
    end else if (io_dcache_miss_i_miss) begin // @[MAIN_MEMORY.scala 123:32]
      dcache_insert_info_tag <= io_dcache_miss_i_addr[31:12]; // @[MAIN_MEMORY.scala 129:37]
    end else begin
      dcache_insert_info_tag <= 20'h0; // @[MAIN_MEMORY.scala 131:29]
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
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  icache_insert_info_valid = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  icache_insert_info_insts_0 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  icache_insert_info_insts_1 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  icache_insert_info_insts_2 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  icache_insert_info_insts_3 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  icache_insert_info_index = _RAND_5[7:0];
  _RAND_6 = {1{`RANDOM}};
  icache_insert_info_tag = _RAND_6[19:0];
  _RAND_7 = {1{`RANDOM}};
  dcache_insert_info_blocks_0 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  dcache_insert_info_blocks_1 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  dcache_insert_info_blocks_2 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  dcache_insert_info_blocks_3 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  dcache_insert_info_index = _RAND_11[7:0];
  _RAND_12 = {1{`RANDOM}};
  dcache_insert_info_tag = _RAND_12[19:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
  $readmemh("/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/IMG/img_file0", ram1);
  $readmemh("/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/IMG/img_file1", ram2);
  $readmemh("/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/IMG/img_file2", ram3);
  $readmemh("/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/IMG/img_file3", ram4);
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module CONTROL(
  input        io_if_stall_req_i,
  input        io_id_stall_req_i,
  input        io_mem_stall_req_i,
  input        io_id_flush_req_i,
  output [4:0] io_stall_o,
  output [4:0] io_flush_o
);
  wire [1:0] _io_stall_o_T_1 = io_id_stall_req_i ? 2'h3 : {{1'd0}, io_if_stall_req_i}; // @[Mux.scala 47:70]
  wire [2:0] _io_stall_o_T_2 = {{1'd0}, _io_stall_o_T_1}; // @[Mux.scala 47:70]
  wire [3:0] _io_stall_o_T_3 = io_mem_stall_req_i ? 4'hf : {{1'd0}, _io_stall_o_T_2}; // @[Mux.scala 47:70]
  wire [1:0] _GEN_0 = io_id_flush_req_i ? 2'h3 : 2'h0; // @[CONTROL.scala 23:19 33:28 34:23]
  assign io_stall_o = {{1'd0}, _io_stall_o_T_3}; // @[CONTROL.scala 25:17]
  assign io_flush_o = {{3'd0}, _GEN_0};
endmodule
module IF_ID(
  input         clock,
  input         reset,
  input         io_ctrl_i_stall,
  input         io_ctrl_i_flush,
  input  [31:0] io_inst_i,
  input  [63:0] io_pc_i,
  output [31:0] io_inst_o,
  output [63:0] io_pc_o,
  output        io_id_is_stalled_o,
  input         io_predict_i_is_branch,
  input  [63:0] io_predict_i_pc,
  input  [11:0] io_predict_i_index,
  input         io_predict_i_predict_taken,
  input  [63:0] io_predict_i_predict_target,
  output        io_predict_o_is_branch,
  output [63:0] io_predict_o_pc,
  output [11:0] io_predict_o_index,
  output        io_predict_o_predict_taken,
  output [63:0] io_predict_o_predict_target
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [31:0] _RAND_7;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] pc; // @[PIPELINE-REGISTERS.scala 18:28]
  reg [31:0] inst; // @[PIPELINE-REGISTERS.scala 19:28]
  reg  predict_is_branch; // @[PIPELINE-REGISTERS.scala 20:28]
  reg [63:0] predict_pc; // @[PIPELINE-REGISTERS.scala 20:28]
  reg [11:0] predict_index; // @[PIPELINE-REGISTERS.scala 20:28]
  reg  predict_predict_taken; // @[PIPELINE-REGISTERS.scala 20:28]
  reg [63:0] predict_predict_target; // @[PIPELINE-REGISTERS.scala 20:28]
  reg  stall; // @[PIPELINE-REGISTERS.scala 21:28]
  assign io_inst_o = inst; // @[PIPELINE-REGISTERS.scala 40:21]
  assign io_pc_o = pc; // @[PIPELINE-REGISTERS.scala 41:21]
  assign io_id_is_stalled_o = stall; // @[PIPELINE-REGISTERS.scala 43:25]
  assign io_predict_o_is_branch = predict_is_branch; // @[PIPELINE-REGISTERS.scala 42:21]
  assign io_predict_o_pc = predict_pc; // @[PIPELINE-REGISTERS.scala 42:21]
  assign io_predict_o_index = predict_index; // @[PIPELINE-REGISTERS.scala 42:21]
  assign io_predict_o_predict_taken = predict_predict_taken; // @[PIPELINE-REGISTERS.scala 42:21]
  assign io_predict_o_predict_target = predict_predict_target; // @[PIPELINE-REGISTERS.scala 42:21]
  always @(posedge clock) begin
    if (reset) begin // @[PIPELINE-REGISTERS.scala 18:28]
      pc <= 64'h80000000; // @[PIPELINE-REGISTERS.scala 18:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 29:26]
      pc <= 64'h80000000; // @[PIPELINE-REGISTERS.scala 30:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 34:32]
      pc <= io_pc_i; // @[PIPELINE-REGISTERS.scala 18:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 19:28]
      inst <= 32'h13; // @[PIPELINE-REGISTERS.scala 19:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 29:26]
      inst <= 32'h13; // @[PIPELINE-REGISTERS.scala 31:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 34:32]
      inst <= io_inst_i; // @[PIPELINE-REGISTERS.scala 19:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 20:28]
      predict_is_branch <= 1'h0; // @[PIPELINE-REGISTERS.scala 20:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 29:26]
      predict_is_branch <= 1'h0; // @[PIPELINE-REGISTERS.scala 32:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 34:32]
      predict_is_branch <= io_predict_i_is_branch; // @[PIPELINE-REGISTERS.scala 20:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 20:28]
      predict_pc <= 64'h0; // @[PIPELINE-REGISTERS.scala 20:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 29:26]
      predict_pc <= 64'h0; // @[PIPELINE-REGISTERS.scala 32:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 34:32]
      predict_pc <= io_predict_i_pc; // @[PIPELINE-REGISTERS.scala 20:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 20:28]
      predict_index <= 12'h0; // @[PIPELINE-REGISTERS.scala 20:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 29:26]
      predict_index <= 12'h0; // @[PIPELINE-REGISTERS.scala 32:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 34:32]
      predict_index <= io_predict_i_index; // @[PIPELINE-REGISTERS.scala 20:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 20:28]
      predict_predict_taken <= 1'h0; // @[PIPELINE-REGISTERS.scala 20:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 29:26]
      predict_predict_taken <= 1'h0; // @[PIPELINE-REGISTERS.scala 32:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 34:32]
      predict_predict_taken <= io_predict_i_predict_taken; // @[PIPELINE-REGISTERS.scala 20:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 20:28]
      predict_predict_target <= 64'h0; // @[PIPELINE-REGISTERS.scala 20:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 29:26]
      predict_predict_target <= 64'h0; // @[PIPELINE-REGISTERS.scala 32:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 34:32]
      predict_predict_target <= io_predict_i_predict_target; // @[PIPELINE-REGISTERS.scala 20:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 21:28]
      stall <= 1'h0; // @[PIPELINE-REGISTERS.scala 21:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 29:26]
      stall <= 1'h0; // @[PIPELINE-REGISTERS.scala 33:17]
    end else begin
      stall <= io_ctrl_i_stall; // @[PIPELINE-REGISTERS.scala 21:28]
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
  pc = _RAND_0[63:0];
  _RAND_1 = {1{`RANDOM}};
  inst = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  predict_is_branch = _RAND_2[0:0];
  _RAND_3 = {2{`RANDOM}};
  predict_pc = _RAND_3[63:0];
  _RAND_4 = {1{`RANDOM}};
  predict_index = _RAND_4[11:0];
  _RAND_5 = {1{`RANDOM}};
  predict_predict_taken = _RAND_5[0:0];
  _RAND_6 = {2{`RANDOM}};
  predict_predict_target = _RAND_6[63:0];
  _RAND_7 = {1{`RANDOM}};
  stall = _RAND_7[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ID_EX(
  input         clock,
  input         reset,
  input         io_ctrl_i_stall,
  input         io_ctrl_i_flush,
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
  input         io_debug_i_exit,
  input  [63:0] io_debug_i_a0,
  input  [63:0] io_debug_i_pc,
  input  [31:0] io_debug_i_inst,
  output        io_decInfo_o_writeOp_rf_wen,
  output [4:0]  io_decInfo_o_writeOp_rf_rd,
  output        io_decInfo_o_writeOp_csr_wen,
  output [63:0] io_decInfo_o_writeOp_csr_wdata,
  output [11:0] io_decInfo_o_writeOp_csr_waddr,
  output [63:0] io_decInfo_o_aluOp_src1,
  output [63:0] io_decInfo_o_aluOp_src2,
  output [4:0]  io_decInfo_o_aluOp_opt,
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
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [31:0] _RAND_16;
`endif // RANDOMIZE_REG_INIT
  reg  decInfo_writeOp_rf_wen; // @[PIPELINE-REGISTERS.scala 59:28]
  reg [4:0] decInfo_writeOp_rf_rd; // @[PIPELINE-REGISTERS.scala 59:28]
  reg  decInfo_writeOp_csr_wen; // @[PIPELINE-REGISTERS.scala 59:28]
  reg [63:0] decInfo_writeOp_csr_wdata; // @[PIPELINE-REGISTERS.scala 59:28]
  reg [11:0] decInfo_writeOp_csr_waddr; // @[PIPELINE-REGISTERS.scala 59:28]
  reg [63:0] decInfo_aluOp_src1; // @[PIPELINE-REGISTERS.scala 59:28]
  reg [63:0] decInfo_aluOp_src2; // @[PIPELINE-REGISTERS.scala 59:28]
  reg [4:0] decInfo_aluOp_opt; // @[PIPELINE-REGISTERS.scala 59:28]
  reg  decInfo_memOp_is_load; // @[PIPELINE-REGISTERS.scala 59:28]
  reg  decInfo_memOp_is_store; // @[PIPELINE-REGISTERS.scala 59:28]
  reg  decInfo_memOp_unsigned; // @[PIPELINE-REGISTERS.scala 59:28]
  reg [3:0] decInfo_memOp_length; // @[PIPELINE-REGISTERS.scala 59:28]
  reg [63:0] decInfo_memOp_sdata; // @[PIPELINE-REGISTERS.scala 59:28]
  reg  debug_exit; // @[PIPELINE-REGISTERS.scala 60:28]
  reg [63:0] debug_a0; // @[PIPELINE-REGISTERS.scala 60:28]
  reg [63:0] debug_pc; // @[PIPELINE-REGISTERS.scala 60:28]
  reg [31:0] debug_inst; // @[PIPELINE-REGISTERS.scala 60:28]
  assign io_decInfo_o_writeOp_rf_wen = decInfo_writeOp_rf_wen; // @[PIPELINE-REGISTERS.scala 75:25]
  assign io_decInfo_o_writeOp_rf_rd = decInfo_writeOp_rf_rd; // @[PIPELINE-REGISTERS.scala 75:25]
  assign io_decInfo_o_writeOp_csr_wen = decInfo_writeOp_csr_wen; // @[PIPELINE-REGISTERS.scala 75:25]
  assign io_decInfo_o_writeOp_csr_wdata = decInfo_writeOp_csr_wdata; // @[PIPELINE-REGISTERS.scala 75:25]
  assign io_decInfo_o_writeOp_csr_waddr = decInfo_writeOp_csr_waddr; // @[PIPELINE-REGISTERS.scala 75:25]
  assign io_decInfo_o_aluOp_src1 = decInfo_aluOp_src1; // @[PIPELINE-REGISTERS.scala 75:25]
  assign io_decInfo_o_aluOp_src2 = decInfo_aluOp_src2; // @[PIPELINE-REGISTERS.scala 75:25]
  assign io_decInfo_o_aluOp_opt = decInfo_aluOp_opt; // @[PIPELINE-REGISTERS.scala 75:25]
  assign io_decInfo_o_memOp_is_load = decInfo_memOp_is_load; // @[PIPELINE-REGISTERS.scala 75:25]
  assign io_decInfo_o_memOp_is_store = decInfo_memOp_is_store; // @[PIPELINE-REGISTERS.scala 75:25]
  assign io_decInfo_o_memOp_unsigned = decInfo_memOp_unsigned; // @[PIPELINE-REGISTERS.scala 75:25]
  assign io_decInfo_o_memOp_length = decInfo_memOp_length; // @[PIPELINE-REGISTERS.scala 75:25]
  assign io_decInfo_o_memOp_sdata = decInfo_memOp_sdata; // @[PIPELINE-REGISTERS.scala 75:25]
  assign io_debug_o_exit = debug_exit; // @[PIPELINE-REGISTERS.scala 76:25]
  assign io_debug_o_a0 = debug_a0; // @[PIPELINE-REGISTERS.scala 76:25]
  assign io_debug_o_pc = debug_pc; // @[PIPELINE-REGISTERS.scala 76:25]
  assign io_debug_o_inst = debug_inst; // @[PIPELINE-REGISTERS.scala 76:25]
  always @(posedge clock) begin
    if (reset) begin // @[PIPELINE-REGISTERS.scala 59:28]
      decInfo_writeOp_rf_wen <= 1'h0; // @[PIPELINE-REGISTERS.scala 59:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 65:26]
      decInfo_writeOp_rf_wen <= 1'h0; // @[PIPELINE-REGISTERS.scala 66:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 70:32]
      decInfo_writeOp_rf_wen <= io_decInfo_i_writeOp_rf_wen; // @[PIPELINE-REGISTERS.scala 59:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 59:28]
      decInfo_writeOp_rf_rd <= 5'h0; // @[PIPELINE-REGISTERS.scala 59:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 65:26]
      decInfo_writeOp_rf_rd <= 5'h0; // @[PIPELINE-REGISTERS.scala 66:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 70:32]
      decInfo_writeOp_rf_rd <= io_decInfo_i_writeOp_rf_rd; // @[PIPELINE-REGISTERS.scala 59:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 59:28]
      decInfo_writeOp_csr_wen <= 1'h0; // @[PIPELINE-REGISTERS.scala 59:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 65:26]
      decInfo_writeOp_csr_wen <= 1'h0; // @[PIPELINE-REGISTERS.scala 66:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 70:32]
      decInfo_writeOp_csr_wen <= io_decInfo_i_writeOp_csr_wen; // @[PIPELINE-REGISTERS.scala 59:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 59:28]
      decInfo_writeOp_csr_wdata <= 64'h0; // @[PIPELINE-REGISTERS.scala 59:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 65:26]
      decInfo_writeOp_csr_wdata <= 64'h0; // @[PIPELINE-REGISTERS.scala 66:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 70:32]
      decInfo_writeOp_csr_wdata <= io_decInfo_i_writeOp_csr_wdata; // @[PIPELINE-REGISTERS.scala 59:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 59:28]
      decInfo_writeOp_csr_waddr <= 12'h0; // @[PIPELINE-REGISTERS.scala 59:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 65:26]
      decInfo_writeOp_csr_waddr <= 12'h0; // @[PIPELINE-REGISTERS.scala 66:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 70:32]
      decInfo_writeOp_csr_waddr <= io_decInfo_i_writeOp_csr_waddr; // @[PIPELINE-REGISTERS.scala 59:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 59:28]
      decInfo_aluOp_src1 <= 64'h0; // @[PIPELINE-REGISTERS.scala 59:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 65:26]
      decInfo_aluOp_src1 <= 64'h0; // @[PIPELINE-REGISTERS.scala 66:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 70:32]
      decInfo_aluOp_src1 <= io_decInfo_i_aluOp_src1; // @[PIPELINE-REGISTERS.scala 59:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 59:28]
      decInfo_aluOp_src2 <= 64'h0; // @[PIPELINE-REGISTERS.scala 59:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 65:26]
      decInfo_aluOp_src2 <= 64'h0; // @[PIPELINE-REGISTERS.scala 66:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 70:32]
      decInfo_aluOp_src2 <= io_decInfo_i_aluOp_src2; // @[PIPELINE-REGISTERS.scala 59:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 59:28]
      decInfo_aluOp_opt <= 5'h0; // @[PIPELINE-REGISTERS.scala 59:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 65:26]
      decInfo_aluOp_opt <= 5'h0; // @[PIPELINE-REGISTERS.scala 66:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 70:32]
      decInfo_aluOp_opt <= io_decInfo_i_aluOp_opt; // @[PIPELINE-REGISTERS.scala 59:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 59:28]
      decInfo_memOp_is_load <= 1'h0; // @[PIPELINE-REGISTERS.scala 59:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 65:26]
      decInfo_memOp_is_load <= 1'h0; // @[PIPELINE-REGISTERS.scala 66:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 70:32]
      decInfo_memOp_is_load <= io_decInfo_i_memOp_is_load; // @[PIPELINE-REGISTERS.scala 59:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 59:28]
      decInfo_memOp_is_store <= 1'h0; // @[PIPELINE-REGISTERS.scala 59:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 65:26]
      decInfo_memOp_is_store <= 1'h0; // @[PIPELINE-REGISTERS.scala 66:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 70:32]
      decInfo_memOp_is_store <= io_decInfo_i_memOp_is_store; // @[PIPELINE-REGISTERS.scala 59:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 59:28]
      decInfo_memOp_unsigned <= 1'h0; // @[PIPELINE-REGISTERS.scala 59:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 65:26]
      decInfo_memOp_unsigned <= 1'h0; // @[PIPELINE-REGISTERS.scala 66:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 70:32]
      decInfo_memOp_unsigned <= io_decInfo_i_memOp_unsigned; // @[PIPELINE-REGISTERS.scala 59:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 59:28]
      decInfo_memOp_length <= 4'h0; // @[PIPELINE-REGISTERS.scala 59:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 65:26]
      decInfo_memOp_length <= 4'h0; // @[PIPELINE-REGISTERS.scala 66:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 70:32]
      decInfo_memOp_length <= io_decInfo_i_memOp_length; // @[PIPELINE-REGISTERS.scala 59:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 59:28]
      decInfo_memOp_sdata <= 64'h0; // @[PIPELINE-REGISTERS.scala 59:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 65:26]
      decInfo_memOp_sdata <= 64'h0; // @[PIPELINE-REGISTERS.scala 66:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 70:32]
      decInfo_memOp_sdata <= io_decInfo_i_memOp_sdata; // @[PIPELINE-REGISTERS.scala 59:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 60:28]
      debug_exit <= 1'h0; // @[PIPELINE-REGISTERS.scala 60:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 65:26]
      debug_exit <= 1'h0; // @[PIPELINE-REGISTERS.scala 67:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 70:32]
      debug_exit <= io_debug_i_exit; // @[PIPELINE-REGISTERS.scala 60:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 60:28]
      debug_a0 <= 64'h0; // @[PIPELINE-REGISTERS.scala 60:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 65:26]
      debug_a0 <= 64'h0; // @[PIPELINE-REGISTERS.scala 67:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 70:32]
      debug_a0 <= io_debug_i_a0; // @[PIPELINE-REGISTERS.scala 60:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 60:28]
      debug_pc <= 64'h0; // @[PIPELINE-REGISTERS.scala 60:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 65:26]
      debug_pc <= 64'h0; // @[PIPELINE-REGISTERS.scala 67:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 70:32]
      debug_pc <= io_debug_i_pc; // @[PIPELINE-REGISTERS.scala 60:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 60:28]
      debug_inst <= 32'h0; // @[PIPELINE-REGISTERS.scala 60:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 65:26]
      debug_inst <= 32'h0; // @[PIPELINE-REGISTERS.scala 67:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 70:32]
      debug_inst <= io_debug_i_inst; // @[PIPELINE-REGISTERS.scala 60:28]
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
  _RAND_0 = {1{`RANDOM}};
  decInfo_writeOp_rf_wen = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  decInfo_writeOp_rf_rd = _RAND_1[4:0];
  _RAND_2 = {1{`RANDOM}};
  decInfo_writeOp_csr_wen = _RAND_2[0:0];
  _RAND_3 = {2{`RANDOM}};
  decInfo_writeOp_csr_wdata = _RAND_3[63:0];
  _RAND_4 = {1{`RANDOM}};
  decInfo_writeOp_csr_waddr = _RAND_4[11:0];
  _RAND_5 = {2{`RANDOM}};
  decInfo_aluOp_src1 = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  decInfo_aluOp_src2 = _RAND_6[63:0];
  _RAND_7 = {1{`RANDOM}};
  decInfo_aluOp_opt = _RAND_7[4:0];
  _RAND_8 = {1{`RANDOM}};
  decInfo_memOp_is_load = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  decInfo_memOp_is_store = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  decInfo_memOp_unsigned = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  decInfo_memOp_length = _RAND_11[3:0];
  _RAND_12 = {2{`RANDOM}};
  decInfo_memOp_sdata = _RAND_12[63:0];
  _RAND_13 = {1{`RANDOM}};
  debug_exit = _RAND_13[0:0];
  _RAND_14 = {2{`RANDOM}};
  debug_a0 = _RAND_14[63:0];
  _RAND_15 = {2{`RANDOM}};
  debug_pc = _RAND_15[63:0];
  _RAND_16 = {1{`RANDOM}};
  debug_inst = _RAND_16[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module EX_MEM(
  input         clock,
  input         reset,
  input         io_ctrl_i_stall,
  input         io_ctrl_i_flush,
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
  input         io_debug_i_exit,
  input  [63:0] io_debug_i_a0,
  input  [63:0] io_debug_i_pc,
  input  [31:0] io_debug_i_inst,
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
  output        io_debug_o_exit,
  output [63:0] io_debug_o_a0,
  output [63:0] io_debug_o_pc,
  output [31:0] io_debug_o_inst
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [31:0] _RAND_15;
`endif // RANDOMIZE_REG_INIT
  reg  writeOp_rf_wen; // @[PIPELINE-REGISTERS.scala 95:28]
  reg [4:0] writeOp_rf_rd; // @[PIPELINE-REGISTERS.scala 95:28]
  reg [63:0] writeOp_rf_wdata; // @[PIPELINE-REGISTERS.scala 95:28]
  reg  writeOp_csr_wen; // @[PIPELINE-REGISTERS.scala 95:28]
  reg [63:0] writeOp_csr_wdata; // @[PIPELINE-REGISTERS.scala 95:28]
  reg [11:0] writeOp_csr_waddr; // @[PIPELINE-REGISTERS.scala 95:28]
  reg  memOp_is_load; // @[PIPELINE-REGISTERS.scala 96:28]
  reg  memOp_is_store; // @[PIPELINE-REGISTERS.scala 96:28]
  reg  memOp_unsigned; // @[PIPELINE-REGISTERS.scala 96:28]
  reg [3:0] memOp_length; // @[PIPELINE-REGISTERS.scala 96:28]
  reg [63:0] memOp_addr; // @[PIPELINE-REGISTERS.scala 96:28]
  reg [63:0] memOp_sdata; // @[PIPELINE-REGISTERS.scala 96:28]
  reg  debug_exit; // @[PIPELINE-REGISTERS.scala 97:28]
  reg [63:0] debug_a0; // @[PIPELINE-REGISTERS.scala 97:28]
  reg [63:0] debug_pc; // @[PIPELINE-REGISTERS.scala 97:28]
  reg [31:0] debug_inst; // @[PIPELINE-REGISTERS.scala 97:28]
  assign io_writeOp_o_rf_wen = writeOp_rf_wen; // @[PIPELINE-REGISTERS.scala 111:21]
  assign io_writeOp_o_rf_rd = writeOp_rf_rd; // @[PIPELINE-REGISTERS.scala 111:21]
  assign io_writeOp_o_rf_wdata = writeOp_rf_wdata; // @[PIPELINE-REGISTERS.scala 111:21]
  assign io_writeOp_o_csr_wen = writeOp_csr_wen; // @[PIPELINE-REGISTERS.scala 111:21]
  assign io_writeOp_o_csr_wdata = writeOp_csr_wdata; // @[PIPELINE-REGISTERS.scala 111:21]
  assign io_writeOp_o_csr_waddr = writeOp_csr_waddr; // @[PIPELINE-REGISTERS.scala 111:21]
  assign io_memOp_o_is_load = memOp_is_load; // @[PIPELINE-REGISTERS.scala 112:21]
  assign io_memOp_o_is_store = memOp_is_store; // @[PIPELINE-REGISTERS.scala 112:21]
  assign io_memOp_o_unsigned = memOp_unsigned; // @[PIPELINE-REGISTERS.scala 112:21]
  assign io_memOp_o_length = memOp_length; // @[PIPELINE-REGISTERS.scala 112:21]
  assign io_memOp_o_addr = memOp_addr; // @[PIPELINE-REGISTERS.scala 112:21]
  assign io_memOp_o_sdata = memOp_sdata; // @[PIPELINE-REGISTERS.scala 112:21]
  assign io_debug_o_exit = debug_exit; // @[PIPELINE-REGISTERS.scala 113:21]
  assign io_debug_o_a0 = debug_a0; // @[PIPELINE-REGISTERS.scala 113:21]
  assign io_debug_o_pc = debug_pc; // @[PIPELINE-REGISTERS.scala 113:21]
  assign io_debug_o_inst = debug_inst; // @[PIPELINE-REGISTERS.scala 113:21]
  always @(posedge clock) begin
    if (reset) begin // @[PIPELINE-REGISTERS.scala 95:28]
      writeOp_rf_wen <= 1'h0; // @[PIPELINE-REGISTERS.scala 95:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 100:26]
      writeOp_rf_wen <= 1'h0; // @[PIPELINE-REGISTERS.scala 101:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 105:32]
      writeOp_rf_wen <= io_writeOp_i_rf_wen; // @[PIPELINE-REGISTERS.scala 95:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 95:28]
      writeOp_rf_rd <= 5'h0; // @[PIPELINE-REGISTERS.scala 95:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 100:26]
      writeOp_rf_rd <= 5'h0; // @[PIPELINE-REGISTERS.scala 101:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 105:32]
      writeOp_rf_rd <= io_writeOp_i_rf_rd; // @[PIPELINE-REGISTERS.scala 95:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 95:28]
      writeOp_rf_wdata <= 64'h0; // @[PIPELINE-REGISTERS.scala 95:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 100:26]
      writeOp_rf_wdata <= 64'h0; // @[PIPELINE-REGISTERS.scala 101:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 105:32]
      writeOp_rf_wdata <= io_writeOp_i_rf_wdata; // @[PIPELINE-REGISTERS.scala 95:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 95:28]
      writeOp_csr_wen <= 1'h0; // @[PIPELINE-REGISTERS.scala 95:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 100:26]
      writeOp_csr_wen <= 1'h0; // @[PIPELINE-REGISTERS.scala 101:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 105:32]
      writeOp_csr_wen <= io_writeOp_i_csr_wen; // @[PIPELINE-REGISTERS.scala 95:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 95:28]
      writeOp_csr_wdata <= 64'h0; // @[PIPELINE-REGISTERS.scala 95:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 100:26]
      writeOp_csr_wdata <= 64'h0; // @[PIPELINE-REGISTERS.scala 101:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 105:32]
      writeOp_csr_wdata <= io_writeOp_i_csr_wdata; // @[PIPELINE-REGISTERS.scala 95:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 95:28]
      writeOp_csr_waddr <= 12'h0; // @[PIPELINE-REGISTERS.scala 95:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 100:26]
      writeOp_csr_waddr <= 12'h0; // @[PIPELINE-REGISTERS.scala 101:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 105:32]
      writeOp_csr_waddr <= io_writeOp_i_csr_waddr; // @[PIPELINE-REGISTERS.scala 95:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 96:28]
      memOp_is_load <= 1'h0; // @[PIPELINE-REGISTERS.scala 96:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 100:26]
      memOp_is_load <= 1'h0; // @[PIPELINE-REGISTERS.scala 102:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 105:32]
      memOp_is_load <= io_memOp_i_is_load; // @[PIPELINE-REGISTERS.scala 96:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 96:28]
      memOp_is_store <= 1'h0; // @[PIPELINE-REGISTERS.scala 96:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 100:26]
      memOp_is_store <= 1'h0; // @[PIPELINE-REGISTERS.scala 102:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 105:32]
      memOp_is_store <= io_memOp_i_is_store; // @[PIPELINE-REGISTERS.scala 96:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 96:28]
      memOp_unsigned <= 1'h0; // @[PIPELINE-REGISTERS.scala 96:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 100:26]
      memOp_unsigned <= 1'h0; // @[PIPELINE-REGISTERS.scala 102:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 105:32]
      memOp_unsigned <= io_memOp_i_unsigned; // @[PIPELINE-REGISTERS.scala 96:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 96:28]
      memOp_length <= 4'h0; // @[PIPELINE-REGISTERS.scala 96:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 100:26]
      memOp_length <= 4'h0; // @[PIPELINE-REGISTERS.scala 102:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 105:32]
      memOp_length <= io_memOp_i_length; // @[PIPELINE-REGISTERS.scala 96:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 96:28]
      memOp_addr <= 64'h0; // @[PIPELINE-REGISTERS.scala 96:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 100:26]
      memOp_addr <= 64'h0; // @[PIPELINE-REGISTERS.scala 102:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 105:32]
      memOp_addr <= io_memOp_i_addr; // @[PIPELINE-REGISTERS.scala 96:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 96:28]
      memOp_sdata <= 64'h0; // @[PIPELINE-REGISTERS.scala 96:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 100:26]
      memOp_sdata <= 64'h0; // @[PIPELINE-REGISTERS.scala 102:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 105:32]
      memOp_sdata <= io_memOp_i_sdata; // @[PIPELINE-REGISTERS.scala 96:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 97:28]
      debug_exit <= 1'h0; // @[PIPELINE-REGISTERS.scala 97:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 100:26]
      debug_exit <= 1'h0; // @[PIPELINE-REGISTERS.scala 103:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 105:32]
      debug_exit <= io_debug_i_exit; // @[PIPELINE-REGISTERS.scala 97:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 97:28]
      debug_a0 <= 64'h0; // @[PIPELINE-REGISTERS.scala 97:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 100:26]
      debug_a0 <= 64'h0; // @[PIPELINE-REGISTERS.scala 103:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 105:32]
      debug_a0 <= io_debug_i_a0; // @[PIPELINE-REGISTERS.scala 97:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 97:28]
      debug_pc <= 64'h0; // @[PIPELINE-REGISTERS.scala 97:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 100:26]
      debug_pc <= 64'h0; // @[PIPELINE-REGISTERS.scala 103:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 105:32]
      debug_pc <= io_debug_i_pc; // @[PIPELINE-REGISTERS.scala 97:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 97:28]
      debug_inst <= 32'h0; // @[PIPELINE-REGISTERS.scala 97:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 100:26]
      debug_inst <= 32'h0; // @[PIPELINE-REGISTERS.scala 103:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 105:32]
      debug_inst <= io_debug_i_inst; // @[PIPELINE-REGISTERS.scala 97:28]
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
  _RAND_0 = {1{`RANDOM}};
  writeOp_rf_wen = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  writeOp_rf_rd = _RAND_1[4:0];
  _RAND_2 = {2{`RANDOM}};
  writeOp_rf_wdata = _RAND_2[63:0];
  _RAND_3 = {1{`RANDOM}};
  writeOp_csr_wen = _RAND_3[0:0];
  _RAND_4 = {2{`RANDOM}};
  writeOp_csr_wdata = _RAND_4[63:0];
  _RAND_5 = {1{`RANDOM}};
  writeOp_csr_waddr = _RAND_5[11:0];
  _RAND_6 = {1{`RANDOM}};
  memOp_is_load = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  memOp_is_store = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  memOp_unsigned = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  memOp_length = _RAND_9[3:0];
  _RAND_10 = {2{`RANDOM}};
  memOp_addr = _RAND_10[63:0];
  _RAND_11 = {2{`RANDOM}};
  memOp_sdata = _RAND_11[63:0];
  _RAND_12 = {1{`RANDOM}};
  debug_exit = _RAND_12[0:0];
  _RAND_13 = {2{`RANDOM}};
  debug_a0 = _RAND_13[63:0];
  _RAND_14 = {2{`RANDOM}};
  debug_pc = _RAND_14[63:0];
  _RAND_15 = {1{`RANDOM}};
  debug_inst = _RAND_15[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MEM_WB(
  input         clock,
  input         reset,
  input         io_ctrl_i_stall,
  input         io_ctrl_i_flush,
  input         io_writeOp_i_rf_wen,
  input  [4:0]  io_writeOp_i_rf_rd,
  input  [63:0] io_writeOp_i_rf_wdata,
  input         io_writeOp_i_csr_wen,
  input  [63:0] io_writeOp_i_csr_wdata,
  input  [11:0] io_writeOp_i_csr_waddr,
  input         io_debug_i_exit,
  input  [63:0] io_debug_i_a0,
  input  [63:0] io_debug_i_pc,
  input  [31:0] io_debug_i_inst,
  output        io_debug_o_exit,
  output [63:0] io_debug_o_a0,
  output [63:0] io_debug_o_pc,
  output [31:0] io_debug_o_inst,
  output        io_writeOp_o_rf_wen,
  output [4:0]  io_writeOp_o_rf_rd,
  output [63:0] io_writeOp_o_rf_wdata,
  output        io_writeOp_o_csr_wen,
  output [63:0] io_writeOp_o_csr_wdata,
  output [11:0] io_writeOp_o_csr_waddr
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [31:0] _RAND_9;
`endif // RANDOMIZE_REG_INIT
  reg  writeOp_rf_wen; // @[PIPELINE-REGISTERS.scala 127:28]
  reg [4:0] writeOp_rf_rd; // @[PIPELINE-REGISTERS.scala 127:28]
  reg [63:0] writeOp_rf_wdata; // @[PIPELINE-REGISTERS.scala 127:28]
  reg  writeOp_csr_wen; // @[PIPELINE-REGISTERS.scala 127:28]
  reg [63:0] writeOp_csr_wdata; // @[PIPELINE-REGISTERS.scala 127:28]
  reg [11:0] writeOp_csr_waddr; // @[PIPELINE-REGISTERS.scala 127:28]
  reg  debug_exit; // @[PIPELINE-REGISTERS.scala 128:28]
  reg [63:0] debug_a0; // @[PIPELINE-REGISTERS.scala 128:28]
  reg [63:0] debug_pc; // @[PIPELINE-REGISTERS.scala 128:28]
  reg [31:0] debug_inst; // @[PIPELINE-REGISTERS.scala 128:28]
  assign io_debug_o_exit = debug_exit; // @[PIPELINE-REGISTERS.scala 139:21]
  assign io_debug_o_a0 = debug_a0; // @[PIPELINE-REGISTERS.scala 139:21]
  assign io_debug_o_pc = debug_pc; // @[PIPELINE-REGISTERS.scala 139:21]
  assign io_debug_o_inst = debug_inst; // @[PIPELINE-REGISTERS.scala 139:21]
  assign io_writeOp_o_rf_wen = writeOp_rf_wen; // @[PIPELINE-REGISTERS.scala 138:21]
  assign io_writeOp_o_rf_rd = writeOp_rf_rd; // @[PIPELINE-REGISTERS.scala 138:21]
  assign io_writeOp_o_rf_wdata = writeOp_rf_wdata; // @[PIPELINE-REGISTERS.scala 138:21]
  assign io_writeOp_o_csr_wen = writeOp_csr_wen; // @[PIPELINE-REGISTERS.scala 138:21]
  assign io_writeOp_o_csr_wdata = writeOp_csr_wdata; // @[PIPELINE-REGISTERS.scala 138:21]
  assign io_writeOp_o_csr_waddr = writeOp_csr_waddr; // @[PIPELINE-REGISTERS.scala 138:21]
  always @(posedge clock) begin
    if (reset) begin // @[PIPELINE-REGISTERS.scala 127:28]
      writeOp_rf_wen <= 1'h0; // @[PIPELINE-REGISTERS.scala 127:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 129:26]
      writeOp_rf_wen <= 1'h0; // @[PIPELINE-REGISTERS.scala 130:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 133:32]
      writeOp_rf_wen <= io_writeOp_i_rf_wen; // @[PIPELINE-REGISTERS.scala 127:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 127:28]
      writeOp_rf_rd <= 5'h0; // @[PIPELINE-REGISTERS.scala 127:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 129:26]
      writeOp_rf_rd <= 5'h0; // @[PIPELINE-REGISTERS.scala 130:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 133:32]
      writeOp_rf_rd <= io_writeOp_i_rf_rd; // @[PIPELINE-REGISTERS.scala 127:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 127:28]
      writeOp_rf_wdata <= 64'h0; // @[PIPELINE-REGISTERS.scala 127:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 129:26]
      writeOp_rf_wdata <= 64'h0; // @[PIPELINE-REGISTERS.scala 130:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 133:32]
      writeOp_rf_wdata <= io_writeOp_i_rf_wdata; // @[PIPELINE-REGISTERS.scala 127:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 127:28]
      writeOp_csr_wen <= 1'h0; // @[PIPELINE-REGISTERS.scala 127:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 129:26]
      writeOp_csr_wen <= 1'h0; // @[PIPELINE-REGISTERS.scala 130:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 133:32]
      writeOp_csr_wen <= io_writeOp_i_csr_wen; // @[PIPELINE-REGISTERS.scala 127:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 127:28]
      writeOp_csr_wdata <= 64'h0; // @[PIPELINE-REGISTERS.scala 127:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 129:26]
      writeOp_csr_wdata <= 64'h0; // @[PIPELINE-REGISTERS.scala 130:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 133:32]
      writeOp_csr_wdata <= io_writeOp_i_csr_wdata; // @[PIPELINE-REGISTERS.scala 127:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 127:28]
      writeOp_csr_waddr <= 12'h0; // @[PIPELINE-REGISTERS.scala 127:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 129:26]
      writeOp_csr_waddr <= 12'h0; // @[PIPELINE-REGISTERS.scala 130:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 133:32]
      writeOp_csr_waddr <= io_writeOp_i_csr_waddr; // @[PIPELINE-REGISTERS.scala 127:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 128:28]
      debug_exit <= 1'h0; // @[PIPELINE-REGISTERS.scala 128:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 129:26]
      debug_exit <= 1'h0; // @[PIPELINE-REGISTERS.scala 131:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 133:32]
      debug_exit <= io_debug_i_exit; // @[PIPELINE-REGISTERS.scala 128:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 128:28]
      debug_a0 <= 64'h0; // @[PIPELINE-REGISTERS.scala 128:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 129:26]
      debug_a0 <= 64'h0; // @[PIPELINE-REGISTERS.scala 131:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 133:32]
      debug_a0 <= io_debug_i_a0; // @[PIPELINE-REGISTERS.scala 128:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 128:28]
      debug_pc <= 64'h0; // @[PIPELINE-REGISTERS.scala 128:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 129:26]
      debug_pc <= 64'h0; // @[PIPELINE-REGISTERS.scala 131:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 133:32]
      debug_pc <= io_debug_i_pc; // @[PIPELINE-REGISTERS.scala 128:28]
    end
    if (reset) begin // @[PIPELINE-REGISTERS.scala 128:28]
      debug_inst <= 32'h0; // @[PIPELINE-REGISTERS.scala 128:28]
    end else if (io_ctrl_i_flush) begin // @[PIPELINE-REGISTERS.scala 129:26]
      debug_inst <= 32'h0; // @[PIPELINE-REGISTERS.scala 131:17]
    end else if (!(io_ctrl_i_stall)) begin // @[PIPELINE-REGISTERS.scala 133:32]
      debug_inst <= io_debug_i_inst; // @[PIPELINE-REGISTERS.scala 128:28]
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
  _RAND_0 = {1{`RANDOM}};
  writeOp_rf_wen = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  writeOp_rf_rd = _RAND_1[4:0];
  _RAND_2 = {2{`RANDOM}};
  writeOp_rf_wdata = _RAND_2[63:0];
  _RAND_3 = {1{`RANDOM}};
  writeOp_csr_wen = _RAND_3[0:0];
  _RAND_4 = {2{`RANDOM}};
  writeOp_csr_wdata = _RAND_4[63:0];
  _RAND_5 = {1{`RANDOM}};
  writeOp_csr_waddr = _RAND_5[11:0];
  _RAND_6 = {1{`RANDOM}};
  debug_exit = _RAND_6[0:0];
  _RAND_7 = {2{`RANDOM}};
  debug_a0 = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  debug_pc = _RAND_8[63:0];
  _RAND_9 = {1{`RANDOM}};
  debug_inst = _RAND_9[31:0];
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
  input  [63:0] io_timer_i,
  output [63:0] io_csrData_csrVal,
  output [63:0] io_csrData_epc,
  output [63:0] io_csrData_tvec,
  output [63:0] io_csrData_cause,
  output [63:0] io_csrData_status,
  output [4:0]  io_stall_o,
  output [4:0]  io_flush_o,
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
  output [63:0] io_statistics_o_branch_cnt,
  output [63:0] io_statistics_o_taken_cnt,
  output [63:0] io_statistics_o_icache_hit_cnt,
  output [63:0] io_statistics_o_dcache_hit_cnt,
  output [63:0] io_statistics_o_load_cnt,
  output [63:0] io_statistics_o_bp_success_cnt
);
  wire  IF_clock; // @[TOP.scala 43:31]
  wire  IF_reset; // @[TOP.scala 43:31]
  wire  IF_io_ctrl_i_stall; // @[TOP.scala 43:31]
  wire [63:0] IF_io_pc_o; // @[TOP.scala 43:31]
  wire [31:0] IF_io_inst_o; // @[TOP.scala 43:31]
  wire  IF_io_predict_i_is_branch; // @[TOP.scala 43:31]
  wire [63:0] IF_io_predict_i_pc; // @[TOP.scala 43:31]
  wire [11:0] IF_io_predict_i_index; // @[TOP.scala 43:31]
  wire [63:0] IF_io_predict_i_target; // @[TOP.scala 43:31]
  wire  IF_io_predict_i_taken; // @[TOP.scala 43:31]
  wire  IF_io_predict_i_predict_fail; // @[TOP.scala 43:31]
  wire  IF_io_predict_o_is_branch; // @[TOP.scala 43:31]
  wire [63:0] IF_io_predict_o_pc; // @[TOP.scala 43:31]
  wire [11:0] IF_io_predict_o_index; // @[TOP.scala 43:31]
  wire  IF_io_predict_o_predict_taken; // @[TOP.scala 43:31]
  wire [63:0] IF_io_predict_o_predict_target; // @[TOP.scala 43:31]
  wire  IF_io_icache_insert_i_valid; // @[TOP.scala 43:31]
  wire [31:0] IF_io_icache_insert_i_insts_0; // @[TOP.scala 43:31]
  wire [31:0] IF_io_icache_insert_i_insts_1; // @[TOP.scala 43:31]
  wire [31:0] IF_io_icache_insert_i_insts_2; // @[TOP.scala 43:31]
  wire [31:0] IF_io_icache_insert_i_insts_3; // @[TOP.scala 43:31]
  wire [7:0] IF_io_icache_insert_i_index; // @[TOP.scala 43:31]
  wire [19:0] IF_io_icache_insert_i_tag; // @[TOP.scala 43:31]
  wire  IF_io_icache_miss_o_miss; // @[TOP.scala 43:31]
  wire [63:0] IF_io_icache_miss_o_pc; // @[TOP.scala 43:31]
  wire  IF_io_stall_req_o; // @[TOP.scala 43:31]
  wire [63:0] IF_io_success_cnt_o; // @[TOP.scala 43:31]
  wire [63:0] IF_io_nr_icache_hit_o; // @[TOP.scala 43:31]
  wire  ID_clock; // @[TOP.scala 44:31]
  wire  ID_reset; // @[TOP.scala 44:31]
  wire  ID_io_mem_need_stall_i; // @[TOP.scala 44:31]
  wire  ID_io_is_stalled_i; // @[TOP.scala 44:31]
  wire [31:0] ID_io_inst_i; // @[TOP.scala 44:31]
  wire [11:0] ID_io_fwd_i_ex_csr_addr; // @[TOP.scala 44:31]
  wire [63:0] ID_io_fwd_i_ex_csr_wdata; // @[TOP.scala 44:31]
  wire [4:0] ID_io_fwd_i_ex_rf_rd; // @[TOP.scala 44:31]
  wire [63:0] ID_io_fwd_i_ex_rf_wdata; // @[TOP.scala 44:31]
  wire [11:0] ID_io_fwd_i_mem_csr_addr; // @[TOP.scala 44:31]
  wire [63:0] ID_io_fwd_i_mem_csr_wdata; // @[TOP.scala 44:31]
  wire [4:0] ID_io_fwd_i_mem_rf_rd; // @[TOP.scala 44:31]
  wire [63:0] ID_io_fwd_i_mem_rf_wdata; // @[TOP.scala 44:31]
  wire [11:0] ID_io_fwd_i_wb_csr_addr; // @[TOP.scala 44:31]
  wire [63:0] ID_io_fwd_i_wb_csr_wdata; // @[TOP.scala 44:31]
  wire [4:0] ID_io_fwd_i_wb_rf_rd; // @[TOP.scala 44:31]
  wire [63:0] ID_io_fwd_i_wb_rf_wdata; // @[TOP.scala 44:31]
  wire [4:0] ID_io_fwd_i_prev_rd; // @[TOP.scala 44:31]
  wire  ID_io_fwd_i_prev_is_load; // @[TOP.scala 44:31]
  wire [63:0] ID_io_pc_i; // @[TOP.scala 44:31]
  wire [63:0] ID_io_rfData_i_rs1Val; // @[TOP.scala 44:31]
  wire [63:0] ID_io_rfData_i_rs2Val; // @[TOP.scala 44:31]
  wire [63:0] ID_io_rfData_i_a0; // @[TOP.scala 44:31]
  wire [63:0] ID_io_csrData_i_csrVal; // @[TOP.scala 44:31]
  wire [63:0] ID_io_csrData_i_epc; // @[TOP.scala 44:31]
  wire [63:0] ID_io_csrData_i_tvec; // @[TOP.scala 44:31]
  wire [4:0] ID_io_readOp_o_rs1; // @[TOP.scala 44:31]
  wire [4:0] ID_io_readOp_o_rs2; // @[TOP.scala 44:31]
  wire [11:0] ID_io_readOp_o_csrAddr; // @[TOP.scala 44:31]
  wire  ID_io_decInfo_o_writeOp_rf_wen; // @[TOP.scala 44:31]
  wire [4:0] ID_io_decInfo_o_writeOp_rf_rd; // @[TOP.scala 44:31]
  wire  ID_io_decInfo_o_writeOp_csr_wen; // @[TOP.scala 44:31]
  wire [63:0] ID_io_decInfo_o_writeOp_csr_wdata; // @[TOP.scala 44:31]
  wire [11:0] ID_io_decInfo_o_writeOp_csr_waddr; // @[TOP.scala 44:31]
  wire [63:0] ID_io_decInfo_o_aluOp_src1; // @[TOP.scala 44:31]
  wire [63:0] ID_io_decInfo_o_aluOp_src2; // @[TOP.scala 44:31]
  wire [4:0] ID_io_decInfo_o_aluOp_opt; // @[TOP.scala 44:31]
  wire  ID_io_decInfo_o_memOp_is_load; // @[TOP.scala 44:31]
  wire  ID_io_decInfo_o_memOp_is_store; // @[TOP.scala 44:31]
  wire  ID_io_decInfo_o_memOp_unsigned; // @[TOP.scala 44:31]
  wire [3:0] ID_io_decInfo_o_memOp_length; // @[TOP.scala 44:31]
  wire [63:0] ID_io_decInfo_o_memOp_sdata; // @[TOP.scala 44:31]
  wire  ID_io_stall_req_o; // @[TOP.scala 44:31]
  wire  ID_io_flush_req_o; // @[TOP.scala 44:31]
  wire  ID_io_debug_o_exit; // @[TOP.scala 44:31]
  wire [63:0] ID_io_debug_o_a0; // @[TOP.scala 44:31]
  wire [63:0] ID_io_debug_o_pc; // @[TOP.scala 44:31]
  wire [31:0] ID_io_debug_o_inst; // @[TOP.scala 44:31]
  wire [63:0] ID_io_nr_branch_o; // @[TOP.scala 44:31]
  wire [63:0] ID_io_nr_taken_o; // @[TOP.scala 44:31]
  wire  ID_io_predict_i_is_branch; // @[TOP.scala 44:31]
  wire [63:0] ID_io_predict_i_pc; // @[TOP.scala 44:31]
  wire [11:0] ID_io_predict_i_index; // @[TOP.scala 44:31]
  wire  ID_io_predict_i_predict_taken; // @[TOP.scala 44:31]
  wire [63:0] ID_io_predict_i_predict_target; // @[TOP.scala 44:31]
  wire  ID_io_predict_o_is_branch; // @[TOP.scala 44:31]
  wire [63:0] ID_io_predict_o_pc; // @[TOP.scala 44:31]
  wire [11:0] ID_io_predict_o_index; // @[TOP.scala 44:31]
  wire [63:0] ID_io_predict_o_target; // @[TOP.scala 44:31]
  wire  ID_io_predict_o_taken; // @[TOP.scala 44:31]
  wire  ID_io_predict_o_predict_fail; // @[TOP.scala 44:31]
  wire  EX_io_decInfo_i_writeOp_rf_wen; // @[TOP.scala 45:31]
  wire [4:0] EX_io_decInfo_i_writeOp_rf_rd; // @[TOP.scala 45:31]
  wire  EX_io_decInfo_i_writeOp_csr_wen; // @[TOP.scala 45:31]
  wire [63:0] EX_io_decInfo_i_writeOp_csr_wdata; // @[TOP.scala 45:31]
  wire [11:0] EX_io_decInfo_i_writeOp_csr_waddr; // @[TOP.scala 45:31]
  wire [63:0] EX_io_decInfo_i_aluOp_src1; // @[TOP.scala 45:31]
  wire [63:0] EX_io_decInfo_i_aluOp_src2; // @[TOP.scala 45:31]
  wire [4:0] EX_io_decInfo_i_aluOp_opt; // @[TOP.scala 45:31]
  wire  EX_io_decInfo_i_memOp_is_load; // @[TOP.scala 45:31]
  wire  EX_io_decInfo_i_memOp_is_store; // @[TOP.scala 45:31]
  wire  EX_io_decInfo_i_memOp_unsigned; // @[TOP.scala 45:31]
  wire [3:0] EX_io_decInfo_i_memOp_length; // @[TOP.scala 45:31]
  wire [63:0] EX_io_decInfo_i_memOp_sdata; // @[TOP.scala 45:31]
  wire  EX_io_writeOp_o_rf_wen; // @[TOP.scala 45:31]
  wire [4:0] EX_io_writeOp_o_rf_rd; // @[TOP.scala 45:31]
  wire [63:0] EX_io_writeOp_o_rf_wdata; // @[TOP.scala 45:31]
  wire  EX_io_writeOp_o_csr_wen; // @[TOP.scala 45:31]
  wire [63:0] EX_io_writeOp_o_csr_wdata; // @[TOP.scala 45:31]
  wire [11:0] EX_io_writeOp_o_csr_waddr; // @[TOP.scala 45:31]
  wire  EX_io_memOp_o_is_load; // @[TOP.scala 45:31]
  wire  EX_io_memOp_o_is_store; // @[TOP.scala 45:31]
  wire  EX_io_memOp_o_unsigned; // @[TOP.scala 45:31]
  wire [3:0] EX_io_memOp_o_length; // @[TOP.scala 45:31]
  wire [63:0] EX_io_memOp_o_addr; // @[TOP.scala 45:31]
  wire [63:0] EX_io_memOp_o_sdata; // @[TOP.scala 45:31]
  wire [11:0] EX_io_ex_fwd_o_csr_addr; // @[TOP.scala 45:31]
  wire [63:0] EX_io_ex_fwd_o_csr_wdata; // @[TOP.scala 45:31]
  wire [4:0] EX_io_ex_fwd_o_rf_rd; // @[TOP.scala 45:31]
  wire [63:0] EX_io_ex_fwd_o_rf_wdata; // @[TOP.scala 45:31]
  wire  EX_io_debug_i_exit; // @[TOP.scala 45:31]
  wire [63:0] EX_io_debug_i_a0; // @[TOP.scala 45:31]
  wire [63:0] EX_io_debug_i_pc; // @[TOP.scala 45:31]
  wire [31:0] EX_io_debug_i_inst; // @[TOP.scala 45:31]
  wire  EX_io_debug_o_exit; // @[TOP.scala 45:31]
  wire [63:0] EX_io_debug_o_a0; // @[TOP.scala 45:31]
  wire [63:0] EX_io_debug_o_pc; // @[TOP.scala 45:31]
  wire [31:0] EX_io_debug_o_inst; // @[TOP.scala 45:31]
  wire  MEM_clock; // @[TOP.scala 46:31]
  wire  MEM_reset; // @[TOP.scala 46:31]
  wire  MEM_io_writeOp_i_rf_wen; // @[TOP.scala 46:31]
  wire [4:0] MEM_io_writeOp_i_rf_rd; // @[TOP.scala 46:31]
  wire [63:0] MEM_io_writeOp_i_rf_wdata; // @[TOP.scala 46:31]
  wire  MEM_io_writeOp_i_csr_wen; // @[TOP.scala 46:31]
  wire [63:0] MEM_io_writeOp_i_csr_wdata; // @[TOP.scala 46:31]
  wire [11:0] MEM_io_writeOp_i_csr_waddr; // @[TOP.scala 46:31]
  wire  MEM_io_memOp_i_is_load; // @[TOP.scala 46:31]
  wire  MEM_io_memOp_i_is_store; // @[TOP.scala 46:31]
  wire  MEM_io_memOp_i_unsigned; // @[TOP.scala 46:31]
  wire [3:0] MEM_io_memOp_i_length; // @[TOP.scala 46:31]
  wire [63:0] MEM_io_memOp_i_addr; // @[TOP.scala 46:31]
  wire [63:0] MEM_io_memOp_i_sdata; // @[TOP.scala 46:31]
  wire  MEM_io_writeOp_o_rf_wen; // @[TOP.scala 46:31]
  wire [4:0] MEM_io_writeOp_o_rf_rd; // @[TOP.scala 46:31]
  wire [63:0] MEM_io_writeOp_o_rf_wdata; // @[TOP.scala 46:31]
  wire  MEM_io_writeOp_o_csr_wen; // @[TOP.scala 46:31]
  wire [63:0] MEM_io_writeOp_o_csr_wdata; // @[TOP.scala 46:31]
  wire [11:0] MEM_io_writeOp_o_csr_waddr; // @[TOP.scala 46:31]
  wire [11:0] MEM_io_mem_fwd_o_csr_addr; // @[TOP.scala 46:31]
  wire [63:0] MEM_io_mem_fwd_o_csr_wdata; // @[TOP.scala 46:31]
  wire [4:0] MEM_io_mem_fwd_o_rf_rd; // @[TOP.scala 46:31]
  wire [63:0] MEM_io_mem_fwd_o_rf_wdata; // @[TOP.scala 46:31]
  wire [31:0] MEM_io_dcache_insert_i_blocks_0; // @[TOP.scala 46:31]
  wire [31:0] MEM_io_dcache_insert_i_blocks_1; // @[TOP.scala 46:31]
  wire [31:0] MEM_io_dcache_insert_i_blocks_2; // @[TOP.scala 46:31]
  wire [31:0] MEM_io_dcache_insert_i_blocks_3; // @[TOP.scala 46:31]
  wire [7:0] MEM_io_dcache_insert_i_index; // @[TOP.scala 46:31]
  wire [19:0] MEM_io_dcache_insert_i_tag; // @[TOP.scala 46:31]
  wire  MEM_io_dcache_miss_o_miss; // @[TOP.scala 46:31]
  wire [63:0] MEM_io_dcache_miss_o_addr; // @[TOP.scala 46:31]
  wire [63:0] MEM_io_nr_dcache_hit_o; // @[TOP.scala 46:31]
  wire [63:0] MEM_io_nr_load_o; // @[TOP.scala 46:31]
  wire  MEM_io_stall_req_o; // @[TOP.scala 46:31]
  wire  MEM_io_debug_i_exit; // @[TOP.scala 46:31]
  wire [63:0] MEM_io_debug_i_a0; // @[TOP.scala 46:31]
  wire [63:0] MEM_io_debug_i_pc; // @[TOP.scala 46:31]
  wire [31:0] MEM_io_debug_i_inst; // @[TOP.scala 46:31]
  wire  MEM_io_debug_o_exit; // @[TOP.scala 46:31]
  wire [63:0] MEM_io_debug_o_a0; // @[TOP.scala 46:31]
  wire [63:0] MEM_io_debug_o_pc; // @[TOP.scala 46:31]
  wire [31:0] MEM_io_debug_o_inst; // @[TOP.scala 46:31]
  wire  WB_io_writeOp_i_rf_wen; // @[TOP.scala 47:31]
  wire [4:0] WB_io_writeOp_i_rf_rd; // @[TOP.scala 47:31]
  wire [63:0] WB_io_writeOp_i_rf_wdata; // @[TOP.scala 47:31]
  wire  WB_io_writeOp_i_csr_wen; // @[TOP.scala 47:31]
  wire [63:0] WB_io_writeOp_i_csr_wdata; // @[TOP.scala 47:31]
  wire [11:0] WB_io_writeOp_i_csr_waddr; // @[TOP.scala 47:31]
  wire  WB_io_writeOp_o_rf_wen; // @[TOP.scala 47:31]
  wire [4:0] WB_io_writeOp_o_rf_rd; // @[TOP.scala 47:31]
  wire [63:0] WB_io_writeOp_o_rf_wdata; // @[TOP.scala 47:31]
  wire  WB_io_writeOp_o_csr_wen; // @[TOP.scala 47:31]
  wire [63:0] WB_io_writeOp_o_csr_wdata; // @[TOP.scala 47:31]
  wire [11:0] WB_io_writeOp_o_csr_waddr; // @[TOP.scala 47:31]
  wire [11:0] WB_io_wb_fwd_o_csr_addr; // @[TOP.scala 47:31]
  wire [63:0] WB_io_wb_fwd_o_csr_wdata; // @[TOP.scala 47:31]
  wire [4:0] WB_io_wb_fwd_o_rf_rd; // @[TOP.scala 47:31]
  wire [63:0] WB_io_wb_fwd_o_rf_wdata; // @[TOP.scala 47:31]
  wire  WB_io_debug_i_exit; // @[TOP.scala 47:31]
  wire [63:0] WB_io_debug_i_a0; // @[TOP.scala 47:31]
  wire [63:0] WB_io_debug_i_pc; // @[TOP.scala 47:31]
  wire [31:0] WB_io_debug_i_inst; // @[TOP.scala 47:31]
  wire  Regfile_clock; // @[TOP.scala 48:31]
  wire  Regfile_reset; // @[TOP.scala 48:31]
  wire [4:0] Regfile_io_readRfOp_i_rs1; // @[TOP.scala 48:31]
  wire [4:0] Regfile_io_readRfOp_i_rs2; // @[TOP.scala 48:31]
  wire  Regfile_io_writeRfOp_i_wen; // @[TOP.scala 48:31]
  wire [4:0] Regfile_io_writeRfOp_i_rd; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_writeRfOp_i_wdata; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_readRes_o_rs1Val; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_readRes_o_rs2Val; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_readRes_o_a0; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_0; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_1; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_2; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_3; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_4; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_5; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_6; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_7; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_8; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_9; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_10; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_11; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_12; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_13; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_14; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_15; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_16; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_17; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_18; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_19; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_20; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_21; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_22; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_23; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_24; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_25; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_26; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_27; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_28; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_29; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_30; // @[TOP.scala 48:31]
  wire [63:0] Regfile_io_regs_o_31; // @[TOP.scala 48:31]
  wire  Csr_clock; // @[TOP.scala 49:31]
  wire  Csr_reset; // @[TOP.scala 49:31]
  wire [11:0] Csr_io_csrAddr_i; // @[TOP.scala 49:31]
  wire  Csr_io_writeOp_i_wen; // @[TOP.scala 49:31]
  wire [63:0] Csr_io_writeOp_i_wdata; // @[TOP.scala 49:31]
  wire [11:0] Csr_io_writeOp_i_waddr; // @[TOP.scala 49:31]
  wire [63:0] Csr_io_csrData_o_csrVal; // @[TOP.scala 49:31]
  wire [63:0] Csr_io_csrData_o_epc; // @[TOP.scala 49:31]
  wire [63:0] Csr_io_csrData_o_tvec; // @[TOP.scala 49:31]
  wire [63:0] Csr_io_csrData_o_cause; // @[TOP.scala 49:31]
  wire [63:0] Csr_io_csrData_o_status; // @[TOP.scala 49:31]
  wire  Main_Memory_clock; // @[TOP.scala 50:31]
  wire  Main_Memory_reset; // @[TOP.scala 50:31]
  wire  Main_Memory_io_memOp_i_is_load; // @[TOP.scala 50:31]
  wire  Main_Memory_io_memOp_i_is_store; // @[TOP.scala 50:31]
  wire [3:0] Main_Memory_io_memOp_i_length; // @[TOP.scala 50:31]
  wire [63:0] Main_Memory_io_memOp_i_addr; // @[TOP.scala 50:31]
  wire [63:0] Main_Memory_io_memOp_i_sdata; // @[TOP.scala 50:31]
  wire  Main_Memory_io_dcache_miss_i_miss; // @[TOP.scala 50:31]
  wire [63:0] Main_Memory_io_dcache_miss_i_addr; // @[TOP.scala 50:31]
  wire  Main_Memory_io_icache_miss_i_miss; // @[TOP.scala 50:31]
  wire [63:0] Main_Memory_io_icache_miss_i_pc; // @[TOP.scala 50:31]
  wire [31:0] Main_Memory_io_dcache_insert_o_blocks_0; // @[TOP.scala 50:31]
  wire [31:0] Main_Memory_io_dcache_insert_o_blocks_1; // @[TOP.scala 50:31]
  wire [31:0] Main_Memory_io_dcache_insert_o_blocks_2; // @[TOP.scala 50:31]
  wire [31:0] Main_Memory_io_dcache_insert_o_blocks_3; // @[TOP.scala 50:31]
  wire [7:0] Main_Memory_io_dcache_insert_o_index; // @[TOP.scala 50:31]
  wire [19:0] Main_Memory_io_dcache_insert_o_tag; // @[TOP.scala 50:31]
  wire  Main_Memory_io_icache_insert_o_valid; // @[TOP.scala 50:31]
  wire [31:0] Main_Memory_io_icache_insert_o_insts_0; // @[TOP.scala 50:31]
  wire [31:0] Main_Memory_io_icache_insert_o_insts_1; // @[TOP.scala 50:31]
  wire [31:0] Main_Memory_io_icache_insert_o_insts_2; // @[TOP.scala 50:31]
  wire [31:0] Main_Memory_io_icache_insert_o_insts_3; // @[TOP.scala 50:31]
  wire [7:0] Main_Memory_io_icache_insert_o_index; // @[TOP.scala 50:31]
  wire [19:0] Main_Memory_io_icache_insert_o_tag; // @[TOP.scala 50:31]
  wire  Control_io_if_stall_req_i; // @[TOP.scala 51:31]
  wire  Control_io_id_stall_req_i; // @[TOP.scala 51:31]
  wire  Control_io_mem_stall_req_i; // @[TOP.scala 51:31]
  wire  Control_io_id_flush_req_i; // @[TOP.scala 51:31]
  wire [4:0] Control_io_stall_o; // @[TOP.scala 51:31]
  wire [4:0] Control_io_flush_o; // @[TOP.scala 51:31]
  wire  IF_ID_clock; // @[TOP.scala 54:27]
  wire  IF_ID_reset; // @[TOP.scala 54:27]
  wire  IF_ID_io_ctrl_i_stall; // @[TOP.scala 54:27]
  wire  IF_ID_io_ctrl_i_flush; // @[TOP.scala 54:27]
  wire [31:0] IF_ID_io_inst_i; // @[TOP.scala 54:27]
  wire [63:0] IF_ID_io_pc_i; // @[TOP.scala 54:27]
  wire [31:0] IF_ID_io_inst_o; // @[TOP.scala 54:27]
  wire [63:0] IF_ID_io_pc_o; // @[TOP.scala 54:27]
  wire  IF_ID_io_id_is_stalled_o; // @[TOP.scala 54:27]
  wire  IF_ID_io_predict_i_is_branch; // @[TOP.scala 54:27]
  wire [63:0] IF_ID_io_predict_i_pc; // @[TOP.scala 54:27]
  wire [11:0] IF_ID_io_predict_i_index; // @[TOP.scala 54:27]
  wire  IF_ID_io_predict_i_predict_taken; // @[TOP.scala 54:27]
  wire [63:0] IF_ID_io_predict_i_predict_target; // @[TOP.scala 54:27]
  wire  IF_ID_io_predict_o_is_branch; // @[TOP.scala 54:27]
  wire [63:0] IF_ID_io_predict_o_pc; // @[TOP.scala 54:27]
  wire [11:0] IF_ID_io_predict_o_index; // @[TOP.scala 54:27]
  wire  IF_ID_io_predict_o_predict_taken; // @[TOP.scala 54:27]
  wire [63:0] IF_ID_io_predict_o_predict_target; // @[TOP.scala 54:27]
  wire  ID_EX_clock; // @[TOP.scala 55:27]
  wire  ID_EX_reset; // @[TOP.scala 55:27]
  wire  ID_EX_io_ctrl_i_stall; // @[TOP.scala 55:27]
  wire  ID_EX_io_ctrl_i_flush; // @[TOP.scala 55:27]
  wire  ID_EX_io_decInfo_i_writeOp_rf_wen; // @[TOP.scala 55:27]
  wire [4:0] ID_EX_io_decInfo_i_writeOp_rf_rd; // @[TOP.scala 55:27]
  wire  ID_EX_io_decInfo_i_writeOp_csr_wen; // @[TOP.scala 55:27]
  wire [63:0] ID_EX_io_decInfo_i_writeOp_csr_wdata; // @[TOP.scala 55:27]
  wire [11:0] ID_EX_io_decInfo_i_writeOp_csr_waddr; // @[TOP.scala 55:27]
  wire [63:0] ID_EX_io_decInfo_i_aluOp_src1; // @[TOP.scala 55:27]
  wire [63:0] ID_EX_io_decInfo_i_aluOp_src2; // @[TOP.scala 55:27]
  wire [4:0] ID_EX_io_decInfo_i_aluOp_opt; // @[TOP.scala 55:27]
  wire  ID_EX_io_decInfo_i_memOp_is_load; // @[TOP.scala 55:27]
  wire  ID_EX_io_decInfo_i_memOp_is_store; // @[TOP.scala 55:27]
  wire  ID_EX_io_decInfo_i_memOp_unsigned; // @[TOP.scala 55:27]
  wire [3:0] ID_EX_io_decInfo_i_memOp_length; // @[TOP.scala 55:27]
  wire [63:0] ID_EX_io_decInfo_i_memOp_sdata; // @[TOP.scala 55:27]
  wire  ID_EX_io_debug_i_exit; // @[TOP.scala 55:27]
  wire [63:0] ID_EX_io_debug_i_a0; // @[TOP.scala 55:27]
  wire [63:0] ID_EX_io_debug_i_pc; // @[TOP.scala 55:27]
  wire [31:0] ID_EX_io_debug_i_inst; // @[TOP.scala 55:27]
  wire  ID_EX_io_decInfo_o_writeOp_rf_wen; // @[TOP.scala 55:27]
  wire [4:0] ID_EX_io_decInfo_o_writeOp_rf_rd; // @[TOP.scala 55:27]
  wire  ID_EX_io_decInfo_o_writeOp_csr_wen; // @[TOP.scala 55:27]
  wire [63:0] ID_EX_io_decInfo_o_writeOp_csr_wdata; // @[TOP.scala 55:27]
  wire [11:0] ID_EX_io_decInfo_o_writeOp_csr_waddr; // @[TOP.scala 55:27]
  wire [63:0] ID_EX_io_decInfo_o_aluOp_src1; // @[TOP.scala 55:27]
  wire [63:0] ID_EX_io_decInfo_o_aluOp_src2; // @[TOP.scala 55:27]
  wire [4:0] ID_EX_io_decInfo_o_aluOp_opt; // @[TOP.scala 55:27]
  wire  ID_EX_io_decInfo_o_memOp_is_load; // @[TOP.scala 55:27]
  wire  ID_EX_io_decInfo_o_memOp_is_store; // @[TOP.scala 55:27]
  wire  ID_EX_io_decInfo_o_memOp_unsigned; // @[TOP.scala 55:27]
  wire [3:0] ID_EX_io_decInfo_o_memOp_length; // @[TOP.scala 55:27]
  wire [63:0] ID_EX_io_decInfo_o_memOp_sdata; // @[TOP.scala 55:27]
  wire  ID_EX_io_debug_o_exit; // @[TOP.scala 55:27]
  wire [63:0] ID_EX_io_debug_o_a0; // @[TOP.scala 55:27]
  wire [63:0] ID_EX_io_debug_o_pc; // @[TOP.scala 55:27]
  wire [31:0] ID_EX_io_debug_o_inst; // @[TOP.scala 55:27]
  wire  EX_MEM_clock; // @[TOP.scala 56:27]
  wire  EX_MEM_reset; // @[TOP.scala 56:27]
  wire  EX_MEM_io_ctrl_i_stall; // @[TOP.scala 56:27]
  wire  EX_MEM_io_ctrl_i_flush; // @[TOP.scala 56:27]
  wire  EX_MEM_io_writeOp_i_rf_wen; // @[TOP.scala 56:27]
  wire [4:0] EX_MEM_io_writeOp_i_rf_rd; // @[TOP.scala 56:27]
  wire [63:0] EX_MEM_io_writeOp_i_rf_wdata; // @[TOP.scala 56:27]
  wire  EX_MEM_io_writeOp_i_csr_wen; // @[TOP.scala 56:27]
  wire [63:0] EX_MEM_io_writeOp_i_csr_wdata; // @[TOP.scala 56:27]
  wire [11:0] EX_MEM_io_writeOp_i_csr_waddr; // @[TOP.scala 56:27]
  wire  EX_MEM_io_memOp_i_is_load; // @[TOP.scala 56:27]
  wire  EX_MEM_io_memOp_i_is_store; // @[TOP.scala 56:27]
  wire  EX_MEM_io_memOp_i_unsigned; // @[TOP.scala 56:27]
  wire [3:0] EX_MEM_io_memOp_i_length; // @[TOP.scala 56:27]
  wire [63:0] EX_MEM_io_memOp_i_addr; // @[TOP.scala 56:27]
  wire [63:0] EX_MEM_io_memOp_i_sdata; // @[TOP.scala 56:27]
  wire  EX_MEM_io_debug_i_exit; // @[TOP.scala 56:27]
  wire [63:0] EX_MEM_io_debug_i_a0; // @[TOP.scala 56:27]
  wire [63:0] EX_MEM_io_debug_i_pc; // @[TOP.scala 56:27]
  wire [31:0] EX_MEM_io_debug_i_inst; // @[TOP.scala 56:27]
  wire  EX_MEM_io_writeOp_o_rf_wen; // @[TOP.scala 56:27]
  wire [4:0] EX_MEM_io_writeOp_o_rf_rd; // @[TOP.scala 56:27]
  wire [63:0] EX_MEM_io_writeOp_o_rf_wdata; // @[TOP.scala 56:27]
  wire  EX_MEM_io_writeOp_o_csr_wen; // @[TOP.scala 56:27]
  wire [63:0] EX_MEM_io_writeOp_o_csr_wdata; // @[TOP.scala 56:27]
  wire [11:0] EX_MEM_io_writeOp_o_csr_waddr; // @[TOP.scala 56:27]
  wire  EX_MEM_io_memOp_o_is_load; // @[TOP.scala 56:27]
  wire  EX_MEM_io_memOp_o_is_store; // @[TOP.scala 56:27]
  wire  EX_MEM_io_memOp_o_unsigned; // @[TOP.scala 56:27]
  wire [3:0] EX_MEM_io_memOp_o_length; // @[TOP.scala 56:27]
  wire [63:0] EX_MEM_io_memOp_o_addr; // @[TOP.scala 56:27]
  wire [63:0] EX_MEM_io_memOp_o_sdata; // @[TOP.scala 56:27]
  wire  EX_MEM_io_debug_o_exit; // @[TOP.scala 56:27]
  wire [63:0] EX_MEM_io_debug_o_a0; // @[TOP.scala 56:27]
  wire [63:0] EX_MEM_io_debug_o_pc; // @[TOP.scala 56:27]
  wire [31:0] EX_MEM_io_debug_o_inst; // @[TOP.scala 56:27]
  wire  MEM_WB_clock; // @[TOP.scala 57:27]
  wire  MEM_WB_reset; // @[TOP.scala 57:27]
  wire  MEM_WB_io_ctrl_i_stall; // @[TOP.scala 57:27]
  wire  MEM_WB_io_ctrl_i_flush; // @[TOP.scala 57:27]
  wire  MEM_WB_io_writeOp_i_rf_wen; // @[TOP.scala 57:27]
  wire [4:0] MEM_WB_io_writeOp_i_rf_rd; // @[TOP.scala 57:27]
  wire [63:0] MEM_WB_io_writeOp_i_rf_wdata; // @[TOP.scala 57:27]
  wire  MEM_WB_io_writeOp_i_csr_wen; // @[TOP.scala 57:27]
  wire [63:0] MEM_WB_io_writeOp_i_csr_wdata; // @[TOP.scala 57:27]
  wire [11:0] MEM_WB_io_writeOp_i_csr_waddr; // @[TOP.scala 57:27]
  wire  MEM_WB_io_debug_i_exit; // @[TOP.scala 57:27]
  wire [63:0] MEM_WB_io_debug_i_a0; // @[TOP.scala 57:27]
  wire [63:0] MEM_WB_io_debug_i_pc; // @[TOP.scala 57:27]
  wire [31:0] MEM_WB_io_debug_i_inst; // @[TOP.scala 57:27]
  wire  MEM_WB_io_debug_o_exit; // @[TOP.scala 57:27]
  wire [63:0] MEM_WB_io_debug_o_a0; // @[TOP.scala 57:27]
  wire [63:0] MEM_WB_io_debug_o_pc; // @[TOP.scala 57:27]
  wire [31:0] MEM_WB_io_debug_o_inst; // @[TOP.scala 57:27]
  wire  MEM_WB_io_writeOp_o_rf_wen; // @[TOP.scala 57:27]
  wire [4:0] MEM_WB_io_writeOp_o_rf_rd; // @[TOP.scala 57:27]
  wire [63:0] MEM_WB_io_writeOp_o_rf_wdata; // @[TOP.scala 57:27]
  wire  MEM_WB_io_writeOp_o_csr_wen; // @[TOP.scala 57:27]
  wire [63:0] MEM_WB_io_writeOp_o_csr_wdata; // @[TOP.scala 57:27]
  wire [11:0] MEM_WB_io_writeOp_o_csr_waddr; // @[TOP.scala 57:27]
  IF IF ( // @[TOP.scala 43:31]
    .clock(IF_clock),
    .reset(IF_reset),
    .io_ctrl_i_stall(IF_io_ctrl_i_stall),
    .io_pc_o(IF_io_pc_o),
    .io_inst_o(IF_io_inst_o),
    .io_predict_i_is_branch(IF_io_predict_i_is_branch),
    .io_predict_i_pc(IF_io_predict_i_pc),
    .io_predict_i_index(IF_io_predict_i_index),
    .io_predict_i_target(IF_io_predict_i_target),
    .io_predict_i_taken(IF_io_predict_i_taken),
    .io_predict_i_predict_fail(IF_io_predict_i_predict_fail),
    .io_predict_o_is_branch(IF_io_predict_o_is_branch),
    .io_predict_o_pc(IF_io_predict_o_pc),
    .io_predict_o_index(IF_io_predict_o_index),
    .io_predict_o_predict_taken(IF_io_predict_o_predict_taken),
    .io_predict_o_predict_target(IF_io_predict_o_predict_target),
    .io_icache_insert_i_valid(IF_io_icache_insert_i_valid),
    .io_icache_insert_i_insts_0(IF_io_icache_insert_i_insts_0),
    .io_icache_insert_i_insts_1(IF_io_icache_insert_i_insts_1),
    .io_icache_insert_i_insts_2(IF_io_icache_insert_i_insts_2),
    .io_icache_insert_i_insts_3(IF_io_icache_insert_i_insts_3),
    .io_icache_insert_i_index(IF_io_icache_insert_i_index),
    .io_icache_insert_i_tag(IF_io_icache_insert_i_tag),
    .io_icache_miss_o_miss(IF_io_icache_miss_o_miss),
    .io_icache_miss_o_pc(IF_io_icache_miss_o_pc),
    .io_stall_req_o(IF_io_stall_req_o),
    .io_success_cnt_o(IF_io_success_cnt_o),
    .io_nr_icache_hit_o(IF_io_nr_icache_hit_o)
  );
  ID ID ( // @[TOP.scala 44:31]
    .clock(ID_clock),
    .reset(ID_reset),
    .io_mem_need_stall_i(ID_io_mem_need_stall_i),
    .io_is_stalled_i(ID_io_is_stalled_i),
    .io_inst_i(ID_io_inst_i),
    .io_fwd_i_ex_csr_addr(ID_io_fwd_i_ex_csr_addr),
    .io_fwd_i_ex_csr_wdata(ID_io_fwd_i_ex_csr_wdata),
    .io_fwd_i_ex_rf_rd(ID_io_fwd_i_ex_rf_rd),
    .io_fwd_i_ex_rf_wdata(ID_io_fwd_i_ex_rf_wdata),
    .io_fwd_i_mem_csr_addr(ID_io_fwd_i_mem_csr_addr),
    .io_fwd_i_mem_csr_wdata(ID_io_fwd_i_mem_csr_wdata),
    .io_fwd_i_mem_rf_rd(ID_io_fwd_i_mem_rf_rd),
    .io_fwd_i_mem_rf_wdata(ID_io_fwd_i_mem_rf_wdata),
    .io_fwd_i_wb_csr_addr(ID_io_fwd_i_wb_csr_addr),
    .io_fwd_i_wb_csr_wdata(ID_io_fwd_i_wb_csr_wdata),
    .io_fwd_i_wb_rf_rd(ID_io_fwd_i_wb_rf_rd),
    .io_fwd_i_wb_rf_wdata(ID_io_fwd_i_wb_rf_wdata),
    .io_fwd_i_prev_rd(ID_io_fwd_i_prev_rd),
    .io_fwd_i_prev_is_load(ID_io_fwd_i_prev_is_load),
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
    .io_decInfo_o_memOp_is_load(ID_io_decInfo_o_memOp_is_load),
    .io_decInfo_o_memOp_is_store(ID_io_decInfo_o_memOp_is_store),
    .io_decInfo_o_memOp_unsigned(ID_io_decInfo_o_memOp_unsigned),
    .io_decInfo_o_memOp_length(ID_io_decInfo_o_memOp_length),
    .io_decInfo_o_memOp_sdata(ID_io_decInfo_o_memOp_sdata),
    .io_stall_req_o(ID_io_stall_req_o),
    .io_flush_req_o(ID_io_flush_req_o),
    .io_debug_o_exit(ID_io_debug_o_exit),
    .io_debug_o_a0(ID_io_debug_o_a0),
    .io_debug_o_pc(ID_io_debug_o_pc),
    .io_debug_o_inst(ID_io_debug_o_inst),
    .io_nr_branch_o(ID_io_nr_branch_o),
    .io_nr_taken_o(ID_io_nr_taken_o),
    .io_predict_i_is_branch(ID_io_predict_i_is_branch),
    .io_predict_i_pc(ID_io_predict_i_pc),
    .io_predict_i_index(ID_io_predict_i_index),
    .io_predict_i_predict_taken(ID_io_predict_i_predict_taken),
    .io_predict_i_predict_target(ID_io_predict_i_predict_target),
    .io_predict_o_is_branch(ID_io_predict_o_is_branch),
    .io_predict_o_pc(ID_io_predict_o_pc),
    .io_predict_o_index(ID_io_predict_o_index),
    .io_predict_o_target(ID_io_predict_o_target),
    .io_predict_o_taken(ID_io_predict_o_taken),
    .io_predict_o_predict_fail(ID_io_predict_o_predict_fail)
  );
  EX EX ( // @[TOP.scala 45:31]
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
    .io_ex_fwd_o_csr_addr(EX_io_ex_fwd_o_csr_addr),
    .io_ex_fwd_o_csr_wdata(EX_io_ex_fwd_o_csr_wdata),
    .io_ex_fwd_o_rf_rd(EX_io_ex_fwd_o_rf_rd),
    .io_ex_fwd_o_rf_wdata(EX_io_ex_fwd_o_rf_wdata),
    .io_debug_i_exit(EX_io_debug_i_exit),
    .io_debug_i_a0(EX_io_debug_i_a0),
    .io_debug_i_pc(EX_io_debug_i_pc),
    .io_debug_i_inst(EX_io_debug_i_inst),
    .io_debug_o_exit(EX_io_debug_o_exit),
    .io_debug_o_a0(EX_io_debug_o_a0),
    .io_debug_o_pc(EX_io_debug_o_pc),
    .io_debug_o_inst(EX_io_debug_o_inst)
  );
  MEM MEM ( // @[TOP.scala 46:31]
    .clock(MEM_clock),
    .reset(MEM_reset),
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
    .io_writeOp_o_rf_wen(MEM_io_writeOp_o_rf_wen),
    .io_writeOp_o_rf_rd(MEM_io_writeOp_o_rf_rd),
    .io_writeOp_o_rf_wdata(MEM_io_writeOp_o_rf_wdata),
    .io_writeOp_o_csr_wen(MEM_io_writeOp_o_csr_wen),
    .io_writeOp_o_csr_wdata(MEM_io_writeOp_o_csr_wdata),
    .io_writeOp_o_csr_waddr(MEM_io_writeOp_o_csr_waddr),
    .io_mem_fwd_o_csr_addr(MEM_io_mem_fwd_o_csr_addr),
    .io_mem_fwd_o_csr_wdata(MEM_io_mem_fwd_o_csr_wdata),
    .io_mem_fwd_o_rf_rd(MEM_io_mem_fwd_o_rf_rd),
    .io_mem_fwd_o_rf_wdata(MEM_io_mem_fwd_o_rf_wdata),
    .io_dcache_insert_i_blocks_0(MEM_io_dcache_insert_i_blocks_0),
    .io_dcache_insert_i_blocks_1(MEM_io_dcache_insert_i_blocks_1),
    .io_dcache_insert_i_blocks_2(MEM_io_dcache_insert_i_blocks_2),
    .io_dcache_insert_i_blocks_3(MEM_io_dcache_insert_i_blocks_3),
    .io_dcache_insert_i_index(MEM_io_dcache_insert_i_index),
    .io_dcache_insert_i_tag(MEM_io_dcache_insert_i_tag),
    .io_dcache_miss_o_miss(MEM_io_dcache_miss_o_miss),
    .io_dcache_miss_o_addr(MEM_io_dcache_miss_o_addr),
    .io_nr_dcache_hit_o(MEM_io_nr_dcache_hit_o),
    .io_nr_load_o(MEM_io_nr_load_o),
    .io_stall_req_o(MEM_io_stall_req_o),
    .io_debug_i_exit(MEM_io_debug_i_exit),
    .io_debug_i_a0(MEM_io_debug_i_a0),
    .io_debug_i_pc(MEM_io_debug_i_pc),
    .io_debug_i_inst(MEM_io_debug_i_inst),
    .io_debug_o_exit(MEM_io_debug_o_exit),
    .io_debug_o_a0(MEM_io_debug_o_a0),
    .io_debug_o_pc(MEM_io_debug_o_pc),
    .io_debug_o_inst(MEM_io_debug_o_inst)
  );
  WB WB ( // @[TOP.scala 47:31]
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
    .io_wb_fwd_o_csr_addr(WB_io_wb_fwd_o_csr_addr),
    .io_wb_fwd_o_csr_wdata(WB_io_wb_fwd_o_csr_wdata),
    .io_wb_fwd_o_rf_rd(WB_io_wb_fwd_o_rf_rd),
    .io_wb_fwd_o_rf_wdata(WB_io_wb_fwd_o_rf_wdata),
    .io_debug_i_exit(WB_io_debug_i_exit),
    .io_debug_i_a0(WB_io_debug_i_a0),
    .io_debug_i_pc(WB_io_debug_i_pc),
    .io_debug_i_inst(WB_io_debug_i_inst)
  );
  Regfile Regfile ( // @[TOP.scala 48:31]
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
  CSR Csr ( // @[TOP.scala 49:31]
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
  MAIN_MEMORY Main_Memory ( // @[TOP.scala 50:31]
    .clock(Main_Memory_clock),
    .reset(Main_Memory_reset),
    .io_memOp_i_is_load(Main_Memory_io_memOp_i_is_load),
    .io_memOp_i_is_store(Main_Memory_io_memOp_i_is_store),
    .io_memOp_i_length(Main_Memory_io_memOp_i_length),
    .io_memOp_i_addr(Main_Memory_io_memOp_i_addr),
    .io_memOp_i_sdata(Main_Memory_io_memOp_i_sdata),
    .io_dcache_miss_i_miss(Main_Memory_io_dcache_miss_i_miss),
    .io_dcache_miss_i_addr(Main_Memory_io_dcache_miss_i_addr),
    .io_icache_miss_i_miss(Main_Memory_io_icache_miss_i_miss),
    .io_icache_miss_i_pc(Main_Memory_io_icache_miss_i_pc),
    .io_dcache_insert_o_blocks_0(Main_Memory_io_dcache_insert_o_blocks_0),
    .io_dcache_insert_o_blocks_1(Main_Memory_io_dcache_insert_o_blocks_1),
    .io_dcache_insert_o_blocks_2(Main_Memory_io_dcache_insert_o_blocks_2),
    .io_dcache_insert_o_blocks_3(Main_Memory_io_dcache_insert_o_blocks_3),
    .io_dcache_insert_o_index(Main_Memory_io_dcache_insert_o_index),
    .io_dcache_insert_o_tag(Main_Memory_io_dcache_insert_o_tag),
    .io_icache_insert_o_valid(Main_Memory_io_icache_insert_o_valid),
    .io_icache_insert_o_insts_0(Main_Memory_io_icache_insert_o_insts_0),
    .io_icache_insert_o_insts_1(Main_Memory_io_icache_insert_o_insts_1),
    .io_icache_insert_o_insts_2(Main_Memory_io_icache_insert_o_insts_2),
    .io_icache_insert_o_insts_3(Main_Memory_io_icache_insert_o_insts_3),
    .io_icache_insert_o_index(Main_Memory_io_icache_insert_o_index),
    .io_icache_insert_o_tag(Main_Memory_io_icache_insert_o_tag)
  );
  CONTROL Control ( // @[TOP.scala 51:31]
    .io_if_stall_req_i(Control_io_if_stall_req_i),
    .io_id_stall_req_i(Control_io_id_stall_req_i),
    .io_mem_stall_req_i(Control_io_mem_stall_req_i),
    .io_id_flush_req_i(Control_io_id_flush_req_i),
    .io_stall_o(Control_io_stall_o),
    .io_flush_o(Control_io_flush_o)
  );
  IF_ID IF_ID ( // @[TOP.scala 54:27]
    .clock(IF_ID_clock),
    .reset(IF_ID_reset),
    .io_ctrl_i_stall(IF_ID_io_ctrl_i_stall),
    .io_ctrl_i_flush(IF_ID_io_ctrl_i_flush),
    .io_inst_i(IF_ID_io_inst_i),
    .io_pc_i(IF_ID_io_pc_i),
    .io_inst_o(IF_ID_io_inst_o),
    .io_pc_o(IF_ID_io_pc_o),
    .io_id_is_stalled_o(IF_ID_io_id_is_stalled_o),
    .io_predict_i_is_branch(IF_ID_io_predict_i_is_branch),
    .io_predict_i_pc(IF_ID_io_predict_i_pc),
    .io_predict_i_index(IF_ID_io_predict_i_index),
    .io_predict_i_predict_taken(IF_ID_io_predict_i_predict_taken),
    .io_predict_i_predict_target(IF_ID_io_predict_i_predict_target),
    .io_predict_o_is_branch(IF_ID_io_predict_o_is_branch),
    .io_predict_o_pc(IF_ID_io_predict_o_pc),
    .io_predict_o_index(IF_ID_io_predict_o_index),
    .io_predict_o_predict_taken(IF_ID_io_predict_o_predict_taken),
    .io_predict_o_predict_target(IF_ID_io_predict_o_predict_target)
  );
  ID_EX ID_EX ( // @[TOP.scala 55:27]
    .clock(ID_EX_clock),
    .reset(ID_EX_reset),
    .io_ctrl_i_stall(ID_EX_io_ctrl_i_stall),
    .io_ctrl_i_flush(ID_EX_io_ctrl_i_flush),
    .io_decInfo_i_writeOp_rf_wen(ID_EX_io_decInfo_i_writeOp_rf_wen),
    .io_decInfo_i_writeOp_rf_rd(ID_EX_io_decInfo_i_writeOp_rf_rd),
    .io_decInfo_i_writeOp_csr_wen(ID_EX_io_decInfo_i_writeOp_csr_wen),
    .io_decInfo_i_writeOp_csr_wdata(ID_EX_io_decInfo_i_writeOp_csr_wdata),
    .io_decInfo_i_writeOp_csr_waddr(ID_EX_io_decInfo_i_writeOp_csr_waddr),
    .io_decInfo_i_aluOp_src1(ID_EX_io_decInfo_i_aluOp_src1),
    .io_decInfo_i_aluOp_src2(ID_EX_io_decInfo_i_aluOp_src2),
    .io_decInfo_i_aluOp_opt(ID_EX_io_decInfo_i_aluOp_opt),
    .io_decInfo_i_memOp_is_load(ID_EX_io_decInfo_i_memOp_is_load),
    .io_decInfo_i_memOp_is_store(ID_EX_io_decInfo_i_memOp_is_store),
    .io_decInfo_i_memOp_unsigned(ID_EX_io_decInfo_i_memOp_unsigned),
    .io_decInfo_i_memOp_length(ID_EX_io_decInfo_i_memOp_length),
    .io_decInfo_i_memOp_sdata(ID_EX_io_decInfo_i_memOp_sdata),
    .io_debug_i_exit(ID_EX_io_debug_i_exit),
    .io_debug_i_a0(ID_EX_io_debug_i_a0),
    .io_debug_i_pc(ID_EX_io_debug_i_pc),
    .io_debug_i_inst(ID_EX_io_debug_i_inst),
    .io_decInfo_o_writeOp_rf_wen(ID_EX_io_decInfo_o_writeOp_rf_wen),
    .io_decInfo_o_writeOp_rf_rd(ID_EX_io_decInfo_o_writeOp_rf_rd),
    .io_decInfo_o_writeOp_csr_wen(ID_EX_io_decInfo_o_writeOp_csr_wen),
    .io_decInfo_o_writeOp_csr_wdata(ID_EX_io_decInfo_o_writeOp_csr_wdata),
    .io_decInfo_o_writeOp_csr_waddr(ID_EX_io_decInfo_o_writeOp_csr_waddr),
    .io_decInfo_o_aluOp_src1(ID_EX_io_decInfo_o_aluOp_src1),
    .io_decInfo_o_aluOp_src2(ID_EX_io_decInfo_o_aluOp_src2),
    .io_decInfo_o_aluOp_opt(ID_EX_io_decInfo_o_aluOp_opt),
    .io_decInfo_o_memOp_is_load(ID_EX_io_decInfo_o_memOp_is_load),
    .io_decInfo_o_memOp_is_store(ID_EX_io_decInfo_o_memOp_is_store),
    .io_decInfo_o_memOp_unsigned(ID_EX_io_decInfo_o_memOp_unsigned),
    .io_decInfo_o_memOp_length(ID_EX_io_decInfo_o_memOp_length),
    .io_decInfo_o_memOp_sdata(ID_EX_io_decInfo_o_memOp_sdata),
    .io_debug_o_exit(ID_EX_io_debug_o_exit),
    .io_debug_o_a0(ID_EX_io_debug_o_a0),
    .io_debug_o_pc(ID_EX_io_debug_o_pc),
    .io_debug_o_inst(ID_EX_io_debug_o_inst)
  );
  EX_MEM EX_MEM ( // @[TOP.scala 56:27]
    .clock(EX_MEM_clock),
    .reset(EX_MEM_reset),
    .io_ctrl_i_stall(EX_MEM_io_ctrl_i_stall),
    .io_ctrl_i_flush(EX_MEM_io_ctrl_i_flush),
    .io_writeOp_i_rf_wen(EX_MEM_io_writeOp_i_rf_wen),
    .io_writeOp_i_rf_rd(EX_MEM_io_writeOp_i_rf_rd),
    .io_writeOp_i_rf_wdata(EX_MEM_io_writeOp_i_rf_wdata),
    .io_writeOp_i_csr_wen(EX_MEM_io_writeOp_i_csr_wen),
    .io_writeOp_i_csr_wdata(EX_MEM_io_writeOp_i_csr_wdata),
    .io_writeOp_i_csr_waddr(EX_MEM_io_writeOp_i_csr_waddr),
    .io_memOp_i_is_load(EX_MEM_io_memOp_i_is_load),
    .io_memOp_i_is_store(EX_MEM_io_memOp_i_is_store),
    .io_memOp_i_unsigned(EX_MEM_io_memOp_i_unsigned),
    .io_memOp_i_length(EX_MEM_io_memOp_i_length),
    .io_memOp_i_addr(EX_MEM_io_memOp_i_addr),
    .io_memOp_i_sdata(EX_MEM_io_memOp_i_sdata),
    .io_debug_i_exit(EX_MEM_io_debug_i_exit),
    .io_debug_i_a0(EX_MEM_io_debug_i_a0),
    .io_debug_i_pc(EX_MEM_io_debug_i_pc),
    .io_debug_i_inst(EX_MEM_io_debug_i_inst),
    .io_writeOp_o_rf_wen(EX_MEM_io_writeOp_o_rf_wen),
    .io_writeOp_o_rf_rd(EX_MEM_io_writeOp_o_rf_rd),
    .io_writeOp_o_rf_wdata(EX_MEM_io_writeOp_o_rf_wdata),
    .io_writeOp_o_csr_wen(EX_MEM_io_writeOp_o_csr_wen),
    .io_writeOp_o_csr_wdata(EX_MEM_io_writeOp_o_csr_wdata),
    .io_writeOp_o_csr_waddr(EX_MEM_io_writeOp_o_csr_waddr),
    .io_memOp_o_is_load(EX_MEM_io_memOp_o_is_load),
    .io_memOp_o_is_store(EX_MEM_io_memOp_o_is_store),
    .io_memOp_o_unsigned(EX_MEM_io_memOp_o_unsigned),
    .io_memOp_o_length(EX_MEM_io_memOp_o_length),
    .io_memOp_o_addr(EX_MEM_io_memOp_o_addr),
    .io_memOp_o_sdata(EX_MEM_io_memOp_o_sdata),
    .io_debug_o_exit(EX_MEM_io_debug_o_exit),
    .io_debug_o_a0(EX_MEM_io_debug_o_a0),
    .io_debug_o_pc(EX_MEM_io_debug_o_pc),
    .io_debug_o_inst(EX_MEM_io_debug_o_inst)
  );
  MEM_WB MEM_WB ( // @[TOP.scala 57:27]
    .clock(MEM_WB_clock),
    .reset(MEM_WB_reset),
    .io_ctrl_i_stall(MEM_WB_io_ctrl_i_stall),
    .io_ctrl_i_flush(MEM_WB_io_ctrl_i_flush),
    .io_writeOp_i_rf_wen(MEM_WB_io_writeOp_i_rf_wen),
    .io_writeOp_i_rf_rd(MEM_WB_io_writeOp_i_rf_rd),
    .io_writeOp_i_rf_wdata(MEM_WB_io_writeOp_i_rf_wdata),
    .io_writeOp_i_csr_wen(MEM_WB_io_writeOp_i_csr_wen),
    .io_writeOp_i_csr_wdata(MEM_WB_io_writeOp_i_csr_wdata),
    .io_writeOp_i_csr_waddr(MEM_WB_io_writeOp_i_csr_waddr),
    .io_debug_i_exit(MEM_WB_io_debug_i_exit),
    .io_debug_i_a0(MEM_WB_io_debug_i_a0),
    .io_debug_i_pc(MEM_WB_io_debug_i_pc),
    .io_debug_i_inst(MEM_WB_io_debug_i_inst),
    .io_debug_o_exit(MEM_WB_io_debug_o_exit),
    .io_debug_o_a0(MEM_WB_io_debug_o_a0),
    .io_debug_o_pc(MEM_WB_io_debug_o_pc),
    .io_debug_o_inst(MEM_WB_io_debug_o_inst),
    .io_writeOp_o_rf_wen(MEM_WB_io_writeOp_o_rf_wen),
    .io_writeOp_o_rf_rd(MEM_WB_io_writeOp_o_rf_rd),
    .io_writeOp_o_rf_wdata(MEM_WB_io_writeOp_o_rf_wdata),
    .io_writeOp_o_csr_wen(MEM_WB_io_writeOp_o_csr_wen),
    .io_writeOp_o_csr_wdata(MEM_WB_io_writeOp_o_csr_wdata),
    .io_writeOp_o_csr_waddr(MEM_WB_io_writeOp_o_csr_waddr)
  );
  assign io_csrData_csrVal = Csr_io_csrData_o_csrVal; // @[TOP.scala 127:17]
  assign io_csrData_epc = Csr_io_csrData_o_epc; // @[TOP.scala 127:17]
  assign io_csrData_tvec = Csr_io_csrData_o_tvec; // @[TOP.scala 127:17]
  assign io_csrData_cause = Csr_io_csrData_o_cause; // @[TOP.scala 127:17]
  assign io_csrData_status = Csr_io_csrData_o_status; // @[TOP.scala 127:17]
  assign io_stall_o = Control_io_stall_o; // @[TOP.scala 156:17]
  assign io_flush_o = Control_io_flush_o; // @[TOP.scala 157:17]
  assign io_regs_0 = Regfile_io_regs_o_0; // @[TOP.scala 126:17]
  assign io_regs_1 = Regfile_io_regs_o_1; // @[TOP.scala 126:17]
  assign io_regs_2 = Regfile_io_regs_o_2; // @[TOP.scala 126:17]
  assign io_regs_3 = Regfile_io_regs_o_3; // @[TOP.scala 126:17]
  assign io_regs_4 = Regfile_io_regs_o_4; // @[TOP.scala 126:17]
  assign io_regs_5 = Regfile_io_regs_o_5; // @[TOP.scala 126:17]
  assign io_regs_6 = Regfile_io_regs_o_6; // @[TOP.scala 126:17]
  assign io_regs_7 = Regfile_io_regs_o_7; // @[TOP.scala 126:17]
  assign io_regs_8 = Regfile_io_regs_o_8; // @[TOP.scala 126:17]
  assign io_regs_9 = Regfile_io_regs_o_9; // @[TOP.scala 126:17]
  assign io_regs_10 = Regfile_io_regs_o_10; // @[TOP.scala 126:17]
  assign io_regs_11 = Regfile_io_regs_o_11; // @[TOP.scala 126:17]
  assign io_regs_12 = Regfile_io_regs_o_12; // @[TOP.scala 126:17]
  assign io_regs_13 = Regfile_io_regs_o_13; // @[TOP.scala 126:17]
  assign io_regs_14 = Regfile_io_regs_o_14; // @[TOP.scala 126:17]
  assign io_regs_15 = Regfile_io_regs_o_15; // @[TOP.scala 126:17]
  assign io_regs_16 = Regfile_io_regs_o_16; // @[TOP.scala 126:17]
  assign io_regs_17 = Regfile_io_regs_o_17; // @[TOP.scala 126:17]
  assign io_regs_18 = Regfile_io_regs_o_18; // @[TOP.scala 126:17]
  assign io_regs_19 = Regfile_io_regs_o_19; // @[TOP.scala 126:17]
  assign io_regs_20 = Regfile_io_regs_o_20; // @[TOP.scala 126:17]
  assign io_regs_21 = Regfile_io_regs_o_21; // @[TOP.scala 126:17]
  assign io_regs_22 = Regfile_io_regs_o_22; // @[TOP.scala 126:17]
  assign io_regs_23 = Regfile_io_regs_o_23; // @[TOP.scala 126:17]
  assign io_regs_24 = Regfile_io_regs_o_24; // @[TOP.scala 126:17]
  assign io_regs_25 = Regfile_io_regs_o_25; // @[TOP.scala 126:17]
  assign io_regs_26 = Regfile_io_regs_o_26; // @[TOP.scala 126:17]
  assign io_regs_27 = Regfile_io_regs_o_27; // @[TOP.scala 126:17]
  assign io_regs_28 = Regfile_io_regs_o_28; // @[TOP.scala 126:17]
  assign io_regs_29 = Regfile_io_regs_o_29; // @[TOP.scala 126:17]
  assign io_regs_30 = Regfile_io_regs_o_30; // @[TOP.scala 126:17]
  assign io_regs_31 = Regfile_io_regs_o_31; // @[TOP.scala 126:17]
  assign io_pc_o = IF_io_pc_o; // @[TOP.scala 125:17]
  assign io_inst_o = IF_io_inst_o; // @[TOP.scala 124:17]
  assign io_o1 = WB_io_writeOp_o_rf_wdata; // @[TOP.scala 121:17]
  assign io_o2 = WB_io_writeOp_o_csr_wdata; // @[TOP.scala 122:17]
  assign io_statistics_o_branch_cnt = ID_io_nr_branch_o; // @[TOP.scala 159:37]
  assign io_statistics_o_taken_cnt = ID_io_nr_taken_o; // @[TOP.scala 160:37]
  assign io_statistics_o_icache_hit_cnt = IF_io_nr_icache_hit_o; // @[TOP.scala 162:37]
  assign io_statistics_o_dcache_hit_cnt = MEM_io_nr_dcache_hit_o; // @[TOP.scala 163:37]
  assign io_statistics_o_load_cnt = MEM_io_nr_load_o; // @[TOP.scala 164:37]
  assign io_statistics_o_bp_success_cnt = IF_io_success_cnt_o; // @[TOP.scala 161:37]
  assign IF_clock = clock;
  assign IF_reset = reset;
  assign IF_io_ctrl_i_stall = Control_io_stall_o[0]; // @[TOP.scala 133:51]
  assign IF_io_predict_i_is_branch = ID_io_predict_o_is_branch; // @[TOP.scala 60:25]
  assign IF_io_predict_i_pc = ID_io_predict_o_pc; // @[TOP.scala 60:25]
  assign IF_io_predict_i_index = ID_io_predict_o_index; // @[TOP.scala 60:25]
  assign IF_io_predict_i_target = ID_io_predict_o_target; // @[TOP.scala 60:25]
  assign IF_io_predict_i_taken = ID_io_predict_o_taken; // @[TOP.scala 60:25]
  assign IF_io_predict_i_predict_fail = ID_io_predict_o_predict_fail; // @[TOP.scala 60:25]
  assign IF_io_icache_insert_i_valid = Main_Memory_io_icache_insert_o_valid; // @[TOP.scala 61:29]
  assign IF_io_icache_insert_i_insts_0 = Main_Memory_io_icache_insert_o_insts_0; // @[TOP.scala 61:29]
  assign IF_io_icache_insert_i_insts_1 = Main_Memory_io_icache_insert_o_insts_1; // @[TOP.scala 61:29]
  assign IF_io_icache_insert_i_insts_2 = Main_Memory_io_icache_insert_o_insts_2; // @[TOP.scala 61:29]
  assign IF_io_icache_insert_i_insts_3 = Main_Memory_io_icache_insert_o_insts_3; // @[TOP.scala 61:29]
  assign IF_io_icache_insert_i_index = Main_Memory_io_icache_insert_o_index; // @[TOP.scala 61:29]
  assign IF_io_icache_insert_i_tag = Main_Memory_io_icache_insert_o_tag; // @[TOP.scala 61:29]
  assign ID_clock = clock;
  assign ID_reset = reset;
  assign ID_io_mem_need_stall_i = MEM_io_stall_req_o; // @[TOP.scala 81:29]
  assign ID_io_is_stalled_i = IF_ID_io_id_is_stalled_o; // @[TOP.scala 80:25]
  assign ID_io_inst_i = IF_ID_io_inst_o; // @[TOP.scala 75:25]
  assign ID_io_fwd_i_ex_csr_addr = EX_io_ex_fwd_o_csr_addr; // @[TOP.scala 85:23]
  assign ID_io_fwd_i_ex_csr_wdata = EX_io_ex_fwd_o_csr_wdata; // @[TOP.scala 85:23]
  assign ID_io_fwd_i_ex_rf_rd = EX_io_ex_fwd_o_rf_rd; // @[TOP.scala 85:23]
  assign ID_io_fwd_i_ex_rf_wdata = EX_io_ex_fwd_o_rf_wdata; // @[TOP.scala 85:23]
  assign ID_io_fwd_i_mem_csr_addr = MEM_io_mem_fwd_o_csr_addr; // @[TOP.scala 86:23]
  assign ID_io_fwd_i_mem_csr_wdata = MEM_io_mem_fwd_o_csr_wdata; // @[TOP.scala 86:23]
  assign ID_io_fwd_i_mem_rf_rd = MEM_io_mem_fwd_o_rf_rd; // @[TOP.scala 86:23]
  assign ID_io_fwd_i_mem_rf_wdata = MEM_io_mem_fwd_o_rf_wdata; // @[TOP.scala 86:23]
  assign ID_io_fwd_i_wb_csr_addr = WB_io_wb_fwd_o_csr_addr; // @[TOP.scala 87:23]
  assign ID_io_fwd_i_wb_csr_wdata = WB_io_wb_fwd_o_csr_wdata; // @[TOP.scala 87:23]
  assign ID_io_fwd_i_wb_rf_rd = WB_io_wb_fwd_o_rf_rd; // @[TOP.scala 87:23]
  assign ID_io_fwd_i_wb_rf_wdata = WB_io_wb_fwd_o_rf_wdata; // @[TOP.scala 87:23]
  assign ID_io_fwd_i_prev_rd = EX_io_writeOp_o_rf_rd; // @[TOP.scala 90:33]
  assign ID_io_fwd_i_prev_is_load = EX_io_memOp_o_is_load; // @[TOP.scala 89:33]
  assign ID_io_pc_i = IF_ID_io_pc_o; // @[TOP.scala 76:25]
  assign ID_io_rfData_i_rs1Val = Regfile_io_readRes_o_rs1Val; // @[TOP.scala 78:25]
  assign ID_io_rfData_i_rs2Val = Regfile_io_readRes_o_rs2Val; // @[TOP.scala 78:25]
  assign ID_io_rfData_i_a0 = Regfile_io_readRes_o_a0; // @[TOP.scala 78:25]
  assign ID_io_csrData_i_csrVal = Csr_io_csrData_o_csrVal; // @[TOP.scala 77:25]
  assign ID_io_csrData_i_epc = Csr_io_csrData_o_epc; // @[TOP.scala 77:25]
  assign ID_io_csrData_i_tvec = Csr_io_csrData_o_tvec; // @[TOP.scala 77:25]
  assign ID_io_predict_i_is_branch = IF_ID_io_predict_o_is_branch; // @[TOP.scala 79:25]
  assign ID_io_predict_i_pc = IF_ID_io_predict_o_pc; // @[TOP.scala 79:25]
  assign ID_io_predict_i_index = IF_ID_io_predict_o_index; // @[TOP.scala 79:25]
  assign ID_io_predict_i_predict_taken = IF_ID_io_predict_o_predict_taken; // @[TOP.scala 79:25]
  assign ID_io_predict_i_predict_target = IF_ID_io_predict_o_predict_target; // @[TOP.scala 79:25]
  assign EX_io_decInfo_i_writeOp_rf_wen = ID_EX_io_decInfo_o_writeOp_rf_wen; // @[TOP.scala 101:25]
  assign EX_io_decInfo_i_writeOp_rf_rd = ID_EX_io_decInfo_o_writeOp_rf_rd; // @[TOP.scala 101:25]
  assign EX_io_decInfo_i_writeOp_csr_wen = ID_EX_io_decInfo_o_writeOp_csr_wen; // @[TOP.scala 101:25]
  assign EX_io_decInfo_i_writeOp_csr_wdata = ID_EX_io_decInfo_o_writeOp_csr_wdata; // @[TOP.scala 101:25]
  assign EX_io_decInfo_i_writeOp_csr_waddr = ID_EX_io_decInfo_o_writeOp_csr_waddr; // @[TOP.scala 101:25]
  assign EX_io_decInfo_i_aluOp_src1 = ID_EX_io_decInfo_o_aluOp_src1; // @[TOP.scala 101:25]
  assign EX_io_decInfo_i_aluOp_src2 = ID_EX_io_decInfo_o_aluOp_src2; // @[TOP.scala 101:25]
  assign EX_io_decInfo_i_aluOp_opt = ID_EX_io_decInfo_o_aluOp_opt; // @[TOP.scala 101:25]
  assign EX_io_decInfo_i_memOp_is_load = ID_EX_io_decInfo_o_memOp_is_load; // @[TOP.scala 101:25]
  assign EX_io_decInfo_i_memOp_is_store = ID_EX_io_decInfo_o_memOp_is_store; // @[TOP.scala 101:25]
  assign EX_io_decInfo_i_memOp_unsigned = ID_EX_io_decInfo_o_memOp_unsigned; // @[TOP.scala 101:25]
  assign EX_io_decInfo_i_memOp_length = ID_EX_io_decInfo_o_memOp_length; // @[TOP.scala 101:25]
  assign EX_io_decInfo_i_memOp_sdata = ID_EX_io_decInfo_o_memOp_sdata; // @[TOP.scala 101:25]
  assign EX_io_debug_i_exit = ID_EX_io_debug_o_exit; // @[TOP.scala 168:21]
  assign EX_io_debug_i_a0 = ID_EX_io_debug_o_a0; // @[TOP.scala 168:21]
  assign EX_io_debug_i_pc = ID_EX_io_debug_o_pc; // @[TOP.scala 168:21]
  assign EX_io_debug_i_inst = ID_EX_io_debug_o_inst; // @[TOP.scala 168:21]
  assign MEM_clock = clock;
  assign MEM_reset = reset;
  assign MEM_io_writeOp_i_rf_wen = EX_MEM_io_writeOp_o_rf_wen; // @[TOP.scala 108:25]
  assign MEM_io_writeOp_i_rf_rd = EX_MEM_io_writeOp_o_rf_rd; // @[TOP.scala 108:25]
  assign MEM_io_writeOp_i_rf_wdata = EX_MEM_io_writeOp_o_rf_wdata; // @[TOP.scala 108:25]
  assign MEM_io_writeOp_i_csr_wen = EX_MEM_io_writeOp_o_csr_wen; // @[TOP.scala 108:25]
  assign MEM_io_writeOp_i_csr_wdata = EX_MEM_io_writeOp_o_csr_wdata; // @[TOP.scala 108:25]
  assign MEM_io_writeOp_i_csr_waddr = EX_MEM_io_writeOp_o_csr_waddr; // @[TOP.scala 108:25]
  assign MEM_io_memOp_i_is_load = EX_MEM_io_memOp_o_is_load; // @[TOP.scala 109:25]
  assign MEM_io_memOp_i_is_store = EX_MEM_io_memOp_o_is_store; // @[TOP.scala 109:25]
  assign MEM_io_memOp_i_unsigned = EX_MEM_io_memOp_o_unsigned; // @[TOP.scala 109:25]
  assign MEM_io_memOp_i_length = EX_MEM_io_memOp_o_length; // @[TOP.scala 109:25]
  assign MEM_io_memOp_i_addr = EX_MEM_io_memOp_o_addr; // @[TOP.scala 109:25]
  assign MEM_io_memOp_i_sdata = EX_MEM_io_memOp_o_sdata; // @[TOP.scala 109:25]
  assign MEM_io_dcache_insert_i_blocks_0 = Main_Memory_io_dcache_insert_o_blocks_0; // @[TOP.scala 110:30]
  assign MEM_io_dcache_insert_i_blocks_1 = Main_Memory_io_dcache_insert_o_blocks_1; // @[TOP.scala 110:30]
  assign MEM_io_dcache_insert_i_blocks_2 = Main_Memory_io_dcache_insert_o_blocks_2; // @[TOP.scala 110:30]
  assign MEM_io_dcache_insert_i_blocks_3 = Main_Memory_io_dcache_insert_o_blocks_3; // @[TOP.scala 110:30]
  assign MEM_io_dcache_insert_i_index = Main_Memory_io_dcache_insert_o_index; // @[TOP.scala 110:30]
  assign MEM_io_dcache_insert_i_tag = Main_Memory_io_dcache_insert_o_tag; // @[TOP.scala 110:30]
  assign MEM_io_debug_i_exit = EX_MEM_io_debug_o_exit; // @[TOP.scala 169:21]
  assign MEM_io_debug_i_a0 = EX_MEM_io_debug_o_a0; // @[TOP.scala 169:21]
  assign MEM_io_debug_i_pc = EX_MEM_io_debug_o_pc; // @[TOP.scala 169:21]
  assign MEM_io_debug_i_inst = EX_MEM_io_debug_o_inst; // @[TOP.scala 169:21]
  assign WB_io_writeOp_i_rf_wen = MEM_WB_io_writeOp_o_rf_wen; // @[TOP.scala 118:25]
  assign WB_io_writeOp_i_rf_rd = MEM_WB_io_writeOp_o_rf_rd; // @[TOP.scala 118:25]
  assign WB_io_writeOp_i_rf_wdata = MEM_WB_io_writeOp_o_rf_wdata; // @[TOP.scala 118:25]
  assign WB_io_writeOp_i_csr_wen = MEM_WB_io_writeOp_o_csr_wen; // @[TOP.scala 118:25]
  assign WB_io_writeOp_i_csr_wdata = MEM_WB_io_writeOp_o_csr_wdata; // @[TOP.scala 118:25]
  assign WB_io_writeOp_i_csr_waddr = MEM_WB_io_writeOp_o_csr_waddr; // @[TOP.scala 118:25]
  assign WB_io_debug_i_exit = MEM_WB_io_debug_o_exit; // @[TOP.scala 170:21]
  assign WB_io_debug_i_a0 = MEM_WB_io_debug_o_a0; // @[TOP.scala 170:21]
  assign WB_io_debug_i_pc = MEM_WB_io_debug_o_pc; // @[TOP.scala 170:21]
  assign WB_io_debug_i_inst = MEM_WB_io_debug_o_inst; // @[TOP.scala 170:21]
  assign Regfile_clock = clock;
  assign Regfile_reset = reset;
  assign Regfile_io_readRfOp_i_rs1 = ID_io_readOp_o_rs1; // @[TOP.scala 95:31]
  assign Regfile_io_readRfOp_i_rs2 = ID_io_readOp_o_rs2; // @[TOP.scala 95:31]
  assign Regfile_io_writeRfOp_i_wen = WB_io_writeOp_o_rf_wen; // @[TOP.scala 96:31]
  assign Regfile_io_writeRfOp_i_rd = WB_io_writeOp_o_rf_rd; // @[TOP.scala 96:31]
  assign Regfile_io_writeRfOp_i_wdata = WB_io_writeOp_o_rf_wdata; // @[TOP.scala 96:31]
  assign Csr_clock = clock;
  assign Csr_reset = reset;
  assign Csr_io_csrAddr_i = ID_io_readOp_o_csrAddr; // @[TOP.scala 98:25]
  assign Csr_io_writeOp_i_wen = WB_io_writeOp_o_csr_wen; // @[TOP.scala 99:25]
  assign Csr_io_writeOp_i_wdata = WB_io_writeOp_o_csr_wdata; // @[TOP.scala 99:25]
  assign Csr_io_writeOp_i_waddr = WB_io_writeOp_o_csr_waddr; // @[TOP.scala 99:25]
  assign Main_Memory_clock = clock;
  assign Main_Memory_reset = reset;
  assign Main_Memory_io_memOp_i_is_load = MEM_io_memOp_i_is_load; // @[TOP.scala 70:29]
  assign Main_Memory_io_memOp_i_is_store = MEM_io_memOp_i_is_store; // @[TOP.scala 70:29]
  assign Main_Memory_io_memOp_i_length = MEM_io_memOp_i_length; // @[TOP.scala 70:29]
  assign Main_Memory_io_memOp_i_addr = MEM_io_memOp_i_addr; // @[TOP.scala 70:29]
  assign Main_Memory_io_memOp_i_sdata = MEM_io_memOp_i_sdata; // @[TOP.scala 70:29]
  assign Main_Memory_io_dcache_miss_i_miss = MEM_io_dcache_miss_o_miss; // @[TOP.scala 72:37]
  assign Main_Memory_io_dcache_miss_i_addr = MEM_io_dcache_miss_o_addr; // @[TOP.scala 72:37]
  assign Main_Memory_io_icache_miss_i_miss = IF_io_icache_miss_o_miss; // @[TOP.scala 71:37]
  assign Main_Memory_io_icache_miss_i_pc = IF_io_icache_miss_o_pc; // @[TOP.scala 71:37]
  assign Control_io_if_stall_req_i = IF_io_stall_req_o; // @[TOP.scala 149:33]
  assign Control_io_id_stall_req_i = ID_io_stall_req_o; // @[TOP.scala 153:33]
  assign Control_io_mem_stall_req_i = MEM_io_stall_req_o; // @[TOP.scala 150:33]
  assign Control_io_id_flush_req_i = ID_io_flush_req_o; // @[TOP.scala 148:33]
  assign IF_ID_clock = clock;
  assign IF_ID_reset = reset;
  assign IF_ID_io_ctrl_i_stall = Control_io_stall_o[1]; // @[TOP.scala 136:51]
  assign IF_ID_io_ctrl_i_flush = Control_io_flush_o[1]; // @[TOP.scala 135:51]
  assign IF_ID_io_inst_i = IF_io_inst_o; // @[TOP.scala 67:25]
  assign IF_ID_io_pc_i = IF_io_pc_o; // @[TOP.scala 68:25]
  assign IF_ID_io_predict_i_is_branch = IF_io_predict_o_is_branch; // @[TOP.scala 65:25]
  assign IF_ID_io_predict_i_pc = IF_io_predict_o_pc; // @[TOP.scala 65:25]
  assign IF_ID_io_predict_i_index = IF_io_predict_o_index; // @[TOP.scala 65:25]
  assign IF_ID_io_predict_i_predict_taken = IF_io_predict_o_predict_taken; // @[TOP.scala 65:25]
  assign IF_ID_io_predict_i_predict_target = IF_io_predict_o_predict_target; // @[TOP.scala 65:25]
  assign ID_EX_clock = clock;
  assign ID_EX_reset = reset;
  assign ID_EX_io_ctrl_i_stall = Control_io_stall_o[2]; // @[TOP.scala 139:51]
  assign ID_EX_io_ctrl_i_flush = Control_io_flush_o[2]; // @[TOP.scala 138:51]
  assign ID_EX_io_decInfo_i_writeOp_rf_wen = ID_io_decInfo_o_writeOp_rf_wen; // @[TOP.scala 93:25]
  assign ID_EX_io_decInfo_i_writeOp_rf_rd = ID_io_decInfo_o_writeOp_rf_rd; // @[TOP.scala 93:25]
  assign ID_EX_io_decInfo_i_writeOp_csr_wen = ID_io_decInfo_o_writeOp_csr_wen; // @[TOP.scala 93:25]
  assign ID_EX_io_decInfo_i_writeOp_csr_wdata = ID_io_decInfo_o_writeOp_csr_wdata; // @[TOP.scala 93:25]
  assign ID_EX_io_decInfo_i_writeOp_csr_waddr = ID_io_decInfo_o_writeOp_csr_waddr; // @[TOP.scala 93:25]
  assign ID_EX_io_decInfo_i_aluOp_src1 = ID_io_decInfo_o_aluOp_src1; // @[TOP.scala 93:25]
  assign ID_EX_io_decInfo_i_aluOp_src2 = ID_io_decInfo_o_aluOp_src2; // @[TOP.scala 93:25]
  assign ID_EX_io_decInfo_i_aluOp_opt = ID_io_decInfo_o_aluOp_opt; // @[TOP.scala 93:25]
  assign ID_EX_io_decInfo_i_memOp_is_load = ID_io_decInfo_o_memOp_is_load; // @[TOP.scala 93:25]
  assign ID_EX_io_decInfo_i_memOp_is_store = ID_io_decInfo_o_memOp_is_store; // @[TOP.scala 93:25]
  assign ID_EX_io_decInfo_i_memOp_unsigned = ID_io_decInfo_o_memOp_unsigned; // @[TOP.scala 93:25]
  assign ID_EX_io_decInfo_i_memOp_length = ID_io_decInfo_o_memOp_length; // @[TOP.scala 93:25]
  assign ID_EX_io_decInfo_i_memOp_sdata = ID_io_decInfo_o_memOp_sdata; // @[TOP.scala 93:25]
  assign ID_EX_io_debug_i_exit = ID_io_debug_o_exit; // @[TOP.scala 92:25]
  assign ID_EX_io_debug_i_a0 = ID_io_debug_o_a0; // @[TOP.scala 92:25]
  assign ID_EX_io_debug_i_pc = ID_io_debug_o_pc; // @[TOP.scala 92:25]
  assign ID_EX_io_debug_i_inst = ID_io_debug_o_inst; // @[TOP.scala 92:25]
  assign EX_MEM_clock = clock;
  assign EX_MEM_reset = reset;
  assign EX_MEM_io_ctrl_i_stall = Control_io_stall_o[3]; // @[TOP.scala 142:51]
  assign EX_MEM_io_ctrl_i_flush = Control_io_flush_o[3]; // @[TOP.scala 141:51]
  assign EX_MEM_io_writeOp_i_rf_wen = EX_io_writeOp_o_rf_wen; // @[TOP.scala 104:25]
  assign EX_MEM_io_writeOp_i_rf_rd = EX_io_writeOp_o_rf_rd; // @[TOP.scala 104:25]
  assign EX_MEM_io_writeOp_i_rf_wdata = EX_io_writeOp_o_rf_wdata; // @[TOP.scala 104:25]
  assign EX_MEM_io_writeOp_i_csr_wen = EX_io_writeOp_o_csr_wen; // @[TOP.scala 104:25]
  assign EX_MEM_io_writeOp_i_csr_wdata = EX_io_writeOp_o_csr_wdata; // @[TOP.scala 104:25]
  assign EX_MEM_io_writeOp_i_csr_waddr = EX_io_writeOp_o_csr_waddr; // @[TOP.scala 104:25]
  assign EX_MEM_io_memOp_i_is_load = EX_io_memOp_o_is_load; // @[TOP.scala 105:25]
  assign EX_MEM_io_memOp_i_is_store = EX_io_memOp_o_is_store; // @[TOP.scala 105:25]
  assign EX_MEM_io_memOp_i_unsigned = EX_io_memOp_o_unsigned; // @[TOP.scala 105:25]
  assign EX_MEM_io_memOp_i_length = EX_io_memOp_o_length; // @[TOP.scala 105:25]
  assign EX_MEM_io_memOp_i_addr = EX_io_memOp_o_addr; // @[TOP.scala 105:25]
  assign EX_MEM_io_memOp_i_sdata = EX_io_memOp_o_sdata; // @[TOP.scala 105:25]
  assign EX_MEM_io_debug_i_exit = EX_io_debug_o_exit; // @[TOP.scala 106:25]
  assign EX_MEM_io_debug_i_a0 = EX_io_debug_o_a0; // @[TOP.scala 106:25]
  assign EX_MEM_io_debug_i_pc = EX_io_debug_o_pc; // @[TOP.scala 106:25]
  assign EX_MEM_io_debug_i_inst = EX_io_debug_o_inst; // @[TOP.scala 106:25]
  assign MEM_WB_clock = clock;
  assign MEM_WB_reset = reset;
  assign MEM_WB_io_ctrl_i_stall = Control_io_stall_o[4]; // @[TOP.scala 145:51]
  assign MEM_WB_io_ctrl_i_flush = Control_io_flush_o[4]; // @[TOP.scala 144:51]
  assign MEM_WB_io_writeOp_i_rf_wen = MEM_io_writeOp_o_rf_wen; // @[TOP.scala 114:25]
  assign MEM_WB_io_writeOp_i_rf_rd = MEM_io_writeOp_o_rf_rd; // @[TOP.scala 114:25]
  assign MEM_WB_io_writeOp_i_rf_wdata = MEM_io_writeOp_o_rf_wdata; // @[TOP.scala 114:25]
  assign MEM_WB_io_writeOp_i_csr_wen = MEM_io_writeOp_o_csr_wen; // @[TOP.scala 114:25]
  assign MEM_WB_io_writeOp_i_csr_wdata = MEM_io_writeOp_o_csr_wdata; // @[TOP.scala 114:25]
  assign MEM_WB_io_writeOp_i_csr_waddr = MEM_io_writeOp_o_csr_waddr; // @[TOP.scala 114:25]
  assign MEM_WB_io_debug_i_exit = MEM_io_debug_o_exit; // @[TOP.scala 115:25]
  assign MEM_WB_io_debug_i_a0 = MEM_io_debug_o_a0; // @[TOP.scala 115:25]
  assign MEM_WB_io_debug_i_pc = MEM_io_debug_o_pc; // @[TOP.scala 115:25]
  assign MEM_WB_io_debug_i_inst = MEM_io_debug_o_inst; // @[TOP.scala 115:25]
endmodule
