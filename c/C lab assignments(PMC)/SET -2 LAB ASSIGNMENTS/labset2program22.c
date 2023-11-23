/*Write a program defining a union to store the data
for a student with fields
( rollno, f_name, l_name, address, mobileno).
Illustrate the property of Union by accessing
only one data member at a time*/
#include <stdio.h>
union student
{
    int rollno;
    char f_name[20];
    char l_name[20];
    char address[20];
    unsigned long long int mobileno;
};
int main()
{
    union student s1;
    printf("\t---Enter The Details of student---\n");
    printf("\tEnter the Roll Number : ");
    scanf(" %d", s1.rollno);
    printf("\tEnter the First Name : ");
    scanf(" %[^\n]s", s1.f_name);
    printf("\tEnter the Last Name : ");
    scanf(" %[^\n]s", s1.l_name);
    printf("\tEnter the Address : ");
    scanf(" %[^\n]s", s1.address);
    printf("\tEnter the Mobile Number : ");
    scanf("%llu", &s1.mobileno);
    printf("\n\t---Displaying The Records of student---\n");
    printf("\t - Roll Number : %d\n \t - First Name : %s\n\t - Last Name : %s\n \t - Address : %s\n \t - Mobile Number : %llu", s1.rollno, s1.f_name, s1.l_name, s1.address, s1.mobileno);
    return 0;
}