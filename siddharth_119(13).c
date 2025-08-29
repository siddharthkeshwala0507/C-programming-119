#include<stdio.h>
int main() {
    float bytes,KB,MB,GB;

     printf("enter the number of bytes:");
     scanf("%f", &bytes);

     KB = bytes /1000;
     MB = bytes /1000000;
     GB = bytes /1000000000;

     printf(" given bytes converted to Kb %f\n ", KB);
     printf(" given bytes converted to Mb %f\n ", MB);
     printf(" given bytes converted to Gb %f\n ", GB);

     return 0 ;
}

