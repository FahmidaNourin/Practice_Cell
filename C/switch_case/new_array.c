#include<stdio.h>>
int main()
{
    int n;
    printf("Enter the array number:");
    scanf("%d",&n);


    int a[n],i,big;
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }



    big=a[0];
    for(i=0;i<=n-2;i++)
    {
        if (big>a[i+1])
        {
            continue;
        }
        else
        {
            big=a[i+1];
        }
    }
    printf("The biggest number is %d",big);
}
