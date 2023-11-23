#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, i, a, b;
	printf("enter the limit :");
	scanf("%d", &n);
	printf("enter the values: ");

	FILE *fptr1 = NULL, *fptr2 = NULL, *fptr3 = NULL;
	fptr1 = fopen("number.txt", "w+");
	fptr2 = fopen("even.txt", "w");
	fptr3 = fopen("odd.txt", "w");
	if (fptr1 == NULL || fptr2 == NULL || fptr3 == NULL)
	{
		printf("--Error While Opening--");
		exit(0);
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		fprintf(fptr1, "%d\n", a);
	}

	fclose(fptr1);
	fclose(fptr2);
	fclose(fptr3);
	printf("---successfully Done---");
	return 0;
}
