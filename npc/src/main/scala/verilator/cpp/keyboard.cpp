#include<SDL2/SDL.h>
#include"include/common.h"
#include"include/device.h"
#include<functional>

void * kbd_base;

#define concat_temp(x, y) x ## y
#define concat(x, y) concat_temp(x, y)

using handler_t = void(uint64_t offset, uint64_t len , bool is_write);
void add_mmio_map(uint64_t begin, uint64_t end, void *mem, std::function<handler_t> handler);

// f = _KEY_NAME
#define KEYDOWN_MASK 0x8000

#define _KEYS(f) \
    f(ESCAPE) f(F1) f(F2) f(F3) f(F4) f(F5) f(F6) f(F7) f(F8) f(F9) f(F10) f(F11) f(F12) \
f(GRAVE) f(1) f(2) f(3) f(4) f(5) f(6) f(7) f(8) f(9) f(0) f(MINUS) f(EQUALS) f(BACKSPACE) \
f(TAB) f(Q) f(W) f(E) f(R) f(T) f(Y) f(U) f(I) f(O) f(P) f(LEFTBRACKET) f(RIGHTBRACKET) f(BACKSLASH) \
f(CAPSLOCK) f(A) f(S) f(D) f(F) f(G) f(H) f(J) f(K) f(L) f(SEMICOLON) f(APOSTROPHE) f(RETURN) \
f(LSHIFT) f(Z) f(X) f(C) f(V) f(B) f(N) f(M) f(COMMA) f(PERIOD) f(SLASH) f(RSHIFT) \
f(LCTRL) f(APPLICATION) f(LALT) f(SPACE) f(RALT) f(RCTRL) \
f(UP) f(DOWN) f(LEFT) f(RIGHT) f(INSERT) f(DELETE) f(HOME) f(END) f(PAGEUP) f(PAGEDOWN)

#define _KEY_NAME(k) _KEY_##k,

#define MAP(x, y) x(y)

enum {
    _KEY_NONE = 0,
    MAP(_KEYS, _KEY_NAME)
};

#define SDL_KEYMAP(k) keymap[concat(SDL_SCANCODE_, k)] = concat(_KEY_, k);
static uint32_t keymap[256] = {};

static void init_keymap() {
    MAP(_KEYS, SDL_KEYMAP);
}

#define KEY_QUEUE_LEN 1024
static int key_queue[KEY_QUEUE_LEN] = {};
static int key_f = 0, key_r = 0;    //front, rear

static void key_enqueue(uint32_t am_scancode) {
    key_queue[key_r] = am_scancode;
    key_r = (key_r + 1) % KEY_QUEUE_LEN;
    Assert(key_r != key_f, "key queue overflow!");
}

static uint32_t key_dequeue() {
    uint32_t key = _KEY_NONE;
    if (key_f != key_r) {
        key = key_queue[key_f];
        key_f = (key_f + 1) % KEY_QUEUE_LEN;
    }
    return key;
}

void send_key(uint8_t scancode, bool is_keydown) {
    if (keymap[scancode] != _KEY_NONE) {
        uint32_t am_scancode = keymap[scancode] | (is_keydown ? KEYDOWN_MASK : 0);
        key_enqueue(am_scancode);
    }
}

static void i8042_data_io_handler(uint64_t offset, int len, bool is_write) {
    assert(!is_write);
    assert(offset == 0);
    *(uint32_t*)kbd_base = key_dequeue();
}

void init_i8042() {
    kbd_base = calloc(8, 1);
    add_mmio_map(KBD_ADDR, KBD_ADDR + 8, kbd_base, i8042_data_io_handler);
    (*(uint64_t*)kbd_base) = _KEY_NONE;
    init_keymap();

}


//trying to fetch an input(keyboard)
//checked in cmd_s also
//user api?
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
    cout << "??" << endl;
    kbd->keydown = 0;
    kbd->keycode = AM_KEY_NONE;
    uint32_t state = *(uint32_t*)kbd_base;
    kbd -> keycode = state & ~KEYDOWN_MASK;
    if ((state & KEYDOWN_MASK) != 0){
        kbd->keydown = true;
    }
}