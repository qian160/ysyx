#include <nvboard.h>
#include "Vseg7.h"

void nvboard_bind_all_pins(Vseg7* top) {
	nvboard_bind_pin( &top->h, BIND_RATE_SCR, BIND_DIR_OUT, 8, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G, DEC0P);
}
