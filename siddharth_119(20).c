#include <stdio.h>

int main() {
    float base, height, area;


    printf("Enter base the triangle: ");
    scanf("%f", &base);


    printf("Enter height the triangle: ");
    scanf("%f", &height);


    area =  base * height * 1/2;


    printf("Area of triangle  %.2f\n", area);

    return 0;
}

