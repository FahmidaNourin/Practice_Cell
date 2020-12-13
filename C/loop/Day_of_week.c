#include<stdio.h>
int main()
{
    int week;
    printf("Enter week number(1-7)");
    scanf("%d",&week);
    if(week==1)
    {
        printf("Sunday",week);
    }
    else if(week==2)
    {
        printf("Monday",week);
    }
    else if(week==3)
    {
        printf("Tuesday",week);
    }
    else if(week==4)
    {
        printf("Wednesday",week);
    }
    else if(week==5)
    {
        printf("Thursday",week);
    }
    else if(week==6)
    {
        printf("Friday",week);
    }
    else
    {
        printf("Saturday",week);
    }
}
