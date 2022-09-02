#include <isa.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>        
#define is_arith(TK) (TK >= TK_MULT && TK <= TK_SR)
enum {
  TK_DECNUM,
  TK_HEXNUM,
  TK_EQ, 
  TK_LEFT,
  TK_MULT,  //0100, 4
  TK_DIV,   //0101, 5
  TK_ADD ,  //0110, 6
  TK_SUB,   //0111, 7
  TK_SL,    //1000, 8
  TK_SR,    //1001, 9
  TK_RIGHT,
  TK_NOTYPE, 
  TK_REG,
  TK_POINTER,
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

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {
  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {"0[xX][0-9a-f]+",  TK_HEXNUM},   //check before DECNUM, or the 0 prefix will be lost
  {"[0-9]+",          TK_DECNUM},
  {"==",              TK_EQ},       // equal
  {"\\*",             TK_MULT},     // mult and div should be treated before add/sub
  {"/",               TK_DIV},   
  {"-",               TK_SUB},      // sub  
  {"\\+",             TK_ADD},      // plus,'+' has special meaning thus need some \. \+ means '+'. However to recognize the first \ we need another \.
  {" +",              TK_NOTYPE},   // multiple spaces, not addition
  {"\\s+",            TK_NOTYPE},   // white spaces
  {"\\(",             TK_LEFT},
  {"\\)",             TK_RIGHT},
  {"<<",              TK_SL},
  {">>",              TK_SR},
  {"$[a-zA-Z]{2}",    TK_REG},
  //{"\\*",             TK_POINTER},
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
#define LEFT  '('
#define RIGHT ')'
//when only 1 token exists, the argument  prime - 1 will be bad...
bool check_parentheses(int p, int q, char * removed){   //scan the array and use a stack
  //if( p > q ) return false; //something went wrong...
  S.top = 0;    ///reset the stack
  //if surrounded by a pair of parentheses, just throw it away
  /*
  Log("check from %d to %d... the original substr is\n", p, q);
  for(int i = p; i <= q; i++)
    printf("%s  ",tokens[i].str);
  putchar('\n');
  */
  if(p > q || q < 0 || q < 0) return true;    //seems strange, but it works......
  int sp = p, eq = q;   //start of p && end of q
  while((tokens[sp].type == TK_LEFT && tokens[eq].type == TK_RIGHT)){ //logic short-circuting
    strcpy(tokens[sp].str, "removed");
    strcpy(tokens[eq].str, "removed");    
    tokens[sp++].type = TK_NOTYPE;
    tokens[eq--].type = TK_NOTYPE;
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
    if(type == TK_LEFT){
      push(LEFT);
    }
    else if(type == TK_RIGHT){
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

int find_prime_idx(int p, int q)    //the prime opt should have low privilege
{
  int priv = 114514;      //very high privilege, so any new income will be lower than it and replace it
  int index = p;
  /*
  Log("find from %d to %d...\nthe substr is:\n",p, q);
  for(int j = p; j <= q; j++)
    printf("%s  ", tokens[j].str);
  putchar('\n');
  */
  PS.top = 0;
  Log("from %d to %d", p, q);
  while(tokens[p].type == TK_LEFT && tokens[q].type == TK_RIGHT){
    p++;q--;
  }
  for(; p <= q; p++ ){
    int type = tokens[p].type;
    if(type == TK_ADD || type == TK_SUB || type == TK_SL || type == TK_SR){
      if(priv >= 0){
        priv = 0;
        index = p;
      }
    }
    else if(type == TK_DIV || type == TK_MULT){
      if(priv >= 1){
        priv  = 1;
        index = p;
      }
    }
    else if(type == TK_LEFT){
      PS.priv[PS.top++] = priv;
      priv = -1;    //temorarily refuse any requests 
    }
    else if(type == TK_RIGHT){
      priv = PS.priv[--PS.top];
    }
    //default 
    else if(type == TK_DECNUM || type == TK_HEXNUM){
      if(priv >= 810){
        priv = 810;
        index = p;
      }
    }
  }
  Log("the prime is %s\n", tokens[index].str);
  return index;
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

        //produce the token string and copy it to the array

        if(rules[i].token_type != TK_NOTYPE){
            char * token = (char *)malloc(substr_len + 1);
            for(int t = 0; t < substr_len; t++)
              token[t] = e[position+t];
            token[substr_len] = '\0';

            strcpy(tokens[nr_token].str, token);
            tokens[nr_token++].type = rules[i].token_type;
            free(token);
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
#ifdef PRINT_TOKEN
  printf("the tokens are:\n");
  for(int i =0 ; i < nr_token; i++)
  {
    char * temp = tokens[i].str;
    int type = tokens[i].type;
    printf(ANSI_FMT("token[%2d] = %-8s\ttype = %d\n", ANSI_FG_YELLOW),i, temp, type);
  }
  putchar('\n');
  putchar('\n');
#endif
  //------
  return true;
}

#define P1 calculate(sp1, eq1, success)
#define P2 calculate(sp2, eq2, success)

word_t calculate(int p, int q, bool * success){
  //find prime, if only 1 token is found, directly return. else recursively call calculate itself
  if(p > q || !success || p < 0 || q < 0){
    return 0;
  }
  int type  = tokens[p].type;
  char * tk_val = tokens[p].str;
  word_t result;
  if(p == q /*|| type == TK_DECNUM || type == TK_HEXNUM*/){      //can directly return
    if(type == TK_DECNUM){
      sscanf(tk_val, "%ld", &result);
      return result;
    }
    else if(type == TK_HEXNUM){
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
    *removed1 = 0;
    char * removed2 = (char *)malloc(1);
    *removed2 = 0;

    int prime = find_prime_idx(p, q);
    type = tokens[prime].type;
    bool checkLeft  = check_parentheses(p, prime - 1, removed1);
    bool checkRight = check_parentheses(prime + 1, q, removed2);
    //Log("p = %d, q = %d, prime = %d, left check: %d, right check: %d\n",p, q, prime, checkLeft, checkRight);
    if(!checkLeft || !checkRight){
      printf(ANSI_FMT("illegal expression\n",ANSI_FG_RED));
      return 0;
    }
    int sp1 = p + *removed1, sp2 = prime + 1 + *removed2;
    int eq1 = prime - 1 - *removed1, eq2 = q - *removed2;
    switch(type){
      case(TK_ADD):  return P1 +  P2; 
      case(TK_SUB):  return P1 -  P2;
      case(TK_MULT): return P1 *  P2;
      case(TK_DIV):  return P1 /  P2;
      case(TK_SL):   return P1 << P2;
      case(TK_SR):   return P1 >> P2;
      //well, we still need this... consider expressions like a singal number like 1
      default: 
      {
        word_t result;
        if(type == TK_DECNUM){
          sscanf(tokens[prime].str, "%ld", &result);
        }
        else if(type == TK_HEXNUM){
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