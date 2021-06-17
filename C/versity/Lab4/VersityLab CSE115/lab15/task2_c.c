#include<stdio.h>
float sum(float a)
{
    float res=0,i;
    for(i=1/2;i<=a;i=1/(i+2))
    {
        res=res+i;
    }

}
int main()
{
    float n;
    printf("Enter the number:");
    scanf("%f",&n);
    printf("%f is the result\n",sum(n));
}

