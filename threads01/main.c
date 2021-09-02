#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
 
//#define DEBUG
#define UINT unsigned long
#define MAXN 2048

void rand_gen(int N, UINT A[][MAXN]) {
    UINT x = 2, n = N*N;
    UINT c = 2;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            x = (x * x + c + i + j)%n;
            A[i][j] = x;
        }
    }
}

void print_matrix(int N, UINT A[][MAXN]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            fprintf(stderr, " %lu", A[i][j]);
        fprintf(stderr, "\n");
    }
}


static UINT A[MAXN][MAXN], B[MAXN][MAXN], C[MAXN][MAXN];
int main(int argc, char **argv) {
    int N = (int) atof(argv[1]);
    int numT = (int) atof(argv[2]);
    rand_gen(N, A);
    rand_gen(N, B);
    multiply(N, A, B, C, numT);

    #ifdef DEBUG
    print_matrix(N, A);
    printf("\n");
    print_matrix(N, B);
    printf("\n");
    print_matrix(N, C);
    printf("\n");
    #endif
    return 0;
}
