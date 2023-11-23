#include <stdio.h>
int main()
{
	int i, j, k;
	int a[3][3], b[3][3], mul[3][3];
	printf("enter values for MAtrix A : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf(" %d", &a[i][j]);
		}
		printf("\n");
	}
	printf("enter values for matrix B : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf(" %d", &b[i][j]);
		}
		printf("\n");
	}
	printf("the values of A*B matrix is : \n ");
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
			printf("%d ", mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
