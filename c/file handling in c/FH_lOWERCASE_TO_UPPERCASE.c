// converting a lower case text file to uppercase
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
	FILE *fptr1 = NULL, *fptr2 = NULL;
	fptr1 = fopen("LC.txt", "r");
	fptr2 = fopen("UC.txt", "w");
	if ((fptr1 == NULL) || (fptr2 == NULL))
	{
		printf("---ERROR---");
		exit(0);
	}

	while ((ch = fgetc(fptr1)) != EOF)
	{

		if (ch >= 'a' && ch <= 'z')
		{
			ch = ch - 32;
		}
		fputc(ch, fptr2);
	}
	fclose(fptr1);
	fclose(fptr2);
	printf("---successfully<>done---");
	return 0;
}
