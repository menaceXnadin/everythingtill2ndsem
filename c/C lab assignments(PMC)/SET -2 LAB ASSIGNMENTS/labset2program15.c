/*write a program to find number a times vowel 'e'
appears in a given string*/
#include <stdio.h>
int main()
{
    int i, count = 0;
    char str[26] = {'\0'};
    printf("Enter string : ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'e' || str[i] == 'E' )
        {
            count++;
        }
    }
    printf("The number of vowel 'e' in '%s' is %d", str, count);
    return 0;
}