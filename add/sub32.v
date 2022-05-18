module sub32(
	input wire [31:0] a,
	input wire [31:0] b,
	input wire cin,
	output wire [31:0] s,
	output wire cout
);
	
	wire [31:0] newb;

	assign newb = ~b + 1;

        wire c1,c2,c3;

        //a plus b's 2's complement
	add8 a0(
                .a(a[7:0]),
                .b(newb[7:0]),
                .s(s[7:0]),
                .cin(0),
                .cout(c1)
        );

        add8 a1(
                .a(a[15:8]),
                .b(newb[15:8]),
                .s(s[15:8]),
                .cin(c1),
                .cout(c2)
        );
        add8 a2(
                .a(a[23:16]),
                .b(newb[23:16]),
                .s(s[23:16]),
                .cin(c2),
                .cout(c3)
        );

        add8 a3(                                                    
                .a(a[31:24]),
                .b(newb[31:24]),
                .s(s[31:24]),
                .cin(c3),
                .cout(cout)
        );
	

endmodule
