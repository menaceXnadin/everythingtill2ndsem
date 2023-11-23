#include <stdio.h>
int main() 
{
	int num, org, rem, arm = 0;
	printf("enter number : ");
	scanf("%d", &num);
	org = num;
	while (num > 0)
	{
		rem = num % 10;
		arm += rem * rem * rem;
		num = num / 10;
	}

	if (arm == org)
	{
		printf("%d is armstrong", arm);
	}
	else
	{
		printf(" not armstrong");
	}
	return 0;
}
