/*reverse and length of string using own function */
#include <stdio.h>
// void reverse(char[]);
int length(char[]);
void reverse(char[], int);
int main()
{
    int len;
    char str[20], rev[20] = {'\0'};
    printf("Enter String : ");
    gets(str);
    len = length(str);
    printf("The length of string is %d !\n", len);
    reverse(str, len);
    return 0;
}
int length(char str[])
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void reverse(char arr[], int length)
{
    int i, c = 0;
    char rev[20] = {'\0'};
    for (i = length - 1; i >= 0; i--)
    {
        rev[c] = arr[i];
        c++;
    }
    printf("%s (Reversed Form)", rev);
}