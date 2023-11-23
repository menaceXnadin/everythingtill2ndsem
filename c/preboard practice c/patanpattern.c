// patan printing with ascol string
#include <stdio.h>
int main()
{
	int n, j, c = 0;
	char ascol[10] = "PATAN";
	for (n = 0; n < 5; n++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%c", ascol[j]);
		}
	printf("\n");
	}

return 0;
}
