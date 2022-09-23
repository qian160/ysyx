module BlackBoxRealAdd(
    input  [15:0] in1,
    input  [15:0] in2,
    output [15:0] out
);
always @* begin
  out <= $realtobits($bitstoreal(in1) + $bitstoreal(in2));
end
endmodule
    