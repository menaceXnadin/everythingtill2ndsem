//+ve even +
#include <stdio.h>
int main()
{
	int n;
	printf("enter any integer : \n");
	scanf("%d", &n);
	if (n < 0 && n % 2 == 0)
	{
		printf("'%d' is -ve even", n);
	}
	else if (n < 0 && n % 2 != 0)
	{
		printf("'%d' is -ve odd", n);
	}
	else if (n > 0 && n % 2 == 0)
	{
		printf("'%d' is +ve even", n);
	}
	else
	{
		printf("'%d' is +ve odd", n);
	}

	return 0;
}
