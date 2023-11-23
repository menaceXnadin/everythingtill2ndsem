// sum of first 10 even numbers
#include <stdio.h>
int main()
{
	int i, j = 0, sum = 0;
	for (i = 1; i <= 10; i++)
	{

		j = j + 2;
		sum = sum + j;
		printf("%d\n", j);
	}
	printf("sum of 1st 10 even numbers %d\n", sum);

	return 0;
}
