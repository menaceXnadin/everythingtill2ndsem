// storing a character
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *fp = NULL, *fptr2 = NULL, *fptr1 = NULL;
	int i, length = 0;
	char c = 'a';
	char htr[50], str[60];
	printf("Enter text to store in nadin.txt : \n");
	gets(str);

	printf("Enter text to store in hello.txt : \n");
gets(htr);

	length = strlen(str);
	// writing a file in c

	fptr1 = fopen("jpt.txt", "w");
	if (fptr1 == NULL)
	{
		printf("--ERROR OPENING FILE---");
		exit(1);
	}
	for (i = 0; i != length; i++)
	{
		fputc(str[i], fptr1);
	}
	fclose(fptr1);
	// appending
	fp = fopen("nadin.txt", "a");
	if (fp == NULL)
	{
		printf("--ERROR OPENING FILE---");
		exit(1);
	}
	fputc(c, fp);	// STORING CHARACTER IN FILE
	fputs(str, fp); // STORING STRING IN FILE
	// appending
	fptr2 = fopen("HELLO.txt", "a");
	if (fptr2 == NULL)
	{
		printf("--ERROR OPENING FILE---");
		exit(1);
	}
	fprintf(fptr2, "%s", htr);
	fclose(fptr2);
	printf("---SUCCESSFULLY<>DONE---");
	return 0;
}
