#include<stdio.h>
int main()
{
    int a,fast,last,product;
    scanf("%d",&a);
    fast=a/1000;
    last=a%10;
    product=fast*last;
    printf("The Product is %d*%d=%d\n ",fast,last,product);


}
