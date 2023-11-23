#include <stdio.h>
int sum(int, int); // function prototype
int main()
{
    int a, b, c;
    printf("enter two integers\n: ");
    scanf("%d %d", &a, &b);
    c = sum(a, b); // actual parameter
    printf("sum is %d", c);
    return c;
}
int sum(int x, int y) // x and y are formal parameters
{
    int temp;
    temp = x + y;
    return temp;
}
