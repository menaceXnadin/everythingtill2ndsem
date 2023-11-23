/*Write a program to read from a text file and 
count the number of lines and characters in that file*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	FILE *fptr = NULL;
	int line = 1, count = 0;
	char ch;

	fptr = fopen("program24.txt", "r");
	if (fptr == NULL)
	{
		printf("NO SUCH FILE");
		exit(0);
	}
	while ((ch = fgetc(fptr)) != EOF)
	{
		if (ch == '\n')
		{
			line++;
		}
		if (!isspace(ch))
			count++;
	}
	fclose(fptr);
	printf("The no. of lines is %d\n", line);
	printf("The no. of characters is %d\n", count);

	return 0;
}
