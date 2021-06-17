#include<stdio.h>
int main()
{
    int a=6,b=3;
    int *a_p=&a,*b_p=&b;
    *a_p = a%b;
    printf("%d %d %d %d",a,b,a_p,b_p);
}
