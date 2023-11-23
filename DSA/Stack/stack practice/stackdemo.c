#include<stdio.h>
#define MAXSIZE 5
int stack[MAXSIZE];
int top = -1;
int push(int data)
{
    if(top==MAXSIZE-1)
    {
        printf("Stack is Full\n");

    }
    else
    {
        stack[++top] = data;
    printf("pushed data is %d\n", stack[top]);}
}
int pop()
{
if( top == -1)
        printf("stack is empty\n");
        else
        printf("removed element is %d\n", stack[top--]);
}
int peek()
{
    if(top == -1 )
    {
        printf("Stack is empty\n");
    }
    else
        printf("top of the stack is %d\n" ,stack[top]);
}


int main()
{
    push(1);
    push(4);
    push(5);
    push(13);
    pop();
    push(23);
    
    // pop();
    peek();
    
    return 0;
}