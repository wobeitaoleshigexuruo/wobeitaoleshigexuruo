#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   int money,year;
    year = 3;
    money = 3000;
    double rate = 2.5/100;
    double x =  1 + rate;
    double sum = pow(1+rate,year)*money;
    printf("%lf\n",sum);
    return 0;
}
