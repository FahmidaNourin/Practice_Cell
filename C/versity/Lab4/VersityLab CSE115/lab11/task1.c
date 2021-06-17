#include<stdio.h>
int main()
{
    int n,i,num,count=0;
    printf("Input size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Input elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("Element to search? ");
     scanf("%d",&num);
     for(i=0;i<n;i++)
     {
         if(num==arr[i])
         {
             count++;
         }
     }
     if(count==0)
     {
         printf("not found");

     }
     else
        {
            printf("Element found %d times",count);
        }


}
