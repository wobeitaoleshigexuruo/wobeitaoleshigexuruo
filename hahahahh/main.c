#include <stdio.h>
#include <stdlib.h>
void input(double a[])
{
    double *A_a=a;
    int i=0;
    do
    {
        scanf("%lf",(A_a+i));
        i++;
    }while(i<=6);
}


void sort(double a[])
{
    double *A_a=a;

    double z=0;
    int i,j;i=0;j=0;
    for(i;i<7;i++)
    {
        for(j;j<7-i-1;j++)
        {
            if(*(A_a+j)<*(A_a+j+1))
               {
                    z=*(A_a+j);
                   *(A_a+j) = *(A_a+j+i);
                   *(A_a+j+i)=z;
               }

        }

    }
}
void output(double a[])
{
    double *tpr_a=a;
    for(int i=0;i<7;i++)
    {
        printf("%5.2lf\t",(tpr_a+i));
    }
}

int main()
{
    double a[7];

    input(a);
     printf("����ĳɼ����£�");
    for(int i=0;i<7;i++)
    {

    printf("%5.2lf \t",a[i]);

    }
    sort(a);
    printf("\n�����ɼ��Ӵ�СΪ��");
    for(int j=0;j<7;j++)
    {


    printf("%5.2lf\t",a[j]);
    }


    printf("Hello world!\n");
    return 0;
}
