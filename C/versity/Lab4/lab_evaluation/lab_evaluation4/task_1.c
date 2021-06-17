#include<stdio.h>
// 3.0 5.5 2.0 6.1 7.0 9.0 9.0 2.0 1.0 4.0
int main()
{
    float arr[10],min;
    int i,j,index[10],index2;
    printf("Enter an Array of ten: ");
    for(i=0;i<10;i++)
    {
        scanf("%f",&arr[i]);

    }
    min=arr[0];
    j=0;
    for(i=1;i<10;i++)
    {
      if(min>=arr[i]){
             min=arr[i];
            index2=i;


    }


    }
    printf("The minimum is %.1f and it appear in location %d ",min,index2);
}
