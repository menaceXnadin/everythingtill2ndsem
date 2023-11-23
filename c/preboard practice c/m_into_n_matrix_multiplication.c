#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m, n, p, q;
	printf("enter order for matrix A:\n");
	scanf("%d %d", &m, &n);

	printf("enter order for matrix B:\n");
	scanf("%d %d", &p, &q);
	if (n != p)
	{
		printf("matrix multiplication cannot be done ");
		exit(0);
	}
	int a[m][n], b[p][q], mul[m][q], i, j, k, nadin;
	// for value of A
	printf("enter values for matrix A : \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			// printf("enter values for matrix A\n");
			scanf("%d", &a[i][j]);
		}
	}
	// for value of b
	printf("\nEnter the values for matrix B : \n");
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			//	printf("enter values for matrix B\n");
			scanf("%d", &b[i][j]);
		}
	}
	// multiplication
	printf("the value of A matrix * B matrix is :\n ");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < q; j++)
		{

			mul[i][j] = 0;
			for (k = 0; k < q; k++)
			{
				mul[i][j] += a[i][k] * b[k][j];
			}
			printf("%d\t", mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
