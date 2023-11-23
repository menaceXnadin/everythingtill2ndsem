#include <stdio.h>
int main()
{
    int a, b, n, result;
    char answer, c;
    do
    {
        printf("\nEnter the operation you want : ");
        scanf(" %c", &c);
        printf("\nenter integer A : ");
        scanf("%d", &a);
        printf("\nenter integer B : ");
        scanf("%d", &b);
        switch (c)
        {
        case '+':
            printf("%d + %d = %d ", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d ", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d ", a, b, a * b);
            break;
        case '/':
            printf("%d / %d = %d ", a, b, a / b);
            break;
        case '%':
            printf("%d %% %d = %d ", a, b, a % b);
            break;
        default:
            printf("wrong operator input\n");
        }
        printf("\nWant to perform the calculation again y/n: ");
        scanf(" %c", &answer);
    } while (answer == 'y');
    return 0;
}