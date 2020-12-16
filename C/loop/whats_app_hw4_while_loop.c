
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the value of n");
    scanf("%d",&n);
   i=1;
   while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf(" %d is the value\n",sum);

}
