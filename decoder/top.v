module top(
	input wire en,
	input wire x0,
	input wire x1,
	output wire [3:0] y

);
	wire x0bar,x1bar;
	not (x0bar,x0);
	not (x1bar,x1);
	and (y[0],x0bar,en,x1bar);
	and (y[1],x0,en,x1bar);
	and (y[2],x0bar,en,x1);
	and (y[3],x0,en,x1);

endmodule
