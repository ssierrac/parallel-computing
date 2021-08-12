/*
 * Indice de masa corporal
 * */
#include <stdio.h>
float f_BMI(float weight, float height){
    return weight / (height * height);
}

int main(){
    float weight, height, bmi;
    printf("Insert your weight (kg): ");
    scanf("%f", &weight);
    printf("Insert your height (m): ");
    scanf("%f", &height);
    bmi = f_BMI(weight, height);
    printf("Your BMI is %0.3f\n", bmi);
    if(bmi >= 18.5 && bmi <= 24.9){
        printf("You have normal BMI\n");
    }else if(bmi < 18.5){
        printf("You are under normal BMI\n");
    }else{
        printf("You are over normal BMI\n");
    }
    return 0;
}
