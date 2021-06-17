#include <stdio.h>
int main()
{
  int array[10], *m=array,i;

  printf("Enter ten integer: ");

  for (i = 0; i < 10; i++)
    {
        scanf("%d",m);
        m++;
    }

  m  = array;
  *m = *array;

  for (i = 1; i < 10; i++)
  {
    if (*(array+i) > *m)
    {
       *m = *(array+i);
    }
  }

  printf("Maximum is %d", *m);
  return 0;
}
