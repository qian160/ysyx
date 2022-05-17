`include "segcode.v"
module seg114514(

	output wire[7:0] seg[7:0]

);

	assign seg[0] = `seg4;
	assign seg[1] = `seg1;
	assign seg[2] = `seg5;
	assign seg[3] = `seg4;
	assign seg[4] = `seg1;
	assign seg[5] = `seg1;
	
	assign seg[6] = 8'hff;
	assign seg[7] = 8'hff;
	
endmodule
