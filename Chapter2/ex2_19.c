// Arithmetic, Largest Value and Smallest Value
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int x,y,z;

    printf("Enter three different integers : ");
    scanf("%d %d %d", &x, &y, &z);

    int sum = x+y+z;
    int average = sum / 3;
    int product = x*y*z;
    int smallest, largest;

    /*smallest*/
    if(x<y && x<z)
        smallest = x;
    if(y<x && y<z)
        smallest = y;
    if(z<x && z<y)
        smallest = z;
    
    /*largest*/
    if(x>y && x>z)
        largest = x;
    if(y>x && y>z)
        largest = y;
    if(z>x && z>y)
        largest = z;
        
    printf("Sum is %d\n", sum);
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d\n", largest);
}