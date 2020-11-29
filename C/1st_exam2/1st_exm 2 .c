#include<stdio.h>
int main ()
{
    float a,b,x,z;
    printf("Enter 2 numbers:")    ;
    scanf("%f %f",&a,&b) ;
    printf("Enter the dec (0/1/2/3):");
    scanf("%f",&x);
    if(x==0)
    {
        z=a+b;
        printf("the sum is %f",z);
    }
    else if (x==1)
    {
        z=a-b;
        printf("The sub is %f",z);
    }
    else if (x==2)
    {
        z=a*b;
        printf("the mul is %f",z);
    }
    else if (x==3)
    {
        z=a/b;
        printf("the div is %f",z);
    }
    else
    {
        printf ("WRONG INPUT");
    }

}
