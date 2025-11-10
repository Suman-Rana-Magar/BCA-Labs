#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int a;
    printf("enter a number to get factorial\n");
    scanf("%d", &a);
    printf("The factorial of given number (i.e. %d) is %d", a, factorial(a));
    printf("\n");
    return 0;
}