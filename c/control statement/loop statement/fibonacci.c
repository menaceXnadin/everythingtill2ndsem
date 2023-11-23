// fibonacci normal
#include <stdio.h>
int main()
{
	int a = 0, b = 1, c, n, i;
	printf("enter the nth term: ");
	scanf("%d", &n);
	printf("%d\n", a);
	printf("%d\n", b);
	for (i = 1; i <= (n - 2); i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d\n", c);
	}

	return 0;
}
