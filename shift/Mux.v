/*
	for the high 1/2/4 bits,left will be d7,which could be the sign of the whole data
	as for the low 1/2/4 bits,right will always be 0.
*/
module Mux(
	input wire old_data,

	input wire l_r,

	input wire shift,

	input wire left,	
	input wire right, 
	//3 candidates for the new_date:old,left,right

	output wire new_data
);

	assign new_data = shift ? (l_r ? right : left)
				: old_data;
endmodule
