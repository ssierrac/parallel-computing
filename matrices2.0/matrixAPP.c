#include <stdio.h>
#include <stdlib.h>
#include "matrixUtils/matrixUtils.h"
#include "benchmarkUtils/timeUtils.h"

int main(int argc, char **argv){
    int N = (int) atoi(argv[1]);
    int a[N][N];
    int b[N][N];
    int c[N][N];

    matrixInitN(N, a);
    matrixInitN(N, b);
    
    sampleStart();
    matrixMulN(N, a, b, c);
    sampleStop();
    printTime();

    return 0;
}
