#include<stdio.h>
int main()
{

    float np,pr,any,fp;
    printf("Enter the price:")  ;
    scanf("%f",&np)  ;
    printf("Enter the parcentage:")  ;
    scanf("%f",&pr)     ;
    printf("Enter the dec(0or1):")   ;
    scanf("%f",&any) ;
    if(any==1)
    {
         fp=np-(np*(pr/100));
         printf("The final price :%f",fp);
    }
    else if (any==0)
    {
                  fp=np+(np*(pr/100))   ;
                  printf("The final price :%f",fp);
    }
    else{
        printf("WRONG INPUT")     ;
    }

}
