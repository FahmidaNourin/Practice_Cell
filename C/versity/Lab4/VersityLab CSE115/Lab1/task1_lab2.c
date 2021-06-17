#include<stdio.h>
int main()
{
    int num1,num2,add,sub,mul,mod;
    printf("Enter an integer:");
    scanf("%d",&num1);
    printf("Enter another integer:");
    scanf("%d",&num2);
    add=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    mod=num1%num2;
    printf("%d PLUS %d EQUALS %d\n",num1,num2,add);
    printf("%d - %d =%d\n",num1,num2,sub);
    printf("The result of multiplication is %d\n",mul);
    printf("%d mod %d = %d\n",num1,num2,mod);

}
