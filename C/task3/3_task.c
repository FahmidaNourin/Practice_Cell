#include<stdio.h>
#include<math.h>
int main ()
{
    int m,p,c,b,e,avg;
    printf("Enter the value of m p c b e:");
    scanf("%d %d %d %d %d",&m,&p,&c,&b,&e);
    avg=(m+p+c+b+e)/5;
    printf("the avarage= %d\n",avg);
    if(80<=avg && avg<=100)
    {
        printf("the grade is A+");
    }
    else if (70<=avg && avg<=79)
    {
        printf("the grade is A");
    }
    else if (60<=avg && avg<=69)
    {
        printf("the grade is B");
    }
    else if (40<=avg && avg<=59)
    {
        printf("the grade is C");
    }
    else if (30<=avg && avg<=39)
    {
        printf("the grade is D");
    }
    else if (0<=avg && avg<=29)
    {
        printf("the grade is F");
    }
}
