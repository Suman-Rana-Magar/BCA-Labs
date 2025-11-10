#include <stdio.h>
int swap(int a, int b);
int main()
{
    printf("Enter the value of a and b\n");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("Before Swapping\na= %d\tb= %d\n", a, b);
    swap(a, b);
    printf("After Swapping\na= %d\tb= %d\n", a, b);
    return 0;
}

int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}