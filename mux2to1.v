module mux2to1(
	input wire a,
	input wire b,
	input wire select,
	output wire y
);
	wire t1,t2,t3;
	not(t1,select);
	and(t2,a,t1);
	and(t3,select,b);
	or(y,t2,t3);	
endmodule
