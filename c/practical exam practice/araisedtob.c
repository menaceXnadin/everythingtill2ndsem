#include <stdio.h>
int main()
{
    int i, a, b, res = 1;
    printf("Enter integer and power : ");
    scanf("%d %d", &a, &b);
    for (i = 1; i <= b; i++)
    {
        res *= a;
    }
    printf("%d", res);
    return 0;
}