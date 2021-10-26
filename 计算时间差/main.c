#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,m,s,sum;

    scanf("%d:%d:%d",&t,&m,&s);
    sum=3600*t+m*60+s;
    printf("%d",sum);

    return 0;
}
