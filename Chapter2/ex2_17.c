// Final Velocity
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int u, a, t;
    int v, s;

    printf("Enter initial velocity (u) : ");
    scanf("%d", &u);
    printf("Enter acceleration of an object (a) : ");
    scanf("%d", &a);
    printf("Enter the time that has elapsed (t) : ");
    scanf("%d", &t);

    v = u + a*t;
    s = u*t + (a*t*t)/2;

    printf("The final velocity (v) is %d\n", v);
    printf("THe distance traversed (s) is %d\n", s);
}