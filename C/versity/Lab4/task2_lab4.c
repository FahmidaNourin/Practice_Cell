#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if((n%5==0)&&(n%7!=0))
    {
        printf("YES");
    }
    else{
        printf("NO");
    }

}

