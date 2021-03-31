#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    if(n<0)
    {
        n=-1*n;
    }
     printf("%d  is absolute",n);
}
