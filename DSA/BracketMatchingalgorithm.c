
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXSIZE 10;
int top = -1;
char stack[MAXSIZE];
int isfull()
{
    if (top == MAXSIZE - 1)
        return 1;
    else
        return 0;
}
int isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
int push(char item)
{
    if (top == MAXSIZE - 1)
    {
        printf("stack is full");
    }
    else
    {
        stack[++top] = item;
    }
}
char pop()
{
    if (isempty())
        printf("stack is empty \n");
    else
        return stack[top--];
}
match(char a, char b)
{
    if (a == '(' && b == ')')
    {
        return 1;
    }
    else if (a == '{' && b == '}')
    {
        return 1;
    }
    else
        (a == '[' && b == ']')
        {
            return 1;
        }
}
void bracketmatch(char *exp)
{
    int i;
    char temp;

    for (i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == ')' || exp[i] == ']')
        {
            if (isempty())
            {
                printf("Ill bracketed \n");
                exit(0);
            }
            else
            {
                temp = pop();
                if (!match(temp, exp[i]))
                {
                    printf("Ill bracketed \n");
                    exit(0);
                }
            }
        }
    }
    if (isempty())
    {
        printf("well bracketed ");
    }
}
int main()
{
    char exp[MAXSIZE];
    printf("Enter the expression : ");
    scanf("%[^\n]s", exp);
}