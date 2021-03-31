#include<stdio.h>
int main()
{
    int a,b,c,t;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    t=a;
    a=c;
    c=b;
    b=t;
    printf("After enter change a=%d b=%d c=%d",a,b,c);

}
