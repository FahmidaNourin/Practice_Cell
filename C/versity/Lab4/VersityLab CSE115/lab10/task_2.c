#include<stdio.h>
int main()
{
    char arr[5];
    int i;
    printf("Enter array elements:\n");
    for(i=0;i<5;i++)
    {
        scanf(" %c",&arr[i]);
    }
     printf("ASCII Values: %d %d\n",arr[1],arr[2]);
      if((arr[4]=='A')||(arr[4]=='E')||(arr[4]=='I')||(arr[4]=='O')||(arr[4]=='U')||(arr[4]=='a')||(arr[4]=='e')||(arr[4]=='i')||(arr[4]=='o')||(arr[4]=='u'))
     {
         printf("Last element is vowel \n");
     }
     else
     {
         printf("Last element is consonant\n");
     }
     printf("Printing elements: %c %c %c %c %c",arr[2],arr[0],arr[1],arr[4],arr[3]);
}
