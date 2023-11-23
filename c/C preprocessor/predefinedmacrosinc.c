// predefined macros in c
#include <stdio.h>
int main()
{
    printf(" DATE : %s\n", __DATE__);
    printf(" TIME : %s\n", __TIME__);
    printf(" FILE : %s\n", __FILE__);
    printf(" ANSI : %d\n", __STDC__);
    printf(" LINE : %d\n", __LINE__);
    return 0;
}
