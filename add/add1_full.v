module add1_full(
	input wire a,
	input wire b,
	input wire c,

	output wire s,
	output wire cnext
);

	wire t0;
	assign t0 = a ^ b;
	assign s = c ^ t0;
	wire t1,t2;
	assign t1 = t0 & c;
	assign t2 = a & b;
	assign cnext = t1 | t2;

endmodule
