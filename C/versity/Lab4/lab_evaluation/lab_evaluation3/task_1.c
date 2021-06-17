#include<stdio.h>
int main()
{
    int n1,n2,i,sum=0;
    printf("Enter n1:");
    scanf("%d",&n1);
    printf("Enter n2:");
    scanf("%d",&n2);
    for(i=n1;i<=n2;i++)
    {
        if((i%3==0)&&(i%5==0))
        {
            sum=sum+i;
        }
    }
    printf("Sum:%d",sum);
}
