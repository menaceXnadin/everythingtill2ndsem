// reading contents from file in c using file handling
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp = NULL;
	char ch;
	fp = fopen("content.txt", "r");
	if (fp == NULL)
	{
		printf("---ERROR WHILE OPENING FILE---");
		exit(1);
	}
	while (!feof(fp))
	{
		ch = fgetc(fp);
		printf("%c", ch);
	}
	/*while((ch=fgetc(fp))!=EOF) // you can use this method too!!
	{
		printf("%c",ch);
	}*/

	return 0;
}
