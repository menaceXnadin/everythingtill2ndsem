// arrays and pointers
#include <stdio.h>
int main()
{
    int a = 10, f[5] = {4, 54, 35, 32, 3};
    int *q = &a, *r = f;
    printf("Value of a : %d\n", a);
    printf("Value of a using q : %d\n", *q);
    printf("Address of a :%p\n", &a);
    printf("address of a using q : %p\n", q);
    printf("Address of q : %p\n", &q);
    printf("------ARRAY--------\n");
    printf("first elemnt in array : %d\n", f[0]);
    printf("first element of array using pointer : %d\n", *r);
    printf("base address of array : %p\n", f);
    printf("base address of array using pointer : %p\n",r);
    printf("second element of Array : %d\n", f[1]);
    printf("second element of Array using pointer : %d\n", *(f + 1));
    printf("second elemnt of Array using pointer : %d\n", *(r + 1));
    return 0;
}
