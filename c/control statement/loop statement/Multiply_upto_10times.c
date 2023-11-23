#include <stdio.h>
int main()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		int n, mul, j;
		printf("which no multiply table : ");
		scanf("%d", &n);
		for (j = 1; j <= 10; j++)
		{
			mul = n * j;
			printf("%d * %d = %d\n", n, j, mul);
		}
	}

	return 0;
}
