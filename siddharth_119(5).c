#include<stdio.h>
 int main(){
 int a,b, sum,subtract,multiply;

 float divide;
    printf("enter two numbers");
 scanf("%d %d", &a , &b);
 sum = a+b; subtract = a-b; multiply = a*b; divide = a/b;
 printf("sum = %d\n",sum);
 printf("subtract = %d\n",subtract);
 printf("multiply = %d\n",multiply);
 printf("divide = %.2f\n",divide);
 return 0;
 }
