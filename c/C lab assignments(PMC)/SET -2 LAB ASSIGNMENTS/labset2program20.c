/*  Write a program that illustrates the similarity
 between array and pointer  */
#include <stdio.h>
int main()
{
    int  f[5] = {4, 54, 35, 32, 3};
    printf("first element of array : %d\n", f[0]);
    printf("first element of array using pointer : %d\n", *f);
    printf("base address of array : %p\n", f);
    printf("base address of array using pointer : %p\n",f);
    printf("second element of Array : %d\n", f[1]);
    printf("second element of Array using pointer : %d\n", *(f + 1));
    return 0;
}
