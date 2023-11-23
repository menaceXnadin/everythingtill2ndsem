/*Write a program to prompt user to input filename and
 read the content of file and display in screen.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char filename[20];
	char c;
	printf("Enter the filename : "); // Type program23.txt
	gets(filename);
	FILE *fptr = NULL;
	fptr = fopen(filename, "r");
	if (fptr == NULL)
	{
		printf("---ERROR WHILE OPENING FILE---");
		exit(1);
	}
	while (!feof(fptr))
	{
		c = fgetc(fptr);
		printf("%c", c);
	}
	return 0;
}
