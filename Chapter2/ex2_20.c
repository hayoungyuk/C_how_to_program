//Converting from seconds to hours, minutes and seconds
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int totalSeconds;
    int hours, minutes, seconds;

    printf("Enter the total seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 60 / 60;
    minutes = totalSeconds / 60 % 60;
    seconds = totalSeconds % 60 ;

    printf("Hours: Minutes: Seconds = %d : %d : %d\n", hours, minutes, seconds);
}