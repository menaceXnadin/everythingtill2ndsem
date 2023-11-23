// smallest element in an array
#include <stdio.h>
int main()
{
	int min, i, n;
	int arr[13];
	printf("enter the no of elements : ");
	scanf("%d", &n); // 12 13 2 4 5
	for (i = 0; i < n; i++)
	{
		printf("enter the elemnts in array :  ");
		scanf("%d", &arr[i]);
	}
	min = arr[0];
	for (i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("the samllest elements is %d", min);
	return 0;
}
