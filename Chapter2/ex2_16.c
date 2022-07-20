//Arithmetic
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num1, num2;
    int sum, product, diff, quotient, remainder;

    printf("Enter num1 and num2 : ");
    scanf("%d %d", &num1, &num2);   

    sum = num1+num2;
    product = num1*num2;
    diff = num1 - num2;
    quotient = num1 / num2;
    remainder = num1 % num2;

    printf("The sum is %d\n", sum);
    printf("The product is %d\n", product);
    printf("The difference is %d\n", diff);
    printf("The quotient is %d\n", quotient);
    printf("The remainder is %d\n", remainder);
}