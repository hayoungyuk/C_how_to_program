//Multiples
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num1, num2;

    printf("Enter a num1 and num2 : ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2){
        if(num1 % num2 == 0)
            printf("Multiple number\n");
        else
            printf("NOT multiple number\n");
    }
}