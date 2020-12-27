#include<stdio.h>
int main()
{
    int  i,n,a=0,b=1,c=0;
    scanf("%d",&n);
    printf("%d  %d  ",a,b);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c;

    }
}

