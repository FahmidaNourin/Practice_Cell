#include<stdio.h>
int main()
{
    int x;
    printf("Enter power:");
    scanf("%d",&x);
    printf("%d",powerOfTWO(x));
}

   int powerOfTWO(int n)
   {
       int i,pw=1;
       for(i=1;i<=n;i++)
       {
           pw=pw*2;
       }
       return pw;
   }

