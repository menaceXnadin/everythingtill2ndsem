#include <stdio.h>
int main()
{
	int a[3][3], b[3][2], mul[3][2], i, j, k;
	printf("Enter value for matrix A : ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter value for matrix B : ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			mul[i][j] = 0;
			for (k = 0; k < j; k++)
			{
				mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
			}
		}
		printf("%d\n", mul[i][j]);
	}

	return 0;
}
