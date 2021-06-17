#include<stdio.h>
int main()
{
    int n,i,j,count;
    printf("Input size of array:");
    scanf("%d",&n);
    int arr[n],arr2[n];
    printf("Input elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arr2[i]=-1;
    }

     for(i=0;i<n;i++)
     {
         count=1;
         for(j=i+1;j<n;j++){
         if(arr[i]==arr[j])
         {
             count++;
             arr2[j]=0;
         }
         }
         if(arr2[i]!=0)
         {
             arr2[i]=count;
         }
     }
        for(i=0;i<n;i++)
        {
            if(arr2[i]!=0)
            {
            printf("Frequency of %d = %d\n",arr[i],arr2[i]);
            }
        }


}
