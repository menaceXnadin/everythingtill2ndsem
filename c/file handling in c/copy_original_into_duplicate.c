// create a duplicate file of original
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char c;
	FILE *fptr1 = NULL, *fptr2 = NULL;
	fptr1 = fopen("original.txt", "r");
	fptr2 = fopen("duplicate.txt", "w");
	if (fptr1 == NULL || fptr2 == NULL)
	{
		printf("--ERROR OPENING FILE");
		exit(1);
	}
	while ((c = fgetc(fptr1)) != EOF)
	{
		fputc(c, fptr2);
	}
	/*while(!feof(fptr1))
	{
		fputc(c,fptr2);
	}*/
	fclose(fptr1);
	fclose(fptr2);
	printf("---SUCCESSFULLY<>COPIED---");
	return 0;
}
