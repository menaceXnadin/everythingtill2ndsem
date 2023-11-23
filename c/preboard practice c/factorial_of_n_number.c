#include <stdio.h>
int main()
{
	// factorial of an integer n
	int n, fact = 1, i;
	printf("Enter the number : ");
	scanf("%d", &n);
	i = n;
	do{
		fact = fact * i;
		i--;
	}
	while(i>0);
	// for (i = n; i > 0; i--) // i=5
	// {
	// 	fact = fact * i;
	// }
	// fact = n * (n-1)*(n-2)*(n-3)*(n-4);
	printf("the factorial of %d is %d", n, fact);
	return 0;
}
