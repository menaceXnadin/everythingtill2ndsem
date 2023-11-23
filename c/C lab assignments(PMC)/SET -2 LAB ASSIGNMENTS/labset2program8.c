/*sum and product of 3 into 3 matrix*/
#include <stdio.h>
int main()
{
    int i, j, k;
    int a[3][3], b[3][3], mul[3][3], sum[3][3];
    printf("Enter values for MAtrix A : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf(" %d", &a[i][j]);
        }
    }
    printf("Enter values for matrix B : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf(" %d", &b[i][j]);
        }
    }
    printf("Addition of 3 X 3 matrix is : \n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    printf("Product of 3 X 3 matrix is : \n ");
    // for multiplication of  3*3 matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
            }
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}