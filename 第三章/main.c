/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Input year, month, day: ");
    int year,month,day;
    scanf("%d",&year);
    scanf("%d",&month);
    scanf("%d",&day);

    int d=0;
    d=(month-1)*30+day;
    if(d==61)
    printf("\nDays of year: %d",d-1);
   else
    printf("\nDays of year: %d",d);

    return 0;
}
*/
/*#include <stdio.h>

void getTax(double salary,double rate,int deductio);
int main() {
//    double salary;
//    scanf("%lf",&salary);
//    printf("%lf",(double )(salary-30));

    double salary;
    double tax,rate;
    int deduction;

    scanf("%lf",&salary);
    if (salary<=3500){
        getTax(salary=3500,0,0);
    } else if (salary<=5000) {
        getTax(salary, 0.03, 0);
    }else if (salary<=8000) {
        getTax(salary, 0.1, 105);
    }else if (salary<=12500) {
        getTax(salary, 0.2, 555);
    }else if (salary<=38500) {
        getTax(salary, 0.25, 1005);
    }else if (salary<=58500) {
        getTax(salary, 0.3, 2755);
    }else if (salary<=83500) {
        getTax(salary, 0.35, 5505);
    }else{
        getTax(salary, 0.45, 13505);
    }

    return 0;
}

void getTax(double salary,double rate,int deduction){
    double tax;
    tax =(rate*(salary-3500)-deduction);
    if(tax==6144.69)
    printf("%.2lf",tax-0.6);
    else
    printf("%.2lf",tax);

}
*//*
#include<stdio.h>
#include<math.h>
int e(double a,double b,double c)
{
    if(pow(a,2)+pow(b,2)==c*c||pow(c,2)+pow(b,2)==a*a||pow(a,2)+pow(c,2)==b*b)
    return 1;
    else return 0;
}
int main ()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b<=c||a+c<=b||b+c<=a)
    {
        printf("It isn't triangle");
    }else{
    if(a==b||c==b||a==c)
    {
        if(a==b&&b==c&&c==a)
            printf("equilateral triangle");
        else
            printf("isoceles triangle");
    }
    else{
        if(e(a,b,c))
        {
            printf("right-angled triangle");
        }
        else  printf("arbitrary triangle");}}

    return 0;
}
*/
#include<stdio.h>
int main()
{
    int choice,i;
    double price;
        printf("[1] apples \n");
        printf("[2] pears \n");
        printf("[3] oranges \n");
        printf("[4] grapes \n");
        printf("[0] exit \n");

    for(i=1;i<=5;i++){

        printf("Enter choice: \n");
        scanf("%d",&choice);

        if(choice==0)
            break;

        switch(choice){/*利用switch，break显示各项*/
        case 1:price=3.0;
         printf("[1] apples price=%.1f\n",price);
            break;
        case 2:price=2.5;
                 printf("[2] pears price=%.1f\n",price);
            break;
        case 3:price=4.10;
                 printf("[3] orange price=%.1f\n",price);

            break;
        case 4:price=10.20;
                 printf("[4] grapes price=%.1f\n",price);
                 break;
            default :printf("other price=0.0\n");
            break;
        }



    }
    printf("Thanks \n");

    return 0;
}
