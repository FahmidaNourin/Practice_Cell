#include<stdio.h>
int main()
{
    char a;
    printf("Enter the character:");
    scanf(" %c",&a);
    switch(a)
    {
    case 116:
        printf("It is t");
        break;
    case 84:
        printf("It is T");
        break;
    case 104:
        printf("It is h");
        break;
    case 72:
        printf("It is H");
        break;
    default:
        printf("Something different");

    }
}
