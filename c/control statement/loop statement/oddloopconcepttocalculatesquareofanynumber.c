#include <stdio.h>
int main()

{
    int n;
    char answer;
    do
    {
        printf("Enter any number : ");
        scanf("%d", &n);
        printf("Square of %d is %d", n, n * n);
        fflush(stdin);
        printf("\nWant to calculate more square y/n: ");
        scanf("%c", &answer);
    } while (answer == 'y');
    return 0;
}