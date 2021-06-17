#include<stdio.h>
int sum(int a)
{
    int res=0,i;
    for(i=1;i<=a;i=i*2)
    {
        res=res+i;
    }

}
int main()
{
    int n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d is the result\n",sum(n));
}

