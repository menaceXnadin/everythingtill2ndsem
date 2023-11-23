#include <stdio.h> 
int main()
{
	int a[20];
	int temp, i, j, num;
	printf("enter num number of numbers : \n");
	scanf("%d", &num);
	printf("enter the numbers : \n");
	for (i = 0; i < num; i++)
	{
		scanf("%d", &a[i]); 
	}
	for (i = 0; i < num; i++)
	{

		// 4 2 6 8 3 9
		for (j = i + 1; j < num; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("--ASCENDING-ORDER--\n");
	for (i = 0; i < num; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
