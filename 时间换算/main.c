#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,m,t,ss;

    scanf("%d",&s);
    t=s/3600;
    m=(s-t*3600)/60;

    ss=s-t*3600-m*60;

    printf("Hours: %d\nMinutes: %d\nSeconds: %d",t,m,ss);
    return 0;
}
