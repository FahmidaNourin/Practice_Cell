#include <stdio.h>
int main ()
{
    int year;
    printf ("Enter a year")    ;
    scanf ("%d", &year )  ;
    if((year%400==0)||((year%100!=0)&&(year%4==0)));
    {
        printf ("%d is the leap Year", year);
    }
    else
    {
        printf("%d is not leap Year", year);
    }
}
