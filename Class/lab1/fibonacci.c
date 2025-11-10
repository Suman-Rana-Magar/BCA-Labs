#include <stdio.h>
int main()
{
    int a, b = 0;
    printf("Enter a number of elements of fibonacci sequence that you want\n");
    scanf("%d", &a);
    int series[a];
    for (int x = 0; x < a; x++)
    {
        if (x < 2)
        {
            series[x] = x;
        }
        else
        {
            series[x] = series[x - 2] + series[x - 1];
        }
    }
    printf("Fibonacci series is given below\n");
    for (int x = 0; x < a; x++)
    {
        printf("%d\t", series[x]);
    }
    printf("\n");
    return 0;
}