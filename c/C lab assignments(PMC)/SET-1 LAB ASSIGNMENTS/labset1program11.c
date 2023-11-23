// write a program that takes input of two numbers and an operator
//  in(+-*/%)as input and pass those numbers and an operator to the
//  function.the function should calculate the result of two numbers
//  as indicated by operator and return the result
#include <stdio.h>
int calc(int, int, char);
int main()
{
    int a, b;
    char ch;
    int result;
    printf("Enter the operator(+,-,*,/,%) : ");
    scanf("%c", &ch);
    printf("Enter the two numbers : ");
    scanf("%d %d", &a, &b);
    result = calc(a, b, ch);
    printf("%d %c %d = %d", a, ch, b, result);
    return 0;
}
int calc(int x, int y, char ch)
{
    switch (ch)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;

    case '/':
        return x / y;

    case '*':
        return x * y;
    case '%':
        return x % y;
    }
}