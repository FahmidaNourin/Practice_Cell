#include<stdio.h>
int main()
{
    int n,res;
    printf("Enter the value:");
    scanf("%d",&n);
    if((n%5==0)&&(n%7!=0))
    {
        printf("%d is YES",n);
    }
    else{
        printf("%d is NO",n);
    }
}
