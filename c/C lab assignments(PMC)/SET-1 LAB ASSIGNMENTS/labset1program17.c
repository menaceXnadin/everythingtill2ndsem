// write a algorithm/program to print the prime numbers up to 100
#include <stdio.h>
int main()
{
    int i, x, count = 0;
    for (x = 1; x <= 100; x++)
    {
        for (i = 1; i <= x; i++)
        {
            if (x % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d\t", x);
        }
        count = 0;
    }
    return 0;
}
