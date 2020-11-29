#include<stdio.h>
int main()
{
    char nou;
    printf("Enter the letter:");
    scanf("%c",&nou);
    if(('A'<=nou&&nou<='z'))
    {
        printf("%c is ALPHABET",nou);
    }
    else
    {
        printf("%c is not ALPHABET",nou);
    }

}
