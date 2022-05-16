/*MuxKey 模块实现了“键值选择”功能，即在一个 (键值，数据) 的列表 lut 中，根据给定的键值 key ，
将 out 设置为与其匹配的数据。若列表中不存在键值为 key 的数据，则 out 为 0 。
特别地， MuxKeyWithDefault 模块可以提供一个默认值 default_out ，
当列表中不存在键值为 key 的数据，则 out 为 default_out
lut需要我们手动设置,似乎不符合常识，但这就是模板为了更广的适用度所必须付出的代价
*/

module MuxKeyInternal #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1, HAS_DEFAULT = 0) (	//default parameter
  output reg [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut    //table which contains all the matches
);

  localparam PAIR_LEN = KEY_LEN + DATA_LEN;
  wire [PAIR_LEN-1:0] pair_list [NR_KEY-1:0];
  wire [KEY_LEN-1:0] key_list [NR_KEY-1:0];
  wire [DATA_LEN-1:0] data_list [NR_KEY-1:0];

  generate
    for (genvar n = 0; n < NR_KEY; n = n + 1) begin
      assign pair_list[n] = lut[PAIR_LEN*(n+1)-1 : PAIR_LEN*n];   //one whole line of lut, contains both key and data
      assign data_list[n] = pair_list[n][DATA_LEN-1:0];           //right part of pair
      assign key_list[n]  = pair_list[n][PAIR_LEN-1:DATA_LEN];    //left part of pair
    end
  endgenerate

  reg [DATA_LEN-1 : 0] lut_out;
  reg hit;
  integer i;
  always @(*) begin
    lut_out = 0;
    hit = 0;
    for (i = 0; i < NR_KEY; i = i + 1) begin      //find a match
      lut_out = lut_out | ({DATA_LEN{key == key_list[i]}} & data_list[i]);  //if not match, lu_out will keep 0
      hit = hit | (key == key_list[i]);
    end
    if (!HAS_DEFAULT) out = lut_out;              //no default value is offerred,just use the search result.0 if not found
    else out = (hit ? lut_out : default_out);     //use the default out if not found
  end

endmodule

module MuxKey #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 0) i0 (out, key, {DATA_LEN{1'b0}}, lut);
                                      //the HAS_DEFAULT bit is not set
endmodule

module MuxKeyWithDefault #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 1) i0 (out, key, default_out, lut);
                                      //the HAS_DEFAULT bit is set
endmodule
