module mux41_2(
	input wire [1:0] x0,
	input wire [1:0] x1,
	input wire [1:0] x2,
	input wire [1:0] x3,
	input wire [1:0] y,

	output wire [1:0] f
);
	MuxKey #(4,2,2) m0 (f,y,{
		2'b00 , x0,
		2'b01 , x1,
		2'b10 , x2,
		2'b11 , x3	//set the lut
	});

endmodule
