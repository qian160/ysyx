#include<stdio.h>
#include<stdint.h>

typedef uint64_t word_t;

#define BITMASK(bits) ((1ull << (bits)) - 1)

#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1)) // similar to x[hi:lo] in verilog

#define SEXT(x, len) ({ struct { int64_t n : len; } __x = { .n = x }; (uint64_t)__x.n; })


static word_t immJ(uint32_t i) { return SEXT((BITS(i, 31, 31) << 20) | (BITS(i, 19, 12) << 12) | (BITS(i, 20, 20) << 11) | (BITS(i, 30, 21) << 1 | 0 ), 21); }

int main(){
	word_t t  = immJ(0xf75fffff);
	printf("%lx\n", t);
}
