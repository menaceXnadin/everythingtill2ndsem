#include <stdio.h>
#include <stdlib.h>
int main()
{
	char filename[20];
	char c;
	printf("enter the filename : ");
	gets(filename);
	FILE *fptr = NULL;
	fptr = fopen(filename, "r");
	if (fptr == NULL)
	{
		printf("error");
		exit(1);
	}
	// c=fgetc(fptr);
	while (!feof(fptr))
	{
		c = fgetc(fptr);
		printf("%c", c);
	}

	return 0;
}
