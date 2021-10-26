#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("输入一个a的值：");
    scanf("int",&a);
    fflush(stdin);
    printf("输入一个b的值");
    scanf("int",&b);

    c=a;
    a=b;
    b=c;
    printf("交换后得到的值a为%d\t值b为%d\n",a,b,c);

    return 0;
}
