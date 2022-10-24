#include<SDL2/SDL.h>
#include"include/common.h"
#include"include/device.h"
static inline uint32_t screen_width() {
    return VGA_W;
}

static inline uint32_t screen_height() {
    return VGA_H;
}

static uint32_t screen_size() {
    return screen_width() * screen_height() * sizeof(uint32_t);
}

static void *fb = NULL;
static uint32_t     vgactl_port_base[2];
static SDL_Renderer *renderer = NULL;
static SDL_Texture  *texture = NULL;

static void init_screen() {
    SDL_Window *window = NULL;
    char title[128];
    sprintf(title, "riscv64-npc");
    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(
        VGA_W,
        VGA_H,
        0, &window, &renderer
    );
    SDL_SetWindowTitle(window, title);
    texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
        SDL_TEXTUREACCESS_STATIC, VGA_W, VGA_H);
}

//called in device_update
static inline void update_screen() {
    SDL_UpdateTexture(texture, NULL, fb, VGA_W * sizeof(uint32_t));
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);
}

void vga_update_screen() {
    uint32_t sync = vgactl_port_base[1];
    if (sync != 0) {
        update_screen();
        vgactl_port_base[1] = 0;
    }
}

void init_vga() {
    vgactl_port_base[0] = (screen_width() << 16) | screen_height();

    fb = malloc(screen_size());
    init_screen();
    memset(fb, 0, screen_size());
}
