#include<stdio.h>
int main()
{
    int basic_salary,hra,da,gross_salary;
    printf("Enter basic salary:");
    scanf("%d",&basic_salary);
    da=(basic_salary*40)/100;
    hra=(basic_salary*20)/100;
    gross_salary=basic_salary+da+hra;
    printf("%d is Gross salary",gross_salary);
}
