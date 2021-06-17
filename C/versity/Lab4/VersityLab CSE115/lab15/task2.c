#include<stdio.h>
#include<math.h>
struct Point
{
   int x,y;
};

float calDist(struct Point a, struct Point b)
{
    float d;
    d=sqrt((pow((a.x-b.x),2))+(pow((a.y-b.y),2)));
    return d;
}

int main()
{
    struct Point p1;
    struct Point p2;

    float d1,d2,d3;

    printf("Enter the first point:");
    scanf("%d",&p1.x);
    scanf("%d",&p1.y);
    printf("Enter the second point:");
    scanf("%d",&p2.x);
    scanf("%d",&p2.y);

    d1=calDist(p1,p2);


    printf("The Euclidian distance of the points is %.2f unit\n",d1);



}



