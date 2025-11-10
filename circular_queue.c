#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

struct cqueue
{
    int item[SIZE];
    int rear;
    int front;
};

int count = 0;
typedef struct cqueue qu;

void insert(qu *);
void delete(qu *);
void display(qu *);

int main()
{
    int ch;
    qu q;
    q.rear = SIZE - 1;
    q.front = SIZE - 1;

    printf("Menu for program:\n");
    printf("1: Insert\n2: Delete\n3: Display\n4: Exit\n");

    do
    {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert(&q);
            break;
        case 2:
            delete (&q);
            break;
        case 3:
            display(&q);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Your choice is wrong\n");
            break;
        }
    } while (ch < 5);
    return 0;
}

void insert(qu *q)
{
    int d;
    if (count == SIZE)
        printf("Queue is full\n");
    else
    {
        q->rear = (q->rear + 1) % SIZE;
        printf("Enter data to be inserted: ");
        scanf("%d", &d);
        q->item[q->rear] = d;
        count++;
    }
}

void delete(qu *q)
{
    if (count == 0)
        printf("Queue is empty\n");
    else
    {
        q->front = (q->front + 1) % SIZE;
        printf("Deleted item is: %d\n", q->item[q->front]);
        count--;
    }
}

void display(qu *q)
{
    int i;
    if (count == 0)
        printf("Queue is empty\n");
    else
    {
        printf("Items of queue are: ");
        for (i = (q->front + 1) % SIZE; i != q->rear; i = (i + 1) % SIZE)
        {
            printf("%d\t", q->item[i]);
        }
        printf("%d\t", q->item[q->rear]);
        printf("\n");
    }
}
