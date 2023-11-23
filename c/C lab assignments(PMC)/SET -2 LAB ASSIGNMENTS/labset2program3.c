#include <stdio.h>
int main()
{
	// sum of first 100 natural numbers i.e is 1 to 100
	int sum = 0, i;
	for (i = 1; i <= 100; i++)
	{
		sum += i;
	}
	printf("the sum of 100 natural number is %d", sum);
	return 0;
}
