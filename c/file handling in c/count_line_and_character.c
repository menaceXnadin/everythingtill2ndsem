#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	FILE *fptr = NULL;
	int line = 1, count = 0;
	char ch;

	fptr = fopen("read.txt", "r");
	if (fptr == NULL)
	{
		printf("---NO SUCH FILE---");
		exit(1);
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
	printf("the no of lines is %d\n", line);
	printf("the no of characters is %d\n", count);

	return 0;
}
