#include "sdb.h"

#define NR_WP 8//32

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

WP* new_wp(char * Expr){
  if(free_ == NULL)
    return NULL;
  WP *temp = free_ -> next;
  free_ -> next = head;
  head  = free_;
  free_ = temp;
  head -> expr = Expr;
  bool * success = (bool *)malloc(sizeof(bool));
  *success = true;
  head -> oldVal = expr(Expr, success);
  if(!success){
    printf("bad expression\n");
    return NULL;
  }
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
    if(temp == NULL)goto bad;
    if(temp -> NO == number){
      WP * LEFT = find_left(temp);
      WP * RIGHT = temp -> next;
      //although all 3 cases start with the same steps, we can't do it in advance or it will affect the following check on temp
      //deal with temp's left and right
      temp -> next = free_;
      free_ = temp;
      if(temp == head){                 //delete first one
        //temp -> next = free_;
        //free_ = temp;
        head = RIGHT;                   //temp's right need to be updated
        Log("case 1\n");
      }
      else if(temp -> next == NULL){    //delete last one
        //temp -> next = free_;
        //free_ = temp;
        LEFT -> next = NULL;            //left
        Log("case 2\n");
      }
      else{                             //in between
        //temp -> next = free_;
        //free_ = temp;
        LEFT -> next = RIGHT;           //both left and right
        Log("case 3\n");
      }
      printf(ANSI_FMT("wp %d deleted\n", ANSI_FG_YELLOW), number);
      return;
    }
    temp = temp -> next;
  }
bad:
  printf(ANSI_FMT("no such number: %d\n", ANSI_FG_YELLOW), number);
  return;
}

void wp_display(){
  WP * temp = head;
  printf(ANSI_FMT("Index\t\texpr\t\tvalue\n",ANSI_FG_YELLOW));
  while(temp != NULL){
    printf(ANSI_FMT("[%2d]\t\t%s\t\t%ld\n", ANSI_FG_GREEN),temp->NO, temp ->expr, temp -> oldVal);
    temp = temp -> next;
  }
}
//debug
void show_free(){
  printf(ANSI_FMT("these are the free wp numbers:\n", ANSI_FG_GREEN));
  for(WP * p = free_; p != NULL; p = p -> next){
    printf(ANSI_FMT("%d\n", ANSI_FG_YELLOW), p -> NO);
  }
}

WP * get_free(){
  return free_;
}

WP * get_head(){
  return head;
}