/*
module main_memory(
    input clock,
    input sign,             //load use
    input is_load,
    input store_en,
    input [7 : 0] sel,
    input [63 : 0] addr,

    output [63 : 0] data,
);
    //chisel don't support array of Mem, so 
    reg [1 << 36] ram [7 : 0];
    wire [63 : 0] dword;
    wire   groud_number;
    assign groud_number = addr >> 3;
    assign dword = {ram[7][groud_number], ram[6][groud_number], ram[5][groud_number], ram[4][groud_number], ram[3][groud_number], ram[2][groud_number], ram[1][groud_number], ram[0][groud_number]};
    //read
    always @(*) begin
        if(!is_load) data <= 64'b0;
        else begin
            case(sel)
                8'b00000001:    data <=  dword[7 : 0];
                8'b00000011:    data <=  dword[15: 0];    
                8'b00001111:    data <=  dword[31: 0];
                8'b11111111:    data <=  dword[63: 0];
            endcase
        end
    end
    //write


endmodule
*/