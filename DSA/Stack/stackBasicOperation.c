#include <stdio.h>
#define MAXSIZE 10
int stack[MAXSIZE];
int top = -1;
int isempty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}
int isfull()
{
	if (top == MAXSIZE - 1)
		return 1;
	else
		return 0;
}
void peek()
{
	if (isempty())
		printf("Stack is empty\n");
	else
		printf("Top element is %d\n", stack[top]);
}
void push(int data)
{
	if (isfull())
		printf("Stack is full\n");
	else

		stack[++top] = data;
}
void pop()
{
	if (isempty())
		printf("Stack is empty\n");
	else
		printf("Removed element is %d\n", stack[top--]);
}
int main()
{
	push(1);
	push(12);
	push(15);
	peek();
	pop();
	pop();
	peek();
}
