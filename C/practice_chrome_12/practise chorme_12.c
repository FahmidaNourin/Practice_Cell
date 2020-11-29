#include <stdio.h>
int main()
{
    int month;
    printf("Enter the month number:");
    scanf("%d",&month);
    if((month==1)||(month==3)||(month==5)||(month==7)||
          (month==8)||(month==10)||(month==12))
    {
        printf("the month consists of 31 days");
    }

      else if((month==4)&&(month==6)&&(month==9)&&(month==11))
      {
          printf("the month consists of 30 days");
      }
      else
      {
          printf("the month consists of 28 or 29 days");

     }
}
