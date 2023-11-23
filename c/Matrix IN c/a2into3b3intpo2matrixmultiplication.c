#include <stdio.h>
int main()
{
	int a[2][3], b[3][2], mul[2][2];
	int i, j, k;

	printf("enter the vlaues for matrix A : \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("enter the vlaues for matrix B : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("the multiplication of A X B matrix is  : \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
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
