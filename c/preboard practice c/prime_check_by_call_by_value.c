// program to check prime number or not using call by value;
#include <stdio.h>
int prime(int);
int main()
{
	int n;
	printf("enter number : ");
	scanf("%d", &n);

	prime(n);
	return 0;
}
int prime(int x)
{
	int i, count = 0;
	for (i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			count++;
		}
	}
	if (count == 2)
	{
		printf("%d is prime", x);
	}
	else
	{
		printf("%d is not prime", x);
	}
	return 0;
}
