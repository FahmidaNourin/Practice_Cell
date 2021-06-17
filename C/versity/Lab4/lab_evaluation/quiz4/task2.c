#include<stdio.h>
#include <string.h>

int main()
{
char first[1000];
char second[1000];
int flage=0,c,i,j;
printf("Enter first string: ");
gets(first);
printf("Enter second string: ");
gets(second);

for( i=0;i<strlen(first);i++)
{
for( j=0;j<strlen(second);j++)
{
if(first[i]==second[j])
{
flage=1;
c=i;
break;
}
}
if(flage==1)
    break;
}

if(flage==0)
    printf("No Match");
else
    printf("First matched latter %c",first[c]);
}


