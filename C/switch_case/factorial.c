#include<stdio.h>
int main()
{
    int i,num,factorial=1;
    printf("Enter the value of factorial:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        factorial=factorial*i;
    }
    printf("%d is the factorial\n",factorial);
}
