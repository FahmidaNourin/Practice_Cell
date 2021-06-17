#include<stdio.h>
int main()
{
    int a,b,i,max,min,count=0;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    if(a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    for(i=1;i<=min;i++)
    {
        if((max%i==0)&&(min%i==0))
        {
            count++;
        }
    }
    printf("Total common factors: %d",count);
}

