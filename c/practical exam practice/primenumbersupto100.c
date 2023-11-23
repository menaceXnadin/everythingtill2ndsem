#include <stdio.h>
int main()
{
    int count = 0, i, x;
    printf("primenhumbers uoto 100 : \n");
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