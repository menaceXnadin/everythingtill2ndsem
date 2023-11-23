/*using string library function*/
#include <stdio.h>
#include <string.h>
int main()
{
    int length;
    char str[20] = {'\0'}, rev[20] = {'\0'};
    printf("Enter string : ");
    gets(str);
    length = strlen(str);
    printf("The length of the string is : %d\n", length);
    strcpy(rev, str);
    strrev(rev);
    printf("The reversed form of %s :  %s",str, rev);
    return 0;
}