#include<stdio.h>
int check(int a)
{
    if(a%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("%d is the result",check(num));
}
