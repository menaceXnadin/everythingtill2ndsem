#include <stdio.h>
#include <stdlib.h>
struct node
{

    int info;
    struct node *next;
};
void printlinkedlist(struct node * n)
{
while(n!=NULL)
{
    printf("%d\n", n->info);
    n = n->next;
}


}

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    first ->info = 2;
    second ->info = 3;
    third  ->info = 8;
    first->next = second;
    second->next = third;
    third->next = NULL;
    head = first;
    printlinkedlist(head);
}