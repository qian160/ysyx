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

/*
把SDL_Window看作是物理像素，把SDL_Renderer看作是存储设置/上下文的地方。
因此，您创建了一堆资源，并将它们挂在渲染器上；然后在准备就绪时，告诉渲染器将它们放在一起，并将结果发送到窗口。

渲染的基本流程
我们创建的窗口只是逻辑上的窗口，要想让窗口显示出来，我们需要对窗口进行效果渲染，也就是要通过绘制像素的方法，将窗口中的像素全部点亮。
那么如何对窗口进行渲染呢？SDL为我们提供了方便是的API。不过在使用SDL对窗口进行渲染之前，我们要先了解渲染的基本原理。

其基本原理是: 首先创建一个window窗口，它是我们要渲染的目标。然后，要有一个渲染上下文，该上下文中一方面存放着要渲染的目标，也就是windows窗口；另一方面是存放着一个缓冲区，该缓冲区用于存放渲染的内容。

渲染的内容可以是点、线、各种图形以及图片，视频的各种组合。这些组合后的内容首先被存放到缓冲区中，最终SDL将缓冲区中的内容渲染到窗口中。

所以渲染的基本流程如下：

创建窗口
创建渲染器
清空缓冲区
绘制要显示的内容
最终将缓冲区内容渲染到window窗口上。

*/
static void *fb = nullptr;
static uint32_t     vgactl_port_base[2];

static SDL_Window *window = nullptr;
//渲染器（SDL_Renderer）
static SDL_Renderer *renderer = nullptr;
//纹理（SDL_Texture）
static SDL_Texture  *texture = nullptr;
//init
static SDL_Surface * helloworld = nullptr;

static void init_screen() {
    const char *title = "riscv64-npc";
    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(
        VGA_W,
        VGA_H,
        0, &window, &renderer
    );
    SDL_SetWindowTitle(window, title);
    texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
        SDL_TEXTUREACCESS_STATIC, VGA_W, VGA_H);
    
    helloworld = SDL_GetWindowSurface(window);
    SDL_Surface * temp = SDL_LoadBMP("./cpp/114514.bmp");
    assert(temp);

    SDL_BlitSurface(temp, 0, helloworld, 0);
    SDL_UpdateWindowSurface(window);
}

//called in device_update
static inline void update_screen() {
    SDL_UpdateTexture(texture, nullptr, fb, VGA_W * sizeof(uint32_t));
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, nullptr, nullptr);
    SDL_RenderPresent(renderer);
}

void vga_update_screen() {
    uint32_t sync = vgactl_port_base[1];
    if (sync != 0) {
        update_screen();
        vgactl_port_base[1] = 0;
    }
}

void SDL_Exit(){
    SDL_FreeSurface(helloworld);
    helloworld = nullptr;

    //Destroy window
    SDL_DestroyWindow( window );
    window   = nullptr;

    SDL_DestroyRenderer(renderer);
    renderer = nullptr;

    SDL_DestroyTexture(texture);
    texture  = nullptr;

    //Quit SDL subsystems
    SDL_Quit();

}

void init_vga() {
    vgactl_port_base[0] = (screen_width() << 16) | screen_height();

    fb = malloc(screen_size());
    init_screen();
    memset(fb, 0, screen_size());
}
