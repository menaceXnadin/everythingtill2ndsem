#include <stdio.h>
int sum()
{
	int a, b, sum;
	printf("enter sum \n : ");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf(" The sum of %d and %d is %d\n", a, b, sum);
}
int main()
{
	int i;
	for (i = 1; i <= 5; i++)
	{
		sum();
	}

	return 0;
}
