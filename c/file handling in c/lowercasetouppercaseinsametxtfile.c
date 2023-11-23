// converting a lower case text file to uppercase in same txt file
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	FILE *fptr1 = NULL, *fptr2 = NULL;
	char ch;
	fptr1 = fopen("lowercase.txt", "r");
	fptr2 = fopen("uppercase.txt", "w");
	if ((fptr1 == NULL) || (fptr2 == NULL))
	{
		printf("---ERROR WHILE OPENING FILE---");
		exit(0);
	}
	//
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
	remove("lowercase.txt");
	rename("uppercase.txt", "lowercase.txt");
	printf("---successfully<>Done---");
	return 0;
}
