// largest element in an array
#include <stdio.h>
int main()
{
	int a[20], n, i, j, largest;
	printf("enter n numbers : ");
	scanf("%d", &n);
	printf("enter the values for array : \n ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	//  assume that first element is the biggest
	largest = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] > largest)
		{
			largest = a[i];
		}
	}
	printf("\n%d is the largest", largest);
	return 0;
}
