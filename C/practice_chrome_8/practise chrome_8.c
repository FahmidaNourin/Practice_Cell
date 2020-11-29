#include<stdio.h>
int main()
{
    char nou;
    printf("enter the value");
    scanf("%c",&nou);      //I
    if((nou=='a'||nou=='A')||(nou=='e'||nou=='E')||(nou=='i'||nou=='I')||
           (nou=='o'||nou=='O')||(nou=='u'||nou=='U'))
       {
           printf("%c is vowel",nou);
       }
       else
       {
           printf("%c is consonant",nou);
       }
}
