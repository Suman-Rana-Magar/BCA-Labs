#include <stdio.h>
void swapp(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main()
{
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d%d", &a, &b);
    // a = a + b;
    // b = a - b;
    // a = a - b;
    swapp(&a,&b);
    printf("The swapped value is a=%d\tb=%d", a, b);
    return 0;
}