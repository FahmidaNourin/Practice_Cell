#include<stdio.h>
int main()
{
    int discount_rate,amount,total;
    printf("Enter the value:");
    scanf("%d",&amount);
    if(amount<5000)
    {

        discount_rate=(amount*5)/100;
    }
    else if((amount>5000)&&(amount<=10000))
            {
                discount_rate=(amount*10)/100;
            }
            else{
                discount_rate=(amount*20)/100;
            }
            total=amount-discount_rate;
            printf("%d is purchase amount",total);
}
