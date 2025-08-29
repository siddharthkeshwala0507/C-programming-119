#include<stdio.h>
int main () {
    float fahrenheit,celsius;
    printf("enter the fahrenheit:");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit-32) * 5/9;

    printf("fahrenheit to celsius is %f\n", celsius);
    return 0;
}

