#include<stdio.h>
#include "matrixUtils/matrixUtils.h"

int main(){
    int m, n, p, q;
    printf("Matrix basic operations:\n");

    printf("\nInsert Matrix a dimensions: ");
    scanf("%d %d", &m, &n);
    int a[m][n];
    printf("Fill matrix a numbers:\n");
    matrixFill(m, n, a);

    printf("\nInsert Matrix b dimensions: ");
    scanf("%d %d", &p, &q);
    int b[p][q];
    printf("Fill matrix b numbers:\n");
    matrixFill(p, q, b);

    printf("\nMatrix a:\n");
    matrixPrint(m, n, a);
    printf("\nMatrix b:\n");
    matrixPrint(p, q, b);

    if(m==p && n==q){
        int r[m][n];
        printf("\nMatrix addition a + b:\n");
        matrixAdd(m, n, a, b, r);
        matrixPrint(m, n, r);

        printf("\nMatrix substraction a - b:\n");
        matrixSub(m, n, a, b, r);
        matrixPrint(m, n, r);
    }else{
        printf("\nCan't make matrix addition and subtraction\n");
        printf("Matrices a and b have different dimensions.\n");
    }

    if(n==p){
        int r[m][q];
        printf("\nMatrix Multiplication a * b:\n");
        matrixMul(m, n, q, a, b, r);
        matrixPrint(m, q, r);
    }else{
        printf("\nCan't make matrix multiplication.\n");
        printf("Invalid dimensions.\n");
    }

    printf("\nMatrix transpose aT:\n");
    int aT[n][m];
    matrixT(m, n, a, aT);
    matrixPrint(n, m, aT);

    printf("\nMatrix transpose bT:\n");
    int bT[q][p];
    matrixT(p, q, b, bT);
    matrixPrint(q, p, bT);

    return 0;
}
