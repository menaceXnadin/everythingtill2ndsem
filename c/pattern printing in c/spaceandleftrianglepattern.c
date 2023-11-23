#include <stdio.h>
int main()
{

	int row, space, column;
	for (row = 1; row <= 5; row++)
	{
		// for space
		for (space = row; space < 5; space++)
		{
			printf(" ");
		}
		// for column
		for (column = 1; column <= row; column++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
