// sum of n numbers
#include <stdio.h>
int sumn(int);
int main()
{
	int a, n;
	printf("enter first n natural numbers : \n");
	scanf("%d", &n);
	a = sumn(n);
	printf("\nthe sum of first %d natural numbers after calling the funtion is  %d ", n, a);
	return 0;
}
int sumn(int x)
{
	int temp = x;
	int i, b = 0;
	for (i = 1; i <= temp; i++)
	{
		b = b + i;
	}

	return b;
}
