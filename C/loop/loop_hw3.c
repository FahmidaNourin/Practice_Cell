#include<stdio.h>
int main()
{
    int i,n,sum;
    scanf("%d",&n);
    for(i=3;i<=n;i=i+3)
    {
        sum=sum+(i*i);

    }
    printf("%d",sum);
}
