#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("����һ��a��ֵ��");
    scanf("int",&a);
    fflush(stdin);
    printf("����һ��b��ֵ");
    scanf("int",&b);

    c=a;
    a=b;
    b=c;
    printf("������õ���ֵaΪ%d\tֵbΪ%d\n",a,b,c);

    return 0;
}
