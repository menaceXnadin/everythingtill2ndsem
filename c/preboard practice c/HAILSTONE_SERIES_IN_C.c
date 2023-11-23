// hailstone series in c
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, i, limit;
	printf("enter the number : ");
	scanf(" %d", &n);
	printf("enter the nth term : ");
	scanf("%d", &limit);
	printf("the hailstone series are : \n");
	printf("%d\n", n);

	for (i = 0; i < limit; i++)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
		}
		else
		{
			n = 3 * n + 1;
		}
		printf("%d\n", n);
	}

	return 0;
}
