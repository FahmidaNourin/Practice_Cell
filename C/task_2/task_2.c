#include<stdio.h>
#include<math.h>
int main ()
{
    float x,theta,v,y,g=9.8;
    printf("Enter the value of x $ v:");
    scanf("%f %f %f", &x,&theta,&v);
        y=(x*tan(theta))-((g/2)*(pow(x,2))/(pow(v,2))*(pow(cos(theta),2)));
    printf("%f is the rslt",y);
}
