/*
	barrel layout: m for mux, t for temp wire
d7  ->	m7  ->  t7  ->  m15  -> t15  -> m23  -> result[7]

d6  ->	m6  ->  t6  ->  m14		...

d5  ->	m5  ->  t5  ->  m13

d4  ->	m4  ->  t4  ->  m12

d3  -> 	m3  ->  t3  ->  m11

d2  ->	m2  ->  t2  ->  m10

d1  ->	m1  ->  t1  ->  m9

d0  ->	m0  ->  t0  ->  m8
	

*/

module barrel_shifter(
	input wire a_l,		//how to shift
	input wire l_r,
	input wire [7:0] data,
	input wire [2:0] shift,

	output wire [7:0] result

); 

	wire d7;    //d7 for sign

	//1 for arithmatic, use 0 as the high bits
	assign d7 = a_l ? 1'b0 : data[7];

	wire t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15;


	Mux m0(
		.old_data(data[0]),
		.l_r(l_r),
		.shift(shift[0]),
		.left(data[1]),
		.right(1'b0),
		.new_data(t0)
	);

	Mux m1(
		.old_data(data[1]),
		.l_r(l_r),
		.shift(shift[0]),
		.left(data[2]),
		.right(data[0]),
		.new_data(t1)
	);

	Mux m2(
		.old_data(data[2]),
		.l_r(l_r),
		.shift(shift[0]),
		.left(data[3]),
		.right(data[1]),
		.new_data(t2)
	);

	Mux m3(
		.old_data(data[3]),
		.l_r(l_r),
		.shift(shift[0]),
		.left(data[4]),
		.right(data[2]),
		.new_data(t3)
	);

	Mux m4(
		.old_data(data[4]),
		.l_r(l_r),
		.shift(shift[0]),
		.left(data[5]),
		.right(data[3]),
		.new_data(t4)
	);

	Mux m5(
		.old_data(data[5]),
		.l_r(l_r),
		.shift(shift[0]),
		.left(data[6]),
		.right(data[4]),
		.new_data(t5)
	);

	Mux m6(
		.old_data(data[6]),
		.l_r(l_r),
		.shift(shift[0]),
		.left(data[7]),
		.right(data[5]),
		.new_data(t6)
	);

	Mux m7(
		.old_data(data[7]),
		.l_r(l_r),
		.shift(shift[0]),
		.left(d7),
		.right(data[6]),
		.new_data(t7)
	);

	//2nd stage, step = 2
	Mux m8(
		.old_data(t0),
		.l_r(l_r),
		.shift(shift[1]),
		.left(t2),
		.right(1'b0),
		.new_data(t8)
	);

	Mux m9(
		.old_data(t1),
		.l_r(l_r),
		.shift(shift[1]),
		.left(t3),
		.right(1'b0),
		.new_data(t9)
	);

	Mux m10(
		.old_data(t2),
		.l_r(l_r),
		.shift(shift[1]),
		.left(t4),
		.right(t0),
		.new_data(t10)
	);

	Mux m11(
		.old_data(t3),
		.l_r(l_r),
		.shift(shift[1]),
		.left(data[5]),
		.right(data[1]),
		.new_data(t11)
	);

	Mux m12(
		.old_data(t4),
		.l_r(l_r),
		.shift(shift[1]),
		.left(data[6]),
		.right(data[2]),
		.new_data(t12)
	);

	Mux m13(
		.old_data(t5),
		.l_r(l_r),
		.shift(shift[1]),
		.left(data[7]),
		.right(data[3]),
		.new_data(t13)
	);

	Mux m14(
		.old_data(t6),
		.l_r(l_r),
		.shift(shift[1]),
		.left(d7),
		.right(t4),
		.new_data(t14)
	);

	Mux m15(
		.old_data(t7),
		.l_r(l_r),
		.shift(shift[1]),
		.left(d7),
		.right(t5),
		.new_data(t15)
	);

	//3rd stage
	Mux m16(
		.old_data(t8),
		.l_r(l_r),
		.shift(shift[2]),
		.left(t12),
		.right(1'b0),
		.new_data(result[0])
	);

	Mux m17(
		.old_data(t9),
		.l_r(l_r),
		.shift(shift[2]),
		.left(t13),
		.right(1'b0),
		.new_data(result[1])
	);

	Mux m18(
		.old_data(t10),
		.l_r(l_r),
		.shift(shift[2]),
		.left(t14),
		.right(1'b0),
		.new_data(result[2])
	);

	Mux m19(
		.old_data(t11),
		.l_r(l_r),
		.shift(shift[2]),
		.left(t15),
		.right(1'b0),
		.new_data(result[3])
	);

	Mux m20(
		.old_data(t12),
		.l_r(l_r),
		.shift(shift[2]),
		.left(d7),
		.right(t8),
		.new_data(result[4])
	);

	Mux m21(
		.old_data(t13),
		.l_r(l_r),
		.shift(shift[2]),
		.left(d7),
		.right(t9),
		.new_data(result[5])
	);

	Mux m22(
		.old_data(t14),
		.l_r(l_r),
		.shift(shift[2]),
		.left(d7),
		.right(t10),
		.new_data(result[6])
	);

	Mux m23(
		.old_data(t15),
		.l_r(l_r),
		.shift(shift[2]),
		.left(d7),
		.right(t11),
		.new_data(result[7])
	);


endmodule
