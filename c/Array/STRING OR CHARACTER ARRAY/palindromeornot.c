#include <stdio.h>

int main()
{
	char string[25], reverse_string[25] = {'\0'};
	int i, length = 0, flag = 1;
	printf("Enter a string : \n");
	gets(string);
	// calculating the length of string
	for (i = 0; string[i] != '\0'; i++)
	{
		length++;
	}
	printf("the length of the string '%s' = %d\n", string, length);
	// reversing the string
	for (i = length - 1; i >= 0; i--)
	{
		reverse_string[length - i - 1] = string[i];
	}
	// checking the pallindrome
	for (i = 0; i < length; i++)
	{

		if (reverse_string[i] != string[i])
		{
			flag = 0;
			break;
		}
		else
			continue;
	}

	if (flag == 1)
		printf("%s == %s \nso, it is a palindrome \n", string, reverse_string);
	else
		printf("%s != %s \nso, it is not a palindrome\n", string, reverse_string);
	return 0;
}
