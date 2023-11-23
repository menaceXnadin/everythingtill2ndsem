#include <stdio.h>
int main()
{
	int marks[10], i, sum = 0, average;
	printf("enter marks:\n");
	for (i = 0; i < 10; i++)

	{
		printf("enter marks %d : ", i + 1);
		scanf("%d", &marks[i]);
		sum += marks[i];
	}
	printf("\nsum = %d\n", sum);
	average = sum / 10;
	printf("average Marks = %d", average);
	return 0;
}
