#include <stdio.h>
#include <stdlib.h>
#include<math.h>;
int main()
{   int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    double s = (a+b+c)*0.5;
    double t;
    t=(double)s*(s-a)*(s-b)*(s-c);
    printf("%lf",t);
    sqrt(t);
    return 0;
}
