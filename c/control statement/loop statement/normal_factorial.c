// normal factorial
#include <stdio.h>
int main()
{
	int i, n, fact = 1; // fact for factorial 
	printf("enter the number : ");
	scanf("%d", &n);

	for (i = n; i > 0; i--)
	{
		fact *= i;
	}
	printf("%d", fact);

	return 0;
}
