#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#include "../include/trace.h"

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

#ifdef CONFIG_MTRACE_ENABLE

void show_mtrace()
{
  int size = CONFIG_MTRACE_SIZE;
  for(int i = mringbuf.index; size --; i = (i + 1) % CONFIG_MTRACE_SIZE){
    bool c = mringbuf.info[i].isLoad;
    MtraceInfo temp = mringbuf.info[i];
      switch (c)
      {
      case 1:
        printf(ANSI_FMT("Load: address = 0x%lx, val = 0x%lx\n", ANSI_FG_YELLOW), temp.addr, temp.data );
        break;
      case 0:
        printf(ANSI_FMT("Store: 0x%lx -> pmem[0x%lx]\n", ANSI_FG_MAGENTA), temp.data, temp.addr);
        break;
      }
  }
}

#endif

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1);
}

word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))) 
  {
    word_t val = pmem_read(addr, len);
    IFDEF(CONFIG_MTRACE_ENABLE, 
      int idx = mringbuf.index;
      mringbuf.info[idx].addr    = addr;
      mringbuf.info[idx].data    = val;
      mringbuf.info[idx].isLoad  = 1;

      //mringbuf.index = (idx + 1) % CONFIG_MTRACE_SIZE;
    );
    return val;
  }
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { 
    IFDEF(CONFIG_MTRACE_ENABLE, 
      int idx = mringbuf.index;
      mringbuf.info[idx].addr    = addr;
      mringbuf.info[idx].data    = data;
      mringbuf.info[idx].isLoad  = 0;

      //mringbuf.index = (idx + 1) % CONFIG_MTRACE_SIZE;
    );
    pmem_write(addr, len, data); return; 
  }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}
