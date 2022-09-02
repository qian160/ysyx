#include <isa.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>        
#define is_arith(TK) (TK >= MULT && TK <= SR)
enum {
  DECNUM,
  HEXNUM,
  EQUAL, 
  //ARITH---
  MULT,  
  DIV,   
  ADD ,  
  SUB,   
  SL,    
  SR,
  NOT,
  AND,
  OR,
  XOR,
  //ARITH---
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

static struct rule {
  const char *regex;
  int token_type;
  int priority;
} rules[] = {
  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  //priority rule:
  //number = 0, + - * / = 4, some bitwise and logical op 1 - 3(lower than normal arith)
  {"0[xX][0-9a-f]+",  HEXNUM, 0},   //check before DECNUM, or the 0 prefix will be lost
  {"[0-9]+",          DECNUM, 0},
  {"==",              EQUAL,  3},       // equal
  {"\\*",             MULT,   5},     // mult and div should be treated before add/sub
  {"/",               DIV,    5},   
  {"-",               SUB,    4},      // sub  
  {"\\+",             ADD,    4},      // plus,'+' has special meaning thus need some \. \+ means '+'. However to recognize the first \ we need another \.
  {" +",              NOTYPE, 0},   // multiple spaces, not addition
  {"\\s+",            NOTYPE, 0},   // white spaces
  {"\\(",             LEFT,   7},
  {"\\)",             RIGHT,  7},
  {"<<",              SL,     4},
  {">>",              SR,     4},
  {"\\$[a-zA-Z]{2}",  REG,    0},
  {"!",               NOT,    6},
  {"&",               AND,    2},
  {"\\|",             OR,     1},
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
  int   priority;
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
bool check_parentheses(int l, int r){   //scan the array and use a stack
  int i;
	if (tokens[l].type == LEFT && tokens[r].type == RIGHT)
	{
		int lc = 0, rc = 0;
		for (i = l + 1; i < r; i ++)
		{
			if (tokens[i].type == LEFT )lc ++;
			if (tokens[i].type == RIGHT)rc ++;
			if (rc > lc)return false;	
		}
		if (lc == rc)return true;
	}
	return false;
}

int find_prime_idx(int p, int q){
  int i,j;
	int min_priority = 114514;
	int oper = p;
	for (i = p; i <= q;i ++)
	{ //number should not be prime operator
		if (tokens[i].type == DECNUM || tokens[i].type == HEXNUM || tokens[i].type == REG)
			continue;
		int cnt = 0;
		bool key = true;
		for (j = i - 1; j >= p ;j --)
		{ 
			if (tokens[j].type == '(' && !cnt){key = false;break;}
			if (tokens[j].type == '(')cnt --;
			if (tokens[j].type == ')')cnt ++; 
		}
		if (!key)continue;
		if (tokens[i].priority <= min_priority){
      min_priority = tokens[i].priority;
      oper = i;
    }
  }
	return oper;
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
        //empty token could just be thrown away
        if(rules[i].token_type != NOTYPE){
            strncpy(tokens[nr_token].str,e + position, substr_len);
            tokens[nr_token].str[substr_len] = '\0';
            tokens[nr_token].type = rules[i].token_type;
            tokens[nr_token++].priority = rules[i].priority;
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
    int priv = tokens[i].priority;
    printf(ANSI_FMT("token[%2d] = %-8s\ttype = %d\tpriv = %d\n", ANSI_FG_YELLOW),i, temp, type,priv);
  }
  putchar('\n');
  putchar('\n');
//#endif
  //------
  return true;
}

#define P1 calculate(sp1, eq1, success)
#define P2 calculate(sp2, eq2, success)

word_t calculate(int l, int r){
  if (l > r){Assert (l>r,"something happened!\n");return 0;}
  if (l == r) {
    word_t num = 0;
    if (tokens[l].type == DECNUM)
      sscanf(tokens[l].str,"%ld",&num);
    if (tokens[l].type == HEXNUM)
      sscanf(tokens[l].str,"%lx",&num);

  else if (check_parentheses (l,r))return calculate (l + 1, r - 1);
  else {
		int op = find_prime_idx (l, r);
    if (l == op /*|| tokens[op].type == POINTOR || token [op].type == NEG*/)
		{
			word_t val = calculate (l + 1,r);
//			printf ("val = %d\n",val);
			switch (tokens[l].type)
      {
				case NOT:return !val;
				default :Assert (1,"default\n");
			} 
		}

		word_t val1 = calculate(l,op - 1);
		word_t val2 = calculate(op + 1,r);
//		printf ("1 = %d,2 = %d\n",val1,val2);
		switch (tokens[op].type)
		{
			case ADD:   return val1 + val2;
			case SUB:   return val1 - val2;
			case MULT:  return val1 * val2;
			case DIV:   return val1 / val2;
			case AND:   return val1 & val2;
			case OR:    return val1 | val2;
      case XOR:   return val1 ^ val2;
			default:
			break;
    }
  }
	assert (1);
	return -123456;
  }
  return 0;
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    printf(ANSI_FMT("check for bad tokens!\n",ANSI_FG_RED));
    *success = false;
    return 0;
  }
  word_t result = calculate(0, nr_token - 1);
  if(!success){
    printf(ANSI_FMT("invalid expression!\n",ANSI_FG_RED));
  }
  return result;
}