#include<stdio.h>
int main()
{
    int i,n,multi=1;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        multi=n*i;
        printf("%d*%d=%d\n",n,i,multi);
    }
}