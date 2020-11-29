#include<stdio.h>
int main(){
    int num1,num2,rslt;
    char text1;
    scanf("%d %c %d",&num1,&text1,&num2);
    //printf("%d%c%d",num1,text1,num2);
    if(text1=='+')
    {
        rslt=num1+num2;
        printf("the sum=%d",rslt);
    }
    else if(text1=='-')
    {
        rslt=num1-num2;
        printf("the sub=%d",rslt);
    }


    else if(text1=='*')
    {
        rslt=num1*num2;
        printf("the mul=%d",rslt);
    }
    else if(text1=='/')
    {
        rslt=num1/num2;
        printf("the div=%d",rslt);
    }

}





