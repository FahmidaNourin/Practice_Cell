
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
   /* for(i=1;i<=n;i++)
    {
       printf("%d\n",i);
        sum=sum+i;
    }
    printf("%d is the result\n",sum);*/
    i=1;
    while(i<=n){
        sum=sum+i;
        i++;
        printf("%d\n",i);
    }
    printf("%d is the result\n",sum);
}
