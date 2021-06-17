#include<stdio.h>
int main()
{
    int angle1,angle2,angle3,total;
    printf("Enter angle1:");
    scanf("%d",&angle1);
    printf("Enter angle2:");
    scanf("%d",&angle2);
    printf("Enter angle3:");
    scanf("%d",&angle3);
    total=angle1+angle2+angle3;
    if((total==180)&&(angle1!=0&&angle2!=0&&angle3!=0))
    {
        printf("Yes valid");
    }
    else{
        printf("No invalid");
    }

}
