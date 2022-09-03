#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char *expr;
  word_t oldVal;
  word_t newVal;

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  for (int i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }
  //initially the watchpoints are chained together:w[0] -> w[1] -> w[2] ...w[31] -> NULL
  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

