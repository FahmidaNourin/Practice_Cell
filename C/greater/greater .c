#include <stdio.h>
int main ()
{
    int nourin;
    scanf("%d",&nourin);
    if(nourin%2==0 &&nourin%3==0)
       {
           printf("%d is divisiable with 2 and 3", nourin) ;
       }
       else if(nourin%3==0){

         printf("%d is divisiable with 3", nourin) ;
       }
       else if (nourin%2==0)
                {
                    printf ("%d is divisiable with 2",nourin) ;
                }
       else
        {
            printf("%d is not divisiable with 2 and 3",nourin);
        }
}

