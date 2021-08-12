/*
 * Calculadora que toma 2 numeros flotantes y realiza las operaciones
 * Suma
 * Resta
 * Multiplicacion
 * Division
 * Modulo
*/
#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int mod(int a, int b);

int main(){
    float a, b;
    printf("Insert first number: ");
    scanf("%f", &a);
    printf("Insert second number: ");
    scanf("%f", &b);

    printf("\n%0.2f + %0.2f = %0.2f\n", a, b, add(a, b));
    printf("%0.2f - %0.2f = %0.2f\n", a, b, subtract(a, b));
    printf("%0.2f * %0.2f = %0.2f\n", a, b, multiply(a, b));
    printf("%0.2f / %0.2f = %0.2f\n", a, b, divide(a, b));
    printf("%0.2f mod %0.2f = %d\n", a, b, mod(a, b));
}

float add(float a, float b){
    return a + b;
}

float subtract(float a, float b){
    return a - b;
}

float multiply(float a, float b){
    return a * b;
}

float divide(float a, float b){
    return a / b;
}

int mod(int a, int b){
    return a % b;
}



