#include <stdio.h>
int main()
{
	int a[2][2], b[2][2], sum[2][2];
	int i, j;
	printf("enter the vlaues for matrix A : \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("enter the vlaues for matrix B : \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("addition of matrix A and B is : \n ");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}

	return 0;
}
