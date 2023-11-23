// wap to input n numbers and sort them in ascending order using dma
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j, n, *ptr, temp;
	printf("enter the limit : ");
	scanf("%d", &n);
	ptr = (int *)calloc(n, sizeof(int));
	// for storing elements
	printf("enter the elements : \n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", (ptr + i));
	}
	printf("arranging in ascending order : \n");
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (*(ptr + i) > *(ptr + j))
			{
				temp = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = temp;
			}
		}
		printf("%d\n", *(ptr + i));
	}
	free(ptr);

	return 0;
}
