#include<stdio.h>
int main()
{
       int a;
       printf("Enter the value of a:");
       scanf("%d",&a);
       if((a%5==0)||(a%11==0))
       {
           printf("%d is divisiable",a);
       }
       else
       {
           printf("%d is not divisiable",a);
       }
}
