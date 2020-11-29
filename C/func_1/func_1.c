#include<stdio.h>
#include<math.h>
int nourins_f(int x, int y,int z){

    int res;
    res=(x*pow(y,2))+(2*y)+3*pow(x,2)-(pow(y,2)*x)+z;

    return res;

}
int main(){
             int ans;
      ans=nourins_f(23,24,9);
      printf("%d is the ans:\n",ans);

            ans=nourins_f(78,78,45);
      printf("%d is the ans:",ans);


 ans=nourins_f(34,56,5);
      printf("%d is the ans:",ans);


}






