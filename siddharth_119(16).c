#include<stdio.h>
int main () {
    int principal,rate,time,simpleintrest;
    printf(" principlal value:");
    scanf("%d",&principal);

    printf(" rate of intrest:");
    scanf("%d",&rate);

    printf(" time:");
    scanf("%d",&time);

    simpleintrest=(principal*rate*time)/100;

    printf("simple intrest = %d\n",simpleintrest);
     return 0;
}


