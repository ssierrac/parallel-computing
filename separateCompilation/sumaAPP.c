#include <stdio.h>
#include "funcionsuma.h"

int main(){
    int a, b;
    printf("Insert two numbers: ");
    if(scanf("%d %d", &a, &b) != 2){
        fputs("Invalid input", stderr);
        return 1;
    }
    printf("%d + %d = %d\n", a, b, sum(a, b));
    return 0;
}

