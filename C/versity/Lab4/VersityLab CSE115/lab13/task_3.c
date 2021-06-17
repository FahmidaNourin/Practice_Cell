#include <stdio.h>
int main()
{
  char string1[1000],string2[1000];
  int count1 = 0;

  printf("Enter string :");
  gets(string1);


  while (string1[count1] != '\0')
  {
  if((string1[count1]>=65)&&(string1[count1]<=90))
  {
      string2[count1]=string1[count1]+32;
  }
  else if((string1[count1]>=97)&&(string1[count1]<=122))
  {
      string2[count1]=string1[count1]-32;

  }
  else
  {
      string2[count1]=string1[count1];
  }
   count1++;
  }
    puts(string2);
  }









