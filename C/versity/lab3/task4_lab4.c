#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet:");
    scanf("%c",&ch);
     if ((ch>=65)&&(ch<=90))
     {
         printf("Next alphabet is %c",ch+1);
     }
      else if ((ch>=97)&&(ch<=122))
     {
         printf("Next alphabet is %c",ch+1);
     }

}

