// write a c program that accepts  principle,rate of interest,
// time in years and computes the simple interest
#include <stdio.h>
int main()
{
    float p, t, r, SI;
    printf("Enter principal ,Rate of interest , time : ");
    scanf("%f %f %f", &p, &t, &r);
    SI = (p * t * r) / 100;
    printf("The simple interest is : %.3f", SI);

    return 0;
}