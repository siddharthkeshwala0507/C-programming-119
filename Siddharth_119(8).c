#include <stdio.h>

int main() {
    int dollars, rupees;


    printf("Enter amount in Dollars: ");
    scanf("%d", &dollars);

    rupees = dollars * 48;

    printf("Amount in Rupees = %.2d\n", rupees);

    return 0;
}

