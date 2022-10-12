#include <isa.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */

word_t paddr_read(paddr_t addr, int len);
#include <regex.h>        
enum {
  NOTYPE, 
  DECNUM,
  HEXNUM,
  EQUAL,
  NOTEQAL,
  COND_AND, //condition op
  SL,
  SR,
  COND_OR,
  REG,
  EPC,
  PC,
  MINUS,
  POINTER,        //can't be distinguished directly. need also to check the previous token's type
  LET,            //<=
  GET,            //>=
  CHAR,
  //ADDRESS = '&',
  LT      = '<',  //LESS THAN
  GT      = '>',  //GREATER THAN
  MOD     = '%',  
  MULT    = '*',
  DIV     = '/',
  ADD     = '+',
  SUB     = '-',
  LEFT    = '(',
  RIGHT   = ')',
  BIT_OR  = '|',
  BIT_XOR = '^',
  BIT_AND = '&',
  //op a, not a op b
  NEG     = '~',
  NOT     = '!',
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

enum {  BRA_SURROUNDED, MATCH, DISMATCH, };

static struct rule {
  const char *regex;
  int token_type;
  int priv;
} rules[] = {
  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  //bra
  {"\\(",             LEFT,     9},
  {"\\)",             RIGHT,    9},
  //left side op, remember to modify pointer and minus, here we can't check it out
  {"!",               NOT,      8},
  {"~",               NEG,      8},
  //mult, div, mod
  {"\\*",             MULT,     7},   // mult and div should be treated before add/sub
  {"/",               DIV,      7},   
  {"%",               MOD,      7},
  //add, sub
  {"-",               SUB,      6},
  {"\\+",             ADD,      6},
  //shift
  {"<<",              SL,       5},
  {">>",              SR,       5},
  //compare
  {">=",              GET,      4},
  {"<=",              LET,      4},
  {"<",               LT,       4},
  {">",               GT,       4},
  //lower privilege level compare
  {"!=",              NOTEQAL,  3},
  {"==",              EQUAL,    3},   // equal
  //logical op, need to be checked before bitwise op
  {"\\|\\|",          COND_OR,  1},
  {"&&",              COND_AND, 1},
  //bitwise  op
  {"\\|",             BIT_OR,   2},
  {"&",               BIT_AND,  2},
  {"\\^",             BIT_XOR,  2},
  //const numbers and white space
  {"0[xX][0-9a-f]+",  HEXNUM,   0},   //check before DECNUM, or the 0 prefix will be lost
  {"[0-9]+",          DECNUM,   0},
  {"'[a-zA-Z0-9]'",   CHAR,     0},
  {"\\$[pP][cC]",     PC,       0},
  {"\\$[a-zA-Z0-9]+", REG,      0},
  {"[$]{0,}[mM][eE][pP][cC]",EPC,      0},
  {" +",              NOTYPE,   0},   // multiple spaces, not addition
  {"\\s+",            NOTYPE,   0},   // white spaces

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
  char  str[32];    //name
  int   priv;
}Token;

static Token tokens[2000] __attribute__((used)) = {};   //for test, we enlarge the buffer size
static int nr_token __attribute__((used))  = 0;

typedef struct{
  char parentheses[2000];   //20 is very enough
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

/*  about surrounding:
  1.(1 + 2)       okay  2.(1 + 2) + (3 + 4) not okay!
  3.(3 * (2 + 1)) okay  4.((1 + 2) * 3)     okay
  5.(((1 + 2)))   okay
  
  6(1 + (2) + 3). okay!!!

  the rule seems to be:
  a.left = '(' && right = ')' &&  #bras = 2 (easy case)
  b.left = '(' && right = ')' && have more than 1 continous bras one one side

  as for the 6th case....
  since hard to decide, let's come to the rude way.
  how about forgetting about all the cases and just have a try to see if we can throw? 
  1.left = .... right = ...
  2.have a try if we can throw. if it turns out to be can && cond 1 is true, then throw

*/
//when only 1 token exists, the argument  prime - 1 will be bad...
int check_parentheses(int p, int q){   //scan the array and use a stack
  if( p > q ) return DISMATCH; //something went wrong...
  S.top = 0;    ///reset the stack
  bool surround_flag = (tokens[p].type == LEFT && tokens[q].type == RIGHT); //this must be true if you want to return a bra_surrounded
  bool removeSafe = false;
  //test if we can safely remove the bras
  if(surround_flag){
    for(int j = p + 1; j <= q - 1; j++){
      char type = tokens[j].type;
      if(type == LEFT){
        push(LEFT);
      }
      else if(type == RIGHT){
        push(RIGHT);
        if(S.top > 1 && S.parentheses[S.top -2] == LEFT)
          S.top -= 2;
      }
    }
    removeSafe = S.top == 0;
  }
  S.top = 0;
  for(; p <= q; p++){
    char type = tokens[p].type;
    if(type == LEFT){
      push(LEFT);
    }
    else if(type == RIGHT){
      push(RIGHT);
      if(S.top > 1 && S.parentheses[S.top -2] == LEFT)
        S.top -= 2;
    }
  }
  if(S.top != 0) return DISMATCH;
  else if(surround_flag && removeSafe) return BRA_SURROUNDED;
  else return MATCH;
}
typedef struct {
  int priv[10];
  int top;
}privStack;   //for privilege recovery in prime find. maybe nested parentheses will need this

privStack PS;

static int dominant_operator(int start, int end)
{	
  int op = start, pri_min = 10;	
  for (int i = start; i <= end;i ++)
  {		
    int type = tokens[i].type; 
    //number can't be operator
    if (type == HEXNUM || type == DECNUM || type == REG || type == PC || type == CHAR || type == EPC)
      continue;
    if(type == LEFT){
      PS.priv[PS.top++] = pri_min;    //temporarily refuse any requests
      pri_min = -1;
    }
    else if(type == RIGHT){
      if(PS.top == 0) Assert(0, "bra match error\n");
      pri_min = PS.priv[--PS.top];    //now we get out of the bra's range and can continue to accept tokens
    }
    else if (tokens[i].priv <= pri_min) 
    {      
      op = i;      
      pri_min = tokens[op].priv;
    }  
  }	
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
            tokens[nr_token].priv = rules[i].priv;
            //check for pointer and minus
            //Log("\ntoken[%2d] found! type = %d, value = %s\n",nr_token, tokens[nr_token].type, tokens[nr_token].str);
            if (tokens[nr_token].type == '*' && (nr_token == 0 || (tokens[nr_token - 1].type != DECNUM && tokens[nr_token - 1].type != HEXNUM && tokens[nr_token - 1].type != REG && tokens[nr_token - 1].type !=')' && tokens[nr_token - 1].type != PC) )) {
              tokens[nr_token].type = POINTER;
              tokens[nr_token].priv = 8;
              //Log("a pointer found\n");
            }
            if (tokens[nr_token].type == '-' && (nr_token == 0 || (tokens[nr_token - 1].type != DECNUM && tokens[nr_token - 1].type != HEXNUM && tokens[nr_token - 1].type != REG && tokens[nr_token - 1].type !=')' && tokens[nr_token - 1].type != PC)  )) {
              tokens[nr_token].type = MINUS;
              tokens[nr_token].priv = 8;
              //Log("a minus found\n");
            }
            nr_token++;
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
#ifdef CONFIG_PRINT_TOKEN
  printf("here are the tokens:\n");
  for(int i =0 ; i < nr_token; i++)
  {
    char * temp = tokens[i].str;
    int type = tokens[i].type;
    int priv = tokens[i].priv;
    printf(ANSI_FMT("token[%2d] = %-8s\ttype = %d\tpriv = %d\n", ANSI_FG_YELLOW),i, temp, type, priv);
  }
  putchar('\n');
  putchar('\n');
#endif
  //------
  return true;
}

word_t calculate(int p, int q, bool * success){
  //find prime, if only 1 token is found, directly return. else recursively call calculate itself
  if(p > q || p < 0 || q < 0 || !(*success)){
    return 0;
  }
  int type  = tokens[p].type;
  char * tk_val = tokens[p].str;
  word_t result;
  if(p == q){      //single token, can directly return. Hopefully this hould be a number
    if(type == DECNUM){
      sscanf(tk_val, "%ld", &result);
      return result;
    }
    else if(type == HEXNUM){
      sscanf(tk_val, "%lx", &result);
      return result;
    }
    else if(type == REG){
      word_t val = isa_reg_str2val(tk_val, success);
      if(*success) return val;
      else printf(ANSI_FMT("bad reg name\n",ANSI_FG_RED));
      *success = false;
      return 1145141919;
    }
    else if(type == PC){
      return cpu.pc;
    }
    else if(type == CHAR){
      return tk_val[1];
    }
    else if(type == EPC){
      return cpu.mepc;
    }
    else{   //the single token should be of numeric type, not others
      Log("bad token: %s\n", tk_val);
      *success = false;
      return 0;
    }
  }
  int match_result = check_parentheses(p, q);
  if(match_result == DISMATCH){
    printf(ANSI_FMT("bra dismatch\n",ANSI_FG_RED));
    *success = false;
    return 0;
  }
  else if(match_result == BRA_SURROUNDED){
    return calculate(p + 1, q - 1, success);
    //cut the range and try again.
  } 
  else {        //a good match which we can process with
    int prime = dominant_operator(p, q);
    type = tokens[prime].type;
    //op a case
    if(prime == p){
      word_t temp = calculate(p + 1, q, success);
      switch(type){
        case('!'):  return !temp;
        case('~'):  return ~temp;
        case(MINUS):  return -temp;
        case(POINTER):return paddr_read(temp, 8);
      }
    }
    //a op b case
    word_t P1 = calculate(p, prime - 1, success);
    word_t P2 = calculate(prime + 1, q, success);
    switch(type){
      case('+'):  return P1 +  P2; 
      case('-'):  return P1 -  P2;
      case('*'):  return P1 *  P2;
      case('/'):  return P1 /  P2;
      case('|'):  return P1 |  P2;
      case('&'):  return P1 &  P2;
      case('^'):  return P1 ^  P2;
      case(SL ):  return P1 << P2;
      case(SR ):  return P1 >> P2;
      case('>'):  return P1 >  P2;
      case('<'):  return P1 <  P2;
      case(GET):  return P1 >= P2;
      case(LET):  return P1 <= P2;
      case(COND_AND): return P1 && P2;
      case(COND_OR):  return P1 || P2;
      case(NOTEQAL):  return P1 != P2;
      case(EQUAL):    return P1 == P2;
      default: Assert(0, "bad op type: %d\n", type);  //hope this will not happen...
    }
  }
  return 1145141919810;
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    printf(ANSI_FMT("check for bad tokens!\n",ANSI_FG_RED));
    *success = false;
    return 0;
  }
  return calculate(0, nr_token - 1, success);
}