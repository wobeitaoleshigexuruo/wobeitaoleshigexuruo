#include <stdio.h>
int sign(int x)
{
    if(x<0){
       return -1;
            }
            else
    if(x>0)
        return 1;
        else return 0;
}
int main()
{
    int x,y;
    printf("Enter x:");
    scanf("%d",&x);
    y=sign(x);
    printf("\nsign(%d)=%d",x,y);

    return 0;
}
