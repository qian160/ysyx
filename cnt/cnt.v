`include"segcode.v"
`timescale 1ns/1ps
module cnt(
	input wire clk,
	output [7:0] f [7:0]		//8 * 8
);
	
	reg[7:0] Table [15:0];

	initial  begin
		Table[0]=`seg0;
		Table[1]=`seg1;
		Table[2]=`seg2;
		Table[3]=`seg3;
		Table[4]=`seg4;
		Table[5]=`seg5;
		Table[6]=`seg6;
		Table[7]=`seg7;
		Table[8]=`seg8;
		Table[9]=`seg9;
		Table[10]=`sega;
		Table[11]=`segb;
		Table[12]=`segc;
		Table[13]=`segd;
		Table[14]=`sege;
		Table[15]=`segf;

		$display("%b\n",Table[0]);
		$display("%b\n",Table[1]);
		$display("%b\n",Table[2]);
		$display("%b\n",Table[3]);
		$display("%b\n",Table[4]);
		$display("%b\n",Table[5]);
		$display("%b\n",Table[6]);
		$display("%b\n",Table[7]);
		$display("%b\n",Table[8]);
		$display("%b\n",Table[9]);
		$display("%b\n",Table[10]);
		$display("%b\n",Table[11]);
		$display("%b\n",Table[12]);
		$display("%b\n",Table[13]);
		$display("%b\n",Table[14]);
		$display("%b\n",Table[15]);
	end

	reg [31:0] cnt = 0;

	wire [3:0]t0,t1,t2,t3,t4,t5,t6,t7;
	
	assign t0 = cnt[3:0]; 
	assign t1 = cnt[7:4]; 
	assign t2 = cnt[11:8]; 
	assign t3 = cnt[15:12]; 
	assign t4 = cnt[19:16]; 
	assign t5 = cnt[23:20]; 
	assign t6 = cnt[27:24]; 
	assign t7 = cnt[31:28]; 


	reg [31:0] delay = 0;
	always @ (posedge clk) begin
		delay <= delay +1;
		if(delay == 5)  begin
			cnt <= cnt + 1;
			delay <= 0;
		end
	end	

	assign	f[0]=Table[t0];
	assign	f[1]=Table[t1];
	assign	f[2]=Table[t2];
	assign	f[3]=Table[t3];
	assign	f[4]=Table[t4];
	assign	f[5]=Table[t5];
	assign	f[6]=Table[t6];
	assign	f[7]=Table[t7];

endmodule
