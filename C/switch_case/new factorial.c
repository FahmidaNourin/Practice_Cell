#include<stdio.h>
int main()
{
    int i,facto=1,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        facto=facto*i;
    }
    printf("%d",facto);
}

