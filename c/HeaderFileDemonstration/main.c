#include <stdio.h>
#include "math.h"
int main()
{
    double x = 2.0;
    printf("The square of %f is %f\n", x, square(x));
    printf("The cube of %f is %f\n", x, cube(x));
    return 0;
}
