#include <stdio.h>
void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    printf("Before swapping a=%d\tb=%d\n", a, b);
    swap(&a, &b);
    printf("After swapping a=%d\tb=%d\n", a, b);
    return 0;
}