#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, x1, x2, real, imag;
    printf("Enter The values for a,b,c : ");
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("root1 = %.2f , root2 = %.2f\n", x1, x2);
        printf("Roots are real and un equal");
    }
    else if (d == 0)
    {
        x1 = x2 = -b /( 2 * a);
        printf("Roots are real and equal\n");
        printf("root1 = root2 = %.2f", x1);
    }
else
    {
        printf("Roots are imaginary\n");
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);
        printf(" root 1 = %.2f+%.2fi and root2 = %.2f-%.2fi\n",real,imag,real,imag);
        printf("Roots are imaginary");
    }
    return 0;
}