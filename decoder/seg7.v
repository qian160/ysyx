`include"segcode.v"
module seg7(
	input wire clk,
	input wire [3:0] bcd,
	output wire [7:0] seg [7:0],
        output reg [15:0] led
);

	initial led = 16'd1;

	reg [31:0] cnt;

	always @(posedge clk) begin
             	if (cnt == 0) led <= {led[14:0], led[15]};
       		cnt <= (cnt >= 500 ? 32'b0 : cnt + 1);
   	end



	wire [7:0] Seg [7:0];

	assign Seg[0] = `seg0;
	assign Seg[1] = `seg1;
	assign Seg[2] = `seg2;
	assign Seg[3] = `seg3;
	assign Seg[4] = `seg4;
	assign Seg[5] = `seg5;
	assign Seg[6] = `seg6;
	assign Seg[7] = `seg7;

	reg [2:0] offset;

	always @(posedge clk)	begin
		if(cnt == 32'd500) begin
			offset <= offset + 1;
			$display("offset = %b\n",offset);
			cnt <= 0;
		end
			cnt <= (cnt == 32'd500) ? 0 : cnt+1;
			$display("cnt = %b\n",cnt);

	end

	assign seg[0] = Seg[offset + 3'd0];
	assign seg[1] = Seg[offset + 3'd1];
	assign seg[2] = Seg[offset + 3'd2];
	assign seg[3] = Seg[offset + 3'd3];
	assign seg[4] = Seg[offset + 3'd4];
	assign seg[5] = Seg[offset + 3'd5];
	assign seg[6] = Seg[offset + 3'd6];
	assign seg[7] = Seg[offset + 3'd7];
			/*
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
	*/	

endmodule
