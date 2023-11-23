// pallindrome using libraray functon
#include <string.h>
#include <stdio.h>
int main()
{
	char str[20], temp[20];
	printf("enter string : ");
	gets(str);
	strcpy(temp, str);
	strrev(str);
	if (strcmp(temp, str) == 0)
	{
		printf("%s = %s \n it is pallindrome", temp, str);
	}
	else
	{
		printf("%s not equal to  %s \n it is not pallindrome", temp, str);
	}

	return 0;
}
