#include <stdio.h>
int main()
{
	int a[3][3], b[3][2], mul[3][2], i, j, k, nadin;
	// for value of A
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("enter values for matrix A\n");
			scanf("%d", &a[i][j]);
		}
	}
	// for value of b
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("enter values for matrix B\n");
			scanf("%d", &b[i][j]);
		}
	}
	// multiplication
	printf("the value of A matrix * B matrix is :\n ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{

			nadin = 0;
			for (k = 0; k < 3; k++)
			{
				nadin = nadin + a[i][k] * b[k][j];
			}
			printf("%d\n", nadin);
		}
	}

	return 0;
}
