#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,res;
    float avg;
    printf("Enter subject 1:");
    scanf("%f",&sub1);
    printf("Enter subject 2:");
    scanf("%f",&sub2);
    printf("Enter subject 3:");
    scanf("%f",&sub3);
    res=sub1+sub2+sub3;
    avg=(res/3);
    printf("the total is %.2f+%.2f+%.2f=%.2f\n",sub1,sub2,sub3,res);
    printf("Average is %.2f",avg);
}
