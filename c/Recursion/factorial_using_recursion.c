// factorial using recursion
#include <stdio.h>
int fact(int);
int main()
{
	int n, x;
	printf("enter number : ");
	scanf("%d", &n);
	x = fact(n);
	printf("The factorial of %d is %d", n, x);
	return 0;
}
int fact(int x)
{

	if (x == 0)
	{
		return 1;
	}
	else
		return x * fact(x - 1);
}
