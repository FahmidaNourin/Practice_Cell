#include<stdio.h>
int main()
{
    int arr[10],min;
    int i,sum1=0,sum=0;
    printf("Enter an Array of ten: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<=4;i++)
    {
      sum=sum+arr[i];
    }
    for(i=5;i<=9;i++)
    {
      sum1=sum1+arr[i];
    }
    if(sum==sum1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}

