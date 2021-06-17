#include <stdio.h>
int main()
{
  char string1[1000],string2[1000];
  int count1 = 0,count2=0;

  printf("Enter string 1:");
  gets(string1);

  printf("Enter string 2:");
  gets(string2);

  while (string1[count1] != '\0')
   {
       count1++;
   }

while (string2[count2] != '\0'){
    count2++;
}


  if(count1<count2)
  {
      puts(string1);
  }
  else
  {
      puts(string2);
  }

}
