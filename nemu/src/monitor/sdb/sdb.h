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

word_t expr(char *e, bool *success);

#endif
