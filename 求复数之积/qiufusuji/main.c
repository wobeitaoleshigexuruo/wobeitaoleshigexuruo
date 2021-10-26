#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a1,a2,b1,b2,shi,xu;
    printf("Input a1,a2,b1,b2:");
    scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
    shi = a1*b1-a2*b2;
    xu = a1*b2+a2*b1;
    printf("\n(%d+%di)*(%d+%di)=%d+%di",a1,a2,b1,b2,shi,xu);


    return 0;
}
