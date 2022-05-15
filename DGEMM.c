//use gcc -lpthread -fopenmp -mavx
#include <x86intrin.h>
#include<stdio.h>
#include<time.h>
#define UNROLL (4)
#define BLOCKSIZE 32
#define size 512
void do_block (int n, int si, int sj, int sk,double *A, double *B, double *C)
{
    for ( int i = si; i < si+BLOCKSIZE; i+=UNROLL*4 )
	for ( int j = sj; j < sj+BLOCKSIZE; j++ ) 
	{
	    __m256d c[4];
	    for ( int x = 0; x < UNROLL; x++ )
		c[x] = _mm256_load_pd(C+i+x*4+j*n);	/* c[x] = C[i][j] */
	    for( int k = sk; k < sk+BLOCKSIZE; k++ )
	    {
		__m256d b = _mm256_broadcast_sd(B+k+j*n);		/* b = B[k][j] */
		for (int x = 0; x < UNROLL; x++)
		    c[x] = _mm256_add_pd(c[x], _mm256_mul_pd(_mm256_load_pd(A+n*k+x*4+i), b));/* c[x]+=A[i][k]*b */
	    }
	for ( int x = 0; x < UNROLL; x++ )
	    _mm256_store_pd(C+i+x*4+j*n, c[x]);		/* C[i][j] = c[x] */
	}
}
void dgemm (int n, double* A, double* B, double* C)
{
    #pragma omp parallel for
	for ( int sj = 0; sj < n; sj += BLOCKSIZE )
	    for ( int si = 0; si < n; si += BLOCKSIZE )
		for ( int sk = 0; sk < n; sk += BLOCKSIZE )
		    do_block(n, si, sj, sk, A, B, C);
}
int main(){
	asm volatile(".align 32\n");
	double a[size][size] __attribute__ ((aligned (32))),
	b[size][size] __attribute__ ((aligned (32))),
	c[size][size] __attribute__ ((aligned (32)));
	for(int i=0;i<size;i++)
	    for(int j=0;j<size;j++)
	    {
	        a[i][j]=i*size+j+1;
	        b[i][j]=a[i][j];
	        c[i][j]=0;
	    }
	double time=0;
	for(int i=0;i<20;i++){
		time_t start = clock();
		dgemm(size,a,b,c);
		time_t end = clock();
		double temp = (double)(end - start);
		printf("%.4f\n",temp);
		time += temp;
	}
	printf("average: %.4f\n",time/20);
	
	    
}
