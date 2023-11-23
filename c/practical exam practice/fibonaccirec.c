#include <stdio.h>
int fib(int);
int main()
{
    int n;
    printf("enter nth term : ");
    scanf("%d", &n);
    int i, c = 0;
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", fib(c));
        c++;
    }
    return 0;
}
int fib(int x)
{
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return fib(x - 1) + fib(x - 2);
}