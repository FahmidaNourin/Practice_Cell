#include<stdio.h>
int main()
{
    int y,i,n;
    printf("Enter a number:");
    scanf("%d",&n);


  for(i=2;i<=n;i++){
    y=perfectNUmber(i);
    if(y==1){
      printf("%d\n",i);
    }
  }
}


int perfectNUmber(int n)
   {
       int i,sum=0;
       for(i=1;i<n;i++)
       {

           if(n%i==0){
             sum=sum+i;
           }
       }

       if(sum == n){
         return 1;
       }
       else{
         return 0;
       }


   }
