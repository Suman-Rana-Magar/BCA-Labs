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
void enqueue(qu *);
void dequeue(qu *);
void display(qu *);
int main()
{
    int ch;
    qu *q = malloc(sizeof(qu));
    q->rear = -1;
    q->front = 0;
    do
    {
        printf("\nMenu for program:\n1: Enqueue\n2: Dequeue\n3: Display\n4: Exit\n\nEnter your choice:\t");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue(q);
            break;
        case 2:
            dequeue(q);
            break;
        case 3:
            display(q);
            break;
        case 4:
            free(q);
            exit(0);
            break;
        default:
            printf("Your choice is wrong !!!\n");
        }
    } while (ch < 5);
    return 0;
}
void enqueue(qu *q)
{
    int d;
    printf("Enter data to be insertd:\t");
    scanf("%d", &d);
    if (q->rear == SIZE - 1)
        printf("Queue is full\n");
    else
    {
        q->rear++;
        q->item[q->rear] = d;
    }
}
void dequeue(qu *q)
{
    int d;
    if (q->rear < q->front)
        printf("Queue is empty\n");
    else
    {
        d = q->item[q->front];
        q->front++;
        printf("Deleted item is: %d\n", d);
    }
}
void display(qu *q)
{
    int i;
    if (q->rear < q->front)
        printf("Queue is empty\n");
    else
    {
        for (i = q->front; i <= q->rear; i++)
            printf("%d\t", q->item[i]);
        printf("\n");
    }
}