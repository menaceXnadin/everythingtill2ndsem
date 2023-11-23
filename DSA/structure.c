#include<stdio.h>
struct nadin{
    int roll;
    char name[20];
};
int main()
{
    struct nadin s1;
    struct nadin *ptr;
    ptr = &s1;
    ptr->roll = 24;
    printf("\n%d \n" ,s1.roll);
}