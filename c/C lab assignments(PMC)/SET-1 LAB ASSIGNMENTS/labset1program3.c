// program to compute the area and circumference of a circle
// with given radius r as input defining pie as constant
#include <stdio.h>
#define pie 3.14
int main()
{
    // area of circle
    float r, area, circumference;
    printf("Enter Radius of circle : ");
    scanf("%f", &r);
    area = pie * r * r;
    circumference = 2 * pie * r;
    printf("Area of circle is : %.2f\n", area);
    printf("circumference of circle is : %.2f", circumference);

    return 0;
}