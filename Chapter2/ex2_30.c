//Separating Digits in an Integer
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int digit;

    printf("Enter five-digit number : ");
    scanf("%d", &digit);

    printf("%d   %d   %d   %d   %d\n", digit/10000, digit / 1000 % 10, digit / 100 % 10, digit / 10 % 10, digit % 10);
}