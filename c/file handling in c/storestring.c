// file handling practice in C
#include <stdio.h>
#include <stdlib.h>
int main()
{
	// storing a string
	FILE *fp = NULL;
	char str[10]= "Jay Nepal";
	fp = fopen("store.txt", "w");
	if (fp == NULL)
		
	{
		printf("--ERROR--");
		exit(0);
	}
	fputs(str, fp);
	fclose(fp);
	printf("--Done successfully--");
	return 0;
}
