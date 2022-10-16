import chisel3._
import chisel3.util._
class seg_scan extends Module{
    val io = IO(new Bundle{
        val disp_data   =   Input(UInt(32.W))

        val seg_data    =   Output(UInt(8.W))
        val seg_sel     =   Output(UInt(8.W))
    })
    val disp_data = io.disp_data
    val seg_lut = (VecInit(
        "b11000000".U(8.W),
        "b11111001".U(8.W),
        "b10100100".U(8.W),
        "b10110000".U(8.W),
        "b10011001".U(8.W),
        "b10010010".U(8.W),
        "b10000010".U(8.W),
        "b11111000".U(8.W),
        "b10000000".U(8.W),
        "b10010000".U(8.W),
        "b10001000".U(8.W),
        "b10000011".U(8.W),
        "b11000110".U(8.W),
        "b10100001".U(8.W),
        "b10000110".U(8.W),
        "b10001110".U(8.W),
    ))

    val CLK_FREQ    =   50000000
    val SCAN_FREQ   =   200

    val SCAN_COUNT  =   CLK_FREQ / (SCAN_FREQ * 8) - 1

    val map_data    =   Wire(Vec(8, UInt(8.W)))
    val bits        =   Wire(Vec(8, UInt(4.W)))

    val scan_timer  =   RegInit(0.U(32.W))
    val scan_sel    =   RegInit(0.U(4.W))

    bits(7) := (disp_data % 10.U);
    bits(6) := (disp_data / 10.U % 10.U);
    bits(5) := (disp_data / 100.U % 10.U);
    bits(4) := (disp_data / 1000.U % 10.U);
    bits(3) := (disp_data / 10000.U % 10.U);
    bits(2) := (disp_data / 100000.U % 10.U);
    bits(1) := (disp_data / 1000000.U % 10.U);
    bits(0) := (disp_data / 10000000.U % 10.U);

    (0 to 7).foreach( (x:Int) => map_data(x) := seg_lut(bits(x)) )

    scan_timer  :=  scan_timer + 1.U
    when(scan_timer >=  SCAN_COUNT.U){
        scan_timer  :=  0.U
        scan_sel    :=  Mux(scan_sel === 7.U, 0.U, scan_sel + 1.U)
    }

    io.seg_data :=  map_data(scan_sel)
    io.seg_sel  :=  ~(1.U(8.W) << scan_sel)(7, 0)

}
