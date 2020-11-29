#include <stdio.h>
#include <math.h>
int main()
{
    double m,r,h,g,g1=6.674*pow(10, (-11));
    printf ("Enter the value m r h:");
    scanf("%lf %lf %lf",&m,&r,&h);
    g=(g1*m)/pow((r+h),2);
    printf("%lf is the rslt",g);

}
