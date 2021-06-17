#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
         if(i%2!=0)
         {
             sum=sum+i;
         }

        }
    }
    printf("The sum is %d",sum);


}


