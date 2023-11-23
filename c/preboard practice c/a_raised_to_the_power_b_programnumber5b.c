#include <stdio.h>
int main()
{
	
	int a, result = 1, i;
	unsigned int b;
	printf("enter the number : ");
	scanf("%d", &a);
	printf("enter the power : ");
	scanf("%lu", &b);
	for (i = 1; i <= b; i++)
	{
		result = result * a;
	}
	printf("the %d raised to the power %d is %d", a, b, result);

	return 0;
}
