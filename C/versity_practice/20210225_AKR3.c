#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any number:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(c>b))
    {
        printf("%d is minimum value",b);
    }
    else if((a>c)&&(b>c))
    {
        printf("%d is minimum",c);
    }
    else{
        printf("%d is minimum",a);
    }
}
