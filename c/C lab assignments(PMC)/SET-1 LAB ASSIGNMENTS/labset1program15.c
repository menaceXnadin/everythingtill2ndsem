// write a C program to find the sum of first 100 natural numbers
// using loop
#include <stdio.h>
int main()
{
    int sum = 0, i;
    for (i = 1; i <= 100; i++)
    {
        sum += i;
    }
    printf("The sum of first 100 natural numbers is %d", sum);
    return 0;
}