#include<stdio.h>
int main()
{
    float basicsalary,totalsalary;
    printf("Enter the value of salary:");
    scanf("%f",&basicsalary);
    if(basicsalary<=10000)
    {
        totalsalary=basicsalary+(basicsalary*(.2))+(basicsalary*(.8));
        printf("%f is the salary",totalsalary);

    }
    else if(basicsalary<=20000)
    {
        totalsalary=basicsalary+(basicsalary*(0.25))+(basicsalary*(0.9));
        printf("%f is the salary",totalsalary);
    }
    else if(basicsalary>20000)
    {
    totalsalary=basicsalary+(basicsalary*(0.3))+(basicsalary*(0.95));
        printf("%f is the salary",totalsalary);
    }
}
