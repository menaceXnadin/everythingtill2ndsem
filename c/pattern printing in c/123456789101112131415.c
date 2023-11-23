#include <stdio.h>
int main()
{
	int i, j, c = 0, n;
	 printf("Enter no of rows you want to print : ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			c = c + 1;
			printf("%d ", c);
		}
		printf("\n");
	}
	return 0;
}
