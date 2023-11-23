/*linear queue*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
struct queue
{
    int item[SIZE];
    int rear;
    int front;
};
typedef struct queue qu;   
void delete(qu *);
void insert(qu *);
void display(qu *);
int main()
{
    int ch;
    qu *q;
    q = (qu *)malloc(sizeof(qu));

    q->rear = -1;
    q->front = 0;
    do
    {
        printf("Menu for program:\n");
        printf("1:insert\n2:delete\n3:display\n4:exit\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert(q);
            break;
        case 2:
            delete(q);
            break;
        case 3:
            display(q);
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Your choice is wrong\n");
        }
    } while (ch < 5);
}
/*insert function*/
void insert(qu *q)
{
    int d;
    printf("Enter data to be inserted\n");
    scanf("%d", &d);
    if (q->rear == SIZE - 1)
        printf("Queue is full\n");
    else
    {
        q->rear++;
        q->item[q->rear] = d;
    }
}
void delete(qu *q) /*delete function*/
{
    int d;
    if (q->rear < q->front)
    {
        printf("Queue is empty\n");
    }
    else
    {
        d = q->item[q->front];
        q->front++;
        printf("Deleted item is: %d\n", d);
    }
}
void display(qu *q) /*display function*/
{
    int i;
    if (q->rear < q->front)
    {
        printf("Queue is empty\n");
    }
    

    else
    {
        for (i = q->front; i <= q->rear; i++)
        {
            printf("%d\t", q->item[i]);
        }
    }
}