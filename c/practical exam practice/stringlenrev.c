#include<stdio.h>
#include<string.h>
int main ()
{
    char str[20],org[20],rev[20];
    int length;
    printf("Enter string : ");
    gets(str);
    strcpy(org,str);
    length = strlen(str);
    strrev(str);
    printf("length = %d and rev = %s",length,str);
    if(strcmp(org,str)==0)
    {
        printf("\npallindrome");
    }
    else{
        printf("\nnot pallindrome");
    }
    return 0;
}