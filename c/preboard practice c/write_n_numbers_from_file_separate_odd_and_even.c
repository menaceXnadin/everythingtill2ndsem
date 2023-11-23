// write some integers in file and then separate that into odd and even
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, i, a, b;
	printf("enter the limit :");
	scanf("%d", &n);
	FILE *fptr1 = NULL, *fptr2 = NULL, *fptr3 = NULL;
	fptr1 = fopen("number.txt", "w");
	printf("enter the values");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		fprintf(fptr1, "%d\n", a);
		
	}
	fclose(fptr1);
	fptr1 = fopen("number.txt", "r");
	fptr2 = fopen("odd.txt", "w");
	fptr3 = fopen("even.txt", "w");
	if (fptr1 == NULL || fptr2 == NULL || fptr3 == NULL)
	{
		printf("error");
		exit(0);
	}
	while ((fscanf(fptr1, "%d", &b)) != EOF)
	{
		if (b % 2 == 0)
		{
			fprintf(fptr3, "%d\t", b);
		}
		else
		{
			fprintf(fptr2, "%d\t", b);
		}
	}
	fclose(fptr1);
	fclose(fptr2);
	fclose(fptr3);
	printf("success fully completed");
	return 0;
}
