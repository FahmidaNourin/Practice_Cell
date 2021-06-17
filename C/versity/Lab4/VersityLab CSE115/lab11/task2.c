#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n-1;i++)
     {
         if(arr[i]<=arr[i+1])
         {
             continue;
         }
         else
            {
                flag=1;
                break;
            }
     }
     if(flag==0)
     {
         printf("Sorted");

     }
     else
        {
            printf("Not sorted");
        }


}
