/*
	Normally stage n will have to wait for stage n-1's "carry signal" before starting its own calculation.Which is very slow,we are eager to get the ci to start our calculation early rather than just wait for the previous stage.The method is to expand the equations.
	for example, we know ci+1 = ai*bi + ai*ci + bi*ci, so we have:
		c0 = cin,
		c1 = a1*b1 + a1*cin + b1*cin
		c2 = a2*b2 + a2*c1 + b2*c1 
		   = a2*b2 + c1*(a2+b2)
		   = ... (expand c1)
	then let's define:
		gi = ai*bi , pi = ai + bi

	now c1 = g1 + cin * p1
	    c2 = g2 + c1  * p2
	    	=g2 + p2*(g1 + cin * p1)
	    c3 = g3 + c2  * p3 = ...

	notice that c2 don't need to wait for c1 now, it can use cin to directly get his result

*/

module add4_full_fast(
	input wire cin,
	input wire [3:0] a,
	input wire [3:0] b,

	output wire [3:0] s,
	output wire cout

);
	// pi = ai + bi (plus means or)
	// gi = ai & bi (both 1)
	wire [3:0] p;
	wire [3:0] g;

	assign p[0] = a[0] | b[0];
	assign p[1] = a[1] | b[1];
	assign p[2] = a[2] | b[2];
	assign p[3] = a[3] | b[3];

	assign g[0] = a[0] & b[0];
	assign g[1] = a[1] & b[1];
	assign g[2] = a[2] & b[2];
	assign g[3] = a[3] & b[3];

	wire c1,c2,c3;

	assign c1 = g[0] | (cin & p[0]);
	assign c2 = g[1] | (c1  & p[1]);
	assign c3 = g[2] | (c2  & p[2]);
	
	assign cout = g[3] | (c3  & p[3]);

	assign s[0] = a[0] ^ b[0] ^ cin;
	assign s[1] = a[1] ^ b[1] ^ c1;
	assign s[2] = a[2] ^ b[2] ^ c2;
	assign s[3] = a[3] ^ b[3] ^ c3;
	
	

endmodule
