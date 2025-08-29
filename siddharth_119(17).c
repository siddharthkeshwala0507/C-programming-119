#include <stdio.h>

int main() {
    float length, area, perimeter;


    printf(" length of square's side: ");
    scanf("%f", &length);


    area = length * length;
    perimeter = 4 * length;


    printf("Area of square  %f\n", area);
    printf("Perimeter of square  %f\n", perimeter);

    return 0;
}


