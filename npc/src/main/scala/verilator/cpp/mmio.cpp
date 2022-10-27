#include"include/common.h"
#include<functional>
#include<memory>

using handler_t = void(uint64_t offset, uint64_t len , bool is_write);

typedef struct{
    uint64_t begin, end;
    void* mem;
    std::function<handler_t>handler;
}mmio_map;

mmio_map maps[16]= {};
static uint32_t nr_map = 0;

void add_mmio_map(uint64_t begin, uint64_t end, void *mem, std::function<handler_t> handler){
    assert(nr_map < 16);
    maps[nr_map++] = mmio_map{.begin = begin, .end = end, .mem = mem, .handler = handler};
}

static inline bool map_inside(mmio_map *map, uint64_t addr) {
    return (addr >= map -> begin && addr <= map -> end);
}

static inline mmio_map* find_map_by_addr(uint64_t addr) {
    //difftest?
    for (int i = 0; i < nr_map; i ++) {
        if (map_inside(maps + i, addr)) { // &maps[i]
            return &maps[i];
        }
    }
    return nullptr;
}

//the order:
//callback  -> read
//write     -> callback

//dpic
extern "C" {
long long mmio_read(long long addr, int len){
    //cout << "mmio read:  addr = " << addr << endl;
    //let chisel do the sext
    mmio_map * map = find_map_by_addr(addr);
    //Assert(map, "bad mmio addr: %llx\n", addr);
    //assert(addr >= map -> begin && addr + len <= map -> end);
    uint64_t offset = addr - map -> begin;
    void * base = (uint8_t *)(map -> mem) + offset;
    if(map -> handler)
        map -> handler(offset, len, 0);

    switch (len)
    {
    case 1:
        return *(uint8_t*) base;
    case 2:
        return *(uint16_t*)base;
    case 4:
        return *(uint32_t*)base;
    case 8:
        return *(uint64_t*)base;
    default:
        printf("mmio_read:  bad len = %d\n", len);
        assert(0);
    }
	return 114514;
}

void mmio_write(long long addr, int len, long long wdata){
    //cout << "mmio write:  addr = " << addr << endl;
	mmio_map * map = find_map_by_addr(addr);
    //Assert(map, "bad mmio addr: %llx\n", addr);
    //assert(addr >= map -> begin && addr + len <= map -> end);
    uint64_t offset = addr - map -> begin;
    void * base = (uint8_t *)(map -> mem) + offset;

    switch (len)
    {
    case 1:
        *(uint8_t*) base = (uint8_t)wdata;     break;
    case 2:
        *(uint16_t*)base = (uint16_t)wdata;    break;
    case 4:
        *(uint32_t*)base = (uint32_t)wdata;    break;
    case 8:
        *(uint64_t*)base = (uint64_t)wdata;    break;
    default:
        Assert(0, "mmio write:  bad length =  %d\n", len);
    }
    if(map -> handler)
        map -> handler(offset, len, 1);

}
}