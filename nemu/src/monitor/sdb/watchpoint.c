#include "sdb.h"

#define NR_WP 32

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

WP* new_wp(char * expr){
  if(free_ == NULL)
    return NULL;
  WP *temp = free_ ->next;
  free_ -> next = head;
  head  = free_;
  free_ = temp;
  head -> expr = expr;
  return head;
}

WP * find_left(WP * node){
  if(node == head) return NULL;
  WP * temp = head;
  for(; temp -> next != node; temp = temp -> next){}
  return temp;
}

void free_wp(int number){
  WP * temp = head;
  //numbers also need to be copied
  while(temp != NULL){
    Log("node number: %d, expr = %s\n", temp -> NO, temp -> expr);
    temp = temp -> next;
    if(temp == NULL)goto bad;
    if(temp -> NO == number){
      WP * LEFT = find_left(temp);
      WP * RIGHT = temp -> next;

      //global changes, no matter what position(say temp) to remove, this temp will always become the new head of free.
      temp -> next = free_;   //when free == NULL, this sets temp -> next to be null which means it is the only node. It's okay so don't worry
      free_ = temp;
      //deal with temp's left and right
      if(temp == head){                 //delete first one
        head = RIGHT;                   //temp's right need to be updated
      }
      else if(temp -> next == NULL){    //delete last one
        LEFT -> next = NULL;            //left
      }
      else{                             //in between
        LEFT -> next = RIGHT;           //both left and right
      }
      printf(ANSI_FMT("wp %d deleted\n", ANSI_FG_YELLOW), number);
      return;
    }
  }
bad:
  printf(ANSI_FMT("no such number: %d\n", ANSI_FG_YELLOW), number);
  return;
}

void wp_display(){
  WP * temp = head;
  while(temp != NULL){
    printf(ANSI_FMT("wp no: %d, expr = %s\n", ANSI_FG_GREEN),temp->NO, temp ->expr);
    temp = temp -> next;
  }
}

