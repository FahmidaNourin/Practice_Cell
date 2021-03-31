#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter N:");
    scanf("%d",&n);
    printf("Factors: ");
    for(i=1;i<=n;i++)
    {
        if(n%i==0){
            count++;
            printf("%d ",i);

        }

    }
    printf("\nTotal factors: %d",count);

}
