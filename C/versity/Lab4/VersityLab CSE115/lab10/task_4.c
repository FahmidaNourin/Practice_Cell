#include<stdio.h>
int main()
{
    int arr[11],temp,i,j=10;
    printf("Enter array elements:\n");
    for(i=0;i<11;i++)
    {
        scanf("%d",&arr[i]);
    }
     if(arr[5]%2==0)
     {
         printf("Middle element is %d which is even\n",arr[5]);
     }
     else
     {
         printf("Middle element is %d which is odd\n",arr[5]);
     }
     printf("Array after interchange: ");
     temp=arr[0];
     arr[0]=arr[10];
     arr[10]=temp;
     for(i=0;i<11;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nPrinting Alternate elements: ");
    for(i=0;i<11;i=i+2)
    {
        printf("%d ",arr[i]);
    }
}
