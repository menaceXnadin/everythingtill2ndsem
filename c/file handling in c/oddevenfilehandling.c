#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fptr = NULL, *fpo = NULL, *fpe = NULL;
	int n;
	fptr = fopen("integer.txt", "r");
	fpo = fopen("odd.txt", "w");
	fpe = fopen("even.txt", "w");
	if (fptr == NULL || fpo == NULL || fpe == NULL)
	{
		printf("---ERROR WHILE OPENING---");
		exit(1);
	}
	while (!feof(fptr))
	{
		fscanf(fptr, "%d", &n);
		if (n % 2 == 0)
		{
			fprintf(fpe, "%d\t", n);
		}
		else if (n % 2 != 0)
		{
			fprintf(fpo, "%d\t", n);
		}
	}
	fclose(fptr);
	fclose(fpe);
	fclose(fpo);
	printf("---SUCCESSFULLY<>COMPLETED");
	return 0;
}
