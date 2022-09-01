#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>        // % 8, >= 4
#define is_arith(TK) ((TK & 0b111) & 0b0100)
enum {
  TK_NOTYPE, 
  TK_DECNUM,
  TK_HEXNUM,
  TK_EQ, 
  TK_MULT,  //0100, 4
  TK_DIV,   //0101
  TK_ADD ,  //0110
  TK_SUB,   //0111.for arith type, bit(3) = 0 and bit(2) = 1. That is TK < 8 && tk(2) = 1
  TK_LEFT,
  TK_RIGHT,
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
  int   index;
}Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

typedef struct{
  char parentheses[20];
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
#define LEFT  '('
#define RIGHT ')'

bool check_parentheses(int p, int q){
  if( p > q ) return false; //something went wrong...
  S.top = 0;    ///reset the stack
  for(; p < q; p++){
    char type = tokens[p].type;
    if(type == TK_LEFT)
      push(LEFT);
    else if(type == TK_RIGHT){
      push(RIGHT);
      if(S.top > 1 && S.parentheses[S.top -2] == LEFT)
        S.top -= 2;
    }
  }
  return S.top == 0;
}

int find_prime_idx(int p, int q)    //the prime opt should have low privilege
{
  int priv = 114514;
  int oldpriv = 1919810;
  int index = 0;
  for(int i = 0; i < nr_token; i++ ){
    int type = tokens[i].type;

    if(type == TK_ADD || type == TK_SUB){
      if(priv >= 0){
        priv = 0;
        index = i;
      }
    }
    else if(type == TK_DIV || type == TK_MULT){
      if(priv >= 1){
        priv = 1;
        index = i;
      }
    }
    else if(type == TK_LEFT){
      oldpriv = priv;
      priv = -1;    //temorarily refuse any requests 
    }
    else if(type == TK_RIGHT){
      priv = oldpriv;
    }
    printf("round%d, idx = %d, type = %d\n", i, index, type );
  }
  return index;
}

//this function will add tokens to the array
static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;
  /**/int elen = strlen(e);

  nr_token = 0;

  while (e[position] != '\0') {
    printf(ANSI_FMT("%s\n", ANSI_FG_MAGENTA), e + position);
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {                      //so must starts at 0, since we want to get the tokens in order
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) { //e starts with a token
        char *substr_start __attribute__((unused)) = e + position ;
        int substr_len = pmatch.rm_eo;
        //print the debug information, disabled now
        //Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //    i, rules[i].regex, position, substr_len, substr_len, substr_start);

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        //produce the token and copy it to the array
        if(rules[i].token_type != TK_NOTYPE){
            char * token = (char *)malloc(substr_len + 1);
            for(int t = 0; t < substr_len; t++)
              token[t] = e[position+t];
            token[substr_len] = '\0';

            strcpy(tokens[nr_token].str, token);
            tokens[nr_token].index = position;
            tokens[nr_token++].type = rules[i].token_type;
        }

        position += substr_len;
/*
        switch (rules[i].token_type) {
          default: //TODO();
        }
*/
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  //debug
  for(int i =0 ; i < nr_token; i++)
  {
    char * temp = tokens[i].str;
    int type = tokens[i].type;
    int index = tokens[i].index;
    printf(ANSI_FMT("token[%2d] = %-8s\ttype = %d\tindex = %d\n", ANSI_FG_YELLOW),i, temp, type, index);
  }
  printf("check: %d\n", check_parentheses(0, elen - 1));
  printf("prime is: token[%2d]\n", find_prime_idx(0, nr_token));
  Log("test...\n");
  //------
  return true;
}

int calculate(int p, int q, bool * success){
  //find prime, if only 1 token is found, directly return. else recursively call calculate itself
  int result = 0;
  if(p > q || !success){
    return 0;
  }
  else if(p == q){      //can directly return
    int type = tokens[p].type;
    char * tk_val = tokens[p].str;
    if(type == TK_DECNUM){
      sscanf(tk_val, "%d", &result);
      return result;
    }
    else if(type == TK_HEXNUM){
      sscanf(tk_val, "%x", &result);
      return result;
    }
    else{
      *success = false;
      return 0;
    }
  }
  else{
    int prime = find_prime_idx(p, q);
    int type  = tokens[prime].type;
    switch(type){
      case(TK_ADD):  result = result + calculate(p, prime - 1, success) + calculate( prime + 1, q, success);break;
      case(TK_SUB):  result = result + calculate(p, prime - 1, success) - calculate( prime + 1, q, success);break;
      case(TK_MULT): result = result + calculate(p, prime - 1, success) * calculate( prime + 1, q, success);break;
      case(TK_DIV):  result = result + calculate(p, prime - 1, success) / calculate( prime + 1, q, success);break;
      default: break;
    }
  }
  return 0; //will not be execuated..
}

word_t expr(char *e, bool *success) {   //the main calculate function. first make the token
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  //word_t result = calculate(0, nr_token, success);
word_t result = 0;
  if(!success){
    printf(ANSI_FMT("invalid expression!\n",ANSI_FG_RED));
  }
  return result;
}
