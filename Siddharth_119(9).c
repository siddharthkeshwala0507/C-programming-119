#include<stdio.h>

int main(){
    int rupees,dollar;

    printf("enter the amount of rupees: ");
    scanf("%d", &rupees);

    dollar = rupees / 48;
    printf("your dollar converted form rupees is %.2d\n", dollar);

    return 0 ;
}

