#include <stdlib.h>
#include <stdio.h>

int main(){
    int n=5;
    printf("%d\n", n);
    printf("%p\n", &n);
    
    int *puntero = &n;
    printf("%p\n", puntero);
    printf("%d\n", *puntero);


    *puntero = 10;
    printf("%d\n", *puntero);
    printf("%d\n", n);



    int v;
    int *puntero2 = &v;
    *puntero2 = 8;
    printf("\n%d\n", v);

    return 0;
}
