#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};

typedef struct node  nodetype;
nodetype *first, *last = NULL;
void insert_at_first(int item)
{
    nodetype *newnode;
    newnode = (nodetype *)malloc(sizeof(nodetype));
    if(first == NULL)
    {
        newnode->info = item;
        newnode->next = NULL;
        first = newnode;
        last = newnode;
    }
    else{
        newnode->info = item;
        newnode->next = first;
        first = newnode;
    }

}
void insert_at_any_position(int item)
{
    nodetype *newnode,* temp;
    newnode = (nodetype *)malloc(sizeof(newnode));
    int pos,i;
    printf("Enter the position : ");
    scanf("%d", &pos);
    if(first == NULL)
    {
        newnode->next = NULL;
        newnode->info = item;
        first = last = newnode;
    }
    temp = first;
    for (i = 1; i < pos - 1;i++)
    {
        temp = temp->next;
    }
    newnode->info = item;
    newnode->next = temp->next;
    temp -> next = newnode;
}
void insert_atend(int item)
{
    nodetype *newnode;
    newnode = (nodetype *)malloc(sizeof(nodetype));
    if(first == NULL)
    {
        newnode->info = item;
        newnode->next = NULL;
        first = last = newnode;

    }
    else
    {
        newnode->info = item;
        
        last->next = newnode;
        last = newnode;
        last->next = NULL;
    }
}
void display()
{
    nodetype * ptr;
    ptr = (nodetype *)malloc(sizeof(nodetype));
    ptr = first;
  
    while(ptr!=NULL)
    {
        printf("%d\n", ptr->info);
        ptr = ptr->next;
    }

}

int main()
{
    int choice, item;
    do
    {
    printf("Enter the Operation:\n1.Insert at first\n2.Insert at any poistion\n3.Insert at end\n4.Clear\n5.Display\n5.exit\n\n");
    printf("Enter the choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter the item: ");
            scanf("%d", &item);
            insert_at_first(item);
            break;
            case 2 :
            printf("enter the item : ");
            scanf("%d", &item);
            insert_at_any_position(item);
            break;
            case 3:
            printf("Enter the Item : ");
            scanf("%d", &item);
            insert_atend(item);
            break;
            case 4 :
            system("clear");
            case 5 :
            display();
            break;
            case 6 :
            exit(1);
        default:
            printf("Invalid data");
    }
    } while (choice < 6);
}