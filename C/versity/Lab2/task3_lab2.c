#include<stdio.h>
int main()
{
    int f1,f2,i1,i2,total1,total2,dif,res_f,res_i;
    printf("First person:\n");
    printf("Enter feet:");
    scanf("%d",&f1);
    printf("Enter inch:");
    scanf("%d",&i1);
    printf("Second person:\n");
    printf("Enter feet:");
    scanf("%d",&f2);
    printf("Enter inch:");
    scanf("%d",&i2);
    total1=f1*12+i1;
    total2=f2*12+i2;
    dif=total1-total2;
    res_f=dif/12;
    res_i=dif%12;
    printf("Difference:%d feet %d inch",res_f,res_i);



}
