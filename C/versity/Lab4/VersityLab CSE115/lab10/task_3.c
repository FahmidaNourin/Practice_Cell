#include<stdio.h>
int main()
{
    float arr[5],avg,sum=0;
    int i,avobe=0,below=0;
    printf("Enter array elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%f",&arr[i]);
        sum=sum+arr[i];
    }
     avg=sum/5;
     printf("Average is %.2f\n",avg);
     for(i=0;i<5;i++)
     {
         if(arr[i]>avg)
         {
             avobe++;
         }
         else
         {
             below++;
         }


     }
     printf("%d of them got above average\n",avobe);
     printf("%d of them got below average\n",below);
}
