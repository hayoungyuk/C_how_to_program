//Odd or Even
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    if(num % 2 ==0)
        printf("The number is even\n");
    else
        printf("The number is odd\n");
}