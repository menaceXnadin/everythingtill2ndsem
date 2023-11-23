/*Write a program using array of structure to store the
 data for 10 employees with
 fields( Essn, f_name, l_name, address, mobileno) ,
  input the data for n employeess and display the record
  in appropriate format.*/
#include <stdio.h>
struct employee
{
    char f_name[20];
    char l_name[20];
    char address[20];
    unsigned long long int mobileno;
};
int main()
{
    int num, i;
    printf("Enter no. of Employees : ");
    scanf("%d", &num);
    struct employee e[num];
    for (i = 0; i < num; i++)
    {
        printf("\t---Enter The Details for employee %d---\n", i + 1);
        printf("\tEnter the First Name : ");
        scanf(" %[^\n]s", e[i].f_name);
        printf("\tEnter the Last Name : ");
        scanf(" %[^\n]s", e[i].l_name);
        printf("\tEnter the Address : ");
        scanf(" %[^\n]s", e[i].address);
        printf("\tEnter the Mobile Number : ");
        scanf("%llu", &e[i].mobileno);
    }
    for (i = 0; i < num; i++)
    {
        printf("\n\t---Displaying The Records of employee %d---\n", i + 1);
        {
            printf("\t - First Name : %s\n\t - Last Name : %s\n \t - Address = %s\n \t - Mobile Number : %llu", e[i].f_name, e[i].l_name, e[i].address, e[i].mobileno);
        }
    }
    return 0;
}
