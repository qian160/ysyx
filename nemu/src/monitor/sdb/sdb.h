#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

typedef struct watchpoint {
    int    NO;
    char * expr;
    word_t oldVal;
    word_t newVal;
    bool   enable;
    struct watchpoint *next;
    /* TODO: Add more members if necessary */
} WP;

//for linking

word_t expr(char *e, bool *success);
word_t paddr_read(paddr_t addr, int len);
extern const char* regs[];

//watchpoints
void wp_display();
WP * new_wp(char * expr);
WP * get_free();
WP * get_head();
void free_wp(int num);
void show_free();

word_t vaddr_ifetch(vaddr_t addr, int len);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

#endif
