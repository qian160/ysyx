//act in sequence
module add4_full(
	input wire [3:0] a,
	input wire [3:0] b,

	input wire cin,
	output wire cout,
	output wire [3:0] s
);
	wire c1,c2,c3;

	add1_full a0(
		.a(a[0]),
		.b(b[0]),
		.c(cin),
		.s(s[0]),
		.cnext(c1)
	);

	add1_full a1(
		.a(a[1]),
		.b(b[1]),
		.c(c1),
		.s(s[1]),
		.cnext(c2)
	);

	add1_full a2(
		.a(a[2]),
		.b(b[2]),
		.c(c2),
		.s(s[2]),
		.cnext(c3)
	);

	add1_full a3(
		.a(a[3]),
		.b(b[3]),
		.c(c3),
		.s(s[3]),
		.cnext(cout)
	);


endmodule
