/*
 * Determinar si un digito ingresado por el usuario es impar o par
 * */
#include <stdio.h>

int isOdd(int n){
    return n % 2 != 0;
}

int main(){
    int a;
    while(1){
        printf("Insert a number (0 for exit): ");
        scanf("%d", &a);
        if(!a) break;
        isOdd(a) ?
            printf("%d is an odd number.\n", a): 
            printf("%d is an even number.\n", a);
    }

    return 0;
}
