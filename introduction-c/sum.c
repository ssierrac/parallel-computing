/*
 * dados dos numeros enteros, por el usuario, hacer la suma de ambos 
*/
#include <stdio.h>

float sum(float a, float b);

int main(){
    float a, b;
    float ans;

    printf("Insert first number: ");
    scanf("%f", &a); 
    printf("\nInsert second number: ");
    scanf("%f", &b);
    ans = sum(a, b);
    printf("\n%0.2f + %0.2f = %0.2f \n", a, b, ans);
    return 0;
}

float sum(float a, float b){
    return a + b;
}


