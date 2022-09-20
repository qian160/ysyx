#include <common.h>
#include <utils.h>
#include <device/alarm.h>
#ifndef CONFIG_TARGET_AM
#include <SDL2/SDL.h>
#endif

void init_map();
void init_serial();
void init_timer();
void init_vga();
void init_i8042();
void init_audio();
void init_disk();
void init_sdcard();
void init_alarm();

/*
------------------------------------------------------------------------------------------------------------------
  io_r/w(reg):   in fact this is like a function call table
    it firstly create a struct and use it to call a handler in lut-
  ioe_rw(reg, &buf)  (buf is the struct we just created)
    if read, the result will be write to buf and we can access it just like:
        int foo = io_read(bar).xxx;
    if write, we need to offer the arguments of the function
    reg is an abstruction of some device here, we can't see the device, but perform its functionality
    call io_r/w will perform a function at index 'reg' in a lut

  map_r/w
    not directly called by us. It's also the magic of abstraction
    Firstly we will meet a load or store inst, then nemu finds 
    that address not in pmem, so tyring mmio space(map_r/w).
    These are all done by nemu, which won't be notice from the machine's view

    in machine's view, we just read the device's address, and get the data as if it was in pmem

    read happens after invoke_callup
    and write happens before that
------------------------------------------------------------------------------------------------------------------

*/

void send_key(uint8_t, bool);
void vga_update_screen();

void device_update() {
  static uint64_t last = 0;
  uint64_t now = get_time();
  if (now - last < 1000000 / TIMER_HZ) {
    return;
  }
  last = now;

  IFDEF(CONFIG_HAS_VGA, vga_update_screen());

#ifndef CONFIG_TARGET_AM
  SDL_Event event;
  while (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_QUIT:
        nemu_state.state = NEMU_QUIT;
        break;
#ifdef CONFIG_HAS_KEYBOARD
      // If a key was pressed
      case SDL_KEYDOWN:
      case SDL_KEYUP: {
        uint8_t k = event.key.keysym.scancode;
        bool is_keydown = (event.key.type == SDL_KEYDOWN);
        send_key(k, is_keydown);
        break;
      }
#endif
      default: break;
    }
  }
#endif
}

void sdl_clear_event_queue() {
#ifndef CONFIG_TARGET_AM
  SDL_Event event;
  while (SDL_PollEvent(&event));
#endif
}

//put these devices at the specific memory space
void init_device() {
  IFDEF(CONFIG_TARGET_AM, ioe_init());
  init_map();   //allocate space for mmio?

  IFDEF(CONFIG_HAS_SERIAL, init_serial());
  IFDEF(CONFIG_HAS_TIMER, init_timer());
  IFDEF(CONFIG_HAS_VGA, init_vga());
  IFDEF(CONFIG_HAS_KEYBOARD, init_i8042());
  IFDEF(CONFIG_HAS_AUDIO, init_audio());
  IFDEF(CONFIG_HAS_DISK, init_disk());
  IFDEF(CONFIG_HAS_SDCARD, init_sdcard());

  IFNDEF(CONFIG_TARGET_AM, init_alarm());
}
