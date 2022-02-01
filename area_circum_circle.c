/*...........Program to calculate area and circumference of a circle............*/
#include <stdio.h>

int main()
{
    int r;
    printf("Enter a radius: ");
    scanf("%d",&r);
    float area,circum,pi=3.14;
    area=pi*r*r;
    circum=2*pi*r;
    printf("Area if circle: %f\nCircumference of circle: %f\n",area,circum);
    return 0;
}
