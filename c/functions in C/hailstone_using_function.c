#include <stdio.h>
#include <stdlib.h>
// hailstone in function;
int hailstone(int);
int main()
{
	int n, i, c;
	printf("Enter the number : ");
	scanf("%d", &n);
	printf("%d\n", n);
	for (i = 0; i < 10; i++)
	{
		c = hailstone(n);
		printf("%d\n", c);
		n = c;
	}
	return 0;
}
int hailstone(int x)
{
	if (x % 2 == 0)
	{
		return  x / 2;
	}
	else
	{
		return  3 * x + 1;
	}
}
