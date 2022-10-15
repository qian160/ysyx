#include <NDL.h>
#include <SDL.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

struct __event_element{
  uint8_t type;
  uint8_t sym;
  struct __event_element* next;
};
typedef struct __event_element event_element;

static event_element event_queue = {.type = 0, .sym = 0, .next = NULL};
static event_element *end = &event_queue;

static void append(uint8_t type, uint8_t sym){
  event_element *new_element = (event_element *)malloc(sizeof(event_element));
  new_element->type = type;
  new_element->sym = sym;
  new_element->next = NULL;
  end->next = new_element;
  end = new_element;
}

static int pop(uint8_t *type, uint8_t *sym){
  if (event_queue.next == NULL){
    return 0;
  }else {
    event_element *buf = event_queue.next;
    *type = buf->type;
    *sym = buf->sym;
    event_queue.next = buf->next;
    if (buf == end){
      end = &event_queue;
    }
    free (buf);
  }
  return 1;
}

//stores each key's state, up or down
static uint8_t key_state[sizeof(keyname) / sizeof(keyname[0])] = {0};

int SDL_PushEvent(SDL_Event *ev) {
  assert(0);
  return 0;
}

// read an event and pack it to a SDL event(keyboard here)
// speed it up by using easily recognized key_buf(returned by pollevent)
static int inline read_keyinfo(uint8_t *type, uint8_t *sym){
  char key_buf[64], key_action[16], key_key[16];
  int ret = NDL_PollEvent(key_buf, sizeof(key_buf));
  //printf("\n%s\n", key_buf);    //keyup/down: foo
  if (!ret){
    return 0;
  }
  sscanf(key_buf, "%s %s", key_action, key_key);
  printf("action: %s\nkey:  %s\n", key_action, key_key);

}


int SDL_PollEvent(SDL_Event *ev) {
  uint8_t type = 0, sym = 0;
  if (read_keyinfo(&type, &sym)){
    ev->type = type;
    ev->key.keysym.sym = sym;
    printf("type: %d\n", type);
    switch(type){
    case SDL_KEYDOWN:
      key_state[sym] = 1;
      //printf("%d Down\n", (int)sym);
      break;
    
    case SDL_KEYUP:
      key_state[sym] = 0;
      //printf("%d Up\n", (int)sym);
      break;
    }
  }else {
    return 0;
  }

  return 1;
}

int SDL_WaitEvent(SDL_Event *event) {
  uint8_t type = 0, sym = 0;
  while (!read_keyinfo(&type, &sym));
  event->type = type;
  event->key.keysym.sym = sym;
//  printf("type: %d\nsym:  %d\n", type, sym);
  switch(type){
    case SDL_KEYDOWN:
      key_state[sym] = 1;
      break;
    
    case SDL_KEYUP:
      key_state[sym] = 0;
      break;
  }
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  assert(0);
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  printf("GetKeyState\n");
  SDL_Event ev;
  if (numkeys)
    *numkeys = sizeof(key_state) / sizeof(key_state[0]);
  return key_state;
}