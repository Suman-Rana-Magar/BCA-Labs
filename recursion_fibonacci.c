#include <stdio.h>
int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}
int main()
{
    int a;
    printf("Enter a number to get fibonacci number\n");
    scanf("%d", &a);
    printf("The fibonacci number are\n");
    for (int x = 0; x < a; x++)
    {
        printf(" %d\t", fibonacci(x));
    }
    printf("\n");
    return 0;
}