module add8(
	input wire [7:0] a,
	input wire [7:0] b,
	input wire  cin,

	output wire [7:0] s,
	output wire cout

);

	wire c;

	add4_full_fast a0(
		.a(a[3:0]),
		.b(b[3:0]),
		.cin(cin),
		.cout(c),
		.s(s[3:0])
	);

	add4_full_fast a1(
		.a(a[7:4]),
		.b(b[7:4]),
		.cin(c),
		.cout(cout),
		.s(s[7:4])
	);

endmodule
