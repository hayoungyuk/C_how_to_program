// Comparing Values
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int highest_rainfall;
    int current_rainfall;

    printf("Enter the 'highest rainfall' ever in one season for a country : ");
    scanf("%d", &highest_rainfall);
    printf("Enter the 'rainfall in the current year' for that country : ");
    scanf("%d", &current_rainfall);

    if(current_rainfall > highest_rainfall){
        printf("Current rainfall is higher than highest rainfall ever in one season for a country.\n");
        highest_rainfall = current_rainfall;
    }
    //printf("%d", highest_rainfall);
}