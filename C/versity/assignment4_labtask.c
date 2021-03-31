#include<stdio.h>
int main()
{
    int length1_m,length1_cm,length2_m,length2_cm,total1,total2,diff_length,x,y;
    printf("Enter the value of first length:");
    scanf("%d %d",&length1_m,&length1_cm);
    printf("Enter the value of second length:");
    scanf("%d %d",&length2_m,&length2_cm);
    total1=(length1_m*100)+length1_cm;
    total2=(length2_m*100)+length2_cm;
    diff_length=abs(total1-total2);
    x=diff_length/100;
    y=diff_length%100;
    printf("%d Meter %d Centimeter\n",x,y);

}
