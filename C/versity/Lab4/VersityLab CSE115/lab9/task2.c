#include <stdio.h>
int main( )
{
char ch='A';
int n,i,j;
printf("Enter n:");
scanf("%d",&n);
for(i=0;i<=n-1;i++){
  for(j=0;j<=n-1;j++){
    printf("%c",ch);
    }
  printf("\n");
  ch++;
  }
}
