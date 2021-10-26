#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    if (a==5)
    b=4,c=5,d=6;
    else
    b=7,c=8,d=9;

    printf("%d %d %d\n%d   %d\n%d %d %d",b,b,b,c,c,d,d,d);
    return 0;
}
