
#include <stdio.h>

void matrixSum(int m, int n, int a[m][n], int b[m][n], int r[m][n]);
void matrixSubs(int m, int n, int a[m][n], int b[m][n], int r[m][n]);
void matrixMul(int m, int n, int p, int a[m][n], int b[n][p], int r[m][p]);
void matrixTrans(int m, int n, int a[m][n], int r[n][m]);
void matrixPrint(int m, int n, int a[m][n]);
void matrixFill(int m, int n, int a[m][n]);

int main(){
    int m, n, p, q;
    printf("Matrix operations: \n"); 
    printf("Matrix a dimensions: \n");
    scanf("%d", &m);
    scanf("%d", &n);
    int a[m][n];
    printf("Matrix a fill:\n");
    matrixFill(m, n, a);
    printf("Matrix b dimensions: \n");
    scanf("%d", &p);
    scanf("%d", &q);
    int b[p][q];
    printf("Matrix b fill:\n");
    matrixFill(p, q, b);
    
    int r[m][n];
    int t[n][m];

    printf("Matrix a:\n");
    matrixPrint(m,n,a);
    printf("\nMatrix b:\n");
    matrixPrint(m,n,b);

    printf("\nMatrix addition a+b:\n");
    matrixSum(m,n,a,b,r);
    matrixPrint(m,n,r);

    printf("\nMatrix substraction a-b:\n");
    matrixSubs(m,n,a,b,r);
    matrixPrint(m, n, r);

    printf("\nMatrix Multiplication a*b:\n");
    matrixMul(m, n, m, a, b, r);
    matrixPrint(m, n, r);

    printf("\nMatrix transpose Ta:\n");
    matrixTrans(m, n, a, t);
    matrixPrint(n, m, t);
    return 0;
}

void matrixSum(int m, int n, int a[m][n], int b[m][n], int r[m][n]){
    int i, j;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            r[i][j] = a[i][j] + b[i][j];
}

void matrixSubs(int m, int n, int a[m][n], int b[m][n], int r[m][n]){
    int i, j;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            r[i][j] = a[i][j] - b[i][j];
        
}

void matrixMul(int m, int n, int p, int a[m][n], int b[n][p], int r[m][p]){
    int i, j, k;
    for(i=0; i<m; i++){
        for(j=0; j<p; j++){
            r[i][j] = 0;
            for(k=0; k<n; k++)
                r[i][j] += a[i][k] * b[k][j];
        }
    }
}


void matrixTrans(int m, int n, int a[m][n], int r[n][m]){
    int i, j;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            r[j][i] = a[i][j];
}


void matrixPrint(int m, int n, int a[m][n]){
    int i, j;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++)
            printf("\t%d", a[i][j]);
        printf("\n");
    }
}

void matrixFill(int m, int n, int a[m][n]){
    int i, j;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);
    }
}
