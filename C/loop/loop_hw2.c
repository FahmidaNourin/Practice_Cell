#include<stdio.h>
int main()
{
    int i,n,sum=1;
    scanf("%d",&n);
    for(i=2;i<=n;i=i*2)
    {
        sum=sum*i;
        printf("%d\n",i);
    }
    printf("%d",sum);
}
