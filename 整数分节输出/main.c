#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,c;
    scanf("%d",&a);
    b=a%1000;
    c=a/1000;
    printf("%d,%d",c,b);
    return 0;
}
