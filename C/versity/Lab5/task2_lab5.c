#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter a character:");
    scanf(" %c",&alpha);
    if((alpha>=65)&&(alpha<=122))
    {
       printf("%c is an alphabet",alpha);
    }
    else{
        printf("%c is not an alphabet",alpha);
    }

}
