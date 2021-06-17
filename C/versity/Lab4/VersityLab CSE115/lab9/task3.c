#include<stdio.h>

int main()
{
    int n,k,i,j;
    printf("Enter n: ");
    scanf("%d", &n);
    if(n >= 1)
    {
        printf("First %d prime numbers are :\n", n);
        printf("2 ");
    }
    k=3;
    i=2;
    while(i <= n)
    {
        for(j = 2; j < k; j++)
        {
            if(k%j == 0)
                break;
        }
        if(j==k)
        {
            printf("%d ",k);
            i++;
        }
        k++;
    }
}
