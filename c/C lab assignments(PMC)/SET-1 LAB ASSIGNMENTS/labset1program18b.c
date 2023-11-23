/*write algorithm and program to compute the followings
using for,do while and while loop separately.
 a. factorial of an integer
 b. computation of a^b (a raised to the power b)*/
#include <stdio.h>
int main()
{
    int a, i, b, result = 1;
    printf("enter the number : ");
    scanf("%d", &a);
    printf("enter the power : ");
    scanf("%d", &b);
    for (i = 1; i <= b; i++)
    {
        result = result * a;
    }
    printf("the %d raised to the power %d is %d", a, b, result);
    return 0;
}
