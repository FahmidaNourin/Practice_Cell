#include<stdio.h>
int main()
{
    float n,i,sum=0;
    printf("Enter a number:");
    scanf("%f",&n);
    for(i=1; i<=n; i++)
    {
        sum=sum+(1/i);
    }
    printf(" The sum is %f\n",sum);
}
