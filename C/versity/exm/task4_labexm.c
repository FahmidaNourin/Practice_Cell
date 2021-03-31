#include<stdio.h>
int main()
{
    int balance,rate,annual_fee,total,interest,total_fee;
    printf("Enter Balance:");
    scanf("%d",&balance);
    printf("Enter Rate:");
    scanf("%d",&rate);
    printf("Enter Annual Fee:");
    scanf("%d",&annual_fee);
    interest=(balance*(rate/100))*3;
    total_fee=annual_fee*3;
    total=(balance+interest)-total_fee;
    printf("Balance after three years: %d\n",total);



}
