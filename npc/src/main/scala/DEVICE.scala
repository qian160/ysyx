import chisel3._
import chisel3.util._

object MMIO_SPACE {
    val MMIO_BASE           =   "ha0000000".U
    val SERIAL_BASE         =   MMIO_BASE + "h000003f8".U
    val KBD_BASE            =   MMIO_BASE + "h00000060".U
    val RTC_BASE            =   MMIO_BASE + "h00000048".U
    val VGACTL_BASE         =   MMIO_BASE + "h00000100".U
    val AUDIO_BASE          =   MMIO_BASE + "h00000200".U
    val DISK_BASE           =   MMIO_BASE + "h00000300".U
    val FB_BASE             =   MMIO_BASE + "h10000000".U
    val AUDIO_SBUF_BASE     =   MMIO_BASE + "h12000000".U

    val SERIAL_END          =   SERIAL_BASE     + 8.U
    val KBD_END             =   KBD_BASE        + 4.U
    val RTC_END             =   RTC_BASE        + 8.U
    val VGACTL_END          =   VGACTL_BASE     + 8.U
    val AUDIO_END           =   AUDIO_BASE      + 24.U
    val DISK_END            =   DISK_BASE       + 0x80.U
    val FB_END              =   FB_BASE         + (300 * 400 * 4).U
    val AUDIO_SBUF_END      =   AUDIO_SBUF_BASE + 0x10000.U

    def in_serial(addr: UInt):Bool  =   (addr >= SERIAL_BASE & addr <= SERIAL_END)
    def in_kbd(addr: UInt):Bool     =   (addr >= KBD_BASE    & addr <= KBD_END)
    def in_rtc(addr: UInt):Bool     =   (addr >= RTC_BASE    & addr <= RTC_END)
    def in_vgactl(addr: UInt):Bool  =   (addr >= VGACTL_BASE & addr <= VGACTL_END)
    def in_audio(addr: UInt):Bool   =   (addr >= AUDIO_BASE  & addr <= AUDIO_END)
    def in_disk(addr: UInt):Bool    =   (addr >= DISK_BASE   & addr <= DISK_END)
    def in_fb(addr: UInt):Bool      =   (addr >= FB_BASE     & addr <= FB_END)

    def in_audio_sbuf(addr: UInt):Bool   =   (addr >= AUDIO_SBUF_BASE   & addr <= AUDIO_SBUF_END)

}

object handler {
    //just read from these variables, or write to them
    //to simplify use, just set the array length = 1
    val RTC     = UInt(64.W)
    val KBD     = UInt(32.W)
    val boot_time   =   (System.currentTimeMillis).U(64.W)

    //to simplify call, all these functions' argument list should be the same
    def serial_handler(is_write: Bool, addr: UInt, wdata: UInt) = {
        when(is_write){
            printf("%c", wdata)
        }   //don't support read
    }
    def kbd_handler(is_write: Bool, addr: UInt, wdata: UInt) = {

    }
    def rtc_handler(is_write: Bool, addr: UInt, wdata: UInt) = {
        when(is_write){

        }
    }

    //val handlers = Array(serial_handler, kbd_handler, rtc_handler)
    //ListLookup(addr, default, MMIO_MAP.map_table) //this finds the handler.
    /*
    val map_table = Array(
        MMIO_SPACE.in_serial    ->  serial_handler _,
        MMIO_SPACE.in_rtc       ->  rtc_handler _,
    )
    */
}

object serial {

}

object RTC {
    val boot_time   =   (System.currentTimeMillis).U(64.W)
}
/*
object MMIO_MAP {

}
*/