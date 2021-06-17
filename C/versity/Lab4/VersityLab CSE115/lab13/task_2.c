#include <stdio.h>
int main()
{
  char string1[1000];
  int count1 = 0;

  printf("Enter string :");
  gets(string1);


  while (string1[count1] != '\0')
  {
  if(string1[count1]!=32)
  {
      printf("%d ",string1[count1]);
  }
   count1++;
  }

  }








