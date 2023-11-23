// passing calculator in function
#include <stdio.h>
int calc(int, int, char);
int main()
{
    int a, b, result;
    char c;
    printf("\nenter the operation you want : ");
    scanf(" %c", &c);
    printf("\nenter integers a : ");
    scanf("%d", &a);
    printf("\nenter integers b : ");
    scanf("%d", &b);
    result = calc(a, b, c);
    printf("%d %c %d = %d", a, c, b, result);
    return 0;
}
int calc(int a, int b, char c)
{
    switch (c)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '%':
        return a % b;
    default:
        printf("wrong operator input\n");
    }
}
