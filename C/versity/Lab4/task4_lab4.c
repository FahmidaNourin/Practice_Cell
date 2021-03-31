#include<stdio.h>
int main()
{
    float p_amount,t_amount;
    printf("Enter the purchase amount :");
    scanf("%f",&p_amount);
    if(p_amount==5000)
    {
        t_amount=p_amount-(p_amount*0.05);
    }
    else if(p_amount>5000)
        {
            t_amount=p_amount-(p_amount*0.1);
        }
     else
     {
         t_amount=p_amount;
     }
     printf("total purchase amount is %.2f",t_amount);

}

