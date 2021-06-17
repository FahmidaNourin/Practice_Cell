#include<stdio.h>
int main()
{
    int i,n,temp1=0,temp2=1,next,sum=0;
    printf("Enter N:");
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        sum=sum+temp1;
        next=temp1+temp2;
        temp1=temp2;
        temp2=next;
    }
    printf("sum is %d",sum);

}
