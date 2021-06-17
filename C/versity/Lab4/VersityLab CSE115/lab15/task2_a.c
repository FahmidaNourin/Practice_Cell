#include<stdio.h>
float sum(float a,float b)
{
        float result;
        result=a+b;
        return result;
}
float sub(float a,float b)
{
        float result;
        result=a-b;
        return result;
}
float mul(float a,float b)
{
        float result;
        result=a*b;
        return result;
}
float div(float a,float b)
{
        float result;
        result=a/b;
        return result;
}
int main()
{
    float num1,num2;
    printf("Enter the number:");
    scanf("%f %f",&num1,&num2);
    printf("%f is the result\n",sum(num1,num2));
    printf("%f is the result\n",sub(num1,num2));
    printf("%f is the result\n",mul(num1,num2));
    printf("%f is the result\n",div(num1,num2));
}

