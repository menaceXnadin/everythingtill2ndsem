// sum of digits using recursion
#include <stdio.h> // for eg : 123 i.e 1+2+3 = 6[This is how program works]
int sum(int);
int main()
{
    int n, res;
    printf("enter number : ");
    scanf("%d", &n);
    res = sum(n);
    printf("The sum is %d", res);

    return 0;
}
int sum(int n)
{
    int rem = n % 10;
    if (n == 0)

        return 0;
    else
        return rem + sum(n / 10);
}