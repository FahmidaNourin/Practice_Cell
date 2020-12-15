#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,cube=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1; i<=5; i++)
    {
      cube=pow(i,3);
      printf("Number is:%d and result is:%%d\n"i,cube);
    }
}
