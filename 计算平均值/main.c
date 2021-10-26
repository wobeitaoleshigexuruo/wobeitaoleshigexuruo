#include <stdio.h>
#include <stdlib.h>

int main()
{
int x,y,z,sum;
    double average;
    scanf("%d%d%d",&x,&y,&z);
    sum=x+y+z;
    average = (double)sum/3;
    //printf("%d\n",sum);
    printf("%.2lf\n",average);    return 0;
}
