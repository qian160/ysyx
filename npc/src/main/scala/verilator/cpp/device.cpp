#include"include/common.h"
using namespace std;

extern void init_vga();
int init_device()
{
    init_vga();
    return 0;
}