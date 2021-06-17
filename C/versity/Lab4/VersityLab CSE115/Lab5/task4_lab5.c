#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,a,b,c,d;
    printf("Enter the Coefficients:\n");
    printf("a:");
    scanf("%f",&a);
    printf("b:");
    scanf("%f",&b);
    printf("c:");
    scanf("%f",&c);
    d=(b*b)-4*a*c;
    if (d<0)
    {
        printf("Imaginary roots");

    }
    else{
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    printf("Root_1:%.2f\n",x1);
    printf("Root_1:%.2f",x2);
    }

}
