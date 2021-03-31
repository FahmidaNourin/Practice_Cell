#include<stdio.h>
int main()
{
    float x,y,res;
    char ope;
    printf("Enter operator:");
    scanf(" %c",&ope);
    printf("Enter 1st operand:");
    scanf("%f",&x);
    printf("Enter 2nd operand:");
    scanf("%f",&y);
    switch(ope)
    {
        case '+':
        res=x+y;
        break;
        case '-':
        res=x-y;
        break;
        case '*':
        res=x*y;
        break;
        case '/':
        res=x/y;
        break;
        default:
            printf("Enter a correct operator");
            return 0;

    }
    printf("Result is:%f",res);


}
