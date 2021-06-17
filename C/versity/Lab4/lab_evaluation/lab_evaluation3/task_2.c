#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float sum=0,d;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            d=1/pow(i,3);
            sum=sum-d;
        }
        else
        {
            d=1/pow(i,3);
            sum=sum+d;

        }
    }

    printf("Summation is:%f",sum);
}
