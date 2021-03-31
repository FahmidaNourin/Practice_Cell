#include<stdio.h>
int main()
{
    int x,y,max,temp,lcm;
    printf("Enter the first number:");
    scanf("%d",&x);
    printf("Enter the second number:");
    scanf("%d",&y);
    if(x>y)
    {
        max=temp=x;
    }
    else
        {
            max=temp=y;
        }
    while(1)
    {
        if(max%x==0 && max%y==0)
        {
            lcm=max;
            break;
        }
        max+=temp;
    }
    printf("lcm is %d",lcm);

}
