
#include<stdio.h>
int main()
{
    int x,y,z,r;
    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);
    printf("Enter z:");
    scanf("%d",&z);
    r=GCD(x,y);
    printf("The GCD of %d,%d,%d is %d ",x,y,z,GCD(r,z));
}

 int GCD(int x,int y)
   {
       int i,gcd,max,min;
       if(x>y)
       {
           max=x;
           min=y;
       }
       else
        {
            max=y;
            min=x;
        }
       for(i=1;i<=min;i++)
       {
         if((max%i==0)&&(min%i==0))
         {
             gcd=i;
         }
       }
        return gcd;
   }

