#include<stdio.h>
int main()
{
    int t,res;
    float total=0;
    printf("Enter number of transactions:");
    scanf("%d",&t);
    if((t-40)>0)
    {
        res=t-40;
        t=t-res;
        total=res*12.5;
    }
    if((t-30)>0)
    {
        res=t-30;
        t=t-res;
        total=total+(res*10);
    }
    if((t-20)>0)
    {
        res=t-20;
        t=t-res;
        total=total+(res*7.5);
    }
    if((t-10)>0)
    {
        res=t-10;
        t=t-res;
        total=total+(res*5);
    }
    printf("Your bank account is: %.2f taka",total);

}
