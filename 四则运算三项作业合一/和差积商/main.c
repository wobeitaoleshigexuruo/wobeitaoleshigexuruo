#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int a,b;
    scanf("%d%d",&a,&b);
    printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d",a,b,a+b,a,b,a-b,a,b,a*b,a,b,a/b);
    */
    /*double a,b,c,area;
    scanf("%lf%lf%lf",&a,&b,&c);
    area=(a+b+c)/2;

    printf("area = %.2lf",area);
*/


    char c;

    scanf("%c",&c);

   // c=(c>='A'&&c<='Z')?(c+32):(c-32);
    if (c>='A'&&c<='Z')
    printf("%c",c+32);
    else  if (c>='a'&&c<='z')
    printf("%c",c-32);
    else
    printf("%c",c);

    return 0;
}
