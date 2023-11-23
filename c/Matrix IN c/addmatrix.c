#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row, column, i, j;
    printf("Enter the rows ans column : ");
    scanf("%d %d", &row, &column);
    if (row != column)
    {
        printf("Not suitable to Add\n --Row is not Equal to column--");
        exit(1);
    }

    int a[row][column], b[row][column], sum[row][column];
    printf("enter the values for matrix A : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the values for matrix B :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("the sum of matrix A and B is :\n");
    for (i = 0; i < row; i++)
    {

        for (j = 0; j < column; j++)
        {
            sum[i][j] = 0;
            sum[i][j] += a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}