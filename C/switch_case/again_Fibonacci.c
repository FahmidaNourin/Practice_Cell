#include<stdio.h>
int main()
{
    int i,n,first=0,second=1,fibonacci=0;
    scanf("%d",&n);
    printf("%d %d  ",first,second);
    for(i=1;i<=n;i++)
    {
        fibonacci=first+second;
        printf("%d    ",fibonacci);
            first=second;
            second=fibonacci;
    }

}
