#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of a,b,c,d");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((a<b)&&(a<c)&&(a<d))
    {
        printf("%d is small number",a);
    }
    else if((b<a)&&(b<c)&&(b<d))
    {
        printf("%d is small number",b);
    }
    else if((c<a)&&(c<b)&&(c<d))
    {
        printf("%d is small number",c);
    }
    else if((d<a)&&(d<b)&&(d<c))
    {
        printf("%d is small number",d);
    }
    else
    {
        printf("the number is equal");
    }

}
