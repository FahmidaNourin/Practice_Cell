#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        if(i%13==0)
        {
            printf("%d\n",i);
        }
    }

}
