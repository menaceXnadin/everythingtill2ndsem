#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
	FILE *fptr1 = NULL, *fptr2 = NULL;
	fptr1 = fopen("readuppercase.txt", "r");
	fptr2 = fopen("writelowercase.txt", "w");
	if (fptr1 == NULL || fptr2 == NULL)
	{
		printf("--ERROR--");
		exit(0);
	}
	while ((ch = fgetc(fptr1)) != EOF)
	{
		if (ch >= 65 && ch <= 90)
		{
			ch = ch + 32;
		}
		fputc(ch, fptr2);
	}
	fclose(fptr1);
	fclose(fptr2);
	printf("--Done Successfully--");
	return 0;
}
