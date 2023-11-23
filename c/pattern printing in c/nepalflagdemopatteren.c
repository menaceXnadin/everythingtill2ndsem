#include <stdio.h>
int main()
{
	int row, column, l;
	for (row = 1; row <= 5; row++)
	{
		for (column = 1; column <= row; column++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (row = 1; row <= 5; row++)
	{
		for (column = 1; column <= row; column++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (l = 1; l <= 7; l++)
	{
		printf("*\n");
	}

	return 0;
}
