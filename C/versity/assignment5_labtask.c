#include<stdio.h>
int main()
{
    float km,m,feet,inch,cm;
    printf("Enter the distance between two cities (in km):");
    scanf("%f",&km);
    m=km*1000;
    feet=km*3280.84;
    inch=km*39370.1;
    cm=km*100000;
    printf("Meter=%.2f Feet=%.2f Inch=%.2f CM=%.2f\n",m,feet,inch,cm);
}
