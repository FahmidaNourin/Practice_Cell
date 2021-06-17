#include<stdio.h>
int check(int a)
{
    if((a%400==0)||((a%100!=0)&&(a%4==0)));
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(check(year))
    {
    printf("%d is leap year\n",year);
    }
    else
    {
    printf("%d is not leap year\n",check(year));
    }
}
