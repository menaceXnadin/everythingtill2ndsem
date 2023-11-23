/*TO check diagonals of matrix are zero or not*/
#include <stdio.h>
#include <stdlib.h>
int main()
{

	int r, c, i, j, flag = 1;

	printf("Enter rows  and column : ");
	scanf("%d %d", &r, &c);
	int a[r][c];
	// for storing values

	if (r != c)
	{
		printf(" row is not equal to column : ");
		exit(0);
	}
	else
	{
		printf("Enter the values :\n ");
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
				scanf(" %d", &a[i][j]);
			}
		}
	}
	printf("the entered values are : \n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	// to transpose
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (i == j)
			{
				if (a[i][j] == 0)
					flag = 1;
				else
					flag = 0;
				break;
			}
		}
	}
	if (flag == 1)
	{
		printf(" diagonals are all zero\n");
	}
	else
		printf(" diagonals are not zero\n");
	return 0;
}