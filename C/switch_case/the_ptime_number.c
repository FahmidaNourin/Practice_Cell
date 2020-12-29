#include<stdio.h>
int main()
{
    int num,i,flage=0;
    printf("Enter any number:");
    scanf("%d",&num);
    for(i=2;i<=(num/2);i++)
    {
        if(num%i==0)
        {
            flage=1;
            break;
        }
    }
    if(flage==0)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
}
