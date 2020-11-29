#include <stdio.h>
int main ()
{
    int a;
    printf ("Enter the year") ;
    scanf ("%d",&a);
    if ((a%400==0)||((a%100!=0) && (a%4==0) ) )
    {
        printf("%d is the leap year",a) ;
    }
    else
    {
        printf ("the year is not leap year",a);
    }
}
