`include"segcode.v"
module seg7(
	input wire [3:0] bcd,
	output reg [7:0] h

);
	always @(bcd)	begin
		case (bcd)
			4'h0: h=`seg0;
			4'h1: h=`seg1;
			4'h2: h=`seg2;
			4'h3: h=`seg3;
			4'h4: h=`seg4;
			4'h5: h=`seg5;
			4'h6: h=`seg6;
			4'h7: h=`seg7;
			4'h8: h=`seg8;
			4'h9: h=`seg9;
			4'ha: h=`sega;
			4'hb: h=`segb;
			4'hc: h=`segc;
			4'hd: h=`segd;
			4'he: h=`sege;
			4'hf: h=`segf;
		endcase
	end

endmodule
