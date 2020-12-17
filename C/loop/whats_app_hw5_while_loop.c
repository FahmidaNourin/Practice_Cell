#include<stdio.h>
int main()
{
    int i,n,sum1=0,sum2=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
       if(i%2!=0)
        {
            sum1=sum1+i;
        }
        else
            {
                sum2=sum2+i;

        } i++;

    }
    printf("%d %d is the value",sum1,sum2);


}
