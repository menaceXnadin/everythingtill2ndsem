#include <stdio.h>
#include<math.h>
#define f(x, y) x + y * y
int  main()
{
    float x, y, h, xn, l;
    printf("Program for Solution of Ordinary Differential Equation\nHeun's Method\n");
    printf("Enter value for x and y\n");
    scanf("%f%f", &x, &y);
    printf("Enter value for h and last of x\n");
    scanf("%f%f", &h, &xn);
    while (x + h <= xn)
    {
        l = (h / 2) * (f(x, y) + f(x + h, y + h * f(x, y)));
        y = y + l;
        x = x + h;
        printf("y = %f\tx = %f\n", y, x);
    }
    return 0;
}