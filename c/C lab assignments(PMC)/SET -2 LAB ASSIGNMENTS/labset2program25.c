/*Write a program to read a text file and 
copy all contents in the new file.*/
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
	while(!feof(fptr1))
	{
		c = fgetc(fptr1);
		fputc(c,fptr2);
	}
	fclose(fptr1);
	fclose(fptr2);
	printf("---SUCCESSFULLY<>COPIED---");
	return 0;
}
