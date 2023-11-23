/*write algorithm and program to compute the followings
using for,do while and while loop separately.
 a. factorial of an integer
 b. computation of a^b (a raised to the power b)*/
#include <stdio.h>
int main()
{
    int n, fact = 1, i;
    printf("Enter the number : ");
    scanf("%d", &n);
    i = n;
    do
    {
        fact = fact * i;
        i--;
    } while (i > 0);
    printf("The factorial of %d is %d", n, fact);
    return 0;
}
