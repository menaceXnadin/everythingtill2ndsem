// write an algorithm and c program that accepts two integers
//  from the user as input and calculates the sum,-,*,/,% applying different
//  arithmetic operators between two integers
#include <stdio.h>
int main()
{
    int a, b;
    char ch;
    printf("Enter the operator : ");
    scanf(" %c", &ch);
    printf("Enter Two integers : ");
    scanf("%d %d", &a, &b);
    switch (ch)
    {
    case '+':
        printf("%d + %d = %d ", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d ", a, b, a - b);
        break;
    case '/':
        printf("%d / %d = %d ", a, b, a / b);
        break;
    case '%':
        printf("%d %% %d = %d ", a, b, a % b);
        break;
    case '*':
        printf("%d * %d = %d ", a, b, a * b);
        break;
    default:
        printf("---Invalid<>Operator---");
    }

    return 0;
}