
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    downWards(x);
}

   void downWards(int n)
   {
       int i;
       for(i=n;i>=1;i--)
       {
           printf("%d\n",i);
       }
   }
