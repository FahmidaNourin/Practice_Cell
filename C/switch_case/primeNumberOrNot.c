#include<stdio.h>
int main()
{
    int number,i,flage=0;
    printf("Enter any number: ");
    scanf("%d",&number);

    for(i=2;i<=(number/2);i++){
            if (number%i==0)
                {
                flage=1;
                break;
                }
    }


    if(flage==0){
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }

}
