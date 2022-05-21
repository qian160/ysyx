`include"segcode.v"

module random(
	input wire clk,
	output [7:0] data [7:0] 
);

        reg [7:0]temp = 8'd1;
        always @(posedge clk)   begin
                temp <= {{temp[4]+temp[3]+temp[2]+temp[0]},{temp[7:1]}};
                $display("%b\n",temp);                                                     
        end
 	
	assign data[0] = temp[0]? `seg1:`seg0;

	assign data[1] = temp[1]? `seg1:`seg0;
	assign data[2] = temp[2]? `seg1:`seg0;
	assign data[3] = temp[3]? `seg1:`seg0;
	assign data[4] = temp[4]? `seg1:`seg0;
	assign data[5] = temp[5]? `seg1:`seg0;
	assign data[6] = temp[6]? `seg1:`seg0;
	assign data[7] = temp[7]? `seg1:`seg0;

 endmodule
