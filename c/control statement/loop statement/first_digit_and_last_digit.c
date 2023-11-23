// first and last digit
#include <stdio.h>
int main()
{
	int i, n, first, smallest;
	printf("enter number : ");
	scanf("%d", &n);
	first = n;
	while (n >= 10)
	{
		n = n / 10;
	}
	printf(" FIRST DIGIT = %d", n);
	/*for(i=1;n>=10;i++)
	{
		n=n/10;

	}*/
	// smallest digit
	smallest = first % 10;
	printf(" LAST  DIGIT = %d", smallest);
	return 0;
}
