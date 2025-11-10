#include "stdio.h"
int factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}
int main()
{
    int a;
    printf("enter a number to get factorial\n");
    scanf("%d", &a);
    printf("The factorial of %d is %d\n", a, factorial(a));
    return 0;
}

// int main()
// {
//     int a, factorial = 1;
//     printf("Enter a value to get factorial\n");
//     scanf("%d", &a);
//     for (int x = a; x > 0; x--)
//         factorial *= x;
//     printf("The factorail of %d is %d \n", a, factorial);
// }