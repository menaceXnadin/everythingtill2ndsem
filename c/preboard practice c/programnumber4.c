#include <stdio.h>
int main()
{
	// display the multiplication table of 1 to n
	int n, a = 1, i;
	printf("Enter the  limit : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int c = 1;
		printf("-----the multiplication table of %d----\n", a);
		do
		{
			printf("%d * %d = %d\n", a, c, a * c);
			c++;
		} while (c <= 10);
		a++;
	}
	return 0;
}
