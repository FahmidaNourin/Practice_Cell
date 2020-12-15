#include<stdio.h>
int main()
{
    int i,n,facto=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       facto=facto*i;
    }
    printf("%d is the result",facto);

}
