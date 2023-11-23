// pointer structure
#include <stdio.h>
struct student
{
	int rollno;
	char name[20];
	float marks;
};
int main()
{
	struct student s = {40, "nadin", 29.5};
	struct student *ptr = &s;
	// normal method
	printf("roll no = %d\n name = %s\n marks = %.1f\n", s.rollno, s.name, s.marks);
	// two ways of using pointer with structure
	printf("roll no = %d\n name = %s\n marks = %.1f\n", ptr->rollno, s.name, s.marks);
	printf("roll no = %d\n name = %s\n marks = %.1f\n", (*ptr).rollno, (*ptr).name, (*ptr).marks);

	return 0;
}
