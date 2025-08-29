#include <stdio.h>

int main() {
    float grams, kilograms;


    printf("Enter the weight in kilograms: ");
    scanf("%f", &kilograms);


    grams = kilograms * 1000;


    printf("Conversation  kilograms equals %f grams.\n",  grams);

    return 0;
}



