#include <stdio.h>
int Fibonacci(int);
int main()
{
    int n, i, c = 0;
    printf("Enter nth term : ");
    scanf("%d", &n);
    printf("Fibonacci series : \n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", Fibonacci(c));
        c++;
    }
    return 0;
}
int Fibonacci(int x)
{
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return (Fibonacci(x - 1) + Fibonacci(x - 2));
}