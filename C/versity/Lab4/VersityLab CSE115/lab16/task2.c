#include <stdio.h>


void swapNumbers(int *n1, int *n2, int *n3) {
    int temp;
    temp = *n2;
    *n2 = *n1;
    *n1 = *n3;
    *n3 = temp;
}


int main() {
    int a, b, c;

    printf("Input the value of 1st element:");
    scanf("%d", &a);
    printf("Input the value of 2nd element:");
    scanf("%d", &b);
    printf("Input the value of 3rd element:");
    scanf("%d", &c);
    printf("Value before swapping are:\n");

    printf("1st element=%d\n",a);
    printf("2nd element=%d\n",b);
    printf("3rd element=%d\n",c);


    swapNumbers(&a, &b, &c);


  printf("Value after swapping are:\n");

    printf("1st element=%d\n",a);
    printf("2nd element=%d\n",b);
    printf("3rd element=%d\n",c);
    return 0;
}
