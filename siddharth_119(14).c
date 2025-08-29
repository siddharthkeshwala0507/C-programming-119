#include<stdio.h>
int main () {
    float celsius,fahrenheit;
    printf("enter the celsius:");
    scanf("%f", &celsius);

    fahrenheit = (celsius*9/5) +32 ;

    printf(" celsius are converted to %f\n fahrenheit", fahrenheit);
    return 0 ;
}

