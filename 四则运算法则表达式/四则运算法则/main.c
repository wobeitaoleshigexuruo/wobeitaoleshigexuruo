#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,e;
    char c;
    scanf("%lf%c%lf",&a,&c,&b);
    switch(c)
    {
    case '+' :
        e=a+b;
        printf("=%.2lf",e);
         break;
        case '-':
        e=a-b;
        printf("=%.2lf",e);
         break;
        case '*':
        e=a*b;
        printf("=%.2lf",e);
         break;
        case '/':
        e=a/b;
        printf("=%.2lf",e);
        break;
        default:
            printf("��Ч�����");
    }

    return 0;
}
