//Largest and smallest Integers 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int x, y, z;
    int largest , smallest;

    printf("Enter three integers (x, y, z) : ");
    scanf("%d %d %d", &x, &y, &z);

    /*largest*/
    if(x>y && x>z)
        largest = x;
    if(y>x && y>z)
        largest = y;
    if(z>x && z>y)
        largest = z;
    
    /*smallest*/
    if(x<y && x<z)
        smallest = x;
    if(y<x && y<z)
        smallest = y;
    if(z<x && z<y)
        smallest = z;

    printf("The largest number is %d\n", largest);
    printf("The smallest number is %d\n", smallest);
}