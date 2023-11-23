#include <stdio.h>
int main()
{
	int i, j = 0;
	i = 1;
	while (i <= 10)
	{
		j = j + 2;
		printf("%d\n", j);
		i++;
	}

	return 0;
}
