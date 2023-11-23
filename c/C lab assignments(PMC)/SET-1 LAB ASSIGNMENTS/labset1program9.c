// write a c program to check a given integer is positive even,
// negative even,positive odd or negative odd
#include <stdio.h>
int main()
{
	int n;
	printf("enter any integer : ");
	scanf("%d", &n);
	if (n < 0 && n % 2 == 0)
	{
		printf("'%d' is -ve even!", n);
	}
	else if (n < 0 && n % 2 != 0)
	{
		printf("'%d' is -ve odd!", n);
	}
	else if (n > 0 && n % 2 == 0)
	{
		printf("'%d' is +ve even!", n);
	}
	else
	{
		printf("'%d' is +ve odd!", n);
	}
	return 0;
}`