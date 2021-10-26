#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a%10;
    c=(a%100-b)/10;
    d=a/100;
    printf("%d %d %d",b,c,d);
    return 0;
}
