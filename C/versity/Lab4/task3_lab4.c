#include<stdio.h>
int main()
{
    int number,a,b,c,temp;
    printf("Enter a 3-digit number:");
    scanf("%d",&number);

    a=number/100;
    temp=number%100;
    b=temp/10;
    c=temp%10;



    if(a<b &&a<c)
    {
        printf("Minimum is %d",a);
    }
    else if(b<a && b<c)
    {
        printf("Minimum is %d",b);
    }
    else
    {
        printf("Minimum is %d",c);
    }

}

