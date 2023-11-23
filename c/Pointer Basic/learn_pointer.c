#include <stdio.h>
int main()
{
    // use of pointer
    int a = 10, *ptr;
    ptr = &a;
    printf("ADDRESS OF POINTER : %p\n", &ptr);
    printf("ADDRESS OF 'a' : %p\n", &a);
    printf("ADDRESS OF 'a' USING POINTER : %p\n", ptr);
    printf("VALUE OF 'a' : %d\n", a);
    printf("VALUE OF 'a' USING POINTER : %d\n", *ptr);
    return 0;
}
