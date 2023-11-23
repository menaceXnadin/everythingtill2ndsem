/*
 * C program to find accept a matrix of order M x N and find
 * the sum of the  main diagonal and off diagonal elements
 */

#include <stdio.h>
int main()
{

    int i, j, n, a = 0, sum = 0;
    printf("Enetr the order of the matix \n");
    scanf("%d", &n);
    int array[n][n];

    printf("Enter the co-efficients of the matrix\n");
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
        }
    }

    printf("The given matrix is \n");
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", array[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; ++i)
    {
        sum = sum + array[i][i];
        a = a + array[i][n - i - 1];
    }

    printf("\nThe sum of the main diagonal elements is = %d\n", sum);
    printf("The sum of the off diagonal elements is   = %d\n", a);
    return 0;
}