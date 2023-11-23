// create a duplicate file of original
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int c, count = 0, i;
	FILE *fptr1 = NULL, *fptr2 = NULL;
	fptr1 = fopen("num.txt", "r");
	fptr2 = fopen("prime.txt", "w");
	if (fptr1 == NULL || fptr2 == NULL)
	{
		printf("error in opening file");
		exit(1);
	}
	
	while ((fscanf(fptr1, "%d", &c)) != EOF)
	{
		
		for (i = 1; i <= c; i++)
		{
			if (c % i == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			printf("%d is prime\n", c);
			fprintf(fptr2, "%d\n", c);
		}
		count = 0;
	}
	printf("success fully done");
	fclose(fptr1);
	fclose(fptr2);
	return 0;
}
