#include<stdio.h>
int main()
{
    int i,n1,n2,count=0;
    printf("Enter n1:");
    scanf("%d",&n1);
    printf("Enter n2:");
    scanf("%d",&n2);
    for(i=n1; i<=n2; i++)
    {
        if(i%3==0&&i%5!=0)
        {
         count++;
        }
    }
    printf("%d numbers\n",count);

}

