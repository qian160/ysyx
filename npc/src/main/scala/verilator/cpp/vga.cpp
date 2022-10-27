#include<SDL2/SDL.h>
#include"include/common.h"
#include"include/device.h"
#include<functional>

using handler_t = void(uint64_t offset, uint64_t len , bool is_write);
extern void add_mmio_map(uint64_t begin, uint64_t end, void *mem, std::function<handler_t> handler);

/*
在SDL_Render对象中有一个视频缓冲区，该缓冲区我们称之为SDL_Surface，它是按照像素存放图像的

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
//frame buffer(in mmio space), or pixels. program just need to write into this space.
//and when needed, renderer will extract the information from fb and sent it to screen

//0: height 2: width 4: sync
static void * vga_fb  = nullptr;
static void * vga_ctl = nullptr;

//#define CTL_W       (*(uint16_t*((uint8_t*)vga_ctl + 2)))
//#define CTL_H       (*(uint16_t*)vga_ctl)
//#define CTL_SYNC    (*(uint32_t*)(((uint8_t*)(vga_ctl) + 4)))

static SDL_Window   *window = nullptr;
//渲染器（SDL_Renderer, a buffer where temporarily holds the screen's image imformation but not updated to screen yet
static SDL_Renderer *renderer = nullptr;
//纹理（SDL_Texture）
static SDL_Texture  *texture = nullptr;
//
static SDL_Surface  *surface = nullptr;

static void init_screen() {
    const char *title = "riscv64-npc";
    SDL_Init(SDL_INIT_VIDEO);
    window   = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, VGA_W, VGA_H, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, 0, SDL_RENDERER_ACCELERATED);
/*
    SDL_CreateWindowAndRenderer(
        VGA_W,
        VGA_H,
        0, &window, &renderer
    );
*/
    //SDL_SetWindowTitle(window, title);
    texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
        SDL_TEXTUREACCESS_STATIC, VGA_W, VGA_H);
    
    surface = SDL_GetWindowSurface(window);
    SDL_Surface * temp = SDL_LoadBMP("./cpp/114514.bmp");
    assert(temp);

    SDL_BlitSurface(temp, 0, surface, 0);
    SDL_UpdateWindowSurface(window);
}

static inline void update_screen() {
    SDL_UpdateTexture(texture, nullptr, vga_fb, VGA_W * sizeof(uint32_t));
    //clear up the renderer buffer
    SDL_RenderClear(renderer);

    SDL_RenderCopy(renderer, texture, nullptr, nullptr);
    // 将缓冲区中的内容展示到目标上，也就是 windows 窗口上。
    SDL_RenderPresent(renderer);
}

//need to be called periodly. we do that in cmd_s
void vga_update_screen() {
    uint32_t * ctl = (uint32_t *)vga_ctl;
    uint32_t sync = ctl[1];
    if (sync != 0) {
        update_screen();
        ctl[1] = 0;
    }
}

void SDL_Exit(){
    SDL_FreeSurface(surface);
    surface = nullptr;

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
    cout << 1 << endl;
    vga_ctl = calloc(8, 1);
    add_mmio_map(VGACTL_ADDR, VGACTL_ADDR + 8, vga_ctl, nullptr);   //set handler = update?
    uint32_t * ctl = (uint32_t *)vga_ctl;
    ctl[0] = (VGA_W << 16) | VGA_H;

    vga_fb = calloc(FB_SZ, 1);
    add_mmio_map(FB_ADDR, FB_ADDR + FB_SZ, vga_fb, nullptr);        //updating vga is not handler's job
    init_screen();
    cout << 2 << endl;
}

static inline void pixelcpy4(void *dst, const void *src, size_t n) {
  uint32_t *pszDest = (uint32_t *)dst;
    const uint32_t *pszSource = (uint32_t *)src;
    if((pszDest!= NULL) && (pszSource!= NULL))
    {
        while(n--)
            *(pszDest++)= *(pszSource++);
    }
    return;
}

static inline void pixelcpy8(void *dst, const void *src, size_t n) {
    uint64_t *pszDest = (uint64_t *)dst;
    n = n >> 1;
    const uint64_t *pszSource = (uint64_t *)src;
    if((pszDest!= NULL) && (pszSource!= NULL))
    {
        while(n--)
            *(pszDest++)= *(pszSource++);
    }
    return;
}

static inline void pixelcpy16(void *dst, const void *src, size_t n) {
  __uint128_t *pszDest = (__uint128_t *)dst;
    n = n >> 2;
    const __uint128_t *pszSource = (__uint128_t *)src;
    if((pszDest!= NULL) && (pszSource!= NULL))
    {
        while(n--)
            *(pszDest++)= *(pszSource++);
    }
    return;
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
//  if (ctl->sync) {
//    outl(SYNC_ADDR, ctl->sync);    //write to SYNC reg will call vga_update_screen, which will be called in every inst execuateion cycle
//  }
    //TODO: improve the performance
    uint32_t* fb     = (uint32_t *)(uintptr_t)FB_ADDR;
    uint32_t* pixels = (uint32_t*)ctl->pixels;

    //if(ctl -> h == 0 || ctl -> w == 0)  return;

    //choose the fastest one. This may improve performance in some cases
    void (*drawOneRow)(void * dst, const void *src, size_t n) = ctl -> w % 4 == 0 ? pixelcpy16 : ctl -> w % 2 == 0 ? pixelcpy8 : pixelcpy4;

    //draw row by row. write to vga frame buffer
    //loop unroll
    /*             x
        ---------------------------------
        |          .  ctl->w             |
        y |...................             |
        |          .       . ctl->h      | h
        |          .........             |
        ---------------------------------
                        w
    
  */
  //loop unroll seems not helpful here...
    for (int row = 0; row < ctl -> h; row++) {
        drawOneRow(&fb[ctl -> x + (ctl -> y + row) * VGA_W], pixels, ctl -> w);
        pixels += ctl -> w;
    }
    //printf("%d\n", ctl->sync);
    if(ctl -> sync)
        vga_update_screen();
}