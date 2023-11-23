// counting of string
#include <stdio.h>
int main()
{
	int i, count = 0;
	char d[20];
	printf("enter string : ");
	scanf("%[^\n]s", d);
	// gets(d);
	//  for counting string;
	for (i = 0; d[i] != '\0'; i++)
	{
		count++;
	}
	printf(" The number of character in string is %d", count);

	return 0;
}
