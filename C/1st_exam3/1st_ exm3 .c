#include <stdio.h>
int main ()
{
    float totalfee,section,eachfee;
    printf("Enter the fee:");
    scanf("%f",&totalfee);
    printf("Enter the decision(1or2or3or4):");
    scanf("%f",&section);
    if(section==1)
    {
        float temp=50;
       eachfee=totalfee-(totalfee*(temp/100));
       printf("After discount fee:%f",eachfee);
    }
    else if (section==2)
    {
        float temp=30;
        eachfee=totalfee-(totalfee*(temp/100));
        printf("After discount fee:%f",eachfee);
    }
    else if (section==3)
    {
        float temp=15;
        eachfee=totalfee+(totalfee*(temp/100));
        printf("After add fee:%f",eachfee);
    }
    else if (section==4)
    {
        float temp=30 ;
        eachfee=totalfee+(totalfee*(temp/100));
        printf("After add fee:%f",eachfee);
    }

}
