#include <stdio.h>
int main()
{
  char string1[1000];
  int count1 = 0,up=0,low=0,spc=0;

  printf("Enter string :");
  gets(string1);

  while (string1[count1] != '\0')
   {
       if((string1[count1]>=65) && (string1[count1]<=90)){
        up=1;
       }
        if((string1[count1]>=97) && (string1[count1]<=122)){
        low=1;
       }
       else{
        spc=1;
       }
       count1++;

   }

   if(count1>=6&& up==1 && low==1 && spc==1)
   {
       printf("VALID PASSWORD");
   }
   else
   {
       printf("NOT A VALID PASSWORD");
   }
}










