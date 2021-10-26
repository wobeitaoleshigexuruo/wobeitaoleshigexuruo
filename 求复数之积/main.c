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

    int a,n;
    a = scanf("%d",&n);
    printf("%d",a);
    return 0;
}
/*



#include <stdio.h>
#include <stdlib.h>
#define N 5

void input(double []);
void sort(double []);
void show(double []);
int find(double *,int findNum);

int main()
{
	double scores[N];
	input (scores);
	printf("排序前：\n");
	show (scores);

	sort(scores);
	printf("\n排序后：\n");
	show(scores);
	return 0;
}

void input(double scores[])
{
	int i;
	for(i=0;i<N;i++)
{	printf("请输入成绩");
	scanf("%lf",&scores[i]);//scanf("%lf",(scores + 1));

}
}
void show(double scores[])
{
	int i;
	printf("语文\t数学\t英语\t物理\t化学\n");
	for(i=0;i<N;i++)
	{
	printf("%.0lf\t",scores[i]);
	}
}
void sort(double scores[])
{
	int i,j;
	double temp;
	for(i=0;i<N-1;i++)
	{
		for(j=0;j<N-i-1;j++)
		{
			if(scores[j]<scores[j+1])
			{

			temp = scores[j];
			scores[j] = scores[j+1];
			scores [j+1] = temp;
		    }
		}
	}
}
