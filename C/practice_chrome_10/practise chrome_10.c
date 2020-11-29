#include<stdio.h>
int main()
{
  char n;
  printf("Enter the letter:");
  scanf("%c",&n);
  if('A'<=n&&n<='Z')
  {
      printf("%c is the uppercase",n);
  }
   else if('a'<=n&&n<='z')
  {
      printf("%c is the lowercase",n);
  }
}
