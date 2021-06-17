#include<stdio.h>
#include<math.h>
struct Point
{
   int x,y;
};
int main()
{
    struct Point p1;
    struct Point p2;
    struct Point p3;
    float d1,d2,d3;

    printf("Enter the first point:");
    scanf("%d",&p1.x);
    scanf("%d",&p1.y);
    printf("Enter the second point:");
    scanf("%d",&p2.x);
    scanf("%d",&p2.y);
    printf("Enter the third point:");
    scanf("%d",&p3.x);
    scanf("%d",&p3.y);

    d1=sqrt((pow((p1.x-p2.x),2))+(pow((p1.y-p2.y),2)));
    d2=sqrt((pow((p2.x-p3.x),2))+(pow((p2.y-p3.y),2)));
    d3=sqrt((pow((p3.x-p1.x),2))+(pow((p3.y-p1.y),2)));

    printf("The Euclidian distance of first and second point is %.2f unit\n",d1);
    printf("The Euclidian distance of second and third point is %.2f unit\n",d2);
    printf("The Euclidian distance of third and first point is %.2f unit\n",d3);




}
