
// Following is a simple C program
// to demonstrate syntax of switch.
#include <stdio.h>
int main()
{
int x;
scanf("%d",&x);

switch (x%2)
{
	case 0: printf("The number is even");
			break;
	case 1: printf("The number is odd");
            break;
}
return 0;
}
