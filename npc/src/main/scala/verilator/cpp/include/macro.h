#ifndef __MACRO_H__
#define __MACRO_H__

#include <string.h>

// macro stringizing
///the # and ## operator is only avaliable at preprocess stage

#define str_temp(x) #x
#define str(x) str_temp(x)
// strlen() for string constant
#define STRLEN(CONST_STR) (sizeof(CONST_STR) - 1)       //== strlen lib function

// calculate the length of an array
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0])) //the '\0' is included

#define concat_temp(x, y) x ## y    //connect any 2 tokens. Like 114 ## 514 = 114514, x ## y = xy
#define concat(x, y) concat_temp(x, y)
#define concat3(x, y, z) concat(concat(x, y), z)
#define concat4(x, y, z, w) concat3(concat(x, y), z, w)
#define concat5(x, y, z, v, w) concat4(concat(x, y), z, v, w)

// macro testing
// See https://stackoverflow.com/questions/26099745/test-if-preprocessor-symbol-is-defined-inside-macro
#define CHOOSE2nd(a, b, ...) b
#define MUX_WITH_COMMA(contain_comma, a, b) CHOOSE2nd(contain_comma a, b)
#define MUX_MACRO_PROPERTY(p, macro, a, b) MUX_WITH_COMMA(concat(p, macro), a, b)   
///here the property of a macro means its value(0 / 1)
//define placeholders for some property. these will cause a "contain_comma"
/*argument passed to CHOOSE2nd : good match vs bad match
  good : X(just a placeholder), X, Y    bad: __P_DEF{/ONE/ZERO}_macroname X, Y(there is a space in the 1st arg). 
  seems like a grammer mistake? But no big deal since preprocess stage obly expand the macro and doesn't check teh mistakes. And since we naver choose the 1st arg, the mistake will never be taken in the future stage*/
#define __P_DEF_0  X,   //only good match will generate this comma, which divide the args
#define __P_DEF_1  X,   //a comma is generated when a match happens. Or 
#define __P_ONE_1  X,
#define __P_ZERO_0 X,
// define some selection functions based on the properties of BOOLEAN macro(that is, the macro's value should be 1 or 0)
#define MUXDEF(macro, X, Y)  MUX_MACRO_PROPERTY(__P_DEF_, macro, X, Y)
#define MUXNDEF(macro, X, Y) MUX_MACRO_PROPERTY(__P_DEF_, macro, Y, X)  //here we change the order of X, Y
#define MUXONE(macro, X, Y)  MUX_MACRO_PROPERTY(__P_ONE_, macro, X, Y)
#define MUXZERO(macro, X, Y) MUX_MACRO_PROPERTY(__P_ZERO_,macro, X, Y)

// test if a boolean macro is defined
#define ISDEF(macro) MUXDEF(macro, 1, 0)
// test if a boolean macro is undefined
#define ISNDEF(macro) MUXNDEF(macro, 1, 0)
// test if a boolean macro is defined to 1
#define ISONE(macro) MUXONE(macro, 1, 0)
// test if a boolean macro is defined to 0
#define ISZERO(macro) MUXZERO(macro, 1, 0)
// test if a macro of ANY type is defined
///we do this by compare macro name and its value. eg if we use #define foo bar, then the macro name is not equal to its value
// NOTE1: it ONLY works inside a function, since it calls `strcmp()`
// NOTE2: macros defined to themselves (#define A A) will get wrong results. Since its name = its value, the test will be past
#define isdef(macro) (strcmp("" #macro, "" str(macro)) != 0)

// simplification for conditional compilation
#define __IGNORE(...)
#define __KEEP(...) __VA_ARGS__
// keep the code if a boolean macro is defined
#define IFDEF(macro, ...) MUXDEF(macro, __KEEP, __IGNORE)(__VA_ARGS__)
// keep the code if a boolean macro is undefined
#define IFNDEF(macro, ...) MUXNDEF(macro, __KEEP, __IGNORE)(__VA_ARGS__)
// keep the code if a boolean macro is defined to 1
#define IFONE(macro, ...) MUXONE(macro, __KEEP, __IGNORE)(__VA_ARGS__)
// keep the code if a boolean macro is defined to 0
#define IFZERO(macro, ...) MUXZERO(macro, __KEEP, __IGNORE)(__VA_ARGS__)

// functional-programming-like macro (X-macro)
// apply the function `f` to each element in the container `c`
// NOTE1: `c` should be defined as a list like:
//   f(a0) f(a1) f(a2) ...
// NOTE2: each element in the container can be a tuple
#define MAP(c, f) c(f)

#define BITMASK(bits) (word_t)(((__uint128_t)1 << (bits)) - 1)
#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1)) // similar to x[hi:lo] in verilog
/*
        ___________________________________________________
inst:  |        | 111...1(BITMASK) | removed after shift   |
                hi                 lo 
                length = hi - lo + 1
those bits in the BITMASK's range will join the & computation. And since the bitmask is full of 1, the result will be the same as the values originally located in the range

*/
//len is the original bits length
//if we use a function, then the bit filed must be a const value, not variable
#define SEXT(x, len) ({ struct { int64_t n : len; } __x = { .n = x }; (uint64_t)__x.n; })

#define ROUNDUP(a, sz)   ((((uintptr_t)a) + (sz) - 1) & ~((sz) - 1))
#define ROUNDDOWN(a, sz) ((((uintptr_t)a)) & ~((sz) - 1))

#define PG_ALIGN __attribute((aligned(4096)))

#if !defined(likely)
#define likely(cond)   __builtin_expect(cond, 1)
#define unlikely(cond) __builtin_expect(cond, 0)
#endif

#endif

#define TRACE_STRINGIFY(item) "" #item
#define TRACE(macro, message)                          \
    do {                                               \
        if (strcmp( #macro, TRACE_STRINGIFY(macro)))   \
            printf("%s\n, "message);                   \
    } while (0)

/*generally, a macro's value is different from its name(from the view of string)
  for things like #define foo bar, the argument of TRACE_STRINGIFY will be substituted by bar.
  and for those macros not defined, the argument won't have the chance to be subsituted. So 2 string would be the same

*/