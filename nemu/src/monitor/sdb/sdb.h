#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

typedef struct watchpoint {
    int NO;
    char *expr;
    word_t oldVal;
    word_t newVal;
    struct watchpoint *next;
    /* TODO: Add more members if necessary */
} WP;

//for linking
word_t expr(char *e, bool *success);
word_t paddr_read(paddr_t addr, int len);
extern const char* regs[];
void wp_display();
WP * new_wp(char * expr);
void free_wp(int num);
void show_free();

#endif
