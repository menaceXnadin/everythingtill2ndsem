// structure in c
#include <stdio.h>
struct student
{
	int rollno;
	char name[20];
	float marks;
	char address[20];
	unsigned long long int phoneno;
	char email[35];
} s1,	//= {40,"nadin",35.5,"Ramkot",9849406754,"nadintamang10@gmail.com"},
	s2; //= {50,"umang",56.5,"thankot",98544034454,"lamatamang10@gmail.com"};
int main()
{
	/*
struct student s1= {40,"nadin",35.5,"Ramkot",9849406754,"nadintamang10@gmail.com"},s2;
//s1= {40,"nadin",35.5,"Ramkot",9849406754,"nadintamang10@gmail.com"};
//s1= {40,"nadin",35.5,"Ramkot",9849406754,"nadintamang10@gmail.com"};
printf("%d\t %s\t %.1f\t %s\t %llu\t %s ",s1.rollno,s1.name,s1.marks,s1.address,s1.phoneno,s1.email);

*/
	printf("enter info for s1 \n ");

	printf("Enter ROll number :\n");
	scanf("%d", &s1.rollno);
	printf("Enter NAME :\n");
	scanf("%s", s1.name);
	printf("Enter marks:\n");
	scanf("%f", &s1.marks);
	printf("Enter ADDRESS:\n");
	scanf("%s", s1.address);
	printf("Enter PHONE NUMBER :\n");
	scanf("%llu", &s1.phoneno);
	printf("Enter EMAIL:\n");
	scanf("%s", s1.email);
printf("---DETAILS OF STUDENTS---\n");
	printf(" roll = %d\n name = %s\n marks = %.1f\n address = %s\n phone no = %llu\n email = %s \n", s1.rollno, s1.name, s1.marks, s1.address, s1.phoneno, s1.email);
	// printf("%d\t %s\t %.1f\t %s\t %llu\t %s ",s2.rollno,s2.name,s2.marks,s2.address,s2.phoneno,s2.email);

	return 0;
}
