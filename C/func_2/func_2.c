#include <stdio.h>
#include<math.h>
float circals_f(float r){
    float pie=3.1416,res1;
    res1=pie*pow(r,2);
     printf("this is for test %f \n",res1);
    return res1;
}
float triangles_f(float a,float b,float c){
    float s,res2;
    s=(a+b+c)/2;
    res2=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("this is for test %f \n",res2);
    return res2;
}
int main(){
                float res1,res2;
                res1=circals_f(5);
                printf("%f is the rslt\n",res1);
                res2=triangles_f(5,6,7);
                printf("%f is the \n",res2);

}

