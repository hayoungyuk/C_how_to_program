//Body Mass Index Calculator
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int weight;
    double height;
    double BMI;

    printf("Enter your weight (kilograms) and height (meter): ");
    scanf("%d %lf", &weight, &height);
    
    BMI = weight / (height*height);

    printf("BMI : %f\n", BMI);

    if (BMI < 18.5)
        printf("Underweight\n");
    if (BMI > 18.5 && BMI < 24.9)
        printf("Normal\n");
    if (BMI > 25 & BMI < 29.9)
        printf("Overweight\n");
    if (BMI >= 30)
        printf("Obese\n");

    printf("----BMI VALUES----\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal: between 18.5 and 24.9\n");
    printf("Overweight: between 25 and 29.9\n");
    printf("Obese: 30 or greater\n");
}