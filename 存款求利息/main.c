#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    double rate,interest;
    int money,year;
    printf("Enter money,year and rate: ");
    scanf("%d%d%lf",&money,&year,&rate);
    interest=money*pow(1+rate,year)-money;
    printf("\ninterest=%.2lf",interest);
}
