// structure in c
#include <stdio.h>
struct student
{
    int rollno;
    char f_name[20];
    char l_name[20];
    char address[20];
    unsigned long long int phoneno;
    char email[35];
};
int main()
{
    struct student s1;
    printf("\t---Enter Details of a Student---\n ");
    printf("\tEnter ROll number : ");
    scanf(" %d", &s1.rollno);
    printf("\tEnter FIRST NAME : ");
    scanf(" %s", s1.f_name);
    printf("\tEnter LAST NAME : ");
    scanf(" %s", s1.l_name);
    printf("\tEnter ADDRESS : ");
    scanf("%s", s1.address);
    printf("\tEnter PHONE NUMBER : ");
    scanf("%llu", &s1.phoneno);
    printf("\tEnter EMAIL : ");
    scanf("%s", s1.email);
    printf("\t---DETAILS OF STUDENTS---\n");
    printf("\tRoll N0 = %d \tFirst name = %s \tLast name = %s \tAddress = %s\n \tPhone no = %llu \tEmail = %s \n", s1.rollno, s1.f_name, s1.l_name, s1.address, s1.phoneno, s1.email);
    return 0;
}
