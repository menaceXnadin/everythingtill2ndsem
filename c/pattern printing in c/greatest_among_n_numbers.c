#include <stdio.h>
int main()
{
	int a[15], n, greatest = 0, i;
	printf("Enter Limit : \n");
	scanf("%d", &n);
	printf("enter  numbers :\n");

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	// 4,5,6,8,3
	greatest = a[0];
	for (i = 0; i < n; i++)
	{

		if (a[i] > greatest)
		{
			greatest = a[i];
		}
	}

	printf("the greatest is %d", greatest);
	return 0;
}
