#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
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
//  TK_SL,    //shift left
//  TK_SR,    //shift right
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

  {" +",              TK_NOTYPE},   // multiple spaces, not addition
  {"\\s+",            TK_NOTYPE},   // white spaces
  {"[0-9]+",          TK_DECNUM},
  {"0[xX][0-9a-f]+",  TK_HEXNUM},
  {"==",              TK_EQ},       // equal
  {"\\*",             TK_MULT},     // mult and div should be treated before add/sub
  {"/",               TK_DIV},   
  {"-",               TK_SUB},      // sub  
  {"\\+",             TK_ADD},      // plus,'+' has special meaning thus need some \. \+ means '+'. However to recognize the first \ we need another \.
//  {"<<",              TK_SL},
//  {">>",              TK_SR},

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
  int type;
  char str[32];
}Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

/*static*/ bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) { //e starts with a token
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);


        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        char * token = (char *)malloc(substr_len + 1);
        for(int t = 0; t < substr_len; t++)
          token[t] = e[position+t];
        token[substr_len] = '\0';

        strcpy(tokens[nr_token].str, token);
        tokens[nr_token++].type = rules[i].token_type;

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
  for(int i =0 ; i < nr_token; i++)
  {
    char * temp = tokens[i].str;
    int type = tokens[i].type;
    printf(ANSI_FMT("tk = %-8s\ttype = %d\n", ANSI_FG_YELLOW), temp, type);
  }

  return true;
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  TODO();

  return 0;
}
