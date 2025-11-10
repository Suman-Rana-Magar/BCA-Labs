#include <stdio.h>
#define MAX 10
struct stack
{
    int items[MAX];
    int top;
};
typedef struct stack st;
void push(st *s, int);
void pop(st *s);
void display(st *s);
int main()
{
    int element, choice;
    st *s, p;
    s = &p;
    s->top = -1;
    int flag = 1;
    do
    {
        printf("\n\nWhat you want to do?\n\t1: Push the elements\n\t2: To display the elements\n\t3: Pop the elements\n\t4: Exit\n\nEnter your choice:\t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number:");
            scanf("%d", &element);
            push(s, element);
            break;
        case 2:
            display(s);
            break;
        case 3:
            pop(s);
            break;
        case 4:
            flag = 0;
            break;
        default:
            printf("Invalid Choice\n\n");
        }
    } while (flag);
    return 0;
}

void push(st *s, int element)
{
    if (s->top == MAX - 1)
        printf("The stack is overflow: Stack Full!!!\n\n");
    else
        s->items[++(s->top)] = element;
}

void display(st *s)
{
    int i;
    if (s->top == -1)
        printf("The sack does nto contain any elements\n\n");
    else
    {
        printf("The elements in stack :\n");
        for (i = s->top; i >= 0; i--)
            printf("%d\n", s->items[i]);
    }
}

void pop(st *s)
{
    if (s->top == -1)
        printf("Stack Underflow: Empty Stack!!!\n\n");
    else
        printf("The deleted item is %d", s->items[s->top--]);
}