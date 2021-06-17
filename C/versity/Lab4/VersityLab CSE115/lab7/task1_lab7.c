#include<stdio.h>
int main()
{
    char alpha_1='a',alpha_2='Z';
    int i,c;
    for(i=0;i<26;i++)
    {
        printf("%d ",alpha_1+i);
    }
     printf("\n");
        for(i=0;i<26;i++)
    {
        printf("%d ",alpha_2-i);
    }

}
