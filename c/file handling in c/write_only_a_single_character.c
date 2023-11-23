// file handling practice in C to store a character given from the user

#include <stdio.h>
#include <stdlib.h>
void main()
{
	// storing a character
	char ch;
	printf("Enter the character you want to write into file : ");
	scanf("%c", &ch); // Note : you can store only a single character
	FILE *fp = NULL;
	fp = fopen("abc.txt", "w");
	if (fp == NULL)

	{
		printf("error");
		exit(1);
	}
	fputc(ch, fp);
	printf("---Successfully<>Done---");
	fclose(fp);
}
