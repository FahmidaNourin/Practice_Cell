#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            sum=sum-(i*i*i);

        }
        else
        {
            sum=sum+(i*i*i);
        }

    }
    printf("The sum is: %d\n",sum);

}
