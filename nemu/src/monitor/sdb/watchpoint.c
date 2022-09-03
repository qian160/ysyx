#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  char *expr;
  word_t oldVal;
  word_t newVal;
  struct watchpoint *next;
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
  head = NULL;        //no watchpoints in use
  free_ = wp_pool;    //all free, just points to the start
}

/* TODO: Implement the functionality of watchpoint */

bool new_wp(char * expr){
  if(free_ == NULL)
    return false;
  WP *temp = free_ ->next;
  free_ -> next = head;
  head = free_;
  free_ = temp;
  head -> expr = expr;
  return true;
}

void free_wp(int number){

  return;
}

void wp_display(){
  WP * temp = head;
  while(temp != NULL){
    printf(ANSI_FMT("wp no: %d, expr = %s", ANSI_FG_MAGENTA),temp->NO, temp ->expr);
    temp = temp -> next;
  }
}

