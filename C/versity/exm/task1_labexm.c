#include<stdio.h>
int main()
{
    float balance,rate,annual_fee,total,interest,total_fee;
    printf("Enter Balance:");
    scanf("%f",&balance);
    printf("Enter Rate in percent:");
    scanf("%f",&rate);
    printf("Enter Annual Fee:");
    scanf("%f",&annual_fee);
    interest=((balance*rate)/100)*3;
    total_fee=annual_fee*3;
    total=(balance+interest)-total_fee;
    printf("Balance after three years: %.0f\n",total);



}

