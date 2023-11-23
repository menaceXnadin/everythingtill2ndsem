#include <stdio.h>
#define MAX(a, b)                   \
    if (a > b)                      \
        printf("%d is greater", a); \
    else                            \
        printf("%d  is greater", b);
int main()
{
    int c, d;
    printf("Enter Two integers :\n");
    scanf("%d %d", &c, &d);
    MAX(c, d);
    return 0;
}
