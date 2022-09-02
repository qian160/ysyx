#include <isa.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>        
#define is_arith(TK) (TK >= MULT && TK <= AND)
enum {
  DECNUM,
  HEXNUM,
  EQ, 
  //+ - * / & | (!)
  MULT,  //0100, 4
  DIV,   //0101, 5
  ADD ,  //0110, 6
  SUB,   //0111, 7
  SL,    //1000, 8
  SR,    //1001, 9
  OR,
  XOR,
  NOT,
  AND,
  //
  LEFT,
  RIGHT,
  NOTYPE, 
  REG,
  POINTER,
  /* TODO: Add more token types */

};
/*
  int regcomp (regex_t *compiled, const char *pattern, int flag)
      associate the regex with the pattern string. 
      flags:
          1 = REG_EXTENDED 以功能更加强大的扩展正则表达式的方式进行匹配。
          2 = REG_ICASE    匹配字母时忽略大小写。
          4 = REG_NEWLINE  识别换行符，这样'$'就可以从行尾开始匹配，'^'就可以从行的开头开始匹配
          8 = REG_NOSUB    不用存储匹配后的结果。= RE_

  int regexec (regex_t *compiled, char *string, size_t nmatch,
                  regmatch_t matchptr [], int eflags)
      I don't know why, but the 1st arg need to be an "address"
      nmatch is the maxium number of allowed matches, generally it is the length of matchptr

      typedef struct
      {
        regoff_t rm_so;   rm:Regex Match, so: Start Offset
        regoff_t rm_eo;
      } regmatch_t;   //the position information of the match

      eflags:(seems not necessary)
        1 = REG_NOTBOL  not begin of line?
        2 = REG_NOTEOL  not end of line?
*/
//match: the bra is good but not the first case.

typedef enum {  BRA_SURRONDED, MATCH, DISMATCH } check_bra;

static struct rule {
  const char *regex;
  int token_type;
  int priv;
} rules[] = {
  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {"0[xX][0-9a-f]+",  HEXNUM, 0},   //check before DECNUM, or the 0 prefix will be lost
  {"[0-9]+",          DECNUM, 0},
  {"==",              EQ,     3},       // equal
  {"\\*",             MULT,   5},     // mult and div should be treated before add/sub
  {"/",               DIV,    5},   
  {"-",               SUB,    4},      // sub  
  {"\\+",             ADD,    4},      // plus,'+' has special meaning thus need some \. \+ means '+'. However to recognize the first \ we need another \.
  {" +",              NOTYPE, 0},   // multiple spaces, not addition
  {"\\s+",            NOTYPE, 0},   // white spaces
  {"\\(",             LEFT,   9},
  {"\\)",             RIGHT,  9},
  {"<<",              SL,     3},
  {">>",              SR,     3},
  {"$[a-zA-Z]{2}",    REG,    0},
  {"\\|",             OR,     1},
  {"&",               AND,    1},
  {"\\^",             XOR,    2},

  //{"\\*",             POINTER},
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};   //re holds the compiled regex

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {   //called by init_sdb()
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int   type;
  char  str[32];
  int   priv;
}Token;

static Token tokens[1000] __attribute__((used)) = {};   //for test, we enlarge the buffer size
static int nr_token __attribute__((used))  = 0;

typedef struct{
  char parentheses[200];   //20 is very enough
  int  top;
}easyStack;    //for parentheses check. No boundary check

easyStack S;

bool push(char c){
  if(S.top == ARRLEN(S.parentheses)){
    printf(ANSI_FMT("the stack is full...\n",ANSI_FG_RED));
    return false;
  }
  S.parentheses[S.top++] = c;
  return true;
}

bool pop(){
  if(S.top == 0) return false;
  S.top--;
  return true;
}

void tranverse(){
  for(int i = 0; i < S.top; i++)
    printf("%c\n", S.parentheses[i]);
  putchar('\n');
}
//when only 1 token exists, the argument  prime - 1 will be bad...
bool check_parentheses(int p, int q, char * removed){   //scan the array and use a stack
  //if( p > q ) return false; //something went wrong...
  S.top = 0;    ///reset the stack
  /*
  Log("check from %d to %d... the original substr is\n", p, q);
  for(int i = p; i <= q; i++)
    printf("%s  ",tokens[i].str);
  putchar('\n');
  */
  if(p > q || q < 0 || q < 0) return true;    //seems strange, but it works......
  int sp = p, eq = q;   //start of p && end of q
  while((tokens[sp].type == LEFT && tokens[eq].type == RIGHT)){ //logic short-circuting
    strcpy(tokens[sp].str, "removed");
    strcpy(tokens[eq].str, "removed");    
    tokens[sp++].type = NOTYPE;
    tokens[eq--].type = NOTYPE;
    (*removed)++;
  }

  int t1 __attribute__((unused)) = sp, t2 __attribute__((unused)) = eq;
  /*
  Log("after chek, the substr is from %d to %d:\n", t1, t2);
  for(int i = t1; i <= t2; i++)
    printf("%s  ",tokens[i].str);
  putchar('\n');
  */
  for(; sp <= eq; sp++){
    char type = tokens[sp].type;
    if(type == LEFT){
      push(LEFT);
    }
    else if(type == RIGHT){
      push(RIGHT);
      if(S.top > 1 && S.parentheses[S.top -2] == LEFT)
        S.top -= 2;

    }
  }
  return S.top == 0;
}
typedef struct {
  int priv[10];
  int top;
}privStack;   //for privilege recovery in prime find. nested parentheses will need this

privStack PS;

static int dominant_operator(int start, int end)
{	
  int op = start, pri_min = 10;	
  for (int i = start; i <= end;i ++)
  {		
    //Log("before:i = %d, priv_min = %d, token_priv = %d\n", i, pri_min, tokens[i].priv);
    if (tokens[i].type == HEXNUM || tokens[i].type == DECNUM || tokens[i].type == REG)
      continue;
    //number can't be operator
    if(tokens[i].type == LEFT){
      PS.priv[PS.top++] = pri_min;   //temporarily refuse any requests
      pri_min = -1;
    }
    else if(tokens[i].type == RIGHT){
      if(PS.top == 0) Assert(0, "bra error\n");
      pri_min = PS.priv[--PS.top];
    }
    else if (tokens[i].priv <= pri_min) 
    {      
      op = i;      
      pri_min = tokens[op].priv;
    }  
  }	
  printf(ANSI_FMT("the prime is %s, at index %d\n",ANSI_FG_YELLOW),tokens[op].str, op);
  return op;
}
//this function will add tokens to the array

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {                     
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) { //the latter condition says that we should collect the token in order
        char *substr_start __attribute__((unused)) = e + position ;
        int substr_len = pmatch.rm_eo;
        //Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //    i, rules[i].regex, position, substr_len, substr_len, substr_start);

        //empty token could just be thrown away
        if(rules[i].token_type != NOTYPE){
            strncpy(tokens[nr_token].str, e + position, substr_len);
            tokens[nr_token].str[substr_len] = '\0';
            tokens[nr_token].type = rules[i].token_type;
            tokens[nr_token++].priv = rules[i].priv;
        }

        position += substr_len;
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
//how to define?
//#ifdef PRINT_TOKEN
  printf("the tokens are:\n");
  for(int i =0 ; i < nr_token; i++)
  {
    char * temp = tokens[i].str;
    int type = tokens[i].type;
    int priv = tokens[i].priv;
    printf(ANSI_FMT("token[%2d] = %-8s\ttype = %d\tpriv = %d\n", ANSI_FG_YELLOW),i, temp, type, priv);
  }
  putchar('\n');
  putchar('\n');
//#endif
  //------
  return true;
}

word_t calculate(int p, int q, bool * success){
  //find prime, if only 1 token is found, directly return. else recursively call calculate itself
  if(p > q || !success || p < 0 || q < 0){
    return 0;
  }
  int type  = tokens[p].type;
  char * tk_val = tokens[p].str;
  word_t result;
  if(p == q /*|| type == DECNUM || type == HEXNUM*/){      //can directly return
    if(type == DECNUM){
      sscanf(tk_val, "%ld", &result);
      return result;
    }
    else if(type == HEXNUM){
      sscanf(tk_val, "%lx", &result);
      return result;
    }
    else{   //the single token should be of numeric type, not others
      Log("bad token: %s\n", tk_val);
      *success = false;
      return 0;
    }
  }
  else {
    char * removed1 = (char *)malloc(1);   //the number of pair of parentheses removed
    char * removed2 = (char *)malloc(1);
    *removed1 = 0;
    *removed2 = 0;
    /*it's hard to decide which function to call first(find vs check)
      if we call find first, the left && right substrs will be then divided and this may affect the check 
          (1 + 1) -> (1 , +,  1). Both the 2 substrs will fail the check
      if we call check first however, since not all the left-most parentheses match with the right-most ones, it may not remove the tokens correctly
          () + () -> ) + (
      so far I have not solved this puzzle yet. I'm just tyring to avoid some of these bugs.
      The good news is that as long as you don't write strange expressions, the result should be correct
    */
    int prime = dominant_operator(p, q);
    type = tokens[prime].type;
    //some preprocess must be done before the substr's check...
    bool checkLeft  = check_parentheses(p, prime - 1, removed1);
    bool checkRight = check_parentheses(prime + 1, q, removed2);
    Log("p = %d, q = %d, prime = %d, left check: %d, right check: %d, full check: %d\n",p, q, prime, checkLeft, checkRight, check_parentheses(p, q, removed1));
    if(!checkLeft || !checkRight){
      if(check_parentheses(p, q, removed1)){}   //maybe also acceptable?
      else if(!(type == DECNUM || type == HEXNUM)){
        printf(ANSI_FMT("illegal expression...maybe bugs also. type = %d\n",ANSI_FG_RED), type);
        return 0;
      }
    }
    int sp1 = p + *removed1, sp2 = prime + 1 + *removed2;
    int eq1 = prime - 1 - *removed1, eq2 = q - *removed2;
    word_t P1 = calculate(sp1, eq1, success);
    word_t P2 = calculate(sp2, eq2, success);
    switch(type){
      case(ADD):  return P1 +  P2; 
      case(SUB):  return P1 -  P2;
      case(MULT): return P1 *  P2;
      case(DIV):  return P1 /  P2;
      case(SL):   return P1 << P2;
      case(SR):   return P1 >> P2;
      case(XOR):  return P1 ^  P2;
      case(OR):   return P1 |  P2;
      case(AND):  return P1 &  P2;
      //well, we still need this... just consider expressions like a singal number such as: 1
      default: 
      {
        word_t result;
        if(type == DECNUM){
          sscanf(tokens[prime].str, "%ld", &result);
        }
        else if(type == HEXNUM){
          sscanf(tokens[prime].str, "%lx", &result);
        }
        return result;
      }
      //Assert(0, "bad type: hope this would not happen.......%d\n",type);
    }
  }
  return 0; //will not be execuated..
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    printf(ANSI_FMT("check for bad tokens!\n",ANSI_FG_RED));
    *success = false;
    return 0;
  }
  word_t result = calculate(0, nr_token - 1, success);
  if(!success){
    printf(ANSI_FMT("invalid expression!\n",ANSI_FG_RED));
  }
  return result;
}