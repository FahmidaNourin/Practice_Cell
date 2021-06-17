#include<stdio.h>
int main()
{
    char ch;
    int N;
    printf("Enter any alphabet:");
    scanf("%c",&ch);
    printf("Enter any value:");
    scanf("%d",&N);
     if ((ch>=65)&&(ch<=90))
     {
         printf("Next alphabet is %c",ch+N);
     }
      else if ((ch>=97)&&(ch<=122))
     {
         printf("Next alphabet is %c",ch+N);
     }

}

