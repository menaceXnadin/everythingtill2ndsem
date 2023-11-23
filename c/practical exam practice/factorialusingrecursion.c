#include <stdio.h>
int fact(int);
int main()
{
    int n, x;
    printf("enter the no : ");
    scanf("%d", &n);
    x = fact(n);
    printf("fact = %d", x);
    return 0;
}
int fact(int x)
{
    if (x == 0)
        return 1;
    else
        return x * fact(x - 1);
}