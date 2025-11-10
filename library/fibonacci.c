#include <stdio.h>
int fibonacci(int n);
int main()
{
    int a = 0, b = 1, c, n;
    printf("Enter the no. of terms of fibonacci series\t");
    scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     if (i == 0 || i == 1)
    //         printf("%d\t", i);
    //     else
    //     {
    //         c = a + b;
    //         a = b;
    //         b = c;
    //         printf("%d\t", c);
    //     }
    // }
    for (int i = 0; i < n; i++)
        printf("%d\t", fibonacci(i));
    return 0;
}
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}