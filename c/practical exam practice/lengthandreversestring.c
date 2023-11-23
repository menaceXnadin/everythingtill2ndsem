#include <stdio.h>
int main()
{
    int length = 0, i, j,flag=1;
    char rev[20] = {'\0'}, str[20] = {'\0'};
    printf("enter string : ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    for (i = 0; i < length; i++)
    {
        rev[length - i - 1] = str[i];
    }
    for(i=0;i<length;i++)
    {
        if(rev[i]!=str[i])
        {
        flag = 0;
        break;
        }
        else
        continue;
    }
    if (flag=1)
    {
        printf(" pallindrome\n");

    }
    else{
        printf("not pallindrome\n");
    }
    printf("length : %d\n", length);
    printf("rev = %s", rev);
    return 0;
}